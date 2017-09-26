
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_79.hpp"
#include "Cisco_IOS_XE_native_80.hpp"
#include "Cisco_IOS_XE_native_81.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ip::Sla::Entry::Http::Http()
    :
    owner{YType::str, "owner"},
    tag{YType::str, "tag"},
    vrf{YType::str, "vrf"}
    	,
    get(std::make_shared<Native::Ip::Sla::Entry::Http::Get>())
	,raw(std::make_shared<Native::Ip::Sla::Entry::Http::Raw>())
{
    get->parent = this;
    raw->parent = this;

    yang_name = "http"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::Http::~Http()
{
}

bool Native::Ip::Sla::Entry::Http::has_data() const
{
    return owner.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (get !=  nullptr && get->has_data())
	|| (raw !=  nullptr && raw->has_data());
}

bool Native::Ip::Sla::Entry::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (get !=  nullptr && get->has_operation())
	|| (raw !=  nullptr && raw->has_operation());
}

std::string Native::Ip::Sla::Entry::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "get")
    {
        if(get == nullptr)
        {
            get = std::make_shared<Native::Ip::Sla::Entry::Http::Get>();
        }
        return get;
    }

    if(child_yang_name == "raw")
    {
        if(raw == nullptr)
        {
            raw = std::make_shared<Native::Ip::Sla::Entry::Http::Raw>();
        }
        return raw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(get != nullptr)
    {
        children["get"] = get;
    }

    if(raw != nullptr)
    {
        children["raw"] = raw;
    }

    return children;
}

void Native::Ip::Sla::Entry::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
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

void Native::Ip::Sla::Entry::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
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

