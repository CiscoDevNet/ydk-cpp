
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_185.hpp"
#include "Cisco_IOS_XE_native_186.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5::Md5()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "md5"; yang_parent_name = "message-digest-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5::has_data() const
{
    if (is_presence_container) return true;
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost::AutoCost()
    :
    reference_bandwidth{YType::uint32, "reference-bandwidth"}
{

    yang_name = "auto-cost"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost::~AutoCost()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost::has_data() const
{
    if (is_presence_container) return true;
    return reference_bandwidth.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reference_bandwidth.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reference_bandwidth.is_set || is_set(reference_bandwidth.yfilter)) leaf_name_data.push_back(reference_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth = value;
        reference_bandwidth.value_namespace = name_space;
        reference_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference-bandwidth")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog::EventLog()
    :
    one_shot{YType::empty, "one-shot"},
    pause{YType::empty, "pause"},
    size{YType::uint32, "size"}
{

    yang_name = "event-log"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog::~EventLog()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog::has_data() const
{
    if (is_presence_container) return true;
    return one_shot.is_set
	|| pause.is_set
	|| size.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(one_shot.yfilter)
	|| ydk::is_set(pause.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (one_shot.is_set || is_set(one_shot.yfilter)) leaf_name_data.push_back(one_shot.get_name_leafdata());
    if (pause.is_set || is_set(pause.yfilter)) leaf_name_data.push_back(pause.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "one-shot")
    {
        one_shot = value;
        one_shot.value_namespace = name_space;
        one_shot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pause")
    {
        pause = value;
        pause.value_namespace = name_space;
        pause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "one-shot")
    {
        one_shot.yfilter = yfilter;
    }
    if(value_path == "pause")
    {
        pause.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one-shot" || name == "pause" || name == "size")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"}
{

    yang_name = "bfd"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd::~Bfd()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return all_interfaces.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-interfaces")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId::InterfaceId()
    :
    snmp_if_index{YType::empty, "snmp-if-index"}
{

    yang_name = "interface-id"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId::~InterfaceId()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId::has_data() const
{
    if (is_presence_container) return true;
    return snmp_if_index.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmp_if_index.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp_if_index.is_set || is_set(snmp_if_index.yfilter)) leaf_name_data.push_back(snmp_if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmp-if-index")
    {
        snmp_if_index = value;
        snmp_if_index.value_namespace = name_space;
        snmp_if_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmp-if-index")
    {
        snmp_if_index.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp-if-index")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    detail{YType::empty, "detail"}
{

    yang_name = "log-adjacency-changes"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges::has_data() const
{
    if (is_presence_container) return true;
    return detail.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detail.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detail.is_set || is_set(detail.yfilter)) leaf_name_data.push_back(detail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detail")
    {
        detail = value;
        detail.value_namespace = name_space;
        detail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detail")
    {
        detail.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa::MaxLsa()
    :
    number{YType::uint32, "number"},
    threshold_value{YType::uint32, "threshold-value"},
    ignore_count{YType::uint32, "ignore-count"},
    ignore_time{YType::uint32, "ignore-time"},
    reset_time{YType::uint32, "reset-time"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "max-lsa"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa::~MaxLsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| threshold_value.is_set
	|| ignore_count.is_set
	|| ignore_time.is_set
	|| reset_time.is_set
	|| warning_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(ignore_count.yfilter)
	|| ydk::is_set(ignore_time.yfilter)
	|| ydk::is_set(reset_time.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (ignore_count.is_set || is_set(ignore_count.yfilter)) leaf_name_data.push_back(ignore_count.get_name_leafdata());
    if (ignore_time.is_set || is_set(ignore_time.yfilter)) leaf_name_data.push_back(ignore_time.get_name_leafdata());
    if (reset_time.is_set || is_set(reset_time.yfilter)) leaf_name_data.push_back(reset_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-count")
    {
        ignore_count = value;
        ignore_count.value_namespace = name_space;
        ignore_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-time")
    {
        ignore_time = value;
        ignore_time.value_namespace = name_space;
        ignore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-time")
    {
        reset_time = value;
        reset_time.value_namespace = name_space;
        reset_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "ignore-count")
    {
        ignore_count.yfilter = yfilter;
    }
    if(value_path == "ignore-time")
    {
        ignore_time.yfilter = yfilter;
    }
    if(value_path == "reset-time")
    {
        reset_time.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "threshold-value" || name == "ignore-count" || name == "ignore-time" || name == "reset-time" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::MaxMetric()
    :
    router_lsa(nullptr) // presence node
{

    yang_name = "max-metric"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::~MaxMetric()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::has_data() const
{
    if (is_presence_container) return true;
    return (router_lsa !=  nullptr && router_lsa->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::has_operation() const
{
    return is_set(yfilter)
	|| (router_lsa !=  nullptr && router_lsa->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-lsa")
    {
        if(router_lsa == nullptr)
        {
            router_lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa>();
        }
        return router_lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(router_lsa != nullptr)
    {
        children["router-lsa"] = router_lsa;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-lsa")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::RouterLsa()
    :
    include_stub{YType::empty, "include-stub"}
        ,
    external_lsa(nullptr) // presence node
    , on_startup(nullptr) // presence node
    , summary_lsa(nullptr) // presence node
{

    yang_name = "router-lsa"; yang_parent_name = "max-metric"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::~RouterLsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::has_data() const
{
    if (is_presence_container) return true;
    return include_stub.is_set
	|| (external_lsa !=  nullptr && external_lsa->has_data())
	|| (on_startup !=  nullptr && on_startup->has_data())
	|| (summary_lsa !=  nullptr && summary_lsa->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| (external_lsa !=  nullptr && external_lsa->has_operation())
	|| (on_startup !=  nullptr && on_startup->has_operation())
	|| (summary_lsa !=  nullptr && summary_lsa->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-lsa")
    {
        if(external_lsa == nullptr)
        {
            external_lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa>();
        }
        return external_lsa;
    }

    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup>();
        }
        return on_startup;
    }

    if(child_yang_name == "summary-lsa")
    {
        if(summary_lsa == nullptr)
        {
            summary_lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa>();
        }
        return summary_lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(external_lsa != nullptr)
    {
        children["external-lsa"] = external_lsa;
    }

    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    if(summary_lsa != nullptr)
    {
        children["summary-lsa"] = summary_lsa;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-lsa" || name == "on-startup" || name == "summary-lsa" || name == "include-stub")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa::ExternalLsa()
    :
    metric{YType::uint32, "metric"}
{

    yang_name = "external-lsa"; yang_parent_name = "router-lsa"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa::~ExternalLsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup::OnStartup()
    :
    time{YType::uint32, "time"},
    wait_for_bgp{YType::empty, "wait-for-bgp"}
{

    yang_name = "on-startup"; yang_parent_name = "router-lsa"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup::~OnStartup()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set
	|| wait_for_bgp.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "wait-for-bgp")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa::SummaryLsa()
    :
    metric{YType::uint32, "metric"}
{

    yang_name = "summary-lsa"; yang_parent_name = "router-lsa"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa::~SummaryLsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface::PassiveInterface()
    :
    default_{YType::empty, "default"},
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| interface.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "interface")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::Disable()
    :
    passive_interface(this, {"interface"})
{

    yang_name = "disable"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::~Disable()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<passive_interface.len(); index++)
    {
        if(passive_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::has_operation() const
{
    for (std::size_t index=0; index<passive_interface.len(); index++)
    {
        if(passive_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "passive-interface")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface>();
        c->parent = this;
        passive_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : passive_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-interface")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface::PassiveInterface()
    :
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::QueueDepth()
    :
    hello(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello>())
    , update(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update>())
{
    hello->parent = this;
    update->parent = this;

    yang_name = "queue-depth"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::~QueueDepth()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::has_data() const
{
    if (is_presence_container) return true;
    return (hello !=  nullptr && hello->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::has_operation() const
{
    return is_set(yfilter)
	|| (hello !=  nullptr && hello->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-depth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello" || name == "update")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello::Hello()
    :
    options{YType::str, "options"}
{

    yang_name = "hello"; yang_parent_name = "queue-depth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello::~Hello()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello::has_data() const
{
    if (is_presence_container) return true;
    return options.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update::Update()
    :
    options{YType::str, "options"}
{

    yang_name = "update"; yang_parent_name = "queue-depth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update::~Update()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update::has_data() const
{
    if (is_presence_container) return true;
    return options.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Timers()
    :
    lsa(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa>())
    , pacing(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing>())
    , throttle(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle>())
{
    lsa->parent = this;
    pacing->parent = this;
    throttle->parent = this;

    yang_name = "timers"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::~Timers()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (lsa !=  nullptr && lsa->has_data())
	|| (pacing !=  nullptr && pacing->has_data())
	|| (throttle !=  nullptr && throttle->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (pacing !=  nullptr && pacing->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "pacing")
    {
        if(pacing == nullptr)
        {
            pacing = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing>();
        }
        return pacing;
    }

    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle>();
        }
        return throttle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(pacing != nullptr)
    {
        children["pacing"] = pacing;
    }

    if(throttle != nullptr)
    {
        children["throttle"] = throttle;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "pacing" || name == "throttle")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa::Lsa()
    :
    arrival{YType::uint32, "arrival"}
{

    yang_name = "lsa"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa::~Lsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa::has_data() const
{
    if (is_presence_container) return true;
    return arrival.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arrival.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arrival.is_set || is_set(arrival.yfilter)) leaf_name_data.push_back(arrival.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arrival")
    {
        arrival = value;
        arrival.value_namespace = name_space;
        arrival.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arrival")
    {
        arrival.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arrival")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing::Pacing()
    :
    flood{YType::uint32, "flood"},
    lsa_group{YType::uint32, "lsa-group"},
    retransmission{YType::uint32, "retransmission"}
{

    yang_name = "pacing"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing::~Pacing()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing::has_data() const
{
    if (is_presence_container) return true;
    return flood.is_set
	|| lsa_group.is_set
	|| retransmission.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flood.yfilter)
	|| ydk::is_set(lsa_group.yfilter)
	|| ydk::is_set(retransmission.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pacing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood.is_set || is_set(flood.yfilter)) leaf_name_data.push_back(flood.get_name_leafdata());
    if (lsa_group.is_set || is_set(lsa_group.yfilter)) leaf_name_data.push_back(lsa_group.get_name_leafdata());
    if (retransmission.is_set || is_set(retransmission.yfilter)) leaf_name_data.push_back(retransmission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flood")
    {
        flood = value;
        flood.value_namespace = name_space;
        flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-group")
    {
        lsa_group = value;
        lsa_group.value_namespace = name_space;
        lsa_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission")
    {
        retransmission = value;
        retransmission.value_namespace = name_space;
        retransmission.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flood")
    {
        flood.yfilter = yfilter;
    }
    if(value_path == "lsa-group")
    {
        lsa_group.yfilter = yfilter;
    }
    if(value_path == "retransmission")
    {
        retransmission.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood" || name == "lsa-group" || name == "retransmission")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Throttle()
    :
    lsa(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa>())
    , spf(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf>())
{
    lsa->parent = this;
    spf->parent = this;

    yang_name = "throttle"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::~Throttle()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::has_data() const
{
    if (is_presence_container) return true;
    return (lsa !=  nullptr && lsa->has_data())
	|| (spf !=  nullptr && spf->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (spf !=  nullptr && spf->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "spf")
    {
        if(spf == nullptr)
        {
            spf = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf>();
        }
        return spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(spf != nullptr)
    {
        children["spf"] = spf;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "spf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::Lsa()
    :
    all(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All>())
{
    all->parent = this;

    yang_name = "lsa"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::~Lsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All::All()
    :
    delay{YType::uint32, "delay"},
    min_delay{YType::uint32, "min-delay"},
    max_delay{YType::uint32, "max-delay"}
{

    yang_name = "all"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All::~All()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| min_delay.is_set
	|| max_delay.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(min_delay.yfilter)
	|| ydk::is_set(max_delay.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (min_delay.is_set || is_set(min_delay.yfilter)) leaf_name_data.push_back(min_delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-delay")
    {
        min_delay = value;
        min_delay.value_namespace = name_space;
        min_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "min-delay")
    {
        min_delay.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "min-delay" || name == "max-delay")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf::Spf()
    :
    delay{YType::uint32, "delay"},
    min_delay{YType::uint32, "min-delay"},
    max_delay{YType::uint32, "max-delay"}
{

    yang_name = "spf"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf::~Spf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| min_delay.is_set
	|| max_delay.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(min_delay.yfilter)
	|| ydk::is_set(max_delay.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (min_delay.is_set || is_set(min_delay.yfilter)) leaf_name_data.push_back(min_delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-delay")
    {
        min_delay = value;
        min_delay.value_namespace = name_space;
        min_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "min-delay")
    {
        min_delay.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "min-delay" || name == "max-delay")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare::TrafficShare()
    :
    min{YType::empty, "min"},
    across_interfaces{YType::empty, "across-interfaces"}
{

    yang_name = "traffic-share"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| across_interfaces.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(across_interfaces.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "across-interfaces")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity::TtlSecurity()
    :
    all_interfaces{YType::empty, "all-interfaces"},
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity::has_data() const
{
    if (is_presence_container) return true;
    return all_interfaces.is_set
	|| hops.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-interfaces" || name == "hops")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::Capability()
    :
    capability_type{YType::enumeration, "capability-type"}
{

    yang_name = "capability"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::~Capability()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::has_data() const
{
    if (is_presence_container) return true;
    return capability_type.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capability_type.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_type.is_set || is_set(capability_type.yfilter)) leaf_name_data.push_back(capability_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability-type")
    {
        capability_type = value;
        capability_type.value_namespace = name_space;
        capability_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability-type")
    {
        capability_type.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability-type")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible::Compatible()
    :
    rfc1583{YType::empty, "rfc1583"},
    rfc1587{YType::empty, "rfc1587"},
    rfc5243{YType::empty, "rfc5243"}
{

    yang_name = "compatible"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible::~Compatible()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible::has_data() const
{
    if (is_presence_container) return true;
    return rfc1583.is_set
	|| rfc1587.is_set
	|| rfc5243.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rfc1583.yfilter)
	|| ydk::is_set(rfc1587.yfilter)
	|| ydk::is_set(rfc5243.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "compatible";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rfc1583.is_set || is_set(rfc1583.yfilter)) leaf_name_data.push_back(rfc1583.get_name_leafdata());
    if (rfc1587.is_set || is_set(rfc1587.yfilter)) leaf_name_data.push_back(rfc1587.get_name_leafdata());
    if (rfc5243.is_set || is_set(rfc5243.yfilter)) leaf_name_data.push_back(rfc5243.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rfc1583")
    {
        rfc1583 = value;
        rfc1583.value_namespace = name_space;
        rfc1583.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfc1587")
    {
        rfc1587 = value;
        rfc1587.value_namespace = name_space;
        rfc1587.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfc5243")
    {
        rfc5243 = value;
        rfc5243.value_namespace = name_space;
        rfc5243.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rfc1583")
    {
        rfc1583.yfilter = yfilter;
    }
    if(value_path == "rfc1587")
    {
        rfc1587.yfilter = yfilter;
    }
    if(value_path == "rfc5243")
    {
        rfc5243.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rfc1583" || name == "rfc1587" || name == "rfc5243")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return (originate !=  nullptr && originate->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(originate != nullptr)
    {
        children["originate"] = originate;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate::Originate()
    :
    always{YType::empty, "always"},
    metric{YType::uint32, "metric"},
    metric_type{YType::uint32, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "originate"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate::has_data() const
{
    if (is_presence_container) return true;
    return always.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute::DiscardRoute()
    :
    external{YType::empty, "external"},
    internal{YType::empty, "internal"},
    metric{YType::uint32, "metric"}
{

    yang_name = "discard-route"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute::~DiscardRoute()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| internal.is_set
	|| metric.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "metric")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Distance()
    :
    ospf_distance(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance>())
    , ospf(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf>())
{
    ospf_distance->parent = this;
    ospf->parent = this;

    yang_name = "distance"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::~Distance()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::has_data() const
{
    if (is_presence_container) return true;
    return (ospf_distance !=  nullptr && ospf_distance->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::has_operation() const
{
    return is_set(yfilter)
	|| (ospf_distance !=  nullptr && ospf_distance->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-distance")
    {
        if(ospf_distance == nullptr)
        {
            ospf_distance = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance>();
        }
        return ospf_distance;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ospf_distance != nullptr)
    {
        children["ospf-distance"] = ospf_distance;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-distance" || name == "ospf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance::OspfDistance()
    :
    distance{YType::uint32, "distance"},
    ip{YType::str, "ip"},
    wildcard{YType::str, "wildcard"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "ospf-distance"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance::~OspfDistance()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance::has_data() const
{
    if (is_presence_container) return true;
    return distance.is_set
	|| ip.is_set
	|| wildcard.is_set
	|| acl_name.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(wildcard.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.yfilter)) leaf_name_data.push_back(wildcard.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
        wildcard.value_namespace = name_space;
        wildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "wildcard")
    {
        wildcard.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "ip" || name == "wildcard" || name == "acl-name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf::Ospf()
    :
    external{YType::uint32, "external"},
    inter_area{YType::uint32, "inter-area"},
    intra_area{YType::uint32, "intra-area"}
{

    yang_name = "ospf"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf::~Ospf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| inter_area.is_set
	|| intra_area.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(inter_area.yfilter)
	|| ydk::is_set(intra_area.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (inter_area.is_set || is_set(inter_area.yfilter)) leaf_name_data.push_back(inter_area.get_name_leafdata());
    if (intra_area.is_set || is_set(intra_area.yfilter)) leaf_name_data.push_back(intra_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area")
    {
        inter_area = value;
        inter_area.value_namespace = name_space;
        inter_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-area")
    {
        intra_area = value;
        intra_area.value_namespace = name_space;
        intra_area.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "inter-area")
    {
        inter_area.yfilter = yfilter;
    }
    if(value_path == "intra-area")
    {
        intra_area.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "inter-area" || name == "intra-area")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Redistribute()
    :
    application(this, {"name"})
    , bgp(this, {"as_number"})
    , connected(nullptr) // presence node
    , eigrp(this, {"as_number"})
    , isis(nullptr) // presence node
    , iso_igrp(nullptr) // presence node
    , lisp(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp>())
    , mobile(nullptr) // presence node
    , odr(nullptr) // presence node
    , ospf(this, {"id"})
    , ospfv3(this, {"id"})
    , rip(this, {"id"})
    , static_(nullptr) // presence node
    , maximum_prefix(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix>())
    , vrf(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_>())
{
    lisp->parent = this;
    maximum_prefix->parent = this;
    vrf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::~Redistribute()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application>();
        c->parent = this;
        application.append(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp>();
        c->parent = this;
        bgp.append(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.append(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf>();
        c->parent = this;
        ospf.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_>();
        c->parent = this;
        ospfv3.append(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip>();
        c->parent = this;
        rip.append(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static>();
        }
        return static_;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : application.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : bgp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    count = 0;
    for (auto c : eigrp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    count = 0;
    for (auto c : ospf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : rip.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static" || name == "maximum-prefix" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::Application()
    :
    name{YType::str, "name"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::~Application()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(as_number, "as-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(as_number, "as-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
        ,
    isis_area(this, {"name"})
    , redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea>();
        c->parent = this;
        isis_area.append(c);
        return c;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : isis_area.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "redist-options" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
        ,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer>())
    , iso_igrp_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;
    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        children["iso-igrp-container"] = iso_igrp_container;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "iso-igrp-container" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    if (is_presence_container) return true;
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"}
{

    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Ospf()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
        ,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Match()
    :
    internal(nullptr) // presence node
    , external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::has_data() const
{
    if (is_presence_container) return true;
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::has_data() const
{
    if (is_presence_container) return true;
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Ospfv3_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
        ,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::~Ospfv3_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Match()
    :
    internal(nullptr) // presence node
    , external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::has_data() const
{
    if (is_presence_container) return true;
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::has_data() const
{
    if (is_presence_container) return true;
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::Rip()
    :
    id{YType::str, "id"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::Static()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::~Static()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"}
        ,
    threshold_warning_only_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer>())
{
    threshold_warning_only_container->parent = this;

    yang_name = "maximum-prefix"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (threshold_warning_only_container !=  nullptr && threshold_warning_only_container->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (threshold_warning_only_container !=  nullptr && threshold_warning_only_container->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-warning-only-container")
    {
        if(threshold_warning_only_container == nullptr)
        {
            threshold_warning_only_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer>();
        }
        return threshold_warning_only_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(threshold_warning_only_container != nullptr)
    {
        children["threshold-warning-only-container"] = threshold_warning_only_container;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-warning-only-container" || name == "number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::ThresholdWarningOnlyContainer()
    :
    threshold{YType::uint32, "threshold"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "threshold-warning-only-container"; yang_parent_name = "maximum-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::~ThresholdWarningOnlyContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| warning_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-warning-only-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Vrf_()
    :
    non_global_vrf(this, {"name"})
    , global(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global>())
{
    global->parent = this;

    yang_name = "vrf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::~Vrf_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<non_global_vrf.len(); index++)
    {
        if(non_global_vrf[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::has_operation() const
{
    for (std::size_t index=0; index<non_global_vrf.len(); index++)
    {
        if(non_global_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-global-vrf")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf>();
        c->parent = this;
        non_global_vrf.append(c);
        return c;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : non_global_vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-global-vrf" || name == "global")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::NonGlobalVrf()
    :
    name{YType::str, "name"}
        ,
    application(this, {"name"})
    , bgp(this, {"as_number"})
    , connected(nullptr) // presence node
    , eigrp(this, {"as_number"})
    , isis(nullptr) // presence node
    , iso_igrp(nullptr) // presence node
    , lisp(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp>())
    , mobile(nullptr) // presence node
    , odr(nullptr) // presence node
    , ospf(this, {"id"})
    , ospfv3(this, {"id"})
    , rip(this, {"id"})
    , static_(nullptr) // presence node
{
    lisp->parent = this;

    yang_name = "non-global-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::~NonGlobalVrf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return name.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-global-vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application>();
        c->parent = this;
        application.append(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp>();
        c->parent = this;
        bgp.append(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp>();
        c->parent = this;
        eigrp.append(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf>();
        c->parent = this;
        ospf.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_>();
        c->parent = this;
        ospfv3.append(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip>();
        c->parent = this;
        rip.append(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : application.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : bgp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    count = 0;
    for (auto c : eigrp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    count = 0;
    for (auto c : ospf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : rip.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::Application()
    :
    name{YType::str, "name"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::~Application()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::~Bgp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(as_number, "as-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::~Connected()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(as_number, "as-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
        ,
    isis_area(this, {"name"})
    , redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::~Isis()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea>();
        c->parent = this;
        isis_area.append(c);
        return c;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : isis_area.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "redist-options" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
        ,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer>())
    , iso_igrp_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;
    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        children["iso-igrp-container"] = iso_igrp_container;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "iso-igrp-container" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    if (is_presence_container) return true;
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"}
{

    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::~Lisp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::~Mobile()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::~Odr()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Ospf()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
        ,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::~Ospf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Match()
    :
    internal(nullptr) // presence node
    , external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::has_data() const
{
    if (is_presence_container) return true;
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::has_data() const
{
    if (is_presence_container) return true;
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Ospfv3_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
        ,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::~Ospfv3_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Match()
    :
    internal(nullptr) // presence node
    , external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::has_data() const
{
    if (is_presence_container) return true;
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::has_data() const
{
    if (is_presence_container) return true;
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::Rip()
    :
    id{YType::str, "id"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::~Rip()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::Static()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::~Static()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Global()
    :
    application(this, {"name"})
    , bgp(this, {"as_number"})
    , connected(nullptr) // presence node
    , eigrp(this, {"as_number"})
    , isis(nullptr) // presence node
    , iso_igrp(nullptr) // presence node
    , lisp(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp>())
    , mobile(nullptr) // presence node
    , odr(nullptr) // presence node
    , ospf(this, {"id"})
    , ospfv3(this, {"id"})
    , rip(this, {"id"})
    , static_(nullptr) // presence node
{
    lisp->parent = this;

    yang_name = "global"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::~Global()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.len(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application>();
        c->parent = this;
        application.append(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp>();
        c->parent = this;
        bgp.append(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp>();
        c->parent = this;
        eigrp.append(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf>();
        c->parent = this;
        ospf.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_>();
        c->parent = this;
        ospfv3.append(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip>();
        c->parent = this;
        rip.append(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : application.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : bgp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    count = 0;
    for (auto c : eigrp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    count = 0;
    for (auto c : ospf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : rip.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::Application()
    :
    name{YType::str, "name"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::~Application()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::~Bgp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(as_number, "as-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::~Connected()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(as_number, "as-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
        ,
    isis_area(this, {"name"})
    , redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::~Isis()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea>();
        c->parent = this;
        isis_area.append(c);
        return c;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : isis_area.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "redist-options" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
        ,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer>())
    , iso_igrp_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;
    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        children["iso-igrp-container"] = iso_igrp_container;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "iso-igrp-container" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    if (is_presence_container) return true;
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"}
{

    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::~Lisp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::~Mobile()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::~Odr()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Ospf()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
        ,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::~Ospf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Match()
    :
    internal(nullptr) // presence node
    , external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::has_data() const
{
    if (is_presence_container) return true;
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::has_data() const
{
    if (is_presence_container) return true;
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Ospfv3_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
        ,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::~Ospfv3_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Match()
    :
    internal(nullptr) // presence node
    , external(nullptr) // presence node
    , nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::has_data() const
{
    if (is_presence_container) return true;
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::has_data() const
{
    if (is_presence_container) return true;
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return nssa_external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nssa-external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "subnets" || name == "route-map" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::Rip()
    :
    id{YType::str, "id"}
        ,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::~Rip()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::Static()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::~Static()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::has_data() const
{
    if (is_presence_container) return true;
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    tag{YType::uint32, "tag"},
    subnets{YType::empty, "subnets"},
    route_map{YType::str, "route-map"},
    nssa_only{YType::empty, "nssa-only"}
{

    yang_name = "redist-options"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| metric_type.is_set
	|| tag.is_set
	|| subnets.is_set
	|| route_map.is_set
	|| nssa_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(nssa_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "tag" || name == "subnets" || name == "route-map" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::Authentication()
    :
    mode{YType::enumeration, "mode"}
{

    yang_name = "authentication"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::~Authentication()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::GracefulRestart()
    :
    disable{YType::empty, "disable"},
    restart_interval{YType::uint16, "restart-interval"}
        ,
    helper(nullptr) // presence node
{

    yang_name = "graceful-restart"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| restart_interval.is_set
	|| (helper !=  nullptr && helper->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(restart_interval.yfilter)
	|| (helper !=  nullptr && helper->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (restart_interval.is_set || is_set(restart_interval.yfilter)) leaf_name_data.push_back(restart_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper>();
        }
        return helper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(helper != nullptr)
    {
        children["helper"] = helper;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-interval")
    {
        restart_interval = value;
        restart_interval.value_namespace = name_space;
        restart_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "restart-interval")
    {
        restart_interval.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper" || name == "disable" || name == "restart-interval")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::Helper()
    :
    disable{YType::empty, "disable"},
    strict_lsa_checking{YType::empty, "strict-lsa-checking"}
{

    yang_name = "helper"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::~Helper()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| strict_lsa_checking.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(strict_lsa_checking.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (strict_lsa_checking.is_set || is_set(strict_lsa_checking.yfilter)) leaf_name_data.push_back(strict_lsa_checking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking = value;
        strict_lsa_checking.value_namespace = name_space;
        strict_lsa_checking.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "strict-lsa-checking")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Manet()
    :
    hello{YType::enumeration, "hello"},
    willingness{YType::uint8, "willingness"}
        ,
    cache(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache>())
    , peering(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering>())
{
    cache->parent = this;
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::~Manet()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::has_data() const
{
    if (is_presence_container) return true;
    return hello.is_set
	|| willingness.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (peering !=  nullptr && peering->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(willingness.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (willingness.is_set || is_set(willingness.yfilter)) leaf_name_data.push_back(willingness.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "willingness")
    {
        willingness = value;
        willingness.value_namespace = name_space;
        willingness.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "willingness")
    {
        willingness.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "peering" || name == "hello" || name == "willingness")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello::Options::unlimited {0, "unlimited"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update::Options::unlimited {0, "unlimited"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::CapabilityType::lls {0, "lls"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::CapabilityType::opaque {1, "opaque"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::CapabilityType::transit {2, "transit"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::CapabilityType::vrf_lite {3, "vrf-lite"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::Mode::deployment {0, "deployment"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::Mode::normal {1, "normal"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::Mode::strict {2, "strict"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Hello::unicast {0, "unicast"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Hello::multicast {1, "multicast"};


}
}