bool Native::Ip::Sla::Entry::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "get" || name == "raw" || name == "owner" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Http::Get::Get()
    :
    name_server{YType::str, "name-server"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"},
    url{YType::str, "url"}
{

    yang_name = "get"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::Http::Get::~Get()
{
}

bool Native::Ip::Sla::Entry::Http::Get::has_data() const
{
    return name_server.is_set
	|| source_ip.is_set
	|| source_port.is_set
	|| url.is_set;
}

bool Native::Ip::Sla::Entry::Http::Get::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_server.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string Native::Ip::Sla::Entry::Http::Get::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "get";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Http::Get::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_server.is_set || is_set(name_server.yfilter)) leaf_name_data.push_back(name_server.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Http::Get::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Http::Get::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::Http::Get::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-server")
    {
        name_server = value;
        name_server.value_namespace = name_space;
        name_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Http::Get::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-server")
    {
        name_server.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Http::Get::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-server" || name == "source-ip" || name == "source-port" || name == "url")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Http::Raw::Raw()
    :
    name_server{YType::str, "name-server"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"},
    url{YType::str, "url"}
{

    yang_name = "raw"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::Http::Raw::~Raw()
{
}

bool Native::Ip::Sla::Entry::Http::Raw::has_data() const
{
    return name_server.is_set
	|| source_ip.is_set
	|| source_port.is_set
	|| url.is_set;
}

bool Native::Ip::Sla::Entry::Http::Raw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_server.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string Native::Ip::Sla::Entry::Http::Raw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Http::Raw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_server.is_set || is_set(name_server.yfilter)) leaf_name_data.push_back(name_server.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Http::Raw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Http::Raw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::Http::Raw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-server")
    {
        name_server = value;
        name_server.value_namespace = name_space;
        name_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Http::Raw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-server")
    {
        name_server.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Http::Raw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-server" || name == "source-ip" || name == "source-port" || name == "url")
        return true;
    return false;
}

Native::Ip::Sla::Entry::IcmpEcho::IcmpEcho()
    :
    data_pattern{YType::str, "data-pattern"},
    destination{YType::str, "destination"},
    frequency{YType::uint32, "frequency"},
    owner{YType::str, "owner"},
    request_data_size{YType::uint32, "request-data-size"},
    source_interface{YType::str, "source-interface"},
    source_ip{YType::str, "source-ip"},
    tag{YType::str, "tag"},
    threshold{YType::uint32, "threshold"},
    timeout{YType::uint64, "timeout"},
    tos{YType::uint8, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::str, "vrf"}
    	,
    history(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History>())
{
    history->parent = this;

    yang_name = "icmp-echo"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::IcmpEcho::~IcmpEcho()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_data() const
{
    return data_pattern.is_set
	|| destination.is_set
	|| frequency.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| source_interface.is_set
	|| source_ip.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set
	|| (history !=  nullptr && history->has_data());
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_pattern.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Ip::Sla::Entry::IcmpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::IcmpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_pattern.is_set || is_set(data_pattern.yfilter)) leaf_name_data.push_back(data_pattern.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::IcmpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::IcmpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Native::Ip::Sla::Entry::IcmpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-pattern")
    {
        data_pattern = value;
        data_pattern.value_namespace = name_space;
        data_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::IcmpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-pattern")
    {
        data_pattern.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "data-pattern" || name == "destination" || name == "frequency" || name == "owner" || name == "request-data-size" || name == "source-interface" || name == "source-ip" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "verify-data" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::IcmpEcho::History::History()
    :
    buckets_kept{YType::uint8, "buckets-kept"},
    distributions_of_statistics_kept{YType::uint8, "distributions-of-statistics-kept"},
    filter{YType::enumeration, "filter"},
    hours_of_statistics_kept{YType::uint8, "hours-of-statistics-kept"},
    lives_kept{YType::uint8, "lives-kept"},
    statistics_distribution_interval{YType::uint8, "statistics-distribution-interval"}
    	,
    enhanced(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced>())
{
    enhanced->parent = this;

    yang_name = "history"; yang_parent_name = "icmp-echo"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::IcmpEcho::History::~History()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_data() const
{
    return buckets_kept.is_set
	|| distributions_of_statistics_kept.is_set
	|| filter.is_set
	|| hours_of_statistics_kept.is_set
	|| lives_kept.is_set
	|| statistics_distribution_interval.is_set
	|| (enhanced !=  nullptr && enhanced->has_data());
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buckets_kept.yfilter)
	|| ydk::is_set(distributions_of_statistics_kept.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(hours_of_statistics_kept.yfilter)
	|| ydk::is_set(lives_kept.yfilter)
	|| ydk::is_set(statistics_distribution_interval.yfilter)
	|| (enhanced !=  nullptr && enhanced->has_operation());
}

std::string Native::Ip::Sla::Entry::IcmpEcho::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::IcmpEcho::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buckets_kept.is_set || is_set(buckets_kept.yfilter)) leaf_name_data.push_back(buckets_kept.get_name_leafdata());
    if (distributions_of_statistics_kept.is_set || is_set(distributions_of_statistics_kept.yfilter)) leaf_name_data.push_back(distributions_of_statistics_kept.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (hours_of_statistics_kept.is_set || is_set(hours_of_statistics_kept.yfilter)) leaf_name_data.push_back(hours_of_statistics_kept.get_name_leafdata());
    if (lives_kept.is_set || is_set(lives_kept.yfilter)) leaf_name_data.push_back(lives_kept.get_name_leafdata());
    if (statistics_distribution_interval.is_set || is_set(statistics_distribution_interval.yfilter)) leaf_name_data.push_back(statistics_distribution_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::IcmpEcho::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced")
    {
        if(enhanced == nullptr)
        {
            enhanced = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced>();
        }
        return enhanced;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::IcmpEcho::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enhanced != nullptr)
    {
        children["enhanced"] = enhanced;
    }

    return children;
}

void Native::Ip::Sla::Entry::IcmpEcho::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buckets-kept")
    {
        buckets_kept = value;
        buckets_kept.value_namespace = name_space;
        buckets_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept = value;
        distributions_of_statistics_kept.value_namespace = name_space;
        distributions_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept = value;
        hours_of_statistics_kept.value_namespace = name_space;
        hours_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lives-kept")
    {
        lives_kept = value;
        lives_kept.value_namespace = name_space;
        lives_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval = value;
        statistics_distribution_interval.value_namespace = name_space;
        statistics_distribution_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::IcmpEcho::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buckets-kept")
    {
        buckets_kept.yfilter = yfilter;
    }
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "lives-kept")
    {
        lives_kept.yfilter = yfilter;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced" || name == "buckets-kept" || name == "distributions-of-statistics-kept" || name == "filter" || name == "hours-of-statistics-kept" || name == "lives-kept" || name == "statistics-distribution-interval")
        return true;
    return false;
}

Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::Enhanced()
    :
    buckets{YType::uint8, "buckets"},
    interval{YType::uint32, "interval"}
{

    yang_name = "enhanced"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::~Enhanced()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_data() const
{
    return buckets.is_set
	|| interval.is_set;
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buckets.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buckets" || name == "interval")
        return true;
    return false;
}

Native::Ip::Sla::Entry::PathEcho::PathEcho()
    :
    dst_ip{YType::str, "dst-ip"},
    hops_of_statistics_kept{YType::uint8, "hops-of-statistics-kept"},
    paths_of_statistics_kept{YType::uint8, "paths-of-statistics-kept"},
    samples_of_history_kept{YType::uint8, "samples-of-history-kept"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "path-echo"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::PathEcho::~PathEcho()
{
}

bool Native::Ip::Sla::Entry::PathEcho::has_data() const
{
    return dst_ip.is_set
	|| hops_of_statistics_kept.is_set
	|| paths_of_statistics_kept.is_set
	|| samples_of_history_kept.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Sla::Entry::PathEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(hops_of_statistics_kept.yfilter)
	|| ydk::is_set(paths_of_statistics_kept.yfilter)
	|| ydk::is_set(samples_of_history_kept.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ip::Sla::Entry::PathEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::PathEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (hops_of_statistics_kept.is_set || is_set(hops_of_statistics_kept.yfilter)) leaf_name_data.push_back(hops_of_statistics_kept.get_name_leafdata());
    if (paths_of_statistics_kept.is_set || is_set(paths_of_statistics_kept.yfilter)) leaf_name_data.push_back(paths_of_statistics_kept.get_name_leafdata());
    if (samples_of_history_kept.is_set || is_set(samples_of_history_kept.yfilter)) leaf_name_data.push_back(samples_of_history_kept.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::PathEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::PathEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::PathEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops-of-statistics-kept")
    {
        hops_of_statistics_kept = value;
        hops_of_statistics_kept.value_namespace = name_space;
        hops_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-of-statistics-kept")
    {
        paths_of_statistics_kept = value;
        paths_of_statistics_kept.value_namespace = name_space;
        paths_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "samples-of-history-kept")
    {
        samples_of_history_kept = value;
        samples_of_history_kept.value_namespace = name_space;
        samples_of_history_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::PathEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "hops-of-statistics-kept")
    {
        hops_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "paths-of-statistics-kept")
    {
        paths_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "samples-of-history-kept")
    {
        samples_of_history_kept.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::PathEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "hops-of-statistics-kept" || name == "paths-of-statistics-kept" || name == "samples-of-history-kept" || name == "source-ip")
        return true;
    return false;
}

Native::Ip::Sla::Entry::PathJitter::PathJitter()
    :
    dst_ip{YType::str, "dst-ip"},
    frequency{YType::uint32, "frequency"},
    lsr_path{YType::str, "lsr-path"},
    owner{YType::str, "owner"},
    request_data_size{YType::uint32, "request-data-size"},
    source_ip{YType::str, "source-ip"},
    tag{YType::str, "tag"},
    threshold{YType::uint32, "threshold"},
    timeout{YType::uint32, "timeout"},
    tos{YType::uint8, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::str, "vrf"}
    	,
    default_(std::make_shared<Native::Ip::Sla::Entry::PathJitter::Default_>())
{
    default_->parent = this;

    yang_name = "path-jitter"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::PathJitter::~PathJitter()
{
}

bool Native::Ip::Sla::Entry::PathJitter::has_data() const
{
    for (auto const & leaf : lsr_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return dst_ip.is_set
	|| frequency.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| source_ip.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::Sla::Entry::PathJitter::has_operation() const
{
    for (auto const & leaf : lsr_path.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(lsr_path.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::Sla::Entry::PathJitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::PathJitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    auto lsr_path_name_datas = lsr_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsr_path_name_datas.begin(), lsr_path_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::PathJitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::Sla::Entry::PathJitter::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::PathJitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Ip::Sla::Entry::PathJitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-path")
    {
        lsr_path.append(value);
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::PathJitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "lsr-path")
    {
        lsr_path.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::PathJitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dst-ip" || name == "frequency" || name == "lsr-path" || name == "owner" || name == "request-data-size" || name == "source-ip" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "verify-data" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::PathJitter::Default_::Default_()
    :
    frequency{YType::empty, "frequency"},
    lsr_path{YType::empty, "lsr-path"},
    owner{YType::empty, "owner"},
    request_data_size{YType::empty, "request-data-size"},
    tag{YType::empty, "tag"},
    threshold{YType::empty, "threshold"},
    timeout{YType::empty, "timeout"},
    tos{YType::empty, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::empty, "vrf"}
{

    yang_name = "default"; yang_parent_name = "path-jitter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::PathJitter::Default_::~Default_()
{
}

bool Native::Ip::Sla::Entry::PathJitter::Default_::has_data() const
{
    return frequency.is_set
	|| lsr_path.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set;
}

bool Native::Ip::Sla::Entry::PathJitter::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(lsr_path.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Sla::Entry::PathJitter::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::PathJitter::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (lsr_path.is_set || is_set(lsr_path.yfilter)) leaf_name_data.push_back(lsr_path.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::PathJitter::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::PathJitter::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::PathJitter::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-path")
    {
        lsr_path = value;
        lsr_path.value_namespace = name_space;
        lsr_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::PathJitter::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "lsr-path")
    {
        lsr_path.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::PathJitter::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency" || name == "lsr-path" || name == "owner" || name == "request-data-size" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "verify-data" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpEcho::UdpEcho()
    :
    dest_addr{YType::str, "dest-addr"},
    dest_port{YType::uint16, "dest-port"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-echo"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::UdpEcho::~UdpEcho()
{
}

bool Native::Ip::Sla::Entry::UdpEcho::has_data() const
{
    return dest_addr.is_set
	|| dest_port.is_set
	|| source_ip.is_set
	|| source_port.is_set;
}

bool Native::Ip::Sla::Entry::UdpEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_addr.yfilter)
	|| ydk::is_set(dest_port.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Native::Ip::Sla::Entry::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::UdpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_addr.is_set || is_set(dest_addr.yfilter)) leaf_name_data.push_back(dest_addr.get_name_leafdata());
    if (dest_port.is_set || is_set(dest_port.yfilter)) leaf_name_data.push_back(dest_port.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-addr")
    {
        dest_addr = value;
        dest_addr.value_namespace = name_space;
        dest_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-port")
    {
        dest_port = value;
        dest_port.value_namespace = name_space;
        dest_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-addr")
    {
        dest_addr.yfilter = yfilter;
    }
    if(value_path == "dest-port")
    {
        dest_port.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-addr" || name == "dest-port" || name == "source-ip" || name == "source-port")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpJitter::UdpJitter()
    :
    dest_addr{YType::str, "dest-addr"},
    interval{YType::uint16, "interval"},
    num_packets{YType::uint16, "num-packets"},
    owner{YType::str, "owner"},
    portno{YType::uint16, "portno"},
    request_data_size{YType::uint16, "request-data-size"},
    source_ip{YType::str, "source-ip"},
    tag{YType::str, "tag"},
    threshold{YType::uint16, "threshold"},
    timeout{YType::uint32, "timeout"},
    tos{YType::uint8, "tos"},
    traffic_class{YType::uint8, "traffic-class"},
    vrf{YType::str, "vrf"}
    	,
    history(std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History>())
{
    history->parent = this;

    yang_name = "udp-jitter"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::UdpJitter::~UdpJitter()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::has_data() const
{
    return dest_addr.is_set
	|| interval.is_set
	|| num_packets.is_set
	|| owner.is_set
	|| portno.is_set
	|| request_data_size.is_set
	|| source_ip.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| traffic_class.is_set
	|| vrf.is_set
	|| (history !=  nullptr && history->has_data());
}

bool Native::Ip::Sla::Entry::UdpJitter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_addr.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(num_packets.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(portno.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Ip::Sla::Entry::UdpJitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::UdpJitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_addr.is_set || is_set(dest_addr.yfilter)) leaf_name_data.push_back(dest_addr.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (num_packets.is_set || is_set(num_packets.yfilter)) leaf_name_data.push_back(num_packets.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (portno.is_set || is_set(portno.yfilter)) leaf_name_data.push_back(portno.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpJitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpJitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Native::Ip::Sla::Entry::UdpJitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-addr")
    {
        dest_addr = value;
        dest_addr.value_namespace = name_space;
        dest_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-packets")
    {
        num_packets = value;
        num_packets.value_namespace = name_space;
        num_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portno")
    {
        portno = value;
        portno.value_namespace = name_space;
        portno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpJitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-addr")
    {
        dest_addr.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "num-packets")
    {
        num_packets.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "portno")
    {
        portno.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpJitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "dest-addr" || name == "interval" || name == "num-packets" || name == "owner" || name == "portno" || name == "request-data-size" || name == "source-ip" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "traffic-class" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpJitter::History::History()
    :
    distributions_of_statistics_kept{YType::uint8, "distributions-of-statistics-kept"},
    hours_of_statistics_kept{YType::uint8, "hours-of-statistics-kept"},
    statistics_distribution_interval{YType::uint8, "statistics-distribution-interval"}
    	,
    enhanced(std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History::Enhanced>())
{
    enhanced->parent = this;

    yang_name = "history"; yang_parent_name = "udp-jitter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::UdpJitter::History::~History()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_data() const
{
    return distributions_of_statistics_kept.is_set
	|| hours_of_statistics_kept.is_set
	|| statistics_distribution_interval.is_set
	|| (enhanced !=  nullptr && enhanced->has_data());
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distributions_of_statistics_kept.yfilter)
	|| ydk::is_set(hours_of_statistics_kept.yfilter)
	|| ydk::is_set(statistics_distribution_interval.yfilter)
	|| (enhanced !=  nullptr && enhanced->has_operation());
}

std::string Native::Ip::Sla::Entry::UdpJitter::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::UdpJitter::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributions_of_statistics_kept.is_set || is_set(distributions_of_statistics_kept.yfilter)) leaf_name_data.push_back(distributions_of_statistics_kept.get_name_leafdata());
    if (hours_of_statistics_kept.is_set || is_set(hours_of_statistics_kept.yfilter)) leaf_name_data.push_back(hours_of_statistics_kept.get_name_leafdata());
    if (statistics_distribution_interval.is_set || is_set(statistics_distribution_interval.yfilter)) leaf_name_data.push_back(statistics_distribution_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpJitter::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced")
    {
        if(enhanced == nullptr)
        {
            enhanced = std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History::Enhanced>();
        }
        return enhanced;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpJitter::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enhanced != nullptr)
    {
        children["enhanced"] = enhanced;
    }

    return children;
}

void Native::Ip::Sla::Entry::UdpJitter::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept = value;
        distributions_of_statistics_kept.value_namespace = name_space;
        distributions_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept = value;
        hours_of_statistics_kept.value_namespace = name_space;
        hours_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval = value;
        statistics_distribution_interval.value_namespace = name_space;
        statistics_distribution_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpJitter::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced" || name == "distributions-of-statistics-kept" || name == "hours-of-statistics-kept" || name == "statistics-distribution-interval")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::Enhanced()
    :
    buckets{YType::uint8, "buckets"},
    interval{YType::uint16, "interval"}
{

    yang_name = "enhanced"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::~Enhanced()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_data() const
{
    return buckets.is_set
	|| interval.is_set;
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buckets.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buckets" || name == "interval")
        return true;
    return false;
}

Native::Ip::Sla::Group::Group()
{

    yang_name = "group"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Group::~Group()
{
}

bool Native::Ip::Sla::Group::has_data() const
{
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Sla::Group::has_operation() const
{
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Sla::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule")
    {
        for(auto const & c : schedule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Group::Schedule>();
        c->parent = this;
        schedule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : schedule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Sla::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::Schedule()
    :
    entry_number{YType::uint32, "entry-number"}
{

    yang_name = "schedule"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Group::Schedule::~Schedule()
{
}

bool Native::Ip::Sla::Group::Schedule::has_data() const
{
    for (std::size_t index=0; index<probe_ids.size(); index++)
    {
        if(probe_ids[index]->has_data())
            return true;
    }
    return entry_number.is_set;
}

bool Native::Ip::Sla::Group::Schedule::has_operation() const
{
    for (std::size_t index=0; index<probe_ids.size(); index++)
    {
        if(probe_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(entry_number.yfilter);
}

std::string Native::Ip::Sla::Group::Schedule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Group::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule" <<"[entry-number='" <<entry_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Group::Schedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_number.is_set || is_set(entry_number.yfilter)) leaf_name_data.push_back(entry_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe-ids")
    {
        for(auto const & c : probe_ids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds>();
        c->parent = this;
        probe_ids.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : probe_ids)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Sla::Group::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-number")
    {
        entry_number = value;
        entry_number.value_namespace = name_space;
        entry_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-number")
    {
        entry_number.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-ids" || name == "entry-number")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::ProbeIds()
    :
    word{YType::str, "word"}
    	,
    schedule_period(std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod>())
{
    schedule_period->parent = this;

    yang_name = "probe-ids"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::~ProbeIds()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::has_data() const
{
    return word.is_set
	|| (schedule_period !=  nullptr && schedule_period->has_data());
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (schedule_period !=  nullptr && schedule_period->has_operation());
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe-ids" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Group::Schedule::ProbeIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule-period")
    {
        if(schedule_period == nullptr)
        {
            schedule_period = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod>();
        }
        return schedule_period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(schedule_period != nullptr)
    {
        children["schedule-period"] = schedule_period;
    }

    return children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule-period" || name == "word")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::SchedulePeriod()
    :
    life{YType::str, "life"},
    seconds{YType::uint32, "seconds"}
    	,
    frequency(std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency>())
	,start_time(std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime>())
{
    frequency->parent = this;
    start_time->parent = this;

    yang_name = "schedule-period"; yang_parent_name = "probe-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::~SchedulePeriod()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::has_data() const
{
    return life.is_set
	|| seconds.is_set
	|| (frequency !=  nullptr && frequency->has_data())
	|| (start_time !=  nullptr && start_time->has_data());
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(life.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| (frequency !=  nullptr && frequency->has_operation())
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (life.is_set || is_set(life.yfilter)) leaf_name_data.push_back(life.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frequency")
    {
        if(frequency == nullptr)
        {
            frequency = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency>();
        }
        return frequency;
    }

    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime>();
        }
        return start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frequency != nullptr)
    {
        children["frequency"] = frequency;
    }

    if(start_time != nullptr)
    {
        children["start-time"] = start_time;
    }

    return children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "life")
    {
        life = value;
        life.value_namespace = name_space;
        life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "life")
    {
        life.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency" || name == "start-time" || name == "life" || name == "seconds")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::Frequency()
    :
    frequency_val{YType::uint32, "frequency-val"},
    range{YType::str, "range"}
{

    yang_name = "frequency"; yang_parent_name = "schedule-period"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::~Frequency()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::has_data() const
{
    return frequency_val.is_set
	|| range.is_set;
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency_val.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frequency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency_val.is_set || is_set(frequency_val.yfilter)) leaf_name_data.push_back(frequency_val.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency-val")
    {
        frequency_val = value;
        frequency_val.value_namespace = name_space;
        frequency_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency-val")
    {
        frequency_val.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency-val" || name == "range")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::StartTime()
    :
    now{YType::empty, "now"}
{

    yang_name = "start-time"; yang_parent_name = "schedule-period"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::~StartTime()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::has_data() const
{
    return now.is_set;
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(now.yfilter);
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (now.is_set || is_set(now.yfilter)) leaf_name_data.push_back(now.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "now")
    {
        now = value;
        now.value_namespace = name_space;
        now.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "now")
    {
        now.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "now")
        return true;
    return false;
}

Native::Ip::Sla::Logging::Logging()
    :
    traps{YType::empty, "traps"}
{

    yang_name = "logging"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Logging::~Logging()
{
}

bool Native::Ip::Sla::Logging::has_data() const
{
    return traps.is_set;
}

bool Native::Ip::Sla::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traps.yfilter);
}

std::string Native::Ip::Sla::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traps.is_set || is_set(traps.yfilter)) leaf_name_data.push_back(traps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traps")
    {
        traps = value;
        traps.value_namespace = name_space;
        traps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traps")
    {
        traps.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traps")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::ReactionConfiguration()
    :
    entry_number{YType::uint64, "entry-number"}
    	,
    react(std::make_shared<Native::Ip::Sla::ReactionConfiguration::React>())
{
    react->parent = this;

    yang_name = "reaction-configuration"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::ReactionConfiguration::~ReactionConfiguration()
{
}

bool Native::Ip::Sla::ReactionConfiguration::has_data() const
{
    return entry_number.is_set
	|| (react !=  nullptr && react->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_number.yfilter)
	|| (react !=  nullptr && react->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::ReactionConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reaction-configuration" <<"[entry-number='" <<entry_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_number.is_set || is_set(entry_number.yfilter)) leaf_name_data.push_back(entry_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "react")
    {
        if(react == nullptr)
        {
            react = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React>();
        }
        return react;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(react != nullptr)
    {
        children["react"] = react;
    }

    return children;
}

void Native::Ip::Sla::ReactionConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-number")
    {
        entry_number = value;
        entry_number.value_namespace = name_space;
        entry_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::ReactionConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-number")
    {
        entry_number.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::ReactionConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "react" || name == "entry-number")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::React::React()
    :
    connectionloss(nullptr) // presence node
	,rtt(nullptr) // presence node
{

    yang_name = "react"; yang_parent_name = "reaction-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::ReactionConfiguration::React::~React()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::has_data() const
{
    return (connectionloss !=  nullptr && connectionloss->has_data())
	|| (rtt !=  nullptr && rtt->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::React::has_operation() const
{
    return is_set(yfilter)
	|| (connectionloss !=  nullptr && connectionloss->has_operation())
	|| (rtt !=  nullptr && rtt->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::React::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "react";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::React::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::React::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connectionLoss")
    {
        if(connectionloss == nullptr)
        {
            connectionloss = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Connectionloss>();
        }
        return connectionloss;
    }

    if(child_yang_name == "rtt")
    {
        if(rtt == nullptr)
        {
            rtt = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Rtt>();
        }
        return rtt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::React::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connectionloss != nullptr)
    {
        children["connectionLoss"] = connectionloss;
    }

    if(rtt != nullptr)
    {
        children["rtt"] = rtt;
    }

    return children;
}

void Native::Ip::Sla::ReactionConfiguration::React::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::ReactionConfiguration::React::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connectionLoss" || name == "rtt")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::Connectionloss()
    :
    threshold_type(std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType>())
{
    threshold_type->parent = this;

    yang_name = "connectionLoss"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::~Connectionloss()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::has_data() const
{
    return (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connectionLoss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold_type != nullptr)
    {
        children["threshold-type"] = threshold_type;
    }

    return children;
}

void Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-type")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::ThresholdType()
    :
    xofy(std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy>())
{
    xofy->parent = this;

    yang_name = "threshold-type"; yang_parent_name = "connectionLoss"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::~ThresholdType()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::has_data() const
{
    return (xofy !=  nullptr && xofy->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::has_operation() const
{
    return is_set(yfilter)
	|| (xofy !=  nullptr && xofy->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xOfy")
    {
        if(xofy == nullptr)
        {
            xofy = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy>();
        }
        return xofy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xofy != nullptr)
    {
        children["xOfy"] = xofy;
    }

    return children;
}

void Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xOfy")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::Xofy()
    :
    action_type{YType::enumeration, "action-type"},
    x_val{YType::uint8, "x-val"},
    y_val{YType::uint8, "y-val"}
{

    yang_name = "xOfy"; yang_parent_name = "threshold-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::~Xofy()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::has_data() const
{
    return action_type.is_set
	|| x_val.is_set
	|| y_val.is_set;
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter)
	|| ydk::is_set(x_val.yfilter)
	|| ydk::is_set(y_val.yfilter);
}

std::string Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xOfy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());
    if (x_val.is_set || is_set(x_val.yfilter)) leaf_name_data.push_back(x_val.get_name_leafdata());
    if (y_val.is_set || is_set(y_val.yfilter)) leaf_name_data.push_back(y_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "x-val")
    {
        x_val = value;
        x_val.value_namespace = name_space;
        x_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "y-val")
    {
        y_val = value;
        y_val.value_namespace = name_space;
        y_val.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
    if(value_path == "x-val")
    {
        x_val.yfilter = yfilter;
    }
    if(value_path == "y-val")
    {
        y_val.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-type" || name == "x-val" || name == "y-val")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::React::Rtt::Rtt()
    :
    threshold_value(std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue>())
{
    threshold_value->parent = this;

    yang_name = "rtt"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::ReactionConfiguration::React::Rtt::~Rtt()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::has_data() const
{
    return (threshold_value !=  nullptr && threshold_value->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_value !=  nullptr && threshold_value->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::React::Rtt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::React::Rtt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::React::Rtt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-value")
    {
        if(threshold_value == nullptr)
        {
            threshold_value = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue>();
        }
        return threshold_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::React::Rtt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold_value != nullptr)
    {
        children["threshold-value"] = threshold_value;
    }

    return children;
}

void Native::Ip::Sla::ReactionConfiguration::React::Rtt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::ReactionConfiguration::React::Rtt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-value")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ThresholdValue()
    :
    action_type{YType::enumeration, "action-type"},
    lower_limit_val{YType::uint32, "lower-limit-val"},
    threshold_type{YType::enumeration, "threshold-type"},
    upper_limit_val{YType::uint32, "upper-limit-val"}
{

    yang_name = "threshold-value"; yang_parent_name = "rtt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::~ThresholdValue()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::has_data() const
{
    return action_type.is_set
	|| lower_limit_val.is_set
	|| threshold_type.is_set
	|| upper_limit_val.is_set;
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter)
	|| ydk::is_set(lower_limit_val.yfilter)
	|| ydk::is_set(threshold_type.yfilter)
	|| ydk::is_set(upper_limit_val.yfilter);
}

std::string Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());
    if (lower_limit_val.is_set || is_set(lower_limit_val.yfilter)) leaf_name_data.push_back(lower_limit_val.get_name_leafdata());
    if (threshold_type.is_set || is_set(threshold_type.yfilter)) leaf_name_data.push_back(threshold_type.get_name_leafdata());
    if (upper_limit_val.is_set || is_set(upper_limit_val.yfilter)) leaf_name_data.push_back(upper_limit_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-limit-val")
    {
        lower_limit_val = value;
        lower_limit_val.value_namespace = name_space;
        lower_limit_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-type")
    {
        threshold_type = value;
        threshold_type.value_namespace = name_space;
        threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-limit-val")
    {
        upper_limit_val = value;
        upper_limit_val.value_namespace = name_space;
        upper_limit_val.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
    if(value_path == "lower-limit-val")
    {
        lower_limit_val.yfilter = yfilter;
    }
    if(value_path == "threshold-type")
    {
        threshold_type.yfilter = yfilter;
    }
    if(value_path == "upper-limit-val")
    {
        upper_limit_val.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-type" || name == "lower-limit-val" || name == "threshold-type" || name == "upper-limit-val")
        return true;
    return false;
}

Native::Ip::Sla::Responder::Responder()
    :
    tcp_connect(std::make_shared<Native::Ip::Sla::Responder::TcpConnect>())
	,udp_echo(std::make_shared<Native::Ip::Sla::Responder::UdpEcho>())
{
    tcp_connect->parent = this;
    udp_echo->parent = this;

    yang_name = "responder"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Responder::~Responder()
{
}

bool Native::Ip::Sla::Responder::has_data() const
{
    return (tcp_connect !=  nullptr && tcp_connect->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data());
}

bool Native::Ip::Sla::Responder::has_operation() const
{
    return is_set(yfilter)
	|| (tcp_connect !=  nullptr && tcp_connect->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation());
}

std::string Native::Ip::Sla::Responder::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Responder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Responder::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-connect")
    {
        if(tcp_connect == nullptr)
        {
            tcp_connect = std::make_shared<Native::Ip::Sla::Responder::TcpConnect>();
        }
        return tcp_connect;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::Ip::Sla::Responder::UdpEcho>();
        }
        return udp_echo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_connect != nullptr)
    {
        children["tcp-connect"] = tcp_connect;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    return children;
}

void Native::Ip::Sla::Responder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::Responder::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::Responder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-connect" || name == "udp-echo")
        return true;
    return false;
}

Native::Ip::Sla::Responder::TcpConnect::TcpConnect()
    :
    port{YType::uint16, "port"}
{

    yang_name = "tcp-connect"; yang_parent_name = "responder"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Responder::TcpConnect::~TcpConnect()
{
}

bool Native::Ip::Sla::Responder::TcpConnect::has_data() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Native::Ip::Sla::Responder::TcpConnect::has_operation() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Ip::Sla::Responder::TcpConnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Responder::TcpConnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-connect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Responder::TcpConnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::TcpConnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipaddress")
    {
        for(auto const & c : ipaddress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Responder::TcpConnect::Ipaddress>();
        c->parent = this;
        ipaddress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::TcpConnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipaddress)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Sla::Responder::TcpConnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Responder::TcpConnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Responder::TcpConnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipaddress" || name == "port")
        return true;
    return false;
}

Native::Ip::Sla::Responder::TcpConnect::Ipaddress::Ipaddress()
    :
    host{YType::str, "host"},
    port{YType::uint16, "port"}
{

    yang_name = "ipaddress"; yang_parent_name = "tcp-connect"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Responder::TcpConnect::Ipaddress::~Ipaddress()
{
}

bool Native::Ip::Sla::Responder::TcpConnect::Ipaddress::has_data() const
{
    return host.is_set
	|| port.is_set;
}

bool Native::Ip::Sla::Responder::TcpConnect::Ipaddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/tcp-connect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipaddress" <<"[host='" <<host <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Responder::TcpConnect::Ipaddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Responder::TcpConnect::Ipaddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Responder::TcpConnect::Ipaddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "port")
        return true;
    return false;
}

Native::Ip::Sla::Responder::UdpEcho::UdpEcho()
    :
    port{YType::uint16, "port"}
{

    yang_name = "udp-echo"; yang_parent_name = "responder"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Responder::UdpEcho::~UdpEcho()
{
}

bool Native::Ip::Sla::Responder::UdpEcho::has_data() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Native::Ip::Sla::Responder::UdpEcho::has_operation() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Ip::Sla::Responder::UdpEcho::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Responder::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Responder::UdpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipaddress")
    {
        for(auto const & c : ipaddress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Responder::UdpEcho::Ipaddress>();
        c->parent = this;
        ipaddress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipaddress)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Sla::Responder::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Responder::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Responder::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipaddress" || name == "port")
        return true;
    return false;
}

Native::Ip::Sla::Responder::UdpEcho::Ipaddress::Ipaddress()
    :
    host{YType::str, "host"},
    port{YType::uint16, "port"}
{

    yang_name = "ipaddress"; yang_parent_name = "udp-echo"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Responder::UdpEcho::Ipaddress::~Ipaddress()
{
}

bool Native::Ip::Sla::Responder::UdpEcho::Ipaddress::has_data() const
{
    return host.is_set
	|| port.is_set;
}

bool Native::Ip::Sla::Responder::UdpEcho::Ipaddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/udp-echo/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipaddress" <<"[host='" <<host <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Responder::UdpEcho::Ipaddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Responder::UdpEcho::Ipaddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Responder::UdpEcho::Ipaddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "port")
        return true;
    return false;
}

Native::Ip::Sla::Schedule::Schedule()
    :
    entry_number{YType::uint32, "entry-number"},
    ageout{YType::uint32, "ageout"},
    life{YType::str, "life"},
    recurring{YType::empty, "recurring"}
    	,
    start_time(std::make_shared<Native::Ip::Sla::Schedule::StartTime>())
{
    start_time->parent = this;

    yang_name = "schedule"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Schedule::~Schedule()
{
}

bool Native::Ip::Sla::Schedule::has_data() const
{
    return entry_number.is_set
	|| ageout.is_set
	|| life.is_set
	|| recurring.is_set
	|| (start_time !=  nullptr && start_time->has_data());
}

bool Native::Ip::Sla::Schedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_number.yfilter)
	|| ydk::is_set(ageout.yfilter)
	|| ydk::is_set(life.yfilter)
	|| ydk::is_set(recurring.yfilter)
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string Native::Ip::Sla::Schedule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule" <<"[entry-number='" <<entry_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Schedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_number.is_set || is_set(entry_number.yfilter)) leaf_name_data.push_back(entry_number.get_name_leafdata());
    if (ageout.is_set || is_set(ageout.yfilter)) leaf_name_data.push_back(ageout.get_name_leafdata());
    if (life.is_set || is_set(life.yfilter)) leaf_name_data.push_back(life.get_name_leafdata());
    if (recurring.is_set || is_set(recurring.yfilter)) leaf_name_data.push_back(recurring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<Native::Ip::Sla::Schedule::StartTime>();
        }
        return start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_time != nullptr)
    {
        children["start-time"] = start_time;
    }

    return children;
}

void Native::Ip::Sla::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-number")
    {
        entry_number = value;
        entry_number.value_namespace = name_space;
        entry_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ageout")
    {
        ageout = value;
        ageout.value_namespace = name_space;
        ageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life")
    {
        life = value;
        life.value_namespace = name_space;
        life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring")
    {
        recurring = value;
        recurring.value_namespace = name_space;
        recurring.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-number")
    {
        entry_number.yfilter = yfilter;
    }
    if(value_path == "ageout")
    {
        ageout.yfilter = yfilter;
    }
    if(value_path == "life")
    {
        life.yfilter = yfilter;
    }
    if(value_path == "recurring")
    {
        recurring.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "entry-number" || name == "ageout" || name == "life" || name == "recurring")
        return true;
    return false;
}

Native::Ip::Sla::Schedule::StartTime::StartTime()
    :
    after{YType::str, "after"},
    hour_min{YType::str, "hour-min"},
    hour_min_sec{YType::str, "hour-min-sec"},
    now{YType::empty, "now"},
    pending{YType::empty, "pending"},
    random{YType::uint32, "random"}
{

    yang_name = "start-time"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Schedule::StartTime::~StartTime()
{
}

bool Native::Ip::Sla::Schedule::StartTime::has_data() const
{
    return after.is_set
	|| hour_min.is_set
	|| hour_min_sec.is_set
	|| now.is_set
	|| pending.is_set
	|| random.is_set;
}

bool Native::Ip::Sla::Schedule::StartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(after.yfilter)
	|| ydk::is_set(hour_min.yfilter)
	|| ydk::is_set(hour_min_sec.yfilter)
	|| ydk::is_set(now.yfilter)
	|| ydk::is_set(pending.yfilter)
	|| ydk::is_set(random.yfilter);
}

std::string Native::Ip::Sla::Schedule::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Schedule::StartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (after.is_set || is_set(after.yfilter)) leaf_name_data.push_back(after.get_name_leafdata());
    if (hour_min.is_set || is_set(hour_min.yfilter)) leaf_name_data.push_back(hour_min.get_name_leafdata());
    if (hour_min_sec.is_set || is_set(hour_min_sec.yfilter)) leaf_name_data.push_back(hour_min_sec.get_name_leafdata());
    if (now.is_set || is_set(now.yfilter)) leaf_name_data.push_back(now.get_name_leafdata());
    if (pending.is_set || is_set(pending.yfilter)) leaf_name_data.push_back(pending.get_name_leafdata());
    if (random.is_set || is_set(random.yfilter)) leaf_name_data.push_back(random.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Schedule::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Schedule::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Schedule::StartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "after")
    {
        after = value;
        after.value_namespace = name_space;
        after.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour-min")
    {
        hour_min = value;
        hour_min.value_namespace = name_space;
        hour_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour-min-sec")
    {
        hour_min_sec = value;
        hour_min_sec.value_namespace = name_space;
        hour_min_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "now")
    {
        now = value;
        now.value_namespace = name_space;
        now.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending")
    {
        pending = value;
        pending.value_namespace = name_space;
        pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random")
    {
        random = value;
        random.value_namespace = name_space;
        random.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Schedule::StartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "after")
    {
        after.yfilter = yfilter;
    }
    if(value_path == "hour-min")
    {
        hour_min.yfilter = yfilter;
    }
    if(value_path == "hour-min-sec")
    {
        hour_min_sec.yfilter = yfilter;
    }
    if(value_path == "now")
    {
        now.yfilter = yfilter;
    }
    if(value_path == "pending")
    {
        pending.yfilter = yfilter;
    }
    if(value_path == "random")
    {
        random.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Schedule::StartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "after" || name == "hour-min" || name == "hour-min-sec" || name == "now" || name == "pending" || name == "random")
        return true;
    return false;
}

Native::Ip::Sla::Server::Server()
    :
    twamp(nullptr) // presence node
{

    yang_name = "server"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Server::~Server()
{
}

bool Native::Ip::Sla::Server::has_data() const
{
    return (twamp !=  nullptr && twamp->has_data());
}

bool Native::Ip::Sla::Server::has_operation() const
{
    return is_set(yfilter)
	|| (twamp !=  nullptr && twamp->has_operation());
}

std::string Native::Ip::Sla::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "twamp")
    {
        if(twamp == nullptr)
        {
            twamp = std::make_shared<Native::Ip::Sla::Server::Twamp>();
        }
        return twamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(twamp != nullptr)
    {
        children["twamp"] = twamp;
    }

    return children;
}

void Native::Ip::Sla::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "twamp")
        return true;
    return false;
}

Native::Ip::Sla::Server::Twamp::Twamp()
{

    yang_name = "twamp"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Server::Twamp::~Twamp()
{
}

bool Native::Ip::Sla::Server::Twamp::has_data() const
{
    return false;
}

bool Native::Ip::Sla::Server::Twamp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ip::Sla::Server::Twamp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Server::Twamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "twamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Server::Twamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Server::Twamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Server::Twamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Server::Twamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::Server::Twamp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::Server::Twamp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ip::Spd::Spd()
    :
    mode{YType::enumeration, "mode"}
    	,
    queue(std::make_shared<Native::Ip::Spd::Queue>())
{
    queue->parent = this;

    yang_name = "spd"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Spd::~Spd()
{
}

bool Native::Ip::Spd::has_data() const
{
    return mode.is_set
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::Ip::Spd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Ip::Spd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Spd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Spd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Spd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Ip::Spd::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Spd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Ip::Spd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Spd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Ip::Spd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "mode")
        return true;
    return false;
}

Native::Ip::Spd::Queue::Queue()
    :
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{

    yang_name = "queue"; yang_parent_name = "spd"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Spd::Queue::~Queue()
{
}

bool Native::Ip::Spd::Queue::has_data() const
{
    return max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::Ip::Spd::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(min_threshold.yfilter);
}

std::string Native::Ip::Spd::Queue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/spd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Spd::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Spd::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Spd::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Spd::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Spd::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Spd::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Spd::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-threshold" || name == "min-threshold")
        return true;
    return false;
}

Native::Ip::Ssh::Ssh()
    :
    authentication_retries{YType::uint8, "authentication-retries"},
    dscp{YType::uint8, "dscp"},
    precedence{YType::uint8, "precedence"},
    source_interface{YType::str, "source-interface"},
    time_out{YType::uint8, "time-out"},
    version{YType::uint8, "version"}
    	,
    client(std::make_shared<Native::Ip::Ssh::Client>())
	,logging(std::make_shared<Native::Ip::Ssh::Logging>())
	,pubkey_chain(std::make_shared<Native::Ip::Ssh::PubkeyChain>())
	,rsa(std::make_shared<Native::Ip::Ssh::Rsa>())
	,server(std::make_shared<Native::Ip::Ssh::Server>())
{
    client->parent = this;
    logging->parent = this;
    pubkey_chain->parent = this;
    rsa->parent = this;
    server->parent = this;

    yang_name = "ssh"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::~Ssh()
{
}

bool Native::Ip::Ssh::has_data() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return authentication_retries.is_set
	|| dscp.is_set
	|| precedence.is_set
	|| source_interface.is_set
	|| time_out.is_set
	|| version.is_set
	|| (client !=  nullptr && client->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_data())
	|| (rsa !=  nullptr && rsa->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Ip::Ssh::has_operation() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authentication_retries.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(time_out.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Ssh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_retries.is_set || is_set(authentication_retries.yfilter)) leaf_name_data.push_back(authentication_retries.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (time_out.is_set || is_set(time_out.yfilter)) leaf_name_data.push_back(time_out.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Ip::Ssh::Client>();
        }
        return client;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ip::Ssh::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "port")
    {
        for(auto const & c : port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Ssh::Port>();
        c->parent = this;
        port.push_back(c);
        return c;
    }

    if(child_yang_name == "pubkey-chain")
    {
        if(pubkey_chain == nullptr)
        {
            pubkey_chain = std::make_shared<Native::Ip::Ssh::PubkeyChain>();
        }
        return pubkey_chain;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Ip::Ssh::Rsa>();
        }
        return rsa;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Ssh::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : port)
    {
        children[c->get_segment_path()] = c;
    }

    if(pubkey_chain != nullptr)
    {
        children["pubkey-chain"] = pubkey_chain;
    }

    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Ip::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-retries")
    {
        authentication_retries = value;
        authentication_retries.value_namespace = name_space;
        authentication_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-out")
    {
        time_out = value;
        time_out.value_namespace = name_space;
        time_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-retries")
    {
        authentication_retries.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "time-out")
    {
        time_out.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "logging" || name == "port" || name == "pubkey-chain" || name == "rsa" || name == "server" || name == "authentication-retries" || name == "dscp" || name == "precedence" || name == "source-interface" || name == "time-out" || name == "version")
        return true;
    return false;
}

Native::Ip::Ssh::Client::Client()
    :
    algorithm(std::make_shared<Native::Ip::Ssh::Client::Algorithm>())
{
    algorithm->parent = this;

    yang_name = "client"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::Client::~Client()
{
}

bool Native::Ip::Ssh::Client::has_data() const
{
    return (algorithm !=  nullptr && algorithm->has_data());
}

bool Native::Ip::Ssh::Client::has_operation() const
{
    return is_set(yfilter)
	|| (algorithm !=  nullptr && algorithm->has_operation());
}

std::string Native::Ip::Ssh::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Ip::Ssh::Client::Algorithm>();
        }
        return algorithm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    return children;
}

void Native::Ip::Ssh::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Ip::Ssh::Client::Algorithm::Algorithm()
    :
    encryption(std::make_shared<Native::Ip::Ssh::Client::Algorithm::Encryption>())
{
    encryption->parent = this;

    yang_name = "algorithm"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::Client::Algorithm::~Algorithm()
{
}

bool Native::Ip::Ssh::Client::Algorithm::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data());
}

bool Native::Ip::Ssh::Client::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Ip::Ssh::Client::Algorithm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Client::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Client::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Client::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Ip::Ssh::Client::Algorithm::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Client::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Native::Ip::Ssh::Client::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Client::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Client::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption")
        return true;
    return false;
}

Native::Ip::Ssh::Client::Algorithm::Encryption::Encryption()
    :
    aes128_ctr{YType::empty, "aes128-ctr"},
    aes192_ctr{YType::empty, "aes192-ctr"},
    aes256_ctr{YType::empty, "aes256-ctr"}
{

    yang_name = "encryption"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::Client::Algorithm::Encryption::~Encryption()
{
}

bool Native::Ip::Ssh::Client::Algorithm::Encryption::has_data() const
{
    return aes128_ctr.is_set
	|| aes192_ctr.is_set
	|| aes256_ctr.is_set;
}

bool Native::Ip::Ssh::Client::Algorithm::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes128_ctr.yfilter)
	|| ydk::is_set(aes192_ctr.yfilter)
	|| ydk::is_set(aes256_ctr.yfilter);
}

std::string Native::Ip::Ssh::Client::Algorithm::Encryption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/client/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Client::Algorithm::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Client::Algorithm::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes128_ctr.is_set || is_set(aes128_ctr.yfilter)) leaf_name_data.push_back(aes128_ctr.get_name_leafdata());
    if (aes192_ctr.is_set || is_set(aes192_ctr.yfilter)) leaf_name_data.push_back(aes192_ctr.get_name_leafdata());
    if (aes256_ctr.is_set || is_set(aes256_ctr.yfilter)) leaf_name_data.push_back(aes256_ctr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Client::Algorithm::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Client::Algorithm::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ssh::Client::Algorithm::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr = value;
        aes128_ctr.value_namespace = name_space;
        aes128_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr = value;
        aes192_ctr.value_namespace = name_space;
        aes192_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr = value;
        aes256_ctr.value_namespace = name_space;
        aes256_ctr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Client::Algorithm::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr.yfilter = yfilter;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr.yfilter = yfilter;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Client::Algorithm::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes128-ctr" || name == "aes192-ctr" || name == "aes256-ctr")
        return true;
    return false;
}

Native::Ip::Ssh::Logging::Logging()
    :
    events{YType::empty, "events"}
{

    yang_name = "logging"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::Logging::~Logging()
{
}

bool Native::Ip::Ssh::Logging::has_data() const
{
    return events.is_set;
}

bool Native::Ip::Ssh::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(events.yfilter);
}

std::string Native::Ip::Ssh::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events.is_set || is_set(events.yfilter)) leaf_name_data.push_back(events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ssh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "events")
    {
        events = value;
        events.value_namespace = name_space;
        events.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "events")
    {
        events.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events")
        return true;
    return false;
}

Native::Ip::Ssh::Port::Port()
    :
    port_no{YType::uint16, "port-no"},
    high_rotary{YType::uint8, "high-rotary"},
    low_rotary{YType::uint8, "low-rotary"}
{

    yang_name = "port"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::Port::~Port()
{
}

bool Native::Ip::Ssh::Port::has_data() const
{
    return port_no.is_set
	|| high_rotary.is_set
	|| low_rotary.is_set;
}

bool Native::Ip::Ssh::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_no.yfilter)
	|| ydk::is_set(high_rotary.yfilter)
	|| ydk::is_set(low_rotary.yfilter);
}

std::string Native::Ip::Ssh::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port" <<"[port-no='" <<port_no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_no.is_set || is_set(port_no.yfilter)) leaf_name_data.push_back(port_no.get_name_leafdata());
    if (high_rotary.is_set || is_set(high_rotary.yfilter)) leaf_name_data.push_back(high_rotary.get_name_leafdata());
    if (low_rotary.is_set || is_set(low_rotary.yfilter)) leaf_name_data.push_back(low_rotary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ssh::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-no")
    {
        port_no = value;
        port_no.value_namespace = name_space;
        port_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-rotary")
    {
        high_rotary = value;
        high_rotary.value_namespace = name_space;
        high_rotary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-rotary")
    {
        low_rotary = value;
        low_rotary.value_namespace = name_space;
        low_rotary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-no")
    {
        port_no.yfilter = yfilter;
    }
    if(value_path == "high-rotary")
    {
        high_rotary.yfilter = yfilter;
    }
    if(value_path == "low-rotary")
    {
        low_rotary.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-no" || name == "high-rotary" || name == "low-rotary")
        return true;
    return false;
}

Native::Ip::Ssh::PubkeyChain::PubkeyChain()
{

    yang_name = "pubkey-chain"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::PubkeyChain::~PubkeyChain()
{
}

bool Native::Ip::Ssh::PubkeyChain::has_data() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Ssh::PubkeyChain::has_operation() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Ssh::PubkeyChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::PubkeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pubkey-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::PubkeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::PubkeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username")
    {
        for(auto const & c : username)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Ssh::PubkeyChain::Username>();
        c->parent = this;
        username.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::PubkeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : username)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Ssh::PubkeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::PubkeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::PubkeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Native::Ip::Ssh::PubkeyChain::Username::Username()
    :
    name{YType::str, "name"}
{

    yang_name = "username"; yang_parent_name = "pubkey-chain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::PubkeyChain::Username::~Username()
{
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_data() const
{
    for (std::size_t index=0; index<key_hash.size(); index++)
    {
        if(key_hash[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_operation() const
{
    for (std::size_t index=0; index<key_hash.size(); index++)
    {
        if(key_hash[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Ssh::PubkeyChain::Username::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/pubkey-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::PubkeyChain::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::PubkeyChain::Username::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::PubkeyChain::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-hash")
    {
        for(auto const & c : key_hash)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Ssh::PubkeyChain::Username::KeyHash>();
        c->parent = this;
        key_hash.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::PubkeyChain::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_hash)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Ssh::PubkeyChain::Username::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::PubkeyChain::Username::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-hash" || name == "name")
        return true;
    return false;
}

Native::Ip::Ssh::PubkeyChain::Username::KeyHash::KeyHash()
    :
    key_type{YType::enumeration, "key-type"},
    key_hash_value{YType::str, "key-hash-value"}
{

    yang_name = "key-hash"; yang_parent_name = "username"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Ssh::PubkeyChain::Username::KeyHash::~KeyHash()
{
}

bool Native::Ip::Ssh::PubkeyChain::Username::KeyHash::has_data() const
{
    return key_type.is_set
	|| key_hash_value.is_set;
}

bool Native::Ip::Ssh::PubkeyChain::Username::KeyHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_type.yfilter)
	|| ydk::is_set(key_hash_value.yfilter);
}

std::string Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-hash" <<"[key-type='" <<key_type <<"']" <<"[key-hash-value='" <<key_hash_value <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_type.is_set || is_set(key_type.yfilter)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (key_hash_value.is_set || is_set(key_hash_value.yfilter)) leaf_name_data.push_back(key_hash_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ssh::PubkeyChain::Username::KeyHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-type")
    {
        key_type = value;
        key_type.value_namespace = name_space;
        key_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-hash-value")
    {
        key_hash_value = value;
        key_hash_value.value_namespace = name_space;
        key_hash_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::PubkeyChain::Username::KeyHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-type")
    {
        key_type.yfilter = yfilter;
    }
    if(value_path == "key-hash-value")
    {
        key_hash_value.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::PubkeyChain::Username::KeyHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-type" || name == "key-hash-value")
        return true;
    return false;
}

Native::Ip::Ssh::Rsa::Rsa()
    :
    keypair_name{YType::str, "keypair-name"}
{

    yang_name = "rsa"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::Rsa::~Rsa()
{
}

bool Native::Ip::Ssh::Rsa::has_data() const
{
    return keypair_name.is_set;
}

bool Native::Ip::Ssh::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keypair_name.yfilter);
}

std::string Native::Ip::Ssh::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keypair_name.is_set || is_set(keypair_name.yfilter)) leaf_name_data.push_back(keypair_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ssh::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keypair-name")
    {
        keypair_name = value;
        keypair_name.value_namespace = name_space;
        keypair_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keypair-name")
    {
        keypair_name.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keypair-name")
        return true;
    return false;
}

Native::Ip::Ssh::Server::Server()
    :
    algorithm(std::make_shared<Native::Ip::Ssh::Server::Algorithm>())
{
    algorithm->parent = this;

    yang_name = "server"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::Server::~Server()
{
}

bool Native::Ip::Ssh::Server::has_data() const
{
    return (algorithm !=  nullptr && algorithm->has_data());
}

bool Native::Ip::Ssh::Server::has_operation() const
{
    return is_set(yfilter)
	|| (algorithm !=  nullptr && algorithm->has_operation());
}

std::string Native::Ip::Ssh::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Ip::Ssh::Server::Algorithm>();
        }
        return algorithm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    return children;
}

void Native::Ip::Ssh::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Ip::Ssh::Server::Algorithm::Algorithm()
    :
    encryption(std::make_shared<Native::Ip::Ssh::Server::Algorithm::Encryption>())
{
    encryption->parent = this;

    yang_name = "algorithm"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::Server::Algorithm::~Algorithm()
{
}

bool Native::Ip::Ssh::Server::Algorithm::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data());
}

bool Native::Ip::Ssh::Server::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Ip::Ssh::Server::Algorithm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Server::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Server::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Server::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Ip::Ssh::Server::Algorithm::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Server::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Native::Ip::Ssh::Server::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Ssh::Server::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Ssh::Server::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption")
        return true;
    return false;
}

Native::Ip::Ssh::Server::Algorithm::Encryption::Encryption()
    :
    aes128_ctr{YType::empty, "aes128-ctr"},
    aes192_ctr{YType::empty, "aes192-ctr"},
    aes256_ctr{YType::empty, "aes256-ctr"}
{

    yang_name = "encryption"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Ssh::Server::Algorithm::Encryption::~Encryption()
{
}

bool Native::Ip::Ssh::Server::Algorithm::Encryption::has_data() const
{
    return aes128_ctr.is_set
	|| aes192_ctr.is_set
	|| aes256_ctr.is_set;
}

bool Native::Ip::Ssh::Server::Algorithm::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes128_ctr.yfilter)
	|| ydk::is_set(aes192_ctr.yfilter)
	|| ydk::is_set(aes256_ctr.yfilter);
}

std::string Native::Ip::Ssh::Server::Algorithm::Encryption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/server/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Ssh::Server::Algorithm::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Ssh::Server::Algorithm::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes128_ctr.is_set || is_set(aes128_ctr.yfilter)) leaf_name_data.push_back(aes128_ctr.get_name_leafdata());
    if (aes192_ctr.is_set || is_set(aes192_ctr.yfilter)) leaf_name_data.push_back(aes192_ctr.get_name_leafdata());
    if (aes256_ctr.is_set || is_set(aes256_ctr.yfilter)) leaf_name_data.push_back(aes256_ctr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Server::Algorithm::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Server::Algorithm::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ssh::Server::Algorithm::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr = value;
        aes128_ctr.value_namespace = name_space;
        aes128_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr = value;
        aes192_ctr.value_namespace = name_space;
        aes192_ctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr = value;
        aes256_ctr.value_namespace = name_space;
        aes256_ctr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Ssh::Server::Algorithm::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes128-ctr")
    {
        aes128_ctr.yfilter = yfilter;
    }
    if(value_path == "aes192-ctr")
    {
        aes192_ctr.yfilter = yfilter;
    }
    if(value_path == "aes256-ctr")
    {
        aes256_ctr.yfilter = yfilter;
    }
}

bool Native::Ip::Ssh::Server::Algorithm::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes128-ctr" || name == "aes192-ctr" || name == "aes256-ctr")
        return true;
    return false;
}

Native::Ip::Tacacs::Tacacs()
    :
    source_interface(std::make_shared<Native::Ip::Tacacs::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "tacacs"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tacacs::~Tacacs()
{
}

bool Native::Ip::Tacacs::has_data() const
{
    return (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Tacacs::has_operation() const
{
    return is_set(yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Tacacs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:tacacs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Tacacs::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Ip::Tacacs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Tacacs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Tacacs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "tacacs"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tacacs::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Tacacs::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Tacacs::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
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

void Native::Ip::Tacacs::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
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
}

void Native::Ip::Tacacs::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
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
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tacacs::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tacacs::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tacacs::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tacacs::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tacacs::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tacacs::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Tcp::Tcp()
    :
    selective_ack{YType::empty, "selective-ack"},
    synwait_time{YType::uint16, "synwait-time"},
    timestamp{YType::empty, "timestamp"},
    window_size{YType::uint32, "window-size"}
    	,
    path_mtu_discovery(nullptr) // presence node
{

    yang_name = "tcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tcp::~Tcp()
{
}

bool Native::Ip::Tcp::has_data() const
{
    return selective_ack.is_set
	|| synwait_time.is_set
	|| timestamp.is_set
	|| window_size.is_set
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data());
}

bool Native::Ip::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(selective_ack.yfilter)
	|| ydk::is_set(synwait_time.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation());
}

std::string Native::Ip::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selective_ack.is_set || is_set(selective_ack.yfilter)) leaf_name_data.push_back(selective_ack.get_name_leafdata());
    if (synwait_time.is_set || is_set(synwait_time.yfilter)) leaf_name_data.push_back(synwait_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Ip::Tcp::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_mtu_discovery != nullptr)
    {
        children["path-mtu-discovery"] = path_mtu_discovery;
    }

    return children;
}

void Native::Ip::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "selective-ack")
    {
        selective_ack = value;
        selective_ack.value_namespace = name_space;
        selective_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synwait-time")
    {
        synwait_time = value;
        synwait_time.value_namespace = name_space;
        synwait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "selective-ack")
    {
        selective_ack.yfilter = yfilter;
    }
    if(value_path == "synwait-time")
    {
        synwait_time.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery" || name == "selective-ack" || name == "synwait-time" || name == "timestamp" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Tcp::PathMtuDiscovery::PathMtuDiscovery()
    :
    age_timer{YType::str, "age-timer"}
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tcp::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Ip::Tcp::PathMtuDiscovery::has_data() const
{
    return age_timer.is_set;
}

bool Native::Ip::Tcp::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age_timer.yfilter);
}

std::string Native::Ip::Tcp::PathMtuDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tcp::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tcp::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_timer.is_set || is_set(age_timer.yfilter)) leaf_name_data.push_back(age_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tcp::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tcp::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tcp::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age-timer")
    {
        age_timer = value;
        age_timer.value_namespace = name_space;
        age_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tcp::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age-timer")
    {
        age_timer.yfilter = yfilter;
    }
}

bool Native::Ip::Tcp::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age-timer")
        return true;
    return false;
}

Native::Ip::Telnet::Telnet()
    :
    source_interface{YType::str, "source-interface"}
{

    yang_name = "telnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Telnet::~Telnet()
{
}

bool Native::Ip::Telnet::has_data() const
{
    return source_interface.is_set;
}

bool Native::Ip::Telnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter);
}

std::string Native::Ip::Telnet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Ip::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Native::Ip::Tftp::Tftp()
    :
    blocksize{YType::uint16, "blocksize"}
    	,
    boot_interface(std::make_shared<Native::Ip::Tftp::BootInterface>())
	,source_interface(std::make_shared<Native::Ip::Tftp::SourceInterface>())
{
    boot_interface->parent = this;
    source_interface->parent = this;

    yang_name = "tftp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tftp::~Tftp()
{
}

bool Native::Ip::Tftp::has_data() const
{
    return blocksize.is_set
	|| (boot_interface !=  nullptr && boot_interface->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Tftp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blocksize.yfilter)
	|| (boot_interface !=  nullptr && boot_interface->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Tftp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocksize.is_set || is_set(blocksize.yfilter)) leaf_name_data.push_back(blocksize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boot-interface")
    {
        if(boot_interface == nullptr)
        {
            boot_interface = std::make_shared<Native::Ip::Tftp::BootInterface>();
        }
        return boot_interface;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Tftp::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(boot_interface != nullptr)
    {
        children["boot-interface"] = boot_interface;
    }

    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Ip::Tftp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "blocksize")
    {
        blocksize = value;
        blocksize.value_namespace = name_space;
        blocksize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "blocksize")
    {
        blocksize.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boot-interface" || name == "source-interface" || name == "blocksize")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::BootInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Ip::Tftp::BootInterface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "boot-interface"; yang_parent_name = "tftp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tftp::BootInterface::~BootInterface()
{
}

bool Native::Ip::Tftp::BootInterface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Tftp::BootInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Tftp::BootInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Tftp::BootInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Tftp::BootInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Tftp::BootInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Tftp::BootInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
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

void Native::Ip::Tftp::BootInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
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
}

void Native::Ip::Tftp::BootInterface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
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
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "boot-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tftp::BootInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Tftp::BootInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::BootInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::BootInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "boot-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tftp::BootInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Tftp::BootInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Tftp::BootInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::BootInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::BootInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "boot-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tftp::BootInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Tftp::BootInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Tftp::BootInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::BootInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::BootInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Tftp::BootInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "boot-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tftp::BootInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Tftp::BootInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::BootInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::BootInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::BootInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "tftp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tftp::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Tftp::SourceInterface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Tftp::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Tftp::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
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

void Native::Ip::Tftp::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
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
}

void Native::Ip::Tftp::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
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
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tftp::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Tftp::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tftp::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Tftp::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Vrf::Vrf()
    :
    name{YType::str, "name"},
    context{YType::str, "context"},
    description{YType::str, "description"},
    rd{YType::str, "rd"}
    	,
    bgp(std::make_shared<Native::Ip::Vrf::Bgp>())
	,export_(std::make_shared<Native::Ip::Vrf::Export_>())
	,import(std::make_shared<Native::Ip::Vrf::Import>())
	,maximum(nullptr) // presence node
	,mdt(nullptr) // presence node
	,vpn(std::make_shared<Native::Ip::Vrf::Vpn>())
{
    bgp->parent = this;
    export_->parent = this;
    import->parent = this;
    vpn->parent = this;

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Vrf::~Vrf()
{
}

bool Native::Ip::Vrf::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return name.is_set
	|| context.is_set
	|| description.is_set
	|| rd.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (export_ !=  nullptr && export_->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (mdt !=  nullptr && mdt->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::Ip::Vrf::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (export_ !=  nullptr && export_->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (mdt !=  nullptr && mdt->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::Ip::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Ip::Vrf::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "export")
    {
        if(export_ == nullptr)
        {
            export_ = std::make_shared<Native::Ip::Vrf::Export_>();
        }
        return export_;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Ip::Vrf::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Ip::Vrf::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "mdt")
    {
        if(mdt == nullptr)
        {
            mdt = std::make_shared<Native::Ip::Vrf::Mdt>();
        }
        return mdt;
    }

    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Vrf::RouteTarget>();
        c->parent = this;
        route_target.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::Ip::Vrf::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(export_ != nullptr)
    {
        children["export"] = export_;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(mdt != nullptr)
    {
        children["mdt"] = mdt;
    }

    for (auto const & c : route_target)
    {
        children[c->get_segment_path()] = c;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "export" || name == "import" || name == "maximum" || name == "mdt" || name == "route-target" || name == "vpn" || name == "name" || name == "context" || name == "description" || name == "rd")
        return true;
    return false;
}

Native::Ip::Vrf::Bgp::Bgp()
    :
    next_hop(std::make_shared<Native::Ip::Vrf::Bgp::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bgp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Bgp::~Bgp()
{
}

bool Native::Ip::Vrf::Bgp::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::Ip::Vrf::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::Ip::Vrf::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Ip::Vrf::Bgp::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::Ip::Vrf::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Vrf::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Vrf::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::Ip::Vrf::Bgp::NextHop::NextHop()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "next-hop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Bgp::NextHop::~NextHop()
{
}

bool Native::Ip::Vrf::Bgp::NextHop::has_data() const
{
    return loopback.is_set;
}

bool Native::Ip::Vrf::Bgp::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Ip::Vrf::Bgp::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Bgp::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Bgp::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Bgp::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::Bgp::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Bgp::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Bgp::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Ip::Vrf::Export_::Export_()
    :
    map{YType::str, "map"}
    	,
    ipv4(std::make_shared<Native::Ip::Vrf::Export_::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "export"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Export_::~Export_()
{
}

bool Native::Ip::Vrf::Export_::has_data() const
{
    return map.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Ip::Vrf::Export_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Ip::Vrf::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Export_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Ip::Vrf::Export_::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Ip::Vrf::Export_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Export_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Export_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "map")
        return true;
    return false;
}

Native::Ip::Vrf::Export_::Ipv4::Ipv4()
    :
    ipv4_type{YType::enumeration, "ipv4-type"},
    map{YType::str, "map"},
    map_only{YType::str, "map-only"},
    upper_limit{YType::uint32, "upper-limit"}
{

    yang_name = "ipv4"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Export_::Ipv4::~Ipv4()
{
}

bool Native::Ip::Vrf::Export_::Ipv4::has_data() const
{
    return ipv4_type.is_set
	|| map.is_set
	|| map_only.is_set
	|| upper_limit.is_set;
}

bool Native::Ip::Vrf::Export_::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_type.yfilter)
	|| ydk::is_set(map.yfilter)
	|| ydk::is_set(map_only.yfilter)
	|| ydk::is_set(upper_limit.yfilter);
}

std::string Native::Ip::Vrf::Export_::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Export_::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_type.is_set || is_set(ipv4_type.yfilter)) leaf_name_data.push_back(ipv4_type.get_name_leafdata());
    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());
    if (map_only.is_set || is_set(map_only.yfilter)) leaf_name_data.push_back(map_only.get_name_leafdata());
    if (upper_limit.is_set || is_set(upper_limit.yfilter)) leaf_name_data.push_back(upper_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Export_::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Export_::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::Export_::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-type")
    {
        ipv4_type = value;
        ipv4_type.value_namespace = name_space;
        ipv4_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-only")
    {
        map_only = value;
        map_only.value_namespace = name_space;
        map_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-limit")
    {
        upper_limit = value;
        upper_limit.value_namespace = name_space;
        upper_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Export_::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-type")
    {
        ipv4_type.yfilter = yfilter;
    }
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
    if(value_path == "map-only")
    {
        map_only.yfilter = yfilter;
    }
    if(value_path == "upper-limit")
    {
        upper_limit.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Export_::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-type" || name == "map" || name == "map-only" || name == "upper-limit")
        return true;
    return false;
}

Native::Ip::Vrf::Import::Import()
    :
    map{YType::str, "map"}
    	,
    ipv4(std::make_shared<Native::Ip::Vrf::Import::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "import"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Import::~Import()
{
}

bool Native::Ip::Vrf::Import::has_data() const
{
    return map.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Ip::Vrf::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Ip::Vrf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Ip::Vrf::Import::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Ip::Vrf::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "map")
        return true;
    return false;
}

Native::Ip::Vrf::Import::Ipv4::Ipv4()
    :
    ipv4_type{YType::enumeration, "ipv4-type"},
    map{YType::str, "map"},
    upper_limit{YType::uint32, "upper-limit"}
{

    yang_name = "ipv4"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Import::Ipv4::~Ipv4()
{
}

bool Native::Ip::Vrf::Import::Ipv4::has_data() const
{
    return ipv4_type.is_set
	|| map.is_set
	|| upper_limit.is_set;
}

bool Native::Ip::Vrf::Import::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_type.yfilter)
	|| ydk::is_set(map.yfilter)
	|| ydk::is_set(upper_limit.yfilter);
}

std::string Native::Ip::Vrf::Import::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Import::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_type.is_set || is_set(ipv4_type.yfilter)) leaf_name_data.push_back(ipv4_type.get_name_leafdata());
    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());
    if (upper_limit.is_set || is_set(upper_limit.yfilter)) leaf_name_data.push_back(upper_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Import::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Import::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::Import::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-type")
    {
        ipv4_type = value;
        ipv4_type.value_namespace = name_space;
        ipv4_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-limit")
    {
        upper_limit = value;
        upper_limit.value_namespace = name_space;
        upper_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Import::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-type")
    {
        ipv4_type.yfilter = yfilter;
    }
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
    if(value_path == "upper-limit")
    {
        upper_limit.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Import::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-type" || name == "map" || name == "upper-limit")
        return true;
    return false;
}

Native::Ip::Vrf::Maximum::Maximum()
    :
    reinstall{YType::uint16, "reinstall"},
    routes{YType::uint32, "routes"},
    threshold{YType::uint16, "threshold"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Maximum::~Maximum()
{
}

bool Native::Ip::Vrf::Maximum::has_data() const
{
    return reinstall.is_set
	|| routes.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Native::Ip::Vrf::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reinstall.yfilter)
	|| ydk::is_set(routes.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Ip::Vrf::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reinstall.is_set || is_set(reinstall.yfilter)) leaf_name_data.push_back(reinstall.get_name_leafdata());
    if (routes.is_set || is_set(routes.yfilter)) leaf_name_data.push_back(routes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reinstall")
    {
        reinstall = value;
        reinstall.value_namespace = name_space;
        reinstall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes")
    {
        routes = value;
        routes.value_namespace = name_space;
        routes.value_namespace_prefix = name_space_prefix;
    }
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

void Native::Ip::Vrf::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reinstall")
    {
        reinstall.yfilter = yfilter;
    }
    if(value_path == "routes")
    {
        routes.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reinstall" || name == "routes" || name == "threshold" || name == "warning-only")
        return true;
    return false;
}

Native::Ip::Vrf::Mdt::Mdt()
    :
    default_{YType::str, "default"},
    log_reuse{YType::empty, "log-reuse"}
    	,
    data(std::make_shared<Native::Ip::Vrf::Mdt::Data>())
{
    data->parent = this;

    yang_name = "mdt"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Mdt::~Mdt()
{
}

bool Native::Ip::Vrf::Mdt::has_data() const
{
    return default_.is_set
	|| log_reuse.is_set
	|| (data !=  nullptr && data->has_data());
}

bool Native::Ip::Vrf::Mdt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(log_reuse.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string Native::Ip::Vrf::Mdt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Mdt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (log_reuse.is_set || is_set(log_reuse.yfilter)) leaf_name_data.push_back(log_reuse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Mdt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Ip::Vrf::Mdt::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Mdt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void Native::Ip::Vrf::Mdt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-reuse")
    {
        log_reuse = value;
        log_reuse.value_namespace = name_space;
        log_reuse.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Mdt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "log-reuse")
    {
        log_reuse.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Mdt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "default" || name == "log-reuse")
        return true;
    return false;
}

Native::Ip::Vrf::Mdt::Data::Data()
    :
    list{YType::str, "list"},
    mulicast_address{YType::str, "mulicast-address"},
    threshold{YType::uint32, "threshold"},
    threshold_list{YType::str, "threshold-list"},
    wildcard_bits{YType::str, "wildcard-bits"}
{

    yang_name = "data"; yang_parent_name = "mdt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Mdt::Data::~Data()
{
}

bool Native::Ip::Vrf::Mdt::Data::has_data() const
{
    return list.is_set
	|| mulicast_address.is_set
	|| threshold.is_set
	|| threshold_list.is_set
	|| wildcard_bits.is_set;
}

bool Native::Ip::Vrf::Mdt::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(mulicast_address.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold_list.yfilter)
	|| ydk::is_set(wildcard_bits.yfilter);
}

std::string Native::Ip::Vrf::Mdt::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Mdt::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (mulicast_address.is_set || is_set(mulicast_address.yfilter)) leaf_name_data.push_back(mulicast_address.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_list.is_set || is_set(threshold_list.yfilter)) leaf_name_data.push_back(threshold_list.get_name_leafdata());
    if (wildcard_bits.is_set || is_set(wildcard_bits.yfilter)) leaf_name_data.push_back(wildcard_bits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Mdt::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Mdt::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::Mdt::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mulicast-address")
    {
        mulicast_address = value;
        mulicast_address.value_namespace = name_space;
        mulicast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-list")
    {
        threshold_list = value;
        threshold_list.value_namespace = name_space;
        threshold_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildcard-bits")
    {
        wildcard_bits = value;
        wildcard_bits.value_namespace = name_space;
        wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Mdt::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "mulicast-address")
    {
        mulicast_address.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold-list")
    {
        threshold_list.yfilter = yfilter;
    }
    if(value_path == "wildcard-bits")
    {
        wildcard_bits.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Mdt::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "mulicast-address" || name == "threshold" || name == "threshold-list" || name == "wildcard-bits")
        return true;
    return false;
}

Native::Ip::Vrf::RouteTarget::RouteTarget()
    :
    direction{YType::enumeration, "direction"},
    target{YType::str, "target"}
{

    yang_name = "route-target"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::RouteTarget::~RouteTarget()
{
}

bool Native::Ip::Vrf::RouteTarget::has_data() const
{
    return direction.is_set
	|| target.is_set;
}

bool Native::Ip::Vrf::RouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(target.yfilter);
}

std::string Native::Ip::Vrf::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target" <<"[direction='" <<direction <<"']" <<"[target='" <<target <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (target.is_set || is_set(target.yfilter)) leaf_name_data.push_back(target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target")
    {
        target = value;
        target.value_namespace = name_space;
        target.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "target")
    {
        target.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "target")
        return true;
    return false;
}

Native::Ip::Vrf::Vpn::Vpn()
    :
    id{YType::str, "id"}
{

    yang_name = "vpn"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Vpn::~Vpn()
{
}

bool Native::Ip::Vrf::Vpn::has_data() const
{
    return id.is_set;
}

bool Native::Ip::Vrf::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Ip::Vrf::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Ip::Wccp::Wccp()
    :
    source_interface{YType::str, "source-interface"}
    	,
    check(std::make_shared<Native::Ip::Wccp::Check>())
	,web_cache(std::make_shared<Native::Ip::Wccp::WebCache>())
{
    check->parent = this;
    web_cache->parent = this;

    yang_name = "wccp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Wccp::~Wccp()
{
}

bool Native::Ip::Wccp::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    return source_interface.is_set
	|| (check !=  nullptr && check->has_data())
	|| (web_cache !=  nullptr && web_cache->has_data());
}

bool Native::Ip::Wccp::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (check !=  nullptr && check->has_operation())
	|| (web_cache !=  nullptr && web_cache->has_operation());
}

std::string Native::Ip::Wccp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wccp:wccp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Wccp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::Ip::Wccp::Check>();
        }
        return check;
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
        auto c = std::make_shared<Native::Ip::Wccp::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

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
        auto c = std::make_shared<Native::Ip::Wccp::WccpList>();
        c->parent = this;
        wccp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Ip::Wccp::WebCache>();
        }
        return web_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check != nullptr)
    {
        children["check"] = check;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

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

void Native::Ip::Wccp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check" || name == "vrf" || name == "wccp-list" || name == "web-cache" || name == "source-interface")
        return true;
    return false;
}

Native::Ip::Wccp::Check::Check()
    :
    acl(std::make_shared<Native::Ip::Wccp::Check::Acl>())
	,services(std::make_shared<Native::Ip::Wccp::Check::Services>())
{
    acl->parent = this;
    services->parent = this;

    yang_name = "check"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Wccp::Check::~Check()
{
}

bool Native::Ip::Wccp::Check::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (services !=  nullptr && services->has_data());
}

bool Native::Ip::Wccp::Check::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (services !=  nullptr && services->has_operation());
}

std::string Native::Ip::Wccp::Check::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Check::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Wccp::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Ip::Wccp::Check::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "services")
    {
        if(services == nullptr)
        {
            services = std::make_shared<Native::Ip::Wccp::Check::Services>();
        }
        return services;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(services != nullptr)
    {
        children["services"] = services;
    }

    return children;
}

void Native::Ip::Wccp::Check::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Wccp::Check::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Wccp::Check::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "services")
        return true;
    return false;
}

Native::Ip::Wccp::Check::Acl::Acl()
    :
    outbound{YType::empty, "outbound"}
{

    yang_name = "acl"; yang_parent_name = "check"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Wccp::Check::Acl::~Acl()
{
}

bool Native::Ip::Wccp::Check::Acl::has_data() const
{
    return outbound.is_set;
}

bool Native::Ip::Wccp::Check::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outbound.yfilter);
}

std::string Native::Ip::Wccp::Check::Acl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/check/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::Check::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Check::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outbound.is_set || is_set(outbound.yfilter)) leaf_name_data.push_back(outbound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Wccp::Check::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::Check::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Wccp::Check::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outbound")
    {
        outbound = value;
        outbound.value_namespace = name_space;
        outbound.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::Check::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outbound")
    {
        outbound.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::Check::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outbound")
        return true;
    return false;
}

Native::Ip::Wccp::Check::Services::Services()
    :
    all{YType::empty, "all"}
{

    yang_name = "services"; yang_parent_name = "check"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Wccp::Check::Services::~Services()
{
}

bool Native::Ip::Wccp::Check::Services::has_data() const
{
    return all.is_set;
}

bool Native::Ip::Wccp::Check::Services::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Ip::Wccp::Check::Services::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/check/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::Check::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Check::Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Wccp::Check::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::Check::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Wccp::Check::Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::Check::Services::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::Check::Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Ip::Wccp::Vrf::Vrf()
    :
    name{YType::str, "name"},
    source_interface{YType::str, "source-interface"}
    	,
    web_cache(std::make_shared<Native::Ip::Wccp::Vrf::WebCache>())
{
    web_cache->parent = this;

    yang_name = "vrf"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (web_cache !=  nullptr && web_cache->has_operation());
}

std::string Native::Ip::Wccp::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

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

void Native::Ip::Wccp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wccp-list" || name == "web-cache" || name == "name" || name == "source-interface")
        return true;
    return false;
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

    yang_name = "wccp-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_list.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(redirect_list.yfilter)
	|| ydk::is_set(snmp_disabled.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Wccp::Vrf::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Vrf::WccpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.yfilter)) leaf_name_data.push_back(redirect_list.get_name_leafdata());
    if (snmp_disabled.is_set || is_set(snmp_disabled.yfilter)) leaf_name_data.push_back(snmp_disabled.get_name_leafdata());

    return leaf_name_data;

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

void Native::Ip::Wccp::Vrf::WccpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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

void Native::Ip::Wccp::Vrf::WccpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
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

bool Native::Ip::Wccp::Vrf::WccpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "id" || name == "group-address" || name == "group-list" || name == "mode" || name == "redirect-list" || name == "snmp-disabled")
        return true;
    return false;
}

Native::Ip::Wccp::Vrf::WccpList::Password::Password()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{

    yang_name = "password"; yang_parent_name = "wccp-list"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(encryption.yfilter);
}

std::string Native::Ip::Wccp::Vrf::WccpList::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Vrf::WccpList::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());

    return leaf_name_data;

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

void Native::Ip::Wccp::Vrf::WccpList::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::Vrf::WccpList::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::Vrf::WccpList::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-key" || name == "encryption")
        return true;
    return false;
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

    yang_name = "web-cache"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
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
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{

    yang_name = "password"; yang_parent_name = "web-cache"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(encryption.yfilter);
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

    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());

    return leaf_name_data;

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

void Native::Ip::Wccp::Vrf::WebCache::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::Vrf::WebCache::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::Vrf::WebCache::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-key" || name == "encryption")
        return true;
    return false;
}

Native::Ip::Wccp::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_address{YType::str, "group-address"},
    group_list{YType::str, "group-list"},
    mode{YType::enumeration, "mode"},
    redirect_list{YType::str, "redirect-list"},
    snmp_disabled{YType::empty, "snmp-disabled"}
    	,
    password(std::make_shared<Native::Ip::Wccp::WccpList::Password>())
{
    password->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Wccp::WccpList::~WccpList()
{
}

bool Native::Ip::Wccp::WccpList::has_data() const
{
    return id.is_set
	|| group_address.is_set
	|| group_list.is_set
	|| mode.is_set
	|| redirect_list.is_set
	|| snmp_disabled.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Wccp::WccpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_list.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(redirect_list.yfilter)
	|| ydk::is_set(snmp_disabled.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Wccp::WccpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::WccpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.yfilter)) leaf_name_data.push_back(redirect_list.get_name_leafdata());
    if (snmp_disabled.is_set || is_set(snmp_disabled.yfilter)) leaf_name_data.push_back(snmp_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Wccp::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Wccp::WccpList::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Ip::Wccp::WccpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
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

void Native::Ip::Wccp::WccpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
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

bool Native::Ip::Wccp::WccpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "id" || name == "group-address" || name == "group-list" || name == "mode" || name == "redirect-list" || name == "snmp-disabled")
        return true;
    return false;
}

Native::Ip::Wccp::WccpList::Password::Password()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{

    yang_name = "password"; yang_parent_name = "wccp-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Wccp::WccpList::Password::~Password()
{
}

bool Native::Ip::Wccp::WccpList::Password::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::Ip::Wccp::WccpList::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(encryption.yfilter);
}

std::string Native::Ip::Wccp::WccpList::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::WccpList::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Wccp::WccpList::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::WccpList::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Wccp::WccpList::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::WccpList::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::WccpList::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-key" || name == "encryption")
        return true;
    return false;
}

Native::Ip::Wccp::WebCache::WebCache()
    :
    group_address{YType::str, "group-address"},
    group_list{YType::str, "group-list"},
    mode{YType::enumeration, "mode"},
    redirect_list{YType::str, "redirect-list"},
    snmp_disabled{YType::empty, "snmp-disabled"}
    	,
    password(std::make_shared<Native::Ip::Wccp::WebCache::Password>())
{
    password->parent = this;

    yang_name = "web-cache"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Wccp::WebCache::~WebCache()
{
}

bool Native::Ip::Wccp::WebCache::has_data() const
{
    return group_address.is_set
	|| group_list.is_set
	|| mode.is_set
	|| redirect_list.is_set
	|| snmp_disabled.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Wccp::WebCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_list.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(redirect_list.yfilter)
	|| ydk::is_set(snmp_disabled.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Wccp::WebCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::WebCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.yfilter)) leaf_name_data.push_back(redirect_list.get_name_leafdata());
    if (snmp_disabled.is_set || is_set(snmp_disabled.yfilter)) leaf_name_data.push_back(snmp_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Wccp::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Wccp::WebCache::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Ip::Wccp::WebCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::Wccp::WebCache::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::Wccp::WebCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "group-address" || name == "group-list" || name == "mode" || name == "redirect-list" || name == "snmp-disabled")
        return true;
    return false;
}

Native::Ip::Wccp::WebCache::Password::Password()
    :
    clear_key{YType::str, "clear-key"},
    encryption{YType::enumeration, "encryption"}
{

    yang_name = "password"; yang_parent_name = "web-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Wccp::WebCache::Password::~Password()
{
}

bool Native::Ip::Wccp::WebCache::Password::has_data() const
{
    return clear_key.is_set
	|| encryption.is_set;
}

bool Native::Ip::Wccp::WebCache::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear_key.yfilter)
	|| ydk::is_set(encryption.yfilter);
}

std::string Native::Ip::Wccp::WebCache::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/web-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::WebCache::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::WebCache::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Wccp::WebCache::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Wccp::WebCache::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Wccp::WebCache::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::WebCache::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::WebCache::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-key" || name == "encryption")
        return true;
    return false;
}

Native::Ipv6::Ipv6()
    :
    flowset{YType::empty, "flowset"},
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

    yang_name = "ipv6"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::~Ipv6()
{
}

bool Native::Ipv6::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return flowset.is_set
	|| source_route.is_set
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
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flowset.yfilter)
	|| ydk::is_set(source_route.yfilter)
	|| ydk::is_set(unicast_routing.yfilter)
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
    if (source_route.is_set || is_set(source_route.yfilter)) leaf_name_data.push_back(source_route.get_name_leafdata());
    if (unicast_routing.is_set || is_set(unicast_routing.yfilter)) leaf_name_data.push_back(unicast_routing.get_name_leafdata());

    return leaf_name_data;

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

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
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

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
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

void Native::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flowset")
    {
        flowset = value;
        flowset.value_namespace = name_space;
        flowset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-route")
    {
        source_route = value;
        source_route.value_namespace = name_space;
        source_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-routing")
    {
        unicast_routing = value;
        unicast_routing.value_namespace = name_space;
        unicast_routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flowset")
    {
        flowset.yfilter = yfilter;
    }
    if(value_path == "source-route")
    {
        source_route.yfilter = yfilter;
    }
    if(value_path == "unicast-routing")
    {
        unicast_routing.yfilter = yfilter;
    }
}

bool Native::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "cef" || name == "destination-guard" || name == "dhcp" || name == "mld" || name == "multicast" || name == "multicast-routing" || name == "nd" || name == "neighbor" || name == "pim" || name == "prefix-list" || name == "rip" || name == "route" || name == "router" || name == "source-guard" || name == "spd" || name == "flowset" || name == "source-route" || name == "unicast-routing")
        return true;
    return false;
}

Native::Ipv6::AccessList::AccessList()
    :
    match_local_traffic{YType::empty, "Cisco-IOS-XE-acl:match-local-traffic"}
    	,
    log_update(std::make_shared<Native::Ipv6::AccessList::LogUpdate>())
{
    log_update->parent = this;

    yang_name = "access-list"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
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

void Native::Ipv6::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-local-traffic")
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
    if(name == "log-update" || name == "named-acl" || name == "named-rb-acl" || name == "match-local-traffic")
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

std::shared_ptr<Entity> Native::Ipv6::AccessList::LogUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::AccessList::LogUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Ipv6::AccessList::NamedAcl::NamedAcl()
    :
    name{YType::str, "name"}
    	,
    default_(std::make_shared<Native::Ipv6::AccessList::NamedAcl::Default_>())
{
    default_->parent = this;

    yang_name = "named-acl"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
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
    path_buffer << "Cisco-IOS-XE-acl:named-acl" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

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
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(auth.yfilter)
	|| ydk::is_set(dest_option.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(hbh.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(mobility.yfilter)
	|| ydk::is_set(mobility_type.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(msg_type_case.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(routing.yfilter)
	|| ydk::is_set(routing_type.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(source_prefix.yfilter)
	|| ydk::is_set(source_wildcard_bits.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(urg.yfilter);
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

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (dest_option.is_set || is_set(dest_option.yfilter)) leaf_name_data.push_back(dest_option.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (hbh.is_set || is_set(hbh.yfilter)) leaf_name_data.push_back(hbh.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mobility.is_set || is_set(mobility.yfilter)) leaf_name_data.push_back(mobility.get_name_leafdata());
    if (mobility_type.is_set || is_set(mobility_type.yfilter)) leaf_name_data.push_back(mobility_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type_case.is_set || is_set(msg_type_case.yfilter)) leaf_name_data.push_back(msg_type_case.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (routing_type.is_set || is_set(routing_type.yfilter)) leaf_name_data.push_back(routing_type.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.yfilter)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.yfilter)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());

    return leaf_name_data;

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

void Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case = value;
        msg_type_case.value_namespace = name_space;
        msg_type_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
        source_prefix.value_namespace = name_space;
        source_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
        source_wildcard_bits.value_namespace = name_space;
        source_wildcard_bits.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
    if(value_path == "dest-option")
    {
        dest_option.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
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
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
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
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
    if(value_path == "routing-type")
    {
        routing_type.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "source-prefix")
    {
        source_prefix.yfilter = yfilter;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits.yfilter = yfilter;
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
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "action" || name == "any" || name == "auth" || name == "dest-option" || name == "destination-address" || name == "destination-any" || name == "destination-host" || name == "destination-prefix" || name == "destination-wildcard-bits" || name == "dscp" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2" || name == "established" || name == "fin" || name == "flow-label" || name == "fragments" || name == "hbh" || name == "log" || name == "log-input" || name == "mobility" || name == "mobility-type" || name == "msg-code" || name == "msg-type-case" || name == "named-msg-type" || name == "protocol" || name == "psh" || name == "routing" || name == "routing-type" || name == "rst" || name == "source-address" || name == "source-host" || name == "source-prefix" || name == "source-wildcard-bits" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "syn" || name == "time-range" || name == "urg")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedAcl::Default_::Default_()
{

    yang_name = "default"; yang_parent_name = "named-acl"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Native::Ipv6::AccessList::NamedAcl::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedAcl::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Native::Ipv6::AccessList::NamedAcl::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::AccessList::NamedAcl::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::AccessList::NamedAcl::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

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

void Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
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

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(auth.yfilter)
	|| ydk::is_set(dest_option.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(hbh.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(mobility.yfilter)
	|| ydk::is_set(mobility_type.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(msg_type_case.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(routing.yfilter)
	|| ydk::is_set(routing_type.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(source_prefix.yfilter)
	|| ydk::is_set(source_wildcard_bits.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(urg.yfilter);
}

std::string Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (dest_option.is_set || is_set(dest_option.yfilter)) leaf_name_data.push_back(dest_option.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (hbh.is_set || is_set(hbh.yfilter)) leaf_name_data.push_back(hbh.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mobility.is_set || is_set(mobility.yfilter)) leaf_name_data.push_back(mobility.get_name_leafdata());
    if (mobility_type.is_set || is_set(mobility_type.yfilter)) leaf_name_data.push_back(mobility_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type_case.is_set || is_set(msg_type_case.yfilter)) leaf_name_data.push_back(msg_type_case.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (routing_type.is_set || is_set(routing_type.yfilter)) leaf_name_data.push_back(routing_type.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.yfilter)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.yfilter)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());

    return leaf_name_data;

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

void Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case = value;
        msg_type_case.value_namespace = name_space;
        msg_type_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
        source_prefix.value_namespace = name_space;
        source_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
        source_wildcard_bits.value_namespace = name_space;
        source_wildcard_bits.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
    if(value_path == "dest-option")
    {
        dest_option.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
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
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
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
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
    if(value_path == "routing-type")
    {
        routing_type.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "source-prefix")
    {
        source_prefix.yfilter = yfilter;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits.yfilter = yfilter;
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
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "action" || name == "any" || name == "auth" || name == "dest-option" || name == "destination-address" || name == "destination-any" || name == "destination-host" || name == "destination-prefix" || name == "destination-wildcard-bits" || name == "dscp" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2" || name == "established" || name == "fin" || name == "flow-label" || name == "fragments" || name == "hbh" || name == "log" || name == "log-input" || name == "mobility" || name == "mobility-type" || name == "msg-code" || name == "msg-type-case" || name == "named-msg-type" || name == "protocol" || name == "psh" || name == "routing" || name == "routing-type" || name == "rst" || name == "source-address" || name == "source-host" || name == "source-prefix" || name == "source-wildcard-bits" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "syn" || name == "time-range" || name == "urg")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedRbAcl::NamedRbAcl()
    :
    name{YType::str, "name"},
    role_based{YType::empty, "role-based"}
    	,
    default_(std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::Default_>())
{
    default_->parent = this;

    yang_name = "named-rb-acl"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
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
    path_buffer << "Cisco-IOS-XE-acl:named-rb-acl" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedRbAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (role_based.is_set || is_set(role_based.yfilter)) leaf_name_data.push_back(role_based.get_name_leafdata());

    return leaf_name_data;

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
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(auth.yfilter)
	|| ydk::is_set(dest_option.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(hbh.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(mobility.yfilter)
	|| ydk::is_set(mobility_type.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(msg_type_case.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(routing.yfilter)
	|| ydk::is_set(routing_type.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(source_prefix.yfilter)
	|| ydk::is_set(source_wildcard_bits.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(urg.yfilter);
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

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (dest_option.is_set || is_set(dest_option.yfilter)) leaf_name_data.push_back(dest_option.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (hbh.is_set || is_set(hbh.yfilter)) leaf_name_data.push_back(hbh.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mobility.is_set || is_set(mobility.yfilter)) leaf_name_data.push_back(mobility.get_name_leafdata());
    if (mobility_type.is_set || is_set(mobility_type.yfilter)) leaf_name_data.push_back(mobility_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type_case.is_set || is_set(msg_type_case.yfilter)) leaf_name_data.push_back(msg_type_case.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (routing_type.is_set || is_set(routing_type.yfilter)) leaf_name_data.push_back(routing_type.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.yfilter)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.yfilter)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());

    return leaf_name_data;

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

void Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case = value;
        msg_type_case.value_namespace = name_space;
        msg_type_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
        source_prefix.value_namespace = name_space;
        source_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
        source_wildcard_bits.value_namespace = name_space;
        source_wildcard_bits.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
    if(value_path == "dest-option")
    {
        dest_option.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
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
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
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
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
    if(value_path == "routing-type")
    {
        routing_type.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "source-prefix")
    {
        source_prefix.yfilter = yfilter;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits.yfilter = yfilter;
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
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "action" || name == "any" || name == "auth" || name == "dest-option" || name == "destination-address" || name == "destination-any" || name == "destination-host" || name == "destination-prefix" || name == "destination-wildcard-bits" || name == "dscp" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2" || name == "established" || name == "fin" || name == "flow-label" || name == "fragments" || name == "hbh" || name == "log" || name == "log-input" || name == "mobility" || name == "mobility-type" || name == "msg-code" || name == "msg-type-case" || name == "named-msg-type" || name == "protocol" || name == "psh" || name == "routing" || name == "routing-type" || name == "rst" || name == "source-address" || name == "source-host" || name == "source-prefix" || name == "source-wildcard-bits" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "syn" || name == "time-range" || name == "urg")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedRbAcl::Default_::Default_()
{

    yang_name = "default"; yang_parent_name = "named-rb-acl"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Native::Ipv6::AccessList::NamedRbAcl::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedRbAcl::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Native::Ipv6::AccessList::NamedRbAcl::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::AccessList::NamedRbAcl::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

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

void Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
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

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(auth.yfilter)
	|| ydk::is_set(dest_option.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_any.yfilter)
	|| ydk::is_set(destination_host.yfilter)
	|| ydk::is_set(destination_prefix.yfilter)
	|| ydk::is_set(destination_wildcard_bits.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(hbh.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(mobility.yfilter)
	|| ydk::is_set(mobility_type.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(msg_type_case.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(routing.yfilter)
	|| ydk::is_set(routing_type.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_host.yfilter)
	|| ydk::is_set(source_prefix.yfilter)
	|| ydk::is_set(source_wildcard_bits.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(urg.yfilter);
}

std::string Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());
    if (dest_option.is_set || is_set(dest_option.yfilter)) leaf_name_data.push_back(dest_option.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_any.is_set || is_set(destination_any.yfilter)) leaf_name_data.push_back(destination_any.get_name_leafdata());
    if (destination_host.is_set || is_set(destination_host.yfilter)) leaf_name_data.push_back(destination_host.get_name_leafdata());
    if (destination_prefix.is_set || is_set(destination_prefix.yfilter)) leaf_name_data.push_back(destination_prefix.get_name_leafdata());
    if (destination_wildcard_bits.is_set || is_set(destination_wildcard_bits.yfilter)) leaf_name_data.push_back(destination_wildcard_bits.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (hbh.is_set || is_set(hbh.yfilter)) leaf_name_data.push_back(hbh.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mobility.is_set || is_set(mobility.yfilter)) leaf_name_data.push_back(mobility.get_name_leafdata());
    if (mobility_type.is_set || is_set(mobility_type.yfilter)) leaf_name_data.push_back(mobility_type.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type_case.is_set || is_set(msg_type_case.yfilter)) leaf_name_data.push_back(msg_type_case.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (routing_type.is_set || is_set(routing_type.yfilter)) leaf_name_data.push_back(routing_type.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.yfilter)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (source_prefix.is_set || is_set(source_prefix.yfilter)) leaf_name_data.push_back(source_prefix.get_name_leafdata());
    if (source_wildcard_bits.is_set || is_set(source_wildcard_bits.yfilter)) leaf_name_data.push_back(source_wildcard_bits.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());

    return leaf_name_data;

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

void Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-any")
    {
        destination_any = value;
        destination_any.value_namespace = name_space;
        destination_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-host")
    {
        destination_host = value;
        destination_host.value_namespace = name_space;
        destination_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix = value;
        destination_prefix.value_namespace = name_space;
        destination_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits = value;
        destination_wildcard_bits.value_namespace = name_space;
        destination_wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case = value;
        msg_type_case.value_namespace = name_space;
        msg_type_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-host")
    {
        source_host = value;
        source_host.value_namespace = name_space;
        source_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-prefix")
    {
        source_prefix = value;
        source_prefix.value_namespace = name_space;
        source_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits = value;
        source_wildcard_bits.value_namespace = name_space;
        source_wildcard_bits.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
    if(value_path == "dest-option")
    {
        dest_option.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-any")
    {
        destination_any.yfilter = yfilter;
    }
    if(value_path == "destination-host")
    {
        destination_host.yfilter = yfilter;
    }
    if(value_path == "destination-prefix")
    {
        destination_prefix.yfilter = yfilter;
    }
    if(value_path == "destination-wildcard-bits")
    {
        destination_wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
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
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
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
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "msg-type-case")
    {
        msg_type_case.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
    if(value_path == "routing-type")
    {
        routing_type.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-host")
    {
        source_host.yfilter = yfilter;
    }
    if(value_path == "source-prefix")
    {
        source_prefix.yfilter = yfilter;
    }
    if(value_path == "source-wildcard-bits")
    {
        source_wildcard_bits.yfilter = yfilter;
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
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
}

bool Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "action" || name == "any" || name == "auth" || name == "dest-option" || name == "destination-address" || name == "destination-any" || name == "destination-host" || name == "destination-prefix" || name == "destination-wildcard-bits" || name == "dscp" || name == "dst-eq" || name == "dst-gt" || name == "dst-lt" || name == "dst-neq" || name == "dst-range1" || name == "dst-range2" || name == "established" || name == "fin" || name == "flow-label" || name == "fragments" || name == "hbh" || name == "log" || name == "log-input" || name == "mobility" || name == "mobility-type" || name == "msg-code" || name == "msg-type-case" || name == "named-msg-type" || name == "protocol" || name == "psh" || name == "routing" || name == "routing-type" || name == "rst" || name == "source-address" || name == "source-host" || name == "source-prefix" || name == "source-wildcard-bits" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "syn" || name == "time-range" || name == "urg")
        return true;
    return false;
}

Native::Ipv6::Cef::Cef()
    :
    distributed{YType::empty, "Cisco-IOS-XE-cef:distributed"}
    	,
    accounting(std::make_shared<Native::Ipv6::Cef::Accounting>())
	,load_sharing(std::make_shared<Native::Ipv6::Cef::LoadSharing>())
	,optimize(std::make_shared<Native::Ipv6::Cef::Optimize>())
	,traffic_statistics(std::make_shared<Native::Ipv6::Cef::TrafficStatistics>())
{
    accounting->parent = this;
    load_sharing->parent = this;
    optimize->parent = this;
    traffic_statistics->parent = this;

    yang_name = "cef"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Cef::~Cef()
{
}

bool Native::Ipv6::Cef::has_data() const
{
    return distributed.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (load_sharing !=  nullptr && load_sharing->has_data())
	|| (optimize !=  nullptr && optimize->has_data())
	|| (traffic_statistics !=  nullptr && traffic_statistics->has_data());
}

bool Native::Ipv6::Cef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distributed.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (load_sharing !=  nullptr && load_sharing->has_operation())
	|| (optimize !=  nullptr && optimize->has_operation())
	|| (traffic_statistics !=  nullptr && traffic_statistics->has_operation());
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

    if(child_yang_name == "load-sharing")
    {
        if(load_sharing == nullptr)
        {
            load_sharing = std::make_shared<Native::Ipv6::Cef::LoadSharing>();
        }
        return load_sharing;
    }

    if(child_yang_name == "optimize")
    {
        if(optimize == nullptr)
        {
            optimize = std::make_shared<Native::Ipv6::Cef::Optimize>();
        }
        return optimize;
    }

    if(child_yang_name == "traffic-statistics")
    {
        if(traffic_statistics == nullptr)
        {
            traffic_statistics = std::make_shared<Native::Ipv6::Cef::TrafficStatistics>();
        }
        return traffic_statistics;
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

    if(load_sharing != nullptr)
    {
        children["load-sharing"] = load_sharing;
    }

    if(optimize != nullptr)
    {
        children["optimize"] = optimize;
    }

    if(traffic_statistics != nullptr)
    {
        children["traffic-statistics"] = traffic_statistics;
    }

    return children;
}

void Native::Ipv6::Cef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distributed")
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
    if(name == "accounting" || name == "load-sharing" || name == "optimize" || name == "traffic-statistics" || name == "distributed")
        return true;
    return false;
}

Native::Ipv6::Cef::Accounting::Accounting()
    :
    load_balance_hash{YType::empty, "load-balance-hash"},
    non_recursive{YType::empty, "non-recursive"},
    per_prefix{YType::empty, "per-prefix"},
    prefix_length{YType::empty, "prefix-length"}
{

    yang_name = "accounting"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Cef::Accounting::~Accounting()
{
}

bool Native::Ipv6::Cef::Accounting::has_data() const
{
    return load_balance_hash.is_set
	|| non_recursive.is_set
	|| per_prefix.is_set
	|| prefix_length.is_set;
}

bool Native::Ipv6::Cef::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_balance_hash.yfilter)
	|| ydk::is_set(non_recursive.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
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

    if (load_balance_hash.is_set || is_set(load_balance_hash.yfilter)) leaf_name_data.push_back(load_balance_hash.get_name_leafdata());
    if (non_recursive.is_set || is_set(non_recursive.yfilter)) leaf_name_data.push_back(non_recursive.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

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

void Native::Ipv6::Cef::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-balance-hash")
    {
        load_balance_hash = value;
        load_balance_hash.value_namespace = name_space;
        load_balance_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-recursive")
    {
        non_recursive = value;
        non_recursive.value_namespace = name_space;
        non_recursive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-balance-hash")
    {
        load_balance_hash.yfilter = yfilter;
    }
    if(value_path == "non-recursive")
    {
        non_recursive.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance-hash" || name == "non-recursive" || name == "per-prefix" || name == "prefix-length")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::LoadSharing()
    :
    algorithm(std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm>())
	,key_control(std::make_shared<Native::Ipv6::Cef::LoadSharing::KeyControl>())
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

std::shared_ptr<Entity> Native::Ipv6::Cef::LoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::LoadSharing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    if(key_control != nullptr)
    {
        children["key-control"] = key_control;
    }

    return children;
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
    include_ports(nullptr) // presence node
	,original(std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::Original>())
	,tunnel(std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel>())
	,universal(std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::Universal>())
{
    original->parent = this;
    tunnel->parent = this;
    universal->parent = this;

    yang_name = "algorithm"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::~Algorithm()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::has_data() const
{
    return (include_ports !=  nullptr && include_ports->has_data())
	|| (original !=  nullptr && original->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (universal !=  nullptr && universal->has_data());
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| (include_ports !=  nullptr && include_ports->has_operation())
	|| (original !=  nullptr && original->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (universal !=  nullptr && universal->has_operation());
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

std::shared_ptr<Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include-ports")
    {
        if(include_ports == nullptr)
        {
            include_ports = std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts>();
        }
        return include_ports;
    }

    if(child_yang_name == "original")
    {
        if(original == nullptr)
        {
            original = std::make_shared<Native::Ipv6::Cef::LoadSharing::Algorithm::Original>();
        }
        return original;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(include_ports != nullptr)
    {
        children["include-ports"] = include_ports;
    }

    if(original != nullptr)
    {
        children["original"] = original;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    if(universal != nullptr)
    {
        children["universal"] = universal;
    }

    return children;
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-ports" || name == "original" || name == "tunnel" || name == "universal")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::IncludePorts()
    :
    destination(nullptr) // presence node
	,source(nullptr) // presence node
{

    yang_name = "include-ports"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::~IncludePorts()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::has_data() const
{
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

std::shared_ptr<Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
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

    yang_name = "destination"; yang_parent_name = "include-ports"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::~Destination()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_data() const
{
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

std::shared_ptr<Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

    yang_name = "source"; yang_parent_name = "include-ports"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::~Source()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_data() const
{
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

std::shared_ptr<Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
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

    yang_name = "destination"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::~Destination()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_data() const
{
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

std::shared_ptr<Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gtp != nullptr)
    {
        children["gtp"] = gtp;
    }

    return children;
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

    yang_name = "gtp"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::~Gtp()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_data() const
{
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

std::shared_ptr<Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::Original::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::Original::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::Tunnel()
    :
    fixed_id{YType::str, "fixed-id"},
    tunnel{YType::empty, "tunnel"}
{

    yang_name = "tunnel"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::~Tunnel()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::has_data() const
{
    return fixed_id.is_set
	|| tunnel.is_set;
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter)
	|| ydk::is_set(tunnel.yfilter);
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

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-id" || name == "tunnel")
        return true;
    return false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::Universal()
    :
    fixed_id{YType::str, "fixed-id"},
    universal{YType::empty, "universal"}
{

    yang_name = "universal"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::~Universal()
{
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::has_data() const
{
    return fixed_id.is_set
	|| universal.is_set;
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter)
	|| ydk::is_set(universal.yfilter);
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

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());
    if (universal.is_set || is_set(universal.yfilter)) leaf_name_data.push_back(universal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "universal")
    {
        universal = value;
        universal.value_namespace = name_space;
        universal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
    if(value_path == "universal")
    {
        universal.yfilter = yfilter;
    }
}

bool Native::Ipv6::Cef::LoadSharing::Algorithm::Universal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-id" || name == "universal")
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

std::shared_ptr<Entity> Native::Ipv6::Cef::LoadSharing::KeyControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::LoadSharing::KeyControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ipv6::Cef::Optimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::Optimize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
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

std::shared_ptr<Entity> Native::Ipv6::Cef::Optimize::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::Optimize::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ipv6::Cef::TrafficStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Cef::TrafficStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Ipv6::DestinationGuard::DestinationGuard()
{

    yang_name = "destination-guard"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
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
    path_buffer << "policy" <<"[destination-guard-policy-name='" <<destination_guard_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::DestinationGuard::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_guard_policy_name.is_set || is_set(destination_guard_policy_name.yfilter)) leaf_name_data.push_back(destination_guard_policy_name.get_name_leafdata());

    return leaf_name_data;

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

std::shared_ptr<Entity> Native::Ipv6::DestinationGuard::Policy::Enforcement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::DestinationGuard::Policy::Enforcement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    guard(std::make_shared<Native::Ipv6::Dhcp::Guard>())
	,server(std::make_shared<Native::Ipv6::Dhcp::Server>())
{
    guard->parent = this;
    server->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (guard !=  nullptr && guard->has_operation())
	|| (server !=  nullptr && server->has_operation());
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

void Native::Ipv6::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guard" || name == "pool" || name == "server")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Guard::Guard()
{

    yang_name = "guard"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
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
{
    device_role->parent = this;

    yang_name = "policy"; yang_parent_name = "guard"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(dhcp_guard_policy_name.yfilter)
	|| (device_role !=  nullptr && device_role->has_operation());
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
    path_buffer << "policy" <<"[dhcp-guard-policy-name='" <<dhcp_guard_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Guard::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_guard_policy_name.is_set || is_set(dhcp_guard_policy_name.yfilter)) leaf_name_data.push_back(dhcp_guard_policy_name.get_name_leafdata());

    return leaf_name_data;

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
    if(name == "device-role" || name == "dhcp-guard-policy-name")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::DeviceRole()
    :
    client{YType::empty, "client"},
    server{YType::empty, "server"}
{

    yang_name = "device-role"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(server.yfilter);
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

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

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

void Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Guard::Policy::DeviceRole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "server")
        return true;
    return false;
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

    yang_name = "pool"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Dhcp::Pool::~Pool()
{
}

bool Native::Ipv6::Dhcp::Pool::has_data() const
{
    for (std::size_t index=0; index<link_address.size(); index++)
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
	|| domain_name.is_set
	|| vrf.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Ipv6::Dhcp::Pool::has_operation() const
{
    for (std::size_t index=0; index<link_address.size(); index++)
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
	|| ydk::is_set(dns_server.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (address !=  nullptr && address->has_operation());
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
    path_buffer << "Cisco-IOS-XE-dhcp:pool" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());
    return leaf_name_data;

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

    if(child_yang_name == "link-address")
    {
        for(auto const & c : link_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ipv6::Dhcp::Pool::LinkAddress>();
        c->parent = this;
        link_address.push_back(c);
        return c;
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

    for (auto const & c : link_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ipv6::Dhcp::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "dns-server")
    {
        dns_server.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "link-address" || name == "name" || name == "dns-server" || name == "domain-name" || name == "vrf")
        return true;
    return false;
}

Native::Ipv6::Dhcp::Pool::Address::Address()
{

    yang_name = "address"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
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
    path_buffer << "prefix" <<"[ipv6-address='" <<ipv6_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::Address::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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
    preferred_lifetime{YType::str, "preferred-lifetime"},
    valid_lifetime{YType::str, "valid-lifetime"}
{

    yang_name = "lifetime"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(preferred_lifetime.yfilter)
	|| ydk::is_set(valid_lifetime.yfilter);
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

    if (preferred_lifetime.is_set || is_set(preferred_lifetime.yfilter)) leaf_name_data.push_back(preferred_lifetime.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.yfilter)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());

    return leaf_name_data;

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

void Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime = value;
        preferred_lifetime.value_namespace = name_space;
        preferred_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
        valid_lifetime.value_namespace = name_space;
        valid_lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime.yfilter = yfilter;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime.yfilter = yfilter;
    }
}

bool Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preferred-lifetime" || name == "valid-lifetime")
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
    path_buffer << "link-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Dhcp::Pool::LinkAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Dhcp::Pool::LinkAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Dhcp::Pool::LinkAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

std::shared_ptr<Entity> Native::Ipv6::Dhcp::Server::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Dhcp::Server::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Ipv6::Mld::Mld()
    :
    ssm_map(std::make_shared<Native::Ipv6::Mld::SsmMap>())
{
    ssm_map->parent = this;

    yang_name = "mld"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Mld::~Mld()
{
}

bool Native::Ipv6::Mld::has_data() const
{
    return (ssm_map !=  nullptr && ssm_map->has_data());
}

bool Native::Ipv6::Mld::has_operation() const
{
    return is_set(yfilter)
	|| (ssm_map !=  nullptr && ssm_map->has_operation());
}

std::string Native::Ipv6::Mld::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mld:mld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Mld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map")
    {
        if(ssm_map == nullptr)
        {
            ssm_map = std::make_shared<Native::Ipv6::Mld::SsmMap>();
        }
        return ssm_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ssm_map != nullptr)
    {
        children["ssm-map"] = ssm_map;
    }

    return children;
}

void Native::Ipv6::Mld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Mld::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Mld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-map")
        return true;
    return false;
}

Native::Ipv6::Mld::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
    	,
    query(std::make_shared<Native::Ipv6::Mld::SsmMap::Query>())
	,static_(std::make_shared<Native::Ipv6::Mld::SsmMap::Static_>())
{
    query->parent = this;
    static_->parent = this;

    yang_name = "ssm-map"; yang_parent_name = "mld"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Mld::SsmMap::~SsmMap()
{
}

bool Native::Ipv6::Mld::SsmMap::has_data() const
{
    return enable.is_set
	|| (query !=  nullptr && query->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ipv6::Mld::SsmMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (query !=  nullptr && query->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ipv6::Mld::SsmMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/Cisco-IOS-XE-mld:mld/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Mld::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Mld::SsmMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ipv6::Mld::SsmMap::Query>();
        }
        return query;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ipv6::Mld::SsmMap::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(query != nullptr)
    {
        children["query"] = query;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ipv6::Mld::SsmMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Mld::SsmMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ipv6::Mld::SsmMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query" || name == "static" || name == "enable")
        return true;
    return false;
}

Native::Ipv6::Mld::SsmMap::Query::Query()
    :
    dns{YType::empty, "dns"}
{

    yang_name = "query"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Mld::SsmMap::Query::~Query()
{
}

bool Native::Ipv6::Mld::SsmMap::Query::has_data() const
{
    return dns.is_set;
}

bool Native::Ipv6::Mld::SsmMap::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns.yfilter);
}

std::string Native::Ipv6::Mld::SsmMap::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/Cisco-IOS-XE-mld:mld/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Mld::SsmMap::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Mld::SsmMap::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns.is_set || is_set(dns.yfilter)) leaf_name_data.push_back(dns.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::SsmMap::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::SsmMap::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Mld::SsmMap::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns")
    {
        dns = value;
        dns.value_namespace = name_space;
        dns.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Mld::SsmMap::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns")
    {
        dns.yfilter = yfilter;
    }
}

bool Native::Ipv6::Mld::SsmMap::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns")
        return true;
    return false;
}

Native::Ipv6::Mld::SsmMap::Static_::Static_()
    :
    acl{YType::str, "acl"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "static"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Mld::SsmMap::Static_::~Static_()
{
}

bool Native::Ipv6::Mld::SsmMap::Static_::has_data() const
{
    return acl.is_set
	|| source_ip.is_set;
}

bool Native::Ipv6::Mld::SsmMap::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ipv6::Mld::SsmMap::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/Cisco-IOS-XE-mld:mld/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Mld::SsmMap::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Mld::SsmMap::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::SsmMap::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::SsmMap::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Mld::SsmMap::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Mld::SsmMap::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Ipv6::Mld::SsmMap::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "source-ip")
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

void Native::Ipv6::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
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

std::shared_ptr<Entity> Native::Ipv6::Multicast::Rpf::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Multicast::Rpf::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Ipv6::MulticastRouting::MulticastRouting()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "multicast-routing"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::MulticastRouting::~MulticastRouting()
{
}

bool Native::Ipv6::MulticastRouting::has_data() const
{
    return vrf.is_set;
}

bool Native::Ipv6::MulticastRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ipv6::MulticastRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::MulticastRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multicast-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::MulticastRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::MulticastRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::MulticastRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::MulticastRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::MulticastRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ipv6::MulticastRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Ipv6::Nd::Nd()
    :
    cache(std::make_shared<Native::Ipv6::Nd::Cache>())
	,default_route(std::make_shared<Native::Ipv6::Nd::DefaultRoute>())
	,inspection(std::make_shared<Native::Ipv6::Nd::Inspection>())
	,raguard(std::make_shared<Native::Ipv6::Nd::Raguard>())
{
    cache->parent = this;
    default_route->parent = this;
    inspection->parent = this;
    raguard->parent = this;

    yang_name = "nd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Nd::~Nd()
{
}

bool Native::Ipv6::Nd::has_data() const
{
    return (cache !=  nullptr && cache->has_data())
	|| (default_route !=  nullptr && default_route->has_data())
	|| (inspection !=  nullptr && inspection->has_data())
	|| (raguard !=  nullptr && raguard->has_data());
}

bool Native::Ipv6::Nd::has_operation() const
{
    return is_set(yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (default_route !=  nullptr && default_route->has_operation())
	|| (inspection !=  nullptr && inspection->has_operation())
	|| (raguard !=  nullptr && raguard->has_operation());
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

    if(child_yang_name == "default-route")
    {
        if(default_route == nullptr)
        {
            default_route = std::make_shared<Native::Ipv6::Nd::DefaultRoute>();
        }
        return default_route;
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

    if(default_route != nullptr)
    {
        children["default-route"] = default_route;
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

void Native::Ipv6::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "default-route" || name == "inspection" || name == "raguard")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::all {0, "all"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::failures {1, "failures"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::none {2, "none"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::overThreshold {3, "overThreshold"};

const Enum::YLeaf Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Life::forever {0, "forever"};

const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::ActionType::none {0, "none"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::ActionType::trapAndTrigger {1, "trapAndTrigger"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::ActionType::trapOnly {2, "trapOnly"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::ActionType::triggerOnly {3, "triggerOnly"};

const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ThresholdType::immediate {0, "immediate"};

const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionType::none {0, "none"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionType::trapAndTrigger {1, "trapAndTrigger"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionType::trapOnly {2, "trapOnly"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionType::triggerOnly {3, "triggerOnly"};

const Enum::YLeaf Native::Ip::Sla::Schedule::Life::forever {0, "forever"};

const Enum::YLeaf Native::Ip::Spd::Mode::aggressive {0, "aggressive"};

const Enum::YLeaf Native::Ip::Ssh::PubkeyChain::Username::KeyHash::KeyType::ssh_rsa {0, "ssh-rsa"};

const Enum::YLeaf Native::Ip::Tcp::PathMtuDiscovery::AgeTimer::infinite {0, "infinite"};

const Enum::YLeaf Native::Ip::Vrf::Export_::Ipv4::Ipv4Type::unicast {0, "unicast"};
const Enum::YLeaf Native::Ip::Vrf::Export_::Ipv4::Ipv4Type::multicast {1, "multicast"};

const Enum::YLeaf Native::Ip::Vrf::Import::Ipv4::Ipv4Type::unicast {0, "unicast"};
const Enum::YLeaf Native::Ip::Vrf::Import::Ipv4::Ipv4Type::multicast {1, "multicast"};

const Enum::YLeaf Native::Ip::Vrf::RouteTarget::Direction::both {0, "both"};
const Enum::YLeaf Native::Ip::Vrf::RouteTarget::Direction::export_ {1, "export"};
const Enum::YLeaf Native::Ip::Vrf::RouteTarget::Direction::import {2, "import"};

const Enum::YLeaf Native::Ip::Wccp::Vrf::WccpList::Mode::closed {0, "closed"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WccpList::Mode::open {1, "open"};

const Enum::YLeaf Native::Ip::Wccp::Vrf::WccpList::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WccpList::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Mode::closed {0, "closed"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Mode::open {1, "open"};

const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Ip::Wccp::WccpList::Mode::closed {0, "closed"};
const Enum::YLeaf Native::Ip::Wccp::WccpList::Mode::open {1, "open"};

const Enum::YLeaf Native::Ip::Wccp::WccpList::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Wccp::WccpList::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Ip::Wccp::WebCache::Mode::closed {0, "closed"};
const Enum::YLeaf Native::Ip::Wccp::WebCache::Mode::open {1, "open"};

const Enum::YLeaf Native::Ip::Wccp::WebCache::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Wccp::WebCache::Password::Encryption::Y_7 {1, "7"};

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

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::Protocol::esp {1, "esp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::Protocol::hbh {2, "hbh"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::Protocol::icmp {3, "icmp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::Protocol::ipv6 {4, "ipv6"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::Protocol::pcp {5, "pcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::Protocol::sctp {6, "sctp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::Protocol::tcp {7, "tcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::Protocol::udp {8, "udp"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::beyond_scope {0, "beyond-scope"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::destination_unreachable {1, "destination-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::dhaad_reply {2, "dhaad-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::dhaad_request {3, "dhaad-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {4, "echo-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::echo_request {5, "echo-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::header {6, "header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::hop_limit {7, "hop-limit"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::mld_query {8, "mld-query"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::mld_reduction {9, "mld-reduction"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::mld_report {10, "mld-report"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::mpd_advertisement {11, "mpd-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::mpd_solicitation {12, "mpd-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::nd_na {13, "nd-na"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::nd_ns {14, "nd-ns"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::next_header {15, "next-header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::no_admin {16, "no-admin"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::no_route {17, "no-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {18, "packet-too-big"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::parameter_option {19, "parameter-option"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {20, "parameter-problem"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {21, "port-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {22, "reassembly-timeout"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::redirect {23, "redirect"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::reject_route {24, "reject-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::renum_command {25, "renum-command"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::renum_result {26, "renum-result"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::renum_seq_number {27, "renum-seq-number"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {28, "router-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_renumbering {29, "router-renumbering"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {30, "router-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::source_policy {31, "source-policy"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {32, "time-exceeded"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::unreachable {33, "unreachable"};

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

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::Protocol::esp {1, "esp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::Protocol::hbh {2, "hbh"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::Protocol::icmp {3, "icmp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::Protocol::ipv6 {4, "ipv6"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::Protocol::pcp {5, "pcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::Protocol::sctp {6, "sctp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::Protocol::tcp {7, "tcp"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::Protocol::udp {8, "udp"};

const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::beyond_scope {0, "beyond-scope"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::destination_unreachable {1, "destination-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::dhaad_reply {2, "dhaad-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::dhaad_request {3, "dhaad-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {4, "echo-reply"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::echo_request {5, "echo-request"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::header {6, "header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::hop_limit {7, "hop-limit"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::mld_query {8, "mld-query"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::mld_reduction {9, "mld-reduction"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::mld_report {10, "mld-report"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::mpd_advertisement {11, "mpd-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::mpd_solicitation {12, "mpd-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::nd_na {13, "nd-na"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::nd_ns {14, "nd-ns"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::next_header {15, "next-header"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::no_admin {16, "no-admin"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::no_route {17, "no-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {18, "packet-too-big"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::parameter_option {19, "parameter-option"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {20, "parameter-problem"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {21, "port-unreachable"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {22, "reassembly-timeout"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::redirect {23, "redirect"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::reject_route {24, "reject-route"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::renum_command {25, "renum-command"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::renum_result {26, "renum-result"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::renum_seq_number {27, "renum-seq-number"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {28, "router-advertisement"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_renumbering {29, "router-renumbering"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {30, "router-solicitation"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::source_policy {31, "source-policy"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {32, "time-exceeded"};
const Enum::YLeaf Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType::unreachable {33, "unreachable"};

const Enum::YLeaf Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::ValidLifetime::infinite {0, "infinite"};

const Enum::YLeaf Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::PreferredLifetime::infinite {0, "infinite"};


}
}

