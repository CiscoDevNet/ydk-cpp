
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_12.hpp"
#include "Cisco_IOS_XE_native_14.hpp"
#include "Cisco_IOS_XE_native_17.hpp"
#include "Cisco_IOS_XE_native_13.hpp"
#include "Cisco_IOS_XE_native_15.hpp"
#include "Cisco_IOS_XE_native_16.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Policy::ClassMap::Match::Protocol::Attribute::Attribute()
    :
    business_relevance(std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance>())
	,traffic_class(std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass>())
{
    business_relevance->parent = this;
    traffic_class->parent = this;

    yang_name = "attribute"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_data() const
{
    return (business_relevance !=  nullptr && business_relevance->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| (business_relevance !=  nullptr && business_relevance->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "business-relevance")
    {
        if(business_relevance == nullptr)
        {
            business_relevance = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance>();
        }
        return business_relevance;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(business_relevance != nullptr)
    {
        children["business-relevance"] = business_relevance;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "business-relevance" || name == "traffic-class")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::BusinessRelevance()
    :
    business_irrelevant{YType::empty, "business-irrelevant"},
    business_relevant{YType::empty, "business-relevant"},
    default_{YType::empty, "default"}
{

    yang_name = "business-relevance"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::~BusinessRelevance()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_data() const
{
    return business_irrelevant.is_set
	|| business_relevant.is_set
	|| default_.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(business_irrelevant.yfilter)
	|| ydk::is_set(business_relevant.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "business-relevance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (business_irrelevant.is_set || is_set(business_irrelevant.yfilter)) leaf_name_data.push_back(business_irrelevant.get_name_leafdata());
    if (business_relevant.is_set || is_set(business_relevant.yfilter)) leaf_name_data.push_back(business_relevant.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "business-irrelevant")
    {
        business_irrelevant = value;
        business_irrelevant.value_namespace = name_space;
        business_irrelevant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "business-relevant")
    {
        business_relevant = value;
        business_relevant.value_namespace = name_space;
        business_relevant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "business-irrelevant")
    {
        business_irrelevant.yfilter = yfilter;
    }
    if(value_path == "business-relevant")
    {
        business_relevant.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "business-irrelevant" || name == "business-relevant" || name == "default")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::TrafficClass()
    :
    broadcast_video{YType::empty, "broadcast-video"},
    bulk_data{YType::empty, "bulk-data"},
    multimedia_conferencing{YType::empty, "multimedia-conferencing"},
    multimedia_streaming{YType::empty, "multimedia-streaming"},
    network_control{YType::empty, "network-control"},
    ops_admin_mgmt{YType::empty, "ops-admin-mgmt"},
    real_time_interactive{YType::empty, "real-time-interactive"},
    signaling{YType::empty, "signaling"},
    transactional_data{YType::empty, "transactional-data"},
    voip_telephony{YType::empty, "voip-telephony"}
{

    yang_name = "traffic-class"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::~TrafficClass()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_data() const
{
    return broadcast_video.is_set
	|| bulk_data.is_set
	|| multimedia_conferencing.is_set
	|| multimedia_streaming.is_set
	|| network_control.is_set
	|| ops_admin_mgmt.is_set
	|| real_time_interactive.is_set
	|| signaling.is_set
	|| transactional_data.is_set
	|| voip_telephony.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_video.yfilter)
	|| ydk::is_set(bulk_data.yfilter)
	|| ydk::is_set(multimedia_conferencing.yfilter)
	|| ydk::is_set(multimedia_streaming.yfilter)
	|| ydk::is_set(network_control.yfilter)
	|| ydk::is_set(ops_admin_mgmt.yfilter)
	|| ydk::is_set(real_time_interactive.yfilter)
	|| ydk::is_set(signaling.yfilter)
	|| ydk::is_set(transactional_data.yfilter)
	|| ydk::is_set(voip_telephony.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_video.is_set || is_set(broadcast_video.yfilter)) leaf_name_data.push_back(broadcast_video.get_name_leafdata());
    if (bulk_data.is_set || is_set(bulk_data.yfilter)) leaf_name_data.push_back(bulk_data.get_name_leafdata());
    if (multimedia_conferencing.is_set || is_set(multimedia_conferencing.yfilter)) leaf_name_data.push_back(multimedia_conferencing.get_name_leafdata());
    if (multimedia_streaming.is_set || is_set(multimedia_streaming.yfilter)) leaf_name_data.push_back(multimedia_streaming.get_name_leafdata());
    if (network_control.is_set || is_set(network_control.yfilter)) leaf_name_data.push_back(network_control.get_name_leafdata());
    if (ops_admin_mgmt.is_set || is_set(ops_admin_mgmt.yfilter)) leaf_name_data.push_back(ops_admin_mgmt.get_name_leafdata());
    if (real_time_interactive.is_set || is_set(real_time_interactive.yfilter)) leaf_name_data.push_back(real_time_interactive.get_name_leafdata());
    if (signaling.is_set || is_set(signaling.yfilter)) leaf_name_data.push_back(signaling.get_name_leafdata());
    if (transactional_data.is_set || is_set(transactional_data.yfilter)) leaf_name_data.push_back(transactional_data.get_name_leafdata());
    if (voip_telephony.is_set || is_set(voip_telephony.yfilter)) leaf_name_data.push_back(voip_telephony.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-video")
    {
        broadcast_video = value;
        broadcast_video.value_namespace = name_space;
        broadcast_video.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bulk-data")
    {
        bulk_data = value;
        bulk_data.value_namespace = name_space;
        bulk_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multimedia-conferencing")
    {
        multimedia_conferencing = value;
        multimedia_conferencing.value_namespace = name_space;
        multimedia_conferencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multimedia-streaming")
    {
        multimedia_streaming = value;
        multimedia_streaming.value_namespace = name_space;
        multimedia_streaming.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-control")
    {
        network_control = value;
        network_control.value_namespace = name_space;
        network_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ops-admin-mgmt")
    {
        ops_admin_mgmt = value;
        ops_admin_mgmt.value_namespace = name_space;
        ops_admin_mgmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-time-interactive")
    {
        real_time_interactive = value;
        real_time_interactive.value_namespace = name_space;
        real_time_interactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling")
    {
        signaling = value;
        signaling.value_namespace = name_space;
        signaling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transactional-data")
    {
        transactional_data = value;
        transactional_data.value_namespace = name_space;
        transactional_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voip-telephony")
    {
        voip_telephony = value;
        voip_telephony.value_namespace = name_space;
        voip_telephony.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-video")
    {
        broadcast_video.yfilter = yfilter;
    }
    if(value_path == "bulk-data")
    {
        bulk_data.yfilter = yfilter;
    }
    if(value_path == "multimedia-conferencing")
    {
        multimedia_conferencing.yfilter = yfilter;
    }
    if(value_path == "multimedia-streaming")
    {
        multimedia_streaming.yfilter = yfilter;
    }
    if(value_path == "network-control")
    {
        network_control.yfilter = yfilter;
    }
    if(value_path == "ops-admin-mgmt")
    {
        ops_admin_mgmt.yfilter = yfilter;
    }
    if(value_path == "real-time-interactive")
    {
        real_time_interactive.yfilter = yfilter;
    }
    if(value_path == "signaling")
    {
        signaling.yfilter = yfilter;
    }
    if(value_path == "transactional-data")
    {
        transactional_data.yfilter = yfilter;
    }
    if(value_path == "voip-telephony")
    {
        voip_telephony.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-video" || name == "bulk-data" || name == "multimedia-conferencing" || name == "multimedia-streaming" || name == "network-control" || name == "ops-admin-mgmt" || name == "real-time-interactive" || name == "signaling" || name == "transactional-data" || name == "voip-telephony")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SecurityGroup::SecurityGroup()
    :
    destination(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Destination>())
	,source(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "security-group"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::SecurityGroup::~SecurityGroup()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SecurityGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SecurityGroup::get_children() const
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

void Native::Policy::ClassMap::Match::SecurityGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::SecurityGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SecurityGroup::Destination::Destination()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "destination"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::SecurityGroup::Destination::~Destination()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::SecurityGroup::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::SecurityGroup::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SecurityGroup::Source::Source()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "source"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::SecurityGroup::Source::~Source()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SecurityGroup::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SecurityGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SecurityGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::SecurityGroup::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::SecurityGroup::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SourceAddress::SourceAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "source-address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::SourceAddress::~SourceAddress()
{
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Vlan::Vlan()
    :
    inner{YType::str, "inner"},
    value_{YType::str, "value"}
{

    yang_name = "vlan"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Vlan::~Vlan()
{
}

bool Native::Policy::ClassMap::Match::Vlan::has_data() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Vlan::has_operation() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(inner.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Policy::ClassMap::Match::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto inner_name_datas = inner.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_name_datas.begin(), inner_name_datas.end());
    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner")
    {
        inner.append(value);
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Native::Policy::ClassMap::Match::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner")
    {
        inner.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner" || name == "value")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ActivatedServiceTemplate::ActivatedServiceTemplate()
    :
    service_name{YType::str, "service-name"}
{

    yang_name = "activated-service-template"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ActivatedServiceTemplate::~ActivatedServiceTemplate()
{
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_data() const
{
    return service_name.is_set;
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter);
}

std::string Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activated-service-template" <<"[service-name='" <<service_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::ActivatedServiceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ActivatedServiceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::AuthorizationStatus::AuthorizationStatus()
    :
    authorized{YType::empty, "authorized"},
    unauthorized{YType::empty, "unauthorized"}
{

    yang_name = "authorization-status"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::AuthorizationStatus::~AuthorizationStatus()
{
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_data() const
{
    return authorized.is_set
	|| unauthorized.is_set;
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorized.yfilter)
	|| ydk::is_set(unauthorized.yfilter);
}

std::string Native::Policy::ClassMap::Match::AuthorizationStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::AuthorizationStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorized.is_set || is_set(authorized.yfilter)) leaf_name_data.push_back(authorized.get_name_leafdata());
    if (unauthorized.is_set || is_set(unauthorized.yfilter)) leaf_name_data.push_back(unauthorized.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::AuthorizationStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::AuthorizationStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::AuthorizationStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorized")
    {
        authorized = value;
        authorized.value_namespace = name_space;
        authorized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unauthorized")
    {
        unauthorized = value;
        unauthorized.value_namespace = name_space;
        unauthorized.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::AuthorizationStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorized")
    {
        authorized.yfilter = yfilter;
    }
    if(value_path == "unauthorized")
    {
        unauthorized.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorized" || name == "unauthorized")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::AuthorizingMethodPriority::AuthorizingMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "authorizing-method-priority"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::AuthorizingMethodPriority::~AuthorizingMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizing-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::AuthorizingMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::AuthorizingMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Method::Method()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "method"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Method::~Method()
{
}

bool Native::Policy::ClassMap::Match::Method::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::ClassMap::Match::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Policy::ClassMap::Match::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::ResultType()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
    	,
    method(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method>())
{
    method->parent = this;

    yang_name = "result-type"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::~ResultType()
{
}

bool Native::Policy::ClassMap::Match::ResultType::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set
	|| (method !=  nullptr && method->has_data());
}

bool Native::Policy::ClassMap::Match::ResultType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Policy::ClassMap::Match::ResultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Policy::ClassMap::Match::ResultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Method()
    :
    dot1x(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Dot1X>())
	,mab(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Mab>())
	,webauth(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Webauth>())
{
    dot1x->parent = this;
    mab->parent = this;
    webauth->parent = this;

    yang_name = "method"; yang_parent_name = "result-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::Method::~Method()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_data() const
{
    return (dot1x !=  nullptr && dot1x->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (webauth !=  nullptr && webauth->has_data());
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_operation() const
{
    return is_set(yfilter)
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(mab != nullptr)
    {
        children["mab"] = mab;
    }

    if(webauth != nullptr)
    {
        children["webauth"] = webauth;
    }

    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::ResultType::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::Dot1X()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "dot1x"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::~Dot1X()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Mab::Mab()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "mab"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::Method::Mab::~Mab()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::Method::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Webauth::Webauth()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "webauth"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::Method::Webauth::~Webauth()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Webauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::Method::Webauth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Not_()
    :
    any{YType::empty, "any"},
    class_map{YType::str, "class-map"},
    cos{YType::uint8, "cos"},
    discard_class{YType::uint8, "discard-class"},
    dscp{YType::str, "dscp"},
    fr_de{YType::empty, "fr-de"},
    fr_dlci{YType::uint16, "fr-dlci"},
    input_interface{YType::str, "input-interface"},
    non_client_nrt{YType::empty, "non-client-nrt"},
    precedence{YType::str, "precedence"},
    qos_group{YType::uint16, "qos-group"},
    peer{YType::str, "peer"}
    	,
    current_method_priority(std::make_shared<Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority>())
	,application(std::make_shared<Native::Policy::ClassMap::Match::Not_::Application>())
	,access_group(std::make_shared<Native::Policy::ClassMap::Match::Not_::AccessGroup>())
	,destination_address(std::make_shared<Native::Policy::ClassMap::Match::Not_::DestinationAddress>())
	,group_object(std::make_shared<Native::Policy::ClassMap::Match::Not_::GroupObject>())
	,ip(std::make_shared<Native::Policy::ClassMap::Match::Not_::Ip>())
	,mpls(std::make_shared<Native::Policy::ClassMap::Match::Not_::Mpls>())
	,packet(std::make_shared<Native::Policy::ClassMap::Match::Not_::Packet>())
	,protocol(std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol>())
	,security_group(std::make_shared<Native::Policy::ClassMap::Match::Not_::SecurityGroup>())
	,source_address(std::make_shared<Native::Policy::ClassMap::Match::Not_::SourceAddress>())
	,vlan(std::make_shared<Native::Policy::ClassMap::Match::Not_::Vlan>())
{
    current_method_priority->parent = this;
    application->parent = this;
    access_group->parent = this;
    destination_address->parent = this;
    group_object->parent = this;
    ip->parent = this;
    mpls->parent = this;
    packet->parent = this;
    protocol->parent = this;
    security_group->parent = this;
    source_address->parent = this;
    vlan->parent = this;

    yang_name = "not"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::~Not_()
{
}

bool Native::Policy::ClassMap::Match::Not_::has_data() const
{
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return any.is_set
	|| fr_de.is_set
	|| non_client_nrt.is_set
	|| peer.is_set
	|| (current_method_priority !=  nullptr && current_method_priority->has_data())
	|| (application !=  nullptr && application->has_data())
	|| (access_group !=  nullptr && access_group->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data())
	|| (group_object !=  nullptr && group_object->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (packet !=  nullptr && packet->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (security_group !=  nullptr && security_group->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Policy::ClassMap::Match::Not_::has_operation() const
{
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(class_map.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(fr_dlci.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(non_client_nrt.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| (current_method_priority !=  nullptr && current_method_priority->has_operation())
	|| (application !=  nullptr && application->has_operation())
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation())
	|| (group_object !=  nullptr && group_object->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (packet !=  nullptr && packet->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (security_group !=  nullptr && security_group->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (non_client_nrt.is_set || is_set(non_client_nrt.yfilter)) leaf_name_data.push_back(non_client_nrt.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    auto class_map_name_datas = class_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), class_map_name_datas.begin(), class_map_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto fr_dlci_name_datas = fr_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fr_dlci_name_datas.begin(), fr_dlci_name_datas.end());
    auto input_interface_name_datas = input_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_interface_name_datas.begin(), input_interface_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-method-priority")
    {
        if(current_method_priority == nullptr)
        {
            current_method_priority = std::make_shared<Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority>();
        }
        return current_method_priority;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Policy::ClassMap::Match::Not_::Application>();
        }
        return application;
    }

    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Policy::ClassMap::Match::Not_::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::Policy::ClassMap::Match::Not_::DestinationAddress>();
        }
        return destination_address;
    }

    if(child_yang_name == "group-object")
    {
        if(group_object == nullptr)
        {
            group_object = std::make_shared<Native::Policy::ClassMap::Match::Not_::GroupObject>();
        }
        return group_object;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Policy::ClassMap::Match::Not_::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Policy::ClassMap::Match::Not_::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Policy::ClassMap::Match::Not_::Packet>();
        }
        return packet;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::Policy::ClassMap::Match::Not_::SecurityGroup>();
        }
        return security_group;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Native::Policy::ClassMap::Match::Not_::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Policy::ClassMap::Match::Not_::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(current_method_priority != nullptr)
    {
        children["current-method-priority"] = current_method_priority;
    }

    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    if(group_object != nullptr)
    {
        children["group-object"] = group_object;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-map")
    {
        class_map.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.append(value);
    }
    if(value_path == "input-interface")
    {
        input_interface.append(value);
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt = value;
        non_client_nrt.value_namespace = name_space;
        non_client_nrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "class-map")
    {
        class_map.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-method-priority" || name == "application" || name == "access-group" || name == "destination-address" || name == "group-object" || name == "ip" || name == "mpls" || name == "packet" || name == "protocol" || name == "security-group" || name == "source-address" || name == "vlan" || name == "any" || name == "class-map" || name == "cos" || name == "discard-class" || name == "dscp" || name == "fr-de" || name == "fr-dlci" || name == "input-interface" || name == "non-client-nrt" || name == "precedence" || name == "qos-group" || name == "peer")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority::CurrentMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "current-method-priority"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority::~CurrentMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::CurrentMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Application::Application()
    :
    application_group(std::make_shared<Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup>())
	,attribute(std::make_shared<Native::Policy::ClassMap::Match::Not_::Application::Attribute>())
{
    application_group->parent = this;
    attribute->parent = this;

    yang_name = "application"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Application::~Application()
{
}

bool Native::Policy::ClassMap::Match::Not_::Application::has_data() const
{
    return (application_group !=  nullptr && application_group->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Not_::Application::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not_::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Not_::Application::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_group != nullptr)
    {
        children["application-group"] = application_group;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not_::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not_::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not_::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup::ApplicationGroup()
    :
    telepresence_group{YType::empty, "telepresence-group"},
    vmware_group{YType::empty, "vmware-group"},
    webex_group{YType::empty, "webex-group"}
{

    yang_name = "application-group"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup::has_data() const
{
    return telepresence_group.is_set
	|| vmware_group.is_set
	|| webex_group.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(telepresence_group.yfilter)
	|| ydk::is_set(vmware_group.yfilter)
	|| ydk::is_set(webex_group.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (telepresence_group.is_set || is_set(telepresence_group.yfilter)) leaf_name_data.push_back(telepresence_group.get_name_leafdata());
    if (vmware_group.is_set || is_set(vmware_group.yfilter)) leaf_name_data.push_back(vmware_group.get_name_leafdata());
    if (webex_group.is_set || is_set(webex_group.yfilter)) leaf_name_data.push_back(webex_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group = value;
        telepresence_group.value_namespace = name_space;
        telepresence_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmware-group")
    {
        vmware_group = value;
        vmware_group.value_namespace = name_space;
        vmware_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webex-group")
    {
        webex_group = value;
        webex_group.value_namespace = name_space;
        webex_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group.yfilter = yfilter;
    }
    if(value_path == "vmware-group")
    {
        vmware_group.yfilter = yfilter;
    }
    if(value_path == "webex-group")
    {
        webex_group.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Application::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "telepresence-group" || name == "vmware-group" || name == "webex-group")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Application::Attribute::Attribute()
    :
    media_type{YType::enumeration, "media-type"}
{

    yang_name = "attribute"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Application::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Not_::Application::Attribute::has_data() const
{
    return media_type.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Application::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(media_type.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Application::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Application::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Application::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Application::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Application::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Application::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Application::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "media-type")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::AccessGroup::AccessGroup()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"}
{

    yang_name = "access-group"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::AccessGroup::~AccessGroup()
{
}

bool Native::Policy::ClassMap::Match::Not_::AccessGroup::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::AccessGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not_::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::DestinationAddress::DestinationAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "destination-address"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::DestinationAddress::~DestinationAddress()
{
}

bool Native::Policy::ClassMap::Match::Not_::DestinationAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not_::DestinationAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not_::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::GroupObject::GroupObject()
    :
    security(std::make_shared<Native::Policy::ClassMap::Match::Not_::GroupObject::Security>())
{
    security->parent = this;

    yang_name = "group-object"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::GroupObject::~GroupObject()
{
}

bool Native::Policy::ClassMap::Match::Not_::GroupObject::has_data() const
{
    return (security !=  nullptr && security->has_data());
}

bool Native::Policy::ClassMap::Match::Not_::GroupObject::has_operation() const
{
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not_::GroupObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::GroupObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::GroupObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Policy::ClassMap::Match::Not_::GroupObject::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::GroupObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not_::GroupObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not_::GroupObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not_::GroupObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::GroupObject::Security::Security()
    :
    source{YType::str, "source"},
    destination{YType::str, "destination"}
{

    yang_name = "security"; yang_parent_name = "group-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::GroupObject::Security::~Security()
{
}

bool Native::Policy::ClassMap::Match::Not_::GroupObject::Security::has_data() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not_::GroupObject::Security::has_operation() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::GroupObject::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::GroupObject::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto source_name_datas = source.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_name_datas.begin(), source_name_datas.end());
    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::GroupObject::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::GroupObject::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::GroupObject::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source.append(value);
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not_::GroupObject::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::GroupObject::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Ip::Ip()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"}
{

    yang_name = "ip"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Ip::~Ip()
{
}

bool Native::Policy::ClassMap::Match::Not_::Ip::has_data() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_data())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not_::Ip::has_operation() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_operation())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        for(auto const & c : rtp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not_::Ip::Rtp>();
        c->parent = this;
        rtp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rtp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtp" || name == "dscp" || name == "precedence")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Ip::Rtp::Rtp()
    :
    port1{YType::uint16, "port1"},
    port2{YType::uint16, "port2"}
{

    yang_name = "rtp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Ip::Rtp::~Rtp()
{
}

bool Native::Policy::ClassMap::Match::Not_::Ip::Rtp::has_data() const
{
    return port1.is_set
	|| port2.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Ip::Rtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(port2.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Ip::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp" <<"[port1='" <<port1 <<"']" <<"[port2='" <<port2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Ip::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (port2.is_set || is_set(port2.yfilter)) leaf_name_data.push_back(port2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Ip::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Ip::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Ip::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2")
    {
        port2 = value;
        port2.value_namespace = name_space;
        port2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Ip::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
    if(value_path == "port2")
    {
        port2.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Ip::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port1" || name == "port2")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Mpls::Mpls()
    :
    experimental(std::make_shared<Native::Policy::ClassMap::Match::Not_::Mpls::Experimental>())
{
    experimental->parent = this;

    yang_name = "mpls"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Mpls::~Mpls()
{
}

bool Native::Policy::ClassMap::Match::Not_::Mpls::has_data() const
{
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Policy::ClassMap::Match::Not_::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not_::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Policy::ClassMap::Match::Not_::Mpls::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(experimental != nullptr)
    {
        children["experimental"] = experimental;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not_::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not_::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not_::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "experimental")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Mpls::Experimental::Experimental()
    :
    topmost{YType::uint8, "topmost"}
{

    yang_name = "experimental"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Mpls::Experimental::~Experimental()
{
}

bool Native::Policy::ClassMap::Match::Not_::Mpls::Experimental::has_data() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not_::Mpls::Experimental::has_operation() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(topmost.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Mpls::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Mpls::Experimental::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto topmost_name_datas = topmost.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topmost_name_datas.begin(), topmost_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Mpls::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Mpls::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Mpls::Experimental::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topmost")
    {
        topmost.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not_::Mpls::Experimental::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topmost")
    {
        topmost.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Mpls::Experimental::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topmost")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Packet::Packet()
    :
    length(std::make_shared<Native::Policy::ClassMap::Match::Not_::Packet::Length>())
{
    length->parent = this;

    yang_name = "packet"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Packet::~Packet()
{
}

bool Native::Policy::ClassMap::Match::Not_::Packet::has_data() const
{
    return (length !=  nullptr && length->has_data());
}

bool Native::Policy::ClassMap::Match::Not_::Packet::has_operation() const
{
    return is_set(yfilter)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not_::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Policy::ClassMap::Match::Not_::Packet::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(length != nullptr)
    {
        children["length"] = length;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not_::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not_::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not_::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "length")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Packet::Length::Length()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "length"; yang_parent_name = "packet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Packet::Length::~Length()
{
}

bool Native::Policy::ClassMap::Match::Not_::Packet::Length::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Packet::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Packet::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Packet::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Packet::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Packet::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Packet::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Packet::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Packet::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Protocol()
    :
    protocols{YType::enumeration, "protocols"},
    clns{YType::empty, "clns"},
    clns_es{YType::empty, "clns_es"},
    clns_is{YType::empty, "clns_is"},
    cmns{YType::empty, "cmns"},
    compressedtcp{YType::empty, "compressedtcp"},
    cuseeme{YType::empty, "cuseeme"},
    decnet{YType::empty, "decnet"},
    decnet_node{YType::empty, "decnet_node"},
    decnet_router_l1{YType::empty, "decnet_router-l1"},
    decnet_router_l2{YType::empty, "decnet_router-l2"},
    dhcp{YType::empty, "dhcp"},
    dlsw{YType::empty, "dlsw"},
    dns{YType::empty, "dns"},
    edonkey{YType::empty, "edonkey"},
    egp{YType::empty, "egp"},
    eigrp{YType::empty, "eigrp"},
    exchange{YType::empty, "exchange"},
    finger{YType::empty, "finger"},
    ftp{YType::empty, "ftp"},
    gopher{YType::empty, "gopher"},
    gre{YType::empty, "gre"},
    h323{YType::empty, "h323"},
    icmp{YType::empty, "icmp"},
    imap{YType::empty, "imap"},
    ip{YType::empty, "ip"},
    ipinip{YType::empty, "ipinip"},
    ipsec{YType::empty, "ipsec"},
    ipv6{YType::empty, "ipv6"},
    ipx{YType::empty, "ipx"},
    irc{YType::empty, "irc"},
    kerberos{YType::empty, "kerberos"},
    l2tp{YType::empty, "l2tp"},
    ldap{YType::empty, "ldap"},
    llc2{YType::empty, "llc2"},
    mgcp{YType::empty, "mgcp"},
    netbios{YType::empty, "netbios"},
    netshow{YType::empty, "netshow"},
    nfs{YType::empty, "nfs"},
    nntp{YType::empty, "nntp"},
    notes{YType::empty, "notes"},
    novadigm{YType::empty, "novadigm"},
    ntp{YType::empty, "ntp"},
    ospf{YType::empty, "ospf"},
    pad{YType::empty, "pad"},
    pcanywhere{YType::empty, "pcanywhere"},
    pop3{YType::empty, "pop3"},
    pppoe{YType::empty, "pppoe"},
    pptp{YType::empty, "pptp"},
    printer{YType::empty, "printer"},
    qllc{YType::empty, "qllc"},
    rcmd{YType::empty, "rcmd"},
    rip{YType::empty, "rip"},
    rsrb{YType::empty, "rsrb"},
    rsvp{YType::empty, "rsvp"},
    rtcp{YType::empty, "rtcp"},
    rtsp{YType::empty, "rtsp"},
    secure_ftp{YType::empty, "secure-ftp"},
    secure_http{YType::empty, "secure-http"},
    secure_imap{YType::empty, "secure-imap"},
    secure_irc{YType::empty, "secure-irc"},
    secure_ldap{YType::empty, "secure-ldap"},
    secure_nntp{YType::empty, "secure-nntp"},
    secure_pop3{YType::empty, "secure-pop3"},
    secure_telnet{YType::empty, "secure-telnet"},
    sip{YType::empty, "sip"},
    skinny{YType::empty, "skinny"},
    snapshot{YType::empty, "snapshot"},
    snmp{YType::empty, "snmp"},
    socks{YType::empty, "socks"},
    sqlnet{YType::empty, "sqlnet"},
    sqlserver{YType::empty, "sqlserver"},
    ssh{YType::empty, "ssh"},
    streamwork{YType::empty, "streamwork"},
    stun{YType::empty, "stun"},
    sunrpc{YType::empty, "sunrpc"},
    syslog{YType::empty, "syslog"},
    telnet{YType::empty, "telnet"},
    tftp{YType::empty, "tftp"},
    vdolive{YType::empty, "vdolive"},
    vofr{YType::empty, "vofr"},
    winmx{YType::empty, "winmx"},
    xwindows{YType::empty, "xwindows"}
    	,
    citrix(nullptr) // presence node
	,fasttrack(nullptr) // presence node
	,gnutella(nullptr) // presence node
	,http(nullptr) // presence node
	,kazaa2(nullptr) // presence node
	,napster(nullptr) // presence node
	,rtp(nullptr) // presence node
	,smtp(nullptr) // presence node
	,attribute(std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Attribute>())
{
    attribute->parent = this;

    yang_name = "protocol"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Protocol::~Protocol()
{
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::has_data() const
{
    return protocols.is_set
	|| clns.is_set
	|| clns_es.is_set
	|| clns_is.is_set
	|| cmns.is_set
	|| compressedtcp.is_set
	|| cuseeme.is_set
	|| decnet.is_set
	|| decnet_node.is_set
	|| decnet_router_l1.is_set
	|| decnet_router_l2.is_set
	|| dhcp.is_set
	|| dlsw.is_set
	|| dns.is_set
	|| edonkey.is_set
	|| egp.is_set
	|| eigrp.is_set
	|| exchange.is_set
	|| finger.is_set
	|| ftp.is_set
	|| gopher.is_set
	|| gre.is_set
	|| h323.is_set
	|| icmp.is_set
	|| imap.is_set
	|| ip.is_set
	|| ipinip.is_set
	|| ipsec.is_set
	|| ipv6.is_set
	|| ipx.is_set
	|| irc.is_set
	|| kerberos.is_set
	|| l2tp.is_set
	|| ldap.is_set
	|| llc2.is_set
	|| mgcp.is_set
	|| netbios.is_set
	|| netshow.is_set
	|| nfs.is_set
	|| nntp.is_set
	|| notes.is_set
	|| novadigm.is_set
	|| ntp.is_set
	|| ospf.is_set
	|| pad.is_set
	|| pcanywhere.is_set
	|| pop3.is_set
	|| pppoe.is_set
	|| pptp.is_set
	|| printer.is_set
	|| qllc.is_set
	|| rcmd.is_set
	|| rip.is_set
	|| rsrb.is_set
	|| rsvp.is_set
	|| rtcp.is_set
	|| rtsp.is_set
	|| secure_ftp.is_set
	|| secure_http.is_set
	|| secure_imap.is_set
	|| secure_irc.is_set
	|| secure_ldap.is_set
	|| secure_nntp.is_set
	|| secure_pop3.is_set
	|| secure_telnet.is_set
	|| sip.is_set
	|| skinny.is_set
	|| snapshot.is_set
	|| snmp.is_set
	|| socks.is_set
	|| sqlnet.is_set
	|| sqlserver.is_set
	|| ssh.is_set
	|| streamwork.is_set
	|| stun.is_set
	|| sunrpc.is_set
	|| syslog.is_set
	|| telnet.is_set
	|| tftp.is_set
	|| vdolive.is_set
	|| vofr.is_set
	|| winmx.is_set
	|| xwindows.is_set
	|| (citrix !=  nullptr && citrix->has_data())
	|| (fasttrack !=  nullptr && fasttrack->has_data())
	|| (gnutella !=  nullptr && gnutella->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (kazaa2 !=  nullptr && kazaa2->has_data())
	|| (napster !=  nullptr && napster->has_data())
	|| (rtp !=  nullptr && rtp->has_data())
	|| (smtp !=  nullptr && smtp->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocols.yfilter)
	|| ydk::is_set(clns.yfilter)
	|| ydk::is_set(clns_es.yfilter)
	|| ydk::is_set(clns_is.yfilter)
	|| ydk::is_set(cmns.yfilter)
	|| ydk::is_set(compressedtcp.yfilter)
	|| ydk::is_set(cuseeme.yfilter)
	|| ydk::is_set(decnet.yfilter)
	|| ydk::is_set(decnet_node.yfilter)
	|| ydk::is_set(decnet_router_l1.yfilter)
	|| ydk::is_set(decnet_router_l2.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(dlsw.yfilter)
	|| ydk::is_set(dns.yfilter)
	|| ydk::is_set(edonkey.yfilter)
	|| ydk::is_set(egp.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(exchange.yfilter)
	|| ydk::is_set(finger.yfilter)
	|| ydk::is_set(ftp.yfilter)
	|| ydk::is_set(gopher.yfilter)
	|| ydk::is_set(gre.yfilter)
	|| ydk::is_set(h323.yfilter)
	|| ydk::is_set(icmp.yfilter)
	|| ydk::is_set(imap.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ipinip.yfilter)
	|| ydk::is_set(ipsec.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ipx.yfilter)
	|| ydk::is_set(irc.yfilter)
	|| ydk::is_set(kerberos.yfilter)
	|| ydk::is_set(l2tp.yfilter)
	|| ydk::is_set(ldap.yfilter)
	|| ydk::is_set(llc2.yfilter)
	|| ydk::is_set(mgcp.yfilter)
	|| ydk::is_set(netbios.yfilter)
	|| ydk::is_set(netshow.yfilter)
	|| ydk::is_set(nfs.yfilter)
	|| ydk::is_set(nntp.yfilter)
	|| ydk::is_set(notes.yfilter)
	|| ydk::is_set(novadigm.yfilter)
	|| ydk::is_set(ntp.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| ydk::is_set(pad.yfilter)
	|| ydk::is_set(pcanywhere.yfilter)
	|| ydk::is_set(pop3.yfilter)
	|| ydk::is_set(pppoe.yfilter)
	|| ydk::is_set(pptp.yfilter)
	|| ydk::is_set(printer.yfilter)
	|| ydk::is_set(qllc.yfilter)
	|| ydk::is_set(rcmd.yfilter)
	|| ydk::is_set(rip.yfilter)
	|| ydk::is_set(rsrb.yfilter)
	|| ydk::is_set(rsvp.yfilter)
	|| ydk::is_set(rtcp.yfilter)
	|| ydk::is_set(rtsp.yfilter)
	|| ydk::is_set(secure_ftp.yfilter)
	|| ydk::is_set(secure_http.yfilter)
	|| ydk::is_set(secure_imap.yfilter)
	|| ydk::is_set(secure_irc.yfilter)
	|| ydk::is_set(secure_ldap.yfilter)
	|| ydk::is_set(secure_nntp.yfilter)
	|| ydk::is_set(secure_pop3.yfilter)
	|| ydk::is_set(secure_telnet.yfilter)
	|| ydk::is_set(sip.yfilter)
	|| ydk::is_set(skinny.yfilter)
	|| ydk::is_set(snapshot.yfilter)
	|| ydk::is_set(snmp.yfilter)
	|| ydk::is_set(socks.yfilter)
	|| ydk::is_set(sqlnet.yfilter)
	|| ydk::is_set(sqlserver.yfilter)
	|| ydk::is_set(ssh.yfilter)
	|| ydk::is_set(streamwork.yfilter)
	|| ydk::is_set(stun.yfilter)
	|| ydk::is_set(sunrpc.yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| ydk::is_set(telnet.yfilter)
	|| ydk::is_set(tftp.yfilter)
	|| ydk::is_set(vdolive.yfilter)
	|| ydk::is_set(vofr.yfilter)
	|| ydk::is_set(winmx.yfilter)
	|| ydk::is_set(xwindows.yfilter)
	|| (citrix !=  nullptr && citrix->has_operation())
	|| (fasttrack !=  nullptr && fasttrack->has_operation())
	|| (gnutella !=  nullptr && gnutella->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (kazaa2 !=  nullptr && kazaa2->has_operation())
	|| (napster !=  nullptr && napster->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation())
	|| (smtp !=  nullptr && smtp->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not_::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocols.is_set || is_set(protocols.yfilter)) leaf_name_data.push_back(protocols.get_name_leafdata());
    if (clns.is_set || is_set(clns.yfilter)) leaf_name_data.push_back(clns.get_name_leafdata());
    if (clns_es.is_set || is_set(clns_es.yfilter)) leaf_name_data.push_back(clns_es.get_name_leafdata());
    if (clns_is.is_set || is_set(clns_is.yfilter)) leaf_name_data.push_back(clns_is.get_name_leafdata());
    if (cmns.is_set || is_set(cmns.yfilter)) leaf_name_data.push_back(cmns.get_name_leafdata());
    if (compressedtcp.is_set || is_set(compressedtcp.yfilter)) leaf_name_data.push_back(compressedtcp.get_name_leafdata());
    if (cuseeme.is_set || is_set(cuseeme.yfilter)) leaf_name_data.push_back(cuseeme.get_name_leafdata());
    if (decnet.is_set || is_set(decnet.yfilter)) leaf_name_data.push_back(decnet.get_name_leafdata());
    if (decnet_node.is_set || is_set(decnet_node.yfilter)) leaf_name_data.push_back(decnet_node.get_name_leafdata());
    if (decnet_router_l1.is_set || is_set(decnet_router_l1.yfilter)) leaf_name_data.push_back(decnet_router_l1.get_name_leafdata());
    if (decnet_router_l2.is_set || is_set(decnet_router_l2.yfilter)) leaf_name_data.push_back(decnet_router_l2.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (dlsw.is_set || is_set(dlsw.yfilter)) leaf_name_data.push_back(dlsw.get_name_leafdata());
    if (dns.is_set || is_set(dns.yfilter)) leaf_name_data.push_back(dns.get_name_leafdata());
    if (edonkey.is_set || is_set(edonkey.yfilter)) leaf_name_data.push_back(edonkey.get_name_leafdata());
    if (egp.is_set || is_set(egp.yfilter)) leaf_name_data.push_back(egp.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (exchange.is_set || is_set(exchange.yfilter)) leaf_name_data.push_back(exchange.get_name_leafdata());
    if (finger.is_set || is_set(finger.yfilter)) leaf_name_data.push_back(finger.get_name_leafdata());
    if (ftp.is_set || is_set(ftp.yfilter)) leaf_name_data.push_back(ftp.get_name_leafdata());
    if (gopher.is_set || is_set(gopher.yfilter)) leaf_name_data.push_back(gopher.get_name_leafdata());
    if (gre.is_set || is_set(gre.yfilter)) leaf_name_data.push_back(gre.get_name_leafdata());
    if (h323.is_set || is_set(h323.yfilter)) leaf_name_data.push_back(h323.get_name_leafdata());
    if (icmp.is_set || is_set(icmp.yfilter)) leaf_name_data.push_back(icmp.get_name_leafdata());
    if (imap.is_set || is_set(imap.yfilter)) leaf_name_data.push_back(imap.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ipinip.is_set || is_set(ipinip.yfilter)) leaf_name_data.push_back(ipinip.get_name_leafdata());
    if (ipsec.is_set || is_set(ipsec.yfilter)) leaf_name_data.push_back(ipsec.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ipx.is_set || is_set(ipx.yfilter)) leaf_name_data.push_back(ipx.get_name_leafdata());
    if (irc.is_set || is_set(irc.yfilter)) leaf_name_data.push_back(irc.get_name_leafdata());
    if (kerberos.is_set || is_set(kerberos.yfilter)) leaf_name_data.push_back(kerberos.get_name_leafdata());
    if (l2tp.is_set || is_set(l2tp.yfilter)) leaf_name_data.push_back(l2tp.get_name_leafdata());
    if (ldap.is_set || is_set(ldap.yfilter)) leaf_name_data.push_back(ldap.get_name_leafdata());
    if (llc2.is_set || is_set(llc2.yfilter)) leaf_name_data.push_back(llc2.get_name_leafdata());
    if (mgcp.is_set || is_set(mgcp.yfilter)) leaf_name_data.push_back(mgcp.get_name_leafdata());
    if (netbios.is_set || is_set(netbios.yfilter)) leaf_name_data.push_back(netbios.get_name_leafdata());
    if (netshow.is_set || is_set(netshow.yfilter)) leaf_name_data.push_back(netshow.get_name_leafdata());
    if (nfs.is_set || is_set(nfs.yfilter)) leaf_name_data.push_back(nfs.get_name_leafdata());
    if (nntp.is_set || is_set(nntp.yfilter)) leaf_name_data.push_back(nntp.get_name_leafdata());
    if (notes.is_set || is_set(notes.yfilter)) leaf_name_data.push_back(notes.get_name_leafdata());
    if (novadigm.is_set || is_set(novadigm.yfilter)) leaf_name_data.push_back(novadigm.get_name_leafdata());
    if (ntp.is_set || is_set(ntp.yfilter)) leaf_name_data.push_back(ntp.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (pad.is_set || is_set(pad.yfilter)) leaf_name_data.push_back(pad.get_name_leafdata());
    if (pcanywhere.is_set || is_set(pcanywhere.yfilter)) leaf_name_data.push_back(pcanywhere.get_name_leafdata());
    if (pop3.is_set || is_set(pop3.yfilter)) leaf_name_data.push_back(pop3.get_name_leafdata());
    if (pppoe.is_set || is_set(pppoe.yfilter)) leaf_name_data.push_back(pppoe.get_name_leafdata());
    if (pptp.is_set || is_set(pptp.yfilter)) leaf_name_data.push_back(pptp.get_name_leafdata());
    if (printer.is_set || is_set(printer.yfilter)) leaf_name_data.push_back(printer.get_name_leafdata());
    if (qllc.is_set || is_set(qllc.yfilter)) leaf_name_data.push_back(qllc.get_name_leafdata());
    if (rcmd.is_set || is_set(rcmd.yfilter)) leaf_name_data.push_back(rcmd.get_name_leafdata());
    if (rip.is_set || is_set(rip.yfilter)) leaf_name_data.push_back(rip.get_name_leafdata());
    if (rsrb.is_set || is_set(rsrb.yfilter)) leaf_name_data.push_back(rsrb.get_name_leafdata());
    if (rsvp.is_set || is_set(rsvp.yfilter)) leaf_name_data.push_back(rsvp.get_name_leafdata());
    if (rtcp.is_set || is_set(rtcp.yfilter)) leaf_name_data.push_back(rtcp.get_name_leafdata());
    if (rtsp.is_set || is_set(rtsp.yfilter)) leaf_name_data.push_back(rtsp.get_name_leafdata());
    if (secure_ftp.is_set || is_set(secure_ftp.yfilter)) leaf_name_data.push_back(secure_ftp.get_name_leafdata());
    if (secure_http.is_set || is_set(secure_http.yfilter)) leaf_name_data.push_back(secure_http.get_name_leafdata());
    if (secure_imap.is_set || is_set(secure_imap.yfilter)) leaf_name_data.push_back(secure_imap.get_name_leafdata());
    if (secure_irc.is_set || is_set(secure_irc.yfilter)) leaf_name_data.push_back(secure_irc.get_name_leafdata());
    if (secure_ldap.is_set || is_set(secure_ldap.yfilter)) leaf_name_data.push_back(secure_ldap.get_name_leafdata());
    if (secure_nntp.is_set || is_set(secure_nntp.yfilter)) leaf_name_data.push_back(secure_nntp.get_name_leafdata());
    if (secure_pop3.is_set || is_set(secure_pop3.yfilter)) leaf_name_data.push_back(secure_pop3.get_name_leafdata());
    if (secure_telnet.is_set || is_set(secure_telnet.yfilter)) leaf_name_data.push_back(secure_telnet.get_name_leafdata());
    if (sip.is_set || is_set(sip.yfilter)) leaf_name_data.push_back(sip.get_name_leafdata());
    if (skinny.is_set || is_set(skinny.yfilter)) leaf_name_data.push_back(skinny.get_name_leafdata());
    if (snapshot.is_set || is_set(snapshot.yfilter)) leaf_name_data.push_back(snapshot.get_name_leafdata());
    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (socks.is_set || is_set(socks.yfilter)) leaf_name_data.push_back(socks.get_name_leafdata());
    if (sqlnet.is_set || is_set(sqlnet.yfilter)) leaf_name_data.push_back(sqlnet.get_name_leafdata());
    if (sqlserver.is_set || is_set(sqlserver.yfilter)) leaf_name_data.push_back(sqlserver.get_name_leafdata());
    if (ssh.is_set || is_set(ssh.yfilter)) leaf_name_data.push_back(ssh.get_name_leafdata());
    if (streamwork.is_set || is_set(streamwork.yfilter)) leaf_name_data.push_back(streamwork.get_name_leafdata());
    if (stun.is_set || is_set(stun.yfilter)) leaf_name_data.push_back(stun.get_name_leafdata());
    if (sunrpc.is_set || is_set(sunrpc.yfilter)) leaf_name_data.push_back(sunrpc.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (telnet.is_set || is_set(telnet.yfilter)) leaf_name_data.push_back(telnet.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.yfilter)) leaf_name_data.push_back(tftp.get_name_leafdata());
    if (vdolive.is_set || is_set(vdolive.yfilter)) leaf_name_data.push_back(vdolive.get_name_leafdata());
    if (vofr.is_set || is_set(vofr.yfilter)) leaf_name_data.push_back(vofr.get_name_leafdata());
    if (winmx.is_set || is_set(winmx.yfilter)) leaf_name_data.push_back(winmx.get_name_leafdata());
    if (xwindows.is_set || is_set(xwindows.yfilter)) leaf_name_data.push_back(xwindows.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "citrix")
    {
        if(citrix == nullptr)
        {
            citrix = std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Citrix>();
        }
        return citrix;
    }

    if(child_yang_name == "fasttrack")
    {
        if(fasttrack == nullptr)
        {
            fasttrack = std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack>();
        }
        return fasttrack;
    }

    if(child_yang_name == "gnutella")
    {
        if(gnutella == nullptr)
        {
            gnutella = std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella>();
        }
        return gnutella;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Http>();
        }
        return http;
    }

    if(child_yang_name == "kazaa2")
    {
        if(kazaa2 == nullptr)
        {
            kazaa2 = std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2>();
        }
        return kazaa2;
    }

    if(child_yang_name == "napster")
    {
        if(napster == nullptr)
        {
            napster = std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Napster>();
        }
        return napster;
    }

    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Rtp>();
        }
        return rtp;
    }

    if(child_yang_name == "smtp")
    {
        if(smtp == nullptr)
        {
            smtp = std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Smtp>();
        }
        return smtp;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(citrix != nullptr)
    {
        children["citrix"] = citrix;
    }

    if(fasttrack != nullptr)
    {
        children["fasttrack"] = fasttrack;
    }

    if(gnutella != nullptr)
    {
        children["gnutella"] = gnutella;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(kazaa2 != nullptr)
    {
        children["kazaa2"] = kazaa2;
    }

    if(napster != nullptr)
    {
        children["napster"] = napster;
    }

    if(rtp != nullptr)
    {
        children["rtp"] = rtp;
    }

    if(smtp != nullptr)
    {
        children["smtp"] = smtp;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not_::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocols")
    {
        protocols = value;
        protocols.value_namespace = name_space;
        protocols.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clns")
    {
        clns = value;
        clns.value_namespace = name_space;
        clns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clns_es")
    {
        clns_es = value;
        clns_es.value_namespace = name_space;
        clns_es.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clns_is")
    {
        clns_is = value;
        clns_is.value_namespace = name_space;
        clns_is.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmns")
    {
        cmns = value;
        cmns.value_namespace = name_space;
        cmns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compressedtcp")
    {
        compressedtcp = value;
        compressedtcp.value_namespace = name_space;
        compressedtcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cuseeme")
    {
        cuseeme = value;
        cuseeme.value_namespace = name_space;
        cuseeme.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decnet")
    {
        decnet = value;
        decnet.value_namespace = name_space;
        decnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decnet_node")
    {
        decnet_node = value;
        decnet_node.value_namespace = name_space;
        decnet_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decnet_router-l1")
    {
        decnet_router_l1 = value;
        decnet_router_l1.value_namespace = name_space;
        decnet_router_l1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decnet_router-l2")
    {
        decnet_router_l2 = value;
        decnet_router_l2.value_namespace = name_space;
        decnet_router_l2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlsw")
    {
        dlsw = value;
        dlsw.value_namespace = name_space;
        dlsw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dns")
    {
        dns = value;
        dns.value_namespace = name_space;
        dns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edonkey")
    {
        edonkey = value;
        edonkey.value_namespace = name_space;
        edonkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egp")
    {
        egp = value;
        egp.value_namespace = name_space;
        egp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exchange")
    {
        exchange = value;
        exchange.value_namespace = name_space;
        exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finger")
    {
        finger = value;
        finger.value_namespace = name_space;
        finger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ftp")
    {
        ftp = value;
        ftp.value_namespace = name_space;
        ftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gopher")
    {
        gopher = value;
        gopher.value_namespace = name_space;
        gopher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gre")
    {
        gre = value;
        gre.value_namespace = name_space;
        gre.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h323")
    {
        h323 = value;
        h323.value_namespace = name_space;
        h323.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmp")
    {
        icmp = value;
        icmp.value_namespace = name_space;
        icmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imap")
    {
        imap = value;
        imap.value_namespace = name_space;
        imap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipinip")
    {
        ipinip = value;
        ipinip.value_namespace = name_space;
        ipinip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsec")
    {
        ipsec = value;
        ipsec.value_namespace = name_space;
        ipsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipx")
    {
        ipx = value;
        ipx.value_namespace = name_space;
        ipx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irc")
    {
        irc = value;
        irc.value_namespace = name_space;
        irc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kerberos")
    {
        kerberos = value;
        kerberos.value_namespace = name_space;
        kerberos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp")
    {
        l2tp = value;
        l2tp.value_namespace = name_space;
        l2tp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldap")
    {
        ldap = value;
        ldap.value_namespace = name_space;
        ldap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "llc2")
    {
        llc2 = value;
        llc2.value_namespace = name_space;
        llc2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgcp")
    {
        mgcp = value;
        mgcp.value_namespace = name_space;
        mgcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netbios")
    {
        netbios = value;
        netbios.value_namespace = name_space;
        netbios.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netshow")
    {
        netshow = value;
        netshow.value_namespace = name_space;
        netshow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nfs")
    {
        nfs = value;
        nfs.value_namespace = name_space;
        nfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nntp")
    {
        nntp = value;
        nntp.value_namespace = name_space;
        nntp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notes")
    {
        notes = value;
        notes.value_namespace = name_space;
        notes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "novadigm")
    {
        novadigm = value;
        novadigm.value_namespace = name_space;
        novadigm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntp")
    {
        ntp = value;
        ntp.value_namespace = name_space;
        ntp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pad")
    {
        pad = value;
        pad.value_namespace = name_space;
        pad.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcanywhere")
    {
        pcanywhere = value;
        pcanywhere.value_namespace = name_space;
        pcanywhere.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pop3")
    {
        pop3 = value;
        pop3.value_namespace = name_space;
        pop3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe")
    {
        pppoe = value;
        pppoe.value_namespace = name_space;
        pppoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pptp")
    {
        pptp = value;
        pptp.value_namespace = name_space;
        pptp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "printer")
    {
        printer = value;
        printer.value_namespace = name_space;
        printer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qllc")
    {
        qllc = value;
        qllc.value_namespace = name_space;
        qllc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcmd")
    {
        rcmd = value;
        rcmd.value_namespace = name_space;
        rcmd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rip")
    {
        rip = value;
        rip.value_namespace = name_space;
        rip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsrb")
    {
        rsrb = value;
        rsrb.value_namespace = name_space;
        rsrb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp")
    {
        rsvp = value;
        rsvp.value_namespace = name_space;
        rsvp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtcp")
    {
        rtcp = value;
        rtcp.value_namespace = name_space;
        rtcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtsp")
    {
        rtsp = value;
        rtsp.value_namespace = name_space;
        rtsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-ftp")
    {
        secure_ftp = value;
        secure_ftp.value_namespace = name_space;
        secure_ftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-http")
    {
        secure_http = value;
        secure_http.value_namespace = name_space;
        secure_http.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-imap")
    {
        secure_imap = value;
        secure_imap.value_namespace = name_space;
        secure_imap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-irc")
    {
        secure_irc = value;
        secure_irc.value_namespace = name_space;
        secure_irc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-ldap")
    {
        secure_ldap = value;
        secure_ldap.value_namespace = name_space;
        secure_ldap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-nntp")
    {
        secure_nntp = value;
        secure_nntp.value_namespace = name_space;
        secure_nntp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-pop3")
    {
        secure_pop3 = value;
        secure_pop3.value_namespace = name_space;
        secure_pop3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-telnet")
    {
        secure_telnet = value;
        secure_telnet.value_namespace = name_space;
        secure_telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sip")
    {
        sip = value;
        sip.value_namespace = name_space;
        sip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skinny")
    {
        skinny = value;
        skinny.value_namespace = name_space;
        skinny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snapshot")
    {
        snapshot = value;
        snapshot.value_namespace = name_space;
        snapshot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socks")
    {
        socks = value;
        socks.value_namespace = name_space;
        socks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sqlnet")
    {
        sqlnet = value;
        sqlnet.value_namespace = name_space;
        sqlnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sqlserver")
    {
        sqlserver = value;
        sqlserver.value_namespace = name_space;
        sqlserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssh")
    {
        ssh = value;
        ssh.value_namespace = name_space;
        ssh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "streamwork")
    {
        streamwork = value;
        streamwork.value_namespace = name_space;
        streamwork.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stun")
    {
        stun = value;
        stun.value_namespace = name_space;
        stun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sunrpc")
    {
        sunrpc = value;
        sunrpc.value_namespace = name_space;
        sunrpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "telnet")
    {
        telnet = value;
        telnet.value_namespace = name_space;
        telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp")
    {
        tftp = value;
        tftp.value_namespace = name_space;
        tftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdolive")
    {
        vdolive = value;
        vdolive.value_namespace = name_space;
        vdolive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vofr")
    {
        vofr = value;
        vofr.value_namespace = name_space;
        vofr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "winmx")
    {
        winmx = value;
        winmx.value_namespace = name_space;
        winmx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xwindows")
    {
        xwindows = value;
        xwindows.value_namespace = name_space;
        xwindows.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocols")
    {
        protocols.yfilter = yfilter;
    }
    if(value_path == "clns")
    {
        clns.yfilter = yfilter;
    }
    if(value_path == "clns_es")
    {
        clns_es.yfilter = yfilter;
    }
    if(value_path == "clns_is")
    {
        clns_is.yfilter = yfilter;
    }
    if(value_path == "cmns")
    {
        cmns.yfilter = yfilter;
    }
    if(value_path == "compressedtcp")
    {
        compressedtcp.yfilter = yfilter;
    }
    if(value_path == "cuseeme")
    {
        cuseeme.yfilter = yfilter;
    }
    if(value_path == "decnet")
    {
        decnet.yfilter = yfilter;
    }
    if(value_path == "decnet_node")
    {
        decnet_node.yfilter = yfilter;
    }
    if(value_path == "decnet_router-l1")
    {
        decnet_router_l1.yfilter = yfilter;
    }
    if(value_path == "decnet_router-l2")
    {
        decnet_router_l2.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "dlsw")
    {
        dlsw.yfilter = yfilter;
    }
    if(value_path == "dns")
    {
        dns.yfilter = yfilter;
    }
    if(value_path == "edonkey")
    {
        edonkey.yfilter = yfilter;
    }
    if(value_path == "egp")
    {
        egp.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "exchange")
    {
        exchange.yfilter = yfilter;
    }
    if(value_path == "finger")
    {
        finger.yfilter = yfilter;
    }
    if(value_path == "ftp")
    {
        ftp.yfilter = yfilter;
    }
    if(value_path == "gopher")
    {
        gopher.yfilter = yfilter;
    }
    if(value_path == "gre")
    {
        gre.yfilter = yfilter;
    }
    if(value_path == "h323")
    {
        h323.yfilter = yfilter;
    }
    if(value_path == "icmp")
    {
        icmp.yfilter = yfilter;
    }
    if(value_path == "imap")
    {
        imap.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ipinip")
    {
        ipinip.yfilter = yfilter;
    }
    if(value_path == "ipsec")
    {
        ipsec.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "ipx")
    {
        ipx.yfilter = yfilter;
    }
    if(value_path == "irc")
    {
        irc.yfilter = yfilter;
    }
    if(value_path == "kerberos")
    {
        kerberos.yfilter = yfilter;
    }
    if(value_path == "l2tp")
    {
        l2tp.yfilter = yfilter;
    }
    if(value_path == "ldap")
    {
        ldap.yfilter = yfilter;
    }
    if(value_path == "llc2")
    {
        llc2.yfilter = yfilter;
    }
    if(value_path == "mgcp")
    {
        mgcp.yfilter = yfilter;
    }
    if(value_path == "netbios")
    {
        netbios.yfilter = yfilter;
    }
    if(value_path == "netshow")
    {
        netshow.yfilter = yfilter;
    }
    if(value_path == "nfs")
    {
        nfs.yfilter = yfilter;
    }
    if(value_path == "nntp")
    {
        nntp.yfilter = yfilter;
    }
    if(value_path == "notes")
    {
        notes.yfilter = yfilter;
    }
    if(value_path == "novadigm")
    {
        novadigm.yfilter = yfilter;
    }
    if(value_path == "ntp")
    {
        ntp.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
    if(value_path == "pad")
    {
        pad.yfilter = yfilter;
    }
    if(value_path == "pcanywhere")
    {
        pcanywhere.yfilter = yfilter;
    }
    if(value_path == "pop3")
    {
        pop3.yfilter = yfilter;
    }
    if(value_path == "pppoe")
    {
        pppoe.yfilter = yfilter;
    }
    if(value_path == "pptp")
    {
        pptp.yfilter = yfilter;
    }
    if(value_path == "printer")
    {
        printer.yfilter = yfilter;
    }
    if(value_path == "qllc")
    {
        qllc.yfilter = yfilter;
    }
    if(value_path == "rcmd")
    {
        rcmd.yfilter = yfilter;
    }
    if(value_path == "rip")
    {
        rip.yfilter = yfilter;
    }
    if(value_path == "rsrb")
    {
        rsrb.yfilter = yfilter;
    }
    if(value_path == "rsvp")
    {
        rsvp.yfilter = yfilter;
    }
    if(value_path == "rtcp")
    {
        rtcp.yfilter = yfilter;
    }
    if(value_path == "rtsp")
    {
        rtsp.yfilter = yfilter;
    }
    if(value_path == "secure-ftp")
    {
        secure_ftp.yfilter = yfilter;
    }
    if(value_path == "secure-http")
    {
        secure_http.yfilter = yfilter;
    }
    if(value_path == "secure-imap")
    {
        secure_imap.yfilter = yfilter;
    }
    if(value_path == "secure-irc")
    {
        secure_irc.yfilter = yfilter;
    }
    if(value_path == "secure-ldap")
    {
        secure_ldap.yfilter = yfilter;
    }
    if(value_path == "secure-nntp")
    {
        secure_nntp.yfilter = yfilter;
    }
    if(value_path == "secure-pop3")
    {
        secure_pop3.yfilter = yfilter;
    }
    if(value_path == "secure-telnet")
    {
        secure_telnet.yfilter = yfilter;
    }
    if(value_path == "sip")
    {
        sip.yfilter = yfilter;
    }
    if(value_path == "skinny")
    {
        skinny.yfilter = yfilter;
    }
    if(value_path == "snapshot")
    {
        snapshot.yfilter = yfilter;
    }
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
    if(value_path == "socks")
    {
        socks.yfilter = yfilter;
    }
    if(value_path == "sqlnet")
    {
        sqlnet.yfilter = yfilter;
    }
    if(value_path == "sqlserver")
    {
        sqlserver.yfilter = yfilter;
    }
    if(value_path == "ssh")
    {
        ssh.yfilter = yfilter;
    }
    if(value_path == "streamwork")
    {
        streamwork.yfilter = yfilter;
    }
    if(value_path == "stun")
    {
        stun.yfilter = yfilter;
    }
    if(value_path == "sunrpc")
    {
        sunrpc.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
    if(value_path == "telnet")
    {
        telnet.yfilter = yfilter;
    }
    if(value_path == "tftp")
    {
        tftp.yfilter = yfilter;
    }
    if(value_path == "vdolive")
    {
        vdolive.yfilter = yfilter;
    }
    if(value_path == "vofr")
    {
        vofr.yfilter = yfilter;
    }
    if(value_path == "winmx")
    {
        winmx.yfilter = yfilter;
    }
    if(value_path == "xwindows")
    {
        xwindows.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "citrix" || name == "fasttrack" || name == "gnutella" || name == "http" || name == "kazaa2" || name == "napster" || name == "rtp" || name == "smtp" || name == "attribute" || name == "protocols" || name == "clns" || name == "clns_es" || name == "clns_is" || name == "cmns" || name == "compressedtcp" || name == "cuseeme" || name == "decnet" || name == "decnet_node" || name == "decnet_router-l1" || name == "decnet_router-l2" || name == "dhcp" || name == "dlsw" || name == "dns" || name == "edonkey" || name == "egp" || name == "eigrp" || name == "exchange" || name == "finger" || name == "ftp" || name == "gopher" || name == "gre" || name == "h323" || name == "icmp" || name == "imap" || name == "ip" || name == "ipinip" || name == "ipsec" || name == "ipv6" || name == "ipx" || name == "irc" || name == "kerberos" || name == "l2tp" || name == "ldap" || name == "llc2" || name == "mgcp" || name == "netbios" || name == "netshow" || name == "nfs" || name == "nntp" || name == "notes" || name == "novadigm" || name == "ntp" || name == "ospf" || name == "pad" || name == "pcanywhere" || name == "pop3" || name == "pppoe" || name == "pptp" || name == "printer" || name == "qllc" || name == "rcmd" || name == "rip" || name == "rsrb" || name == "rsvp" || name == "rtcp" || name == "rtsp" || name == "secure-ftp" || name == "secure-http" || name == "secure-imap" || name == "secure-irc" || name == "secure-ldap" || name == "secure-nntp" || name == "secure-pop3" || name == "secure-telnet" || name == "sip" || name == "skinny" || name == "snapshot" || name == "snmp" || name == "socks" || name == "sqlnet" || name == "sqlserver" || name == "ssh" || name == "streamwork" || name == "stun" || name == "sunrpc" || name == "syslog" || name == "telnet" || name == "tftp" || name == "vdolive" || name == "vofr" || name == "winmx" || name == "xwindows")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Citrix::Citrix()
    :
    ica_tag{YType::str, "ica-tag"}
{

    yang_name = "citrix"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Citrix::~Citrix()
{
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Citrix::has_data() const
{
    return ica_tag.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Citrix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ica_tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Protocol::Citrix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "citrix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Protocol::Citrix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ica_tag.is_set || is_set(ica_tag.yfilter)) leaf_name_data.push_back(ica_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Protocol::Citrix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Protocol::Citrix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Citrix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ica-tag")
    {
        ica_tag = value;
        ica_tag.value_namespace = name_space;
        ica_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Citrix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ica-tag")
    {
        ica_tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Citrix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ica-tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack::Fasttrack()
    :
    file_transfer{YType::str, "file-transfer"}
{

    yang_name = "fasttrack"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack::~Fasttrack()
{
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack::has_data() const
{
    return file_transfer.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file_transfer.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fasttrack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_transfer.is_set || is_set(file_transfer.yfilter)) leaf_name_data.push_back(file_transfer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file-transfer")
    {
        file_transfer = value;
        file_transfer.value_namespace = name_space;
        file_transfer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file-transfer")
    {
        file_transfer.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Fasttrack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file-transfer")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella::Gnutella()
    :
    file_transfer{YType::str, "file-transfer"}
{

    yang_name = "gnutella"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella::~Gnutella()
{
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella::has_data() const
{
    return file_transfer.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file_transfer.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnutella";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_transfer.is_set || is_set(file_transfer.yfilter)) leaf_name_data.push_back(file_transfer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file-transfer")
    {
        file_transfer = value;
        file_transfer.value_namespace = name_space;
        file_transfer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file-transfer")
    {
        file_transfer.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Gnutella::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file-transfer")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Http::Http()
    :
    c_header_field{YType::str, "c-header-field"},
    host{YType::str, "host"},
    mime{YType::str, "mime"},
    s_header_field{YType::str, "s-header-field"},
    url{YType::str, "url"}
{

    yang_name = "http"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Http::~Http()
{
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Http::has_data() const
{
    return c_header_field.is_set
	|| host.is_set
	|| mime.is_set
	|| s_header_field.is_set
	|| url.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(c_header_field.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(mime.yfilter)
	|| ydk::is_set(s_header_field.yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Protocol::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Protocol::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (c_header_field.is_set || is_set(c_header_field.yfilter)) leaf_name_data.push_back(c_header_field.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mime.is_set || is_set(mime.yfilter)) leaf_name_data.push_back(mime.get_name_leafdata());
    if (s_header_field.is_set || is_set(s_header_field.yfilter)) leaf_name_data.push_back(s_header_field.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Protocol::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Protocol::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "c-header-field")
    {
        c_header_field = value;
        c_header_field.value_namespace = name_space;
        c_header_field.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mime")
    {
        mime = value;
        mime.value_namespace = name_space;
        mime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s-header-field")
    {
        s_header_field = value;
        s_header_field.value_namespace = name_space;
        s_header_field.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "c-header-field")
    {
        c_header_field.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "mime")
    {
        mime.yfilter = yfilter;
    }
    if(value_path == "s-header-field")
    {
        s_header_field.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "c-header-field" || name == "host" || name == "mime" || name == "s-header-field" || name == "url")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2::Kazaa2()
    :
    file_transfer{YType::str, "file-transfer"}
{

    yang_name = "kazaa2"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2::~Kazaa2()
{
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2::has_data() const
{
    return file_transfer.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file_transfer.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kazaa2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_transfer.is_set || is_set(file_transfer.yfilter)) leaf_name_data.push_back(file_transfer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file-transfer")
    {
        file_transfer = value;
        file_transfer.value_namespace = name_space;
        file_transfer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file-transfer")
    {
        file_transfer.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Kazaa2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file-transfer")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Napster::Napster()
    :
    non_std{YType::empty, "non-std"}
{

    yang_name = "napster"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Napster::~Napster()
{
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Napster::has_data() const
{
    return non_std.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Napster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_std.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Protocol::Napster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "napster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Protocol::Napster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_std.is_set || is_set(non_std.yfilter)) leaf_name_data.push_back(non_std.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Protocol::Napster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Protocol::Napster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Napster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-std")
    {
        non_std = value;
        non_std.value_namespace = name_space;
        non_std.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Napster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-std")
    {
        non_std.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Napster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-std")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Rtp::Rtp()
    :
    audio{YType::empty, "audio"},
    payload_type{YType::str, "payload-type"},
    video{YType::empty, "video"}
{

    yang_name = "rtp"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Rtp::~Rtp()
{
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Rtp::has_data() const
{
    return audio.is_set
	|| payload_type.is_set
	|| video.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Rtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(audio.yfilter)
	|| ydk::is_set(payload_type.yfilter)
	|| ydk::is_set(video.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Protocol::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Protocol::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (audio.is_set || is_set(audio.yfilter)) leaf_name_data.push_back(audio.get_name_leafdata());
    if (payload_type.is_set || is_set(payload_type.yfilter)) leaf_name_data.push_back(payload_type.get_name_leafdata());
    if (video.is_set || is_set(video.yfilter)) leaf_name_data.push_back(video.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Protocol::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Protocol::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "audio")
    {
        audio = value;
        audio.value_namespace = name_space;
        audio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-type")
    {
        payload_type = value;
        payload_type.value_namespace = name_space;
        payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "video")
    {
        video = value;
        video.value_namespace = name_space;
        video.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "audio")
    {
        audio.yfilter = yfilter;
    }
    if(value_path == "payload-type")
    {
        payload_type.yfilter = yfilter;
    }
    if(value_path == "video")
    {
        video.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "audio" || name == "payload-type" || name == "video")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Smtp::Smtp()
    :
    extended{YType::empty, "extended"}
{

    yang_name = "smtp"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Smtp::~Smtp()
{
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Smtp::has_data() const
{
    return extended.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Smtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Protocol::Smtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Protocol::Smtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Protocol::Smtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Protocol::Smtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Smtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Smtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Smtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::Attribute()
    :
    business_relevance(std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance>())
	,traffic_class(std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass>())
{
    business_relevance->parent = this;
    traffic_class->parent = this;

    yang_name = "attribute"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::has_data() const
{
    return (business_relevance !=  nullptr && business_relevance->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| (business_relevance !=  nullptr && business_relevance->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "business-relevance")
    {
        if(business_relevance == nullptr)
        {
            business_relevance = std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance>();
        }
        return business_relevance;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(business_relevance != nullptr)
    {
        children["business-relevance"] = business_relevance;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "business-relevance" || name == "traffic-class")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance::BusinessRelevance()
    :
    business_irrelevant{YType::empty, "business-irrelevant"},
    business_relevant{YType::empty, "business-relevant"},
    default_{YType::empty, "default"}
{

    yang_name = "business-relevance"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance::~BusinessRelevance()
{
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance::has_data() const
{
    return business_irrelevant.is_set
	|| business_relevant.is_set
	|| default_.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(business_irrelevant.yfilter)
	|| ydk::is_set(business_relevant.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "business-relevance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (business_irrelevant.is_set || is_set(business_irrelevant.yfilter)) leaf_name_data.push_back(business_irrelevant.get_name_leafdata());
    if (business_relevant.is_set || is_set(business_relevant.yfilter)) leaf_name_data.push_back(business_relevant.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "business-irrelevant")
    {
        business_irrelevant = value;
        business_irrelevant.value_namespace = name_space;
        business_irrelevant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "business-relevant")
    {
        business_relevant = value;
        business_relevant.value_namespace = name_space;
        business_relevant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "business-irrelevant")
    {
        business_irrelevant.yfilter = yfilter;
    }
    if(value_path == "business-relevant")
    {
        business_relevant.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::BusinessRelevance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "business-irrelevant" || name == "business-relevant" || name == "default")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass::TrafficClass()
    :
    broadcast_video{YType::empty, "broadcast-video"},
    bulk_data{YType::empty, "bulk-data"},
    multimedia_conferencing{YType::empty, "multimedia-conferencing"},
    multimedia_streaming{YType::empty, "multimedia-streaming"},
    network_control{YType::empty, "network-control"},
    ops_admin_mgmt{YType::empty, "ops-admin-mgmt"},
    real_time_interactive{YType::empty, "real-time-interactive"},
    signaling{YType::empty, "signaling"},
    transactional_data{YType::empty, "transactional-data"},
    voip_telephony{YType::empty, "voip-telephony"}
{

    yang_name = "traffic-class"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass::~TrafficClass()
{
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass::has_data() const
{
    return broadcast_video.is_set
	|| bulk_data.is_set
	|| multimedia_conferencing.is_set
	|| multimedia_streaming.is_set
	|| network_control.is_set
	|| ops_admin_mgmt.is_set
	|| real_time_interactive.is_set
	|| signaling.is_set
	|| transactional_data.is_set
	|| voip_telephony.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_video.yfilter)
	|| ydk::is_set(bulk_data.yfilter)
	|| ydk::is_set(multimedia_conferencing.yfilter)
	|| ydk::is_set(multimedia_streaming.yfilter)
	|| ydk::is_set(network_control.yfilter)
	|| ydk::is_set(ops_admin_mgmt.yfilter)
	|| ydk::is_set(real_time_interactive.yfilter)
	|| ydk::is_set(signaling.yfilter)
	|| ydk::is_set(transactional_data.yfilter)
	|| ydk::is_set(voip_telephony.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_video.is_set || is_set(broadcast_video.yfilter)) leaf_name_data.push_back(broadcast_video.get_name_leafdata());
    if (bulk_data.is_set || is_set(bulk_data.yfilter)) leaf_name_data.push_back(bulk_data.get_name_leafdata());
    if (multimedia_conferencing.is_set || is_set(multimedia_conferencing.yfilter)) leaf_name_data.push_back(multimedia_conferencing.get_name_leafdata());
    if (multimedia_streaming.is_set || is_set(multimedia_streaming.yfilter)) leaf_name_data.push_back(multimedia_streaming.get_name_leafdata());
    if (network_control.is_set || is_set(network_control.yfilter)) leaf_name_data.push_back(network_control.get_name_leafdata());
    if (ops_admin_mgmt.is_set || is_set(ops_admin_mgmt.yfilter)) leaf_name_data.push_back(ops_admin_mgmt.get_name_leafdata());
    if (real_time_interactive.is_set || is_set(real_time_interactive.yfilter)) leaf_name_data.push_back(real_time_interactive.get_name_leafdata());
    if (signaling.is_set || is_set(signaling.yfilter)) leaf_name_data.push_back(signaling.get_name_leafdata());
    if (transactional_data.is_set || is_set(transactional_data.yfilter)) leaf_name_data.push_back(transactional_data.get_name_leafdata());
    if (voip_telephony.is_set || is_set(voip_telephony.yfilter)) leaf_name_data.push_back(voip_telephony.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-video")
    {
        broadcast_video = value;
        broadcast_video.value_namespace = name_space;
        broadcast_video.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bulk-data")
    {
        bulk_data = value;
        bulk_data.value_namespace = name_space;
        bulk_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multimedia-conferencing")
    {
        multimedia_conferencing = value;
        multimedia_conferencing.value_namespace = name_space;
        multimedia_conferencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multimedia-streaming")
    {
        multimedia_streaming = value;
        multimedia_streaming.value_namespace = name_space;
        multimedia_streaming.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-control")
    {
        network_control = value;
        network_control.value_namespace = name_space;
        network_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ops-admin-mgmt")
    {
        ops_admin_mgmt = value;
        ops_admin_mgmt.value_namespace = name_space;
        ops_admin_mgmt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real-time-interactive")
    {
        real_time_interactive = value;
        real_time_interactive.value_namespace = name_space;
        real_time_interactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling")
    {
        signaling = value;
        signaling.value_namespace = name_space;
        signaling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transactional-data")
    {
        transactional_data = value;
        transactional_data.value_namespace = name_space;
        transactional_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voip-telephony")
    {
        voip_telephony = value;
        voip_telephony.value_namespace = name_space;
        voip_telephony.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-video")
    {
        broadcast_video.yfilter = yfilter;
    }
    if(value_path == "bulk-data")
    {
        bulk_data.yfilter = yfilter;
    }
    if(value_path == "multimedia-conferencing")
    {
        multimedia_conferencing.yfilter = yfilter;
    }
    if(value_path == "multimedia-streaming")
    {
        multimedia_streaming.yfilter = yfilter;
    }
    if(value_path == "network-control")
    {
        network_control.yfilter = yfilter;
    }
    if(value_path == "ops-admin-mgmt")
    {
        ops_admin_mgmt.yfilter = yfilter;
    }
    if(value_path == "real-time-interactive")
    {
        real_time_interactive.yfilter = yfilter;
    }
    if(value_path == "signaling")
    {
        signaling.yfilter = yfilter;
    }
    if(value_path == "transactional-data")
    {
        transactional_data.yfilter = yfilter;
    }
    if(value_path == "voip-telephony")
    {
        voip_telephony.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Protocol::Attribute::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-video" || name == "bulk-data" || name == "multimedia-conferencing" || name == "multimedia-streaming" || name == "network-control" || name == "ops-admin-mgmt" || name == "real-time-interactive" || name == "signaling" || name == "transactional-data" || name == "voip-telephony")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::SecurityGroup::SecurityGroup()
    :
    destination(std::make_shared<Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination>())
	,source(std::make_shared<Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "security-group"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::SecurityGroup::~SecurityGroup()
{
}

bool Native::Policy::ClassMap::Match::Not_::SecurityGroup::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Policy::ClassMap::Match::Not_::SecurityGroup::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not_::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::SecurityGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::SecurityGroup::get_children() const
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

void Native::Policy::ClassMap::Match::Not_::SecurityGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not_::SecurityGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not_::SecurityGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination::Destination()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "destination"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination::~Destination()
{
}

bool Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::SecurityGroup::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source::Source()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "source"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source::~Source()
{
}

bool Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::SecurityGroup::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::SourceAddress::SourceAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "source-address"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::SourceAddress::~SourceAddress()
{
}

bool Native::Policy::ClassMap::Match::Not_::SourceAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not_::SourceAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not_::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not_::Vlan::Vlan()
    :
    inner{YType::str, "inner"},
    value_{YType::str, "value"}
{

    yang_name = "vlan"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not_::Vlan::~Vlan()
{
}

bool Native::Policy::ClassMap::Match::Not_::Vlan::has_data() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not_::Vlan::has_operation() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(inner.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not_::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not_::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto inner_name_datas = inner.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_name_datas.begin(), inner_name_datas.end());
    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not_::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not_::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not_::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner")
    {
        inner.append(value);
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not_::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner")
    {
        inner.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not_::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner" || name == "value")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::NoMatch()
    :
    authorization_status(std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizationStatus>())
	,authorizing_method_priority(std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority>())
	,method(std::make_shared<Native::Policy::ClassMap::NoMatch::Method>())
	,result_type(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType>())
{
    authorization_status->parent = this;
    authorizing_method_priority->parent = this;
    method->parent = this;
    result_type->parent = this;

    yang_name = "no-match"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::~NoMatch()
{
}

bool Native::Policy::ClassMap::NoMatch::has_data() const
{
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_data())
            return true;
    }
    return (authorization_status !=  nullptr && authorization_status->has_data())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_data())
	|| (method !=  nullptr && method->has_data())
	|| (result_type !=  nullptr && result_type->has_data());
}

bool Native::Policy::ClassMap::NoMatch::has_operation() const
{
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (authorization_status !=  nullptr && authorization_status->has_operation())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_operation())
	|| (method !=  nullptr && method->has_operation())
	|| (result_type !=  nullptr && result_type->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "activated-service-template")
    {
        for(auto const & c : activated_service_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate>();
        c->parent = this;
        activated_service_template.push_back(c);
        return c;
    }

    if(child_yang_name == "authorization-status")
    {
        if(authorization_status == nullptr)
        {
            authorization_status = std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizationStatus>();
        }
        return authorization_status;
    }

    if(child_yang_name == "authorizing-method-priority")
    {
        if(authorizing_method_priority == nullptr)
        {
            authorizing_method_priority = std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority>();
        }
        return authorizing_method_priority;
    }

    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::NoMatch::Method>();
        }
        return method;
    }

    if(child_yang_name == "result-type")
    {
        if(result_type == nullptr)
        {
            result_type = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType>();
        }
        return result_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : activated_service_template)
    {
        children[c->get_segment_path()] = c;
    }

    if(authorization_status != nullptr)
    {
        children["authorization-status"] = authorization_status;
    }

    if(authorizing_method_priority != nullptr)
    {
        children["authorizing-method-priority"] = authorizing_method_priority;
    }

    if(method != nullptr)
    {
        children["method"] = method;
    }

    if(result_type != nullptr)
    {
        children["result-type"] = result_type;
    }

    return children;
}

void Native::Policy::ClassMap::NoMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::NoMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::NoMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-service-template" || name == "authorization-status" || name == "authorizing-method-priority" || name == "method" || name == "result-type")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::ActivatedServiceTemplate()
    :
    service_name{YType::str, "service-name"}
{

    yang_name = "activated-service-template"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::~ActivatedServiceTemplate()
{
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_data() const
{
    return service_name.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activated-service-template" <<"[service-name='" <<service_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::AuthorizationStatus::AuthorizationStatus()
    :
    authorized{YType::empty, "authorized"},
    unauthorized{YType::empty, "unauthorized"}
{

    yang_name = "authorization-status"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::AuthorizationStatus::~AuthorizationStatus()
{
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_data() const
{
    return authorized.is_set
	|| unauthorized.is_set;
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorized.yfilter)
	|| ydk::is_set(unauthorized.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorized.is_set || is_set(authorized.yfilter)) leaf_name_data.push_back(authorized.get_name_leafdata());
    if (unauthorized.is_set || is_set(unauthorized.yfilter)) leaf_name_data.push_back(unauthorized.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::AuthorizationStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorized")
    {
        authorized = value;
        authorized.value_namespace = name_space;
        authorized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unauthorized")
    {
        unauthorized = value;
        unauthorized.value_namespace = name_space;
        unauthorized.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::AuthorizationStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorized")
    {
        authorized.yfilter = yfilter;
    }
    if(value_path == "unauthorized")
    {
        unauthorized.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorized" || name == "unauthorized")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::AuthorizingMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "authorizing-method-priority"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::~AuthorizingMethodPriority()
{
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizing-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::Method::Method()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "method"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::Method::~Method()
{
}

bool Native::Policy::ClassMap::NoMatch::Method::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::ClassMap::NoMatch::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::ResultType()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
    	,
    method(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method>())
{
    method->parent = this;

    yang_name = "result-type"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::~ResultType()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set
	|| (method !=  nullptr && method->has_data());
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Method()
    :
    dot1x(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X>())
	,mab(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab>())
	,webauth(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth>())
{
    dot1x->parent = this;
    mab->parent = this;
    webauth->parent = this;

    yang_name = "method"; yang_parent_name = "result-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::~Method()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_data() const
{
    return (dot1x !=  nullptr && dot1x->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (webauth !=  nullptr && webauth->has_data());
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_operation() const
{
    return is_set(yfilter)
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(mab != nullptr)
    {
        children["mab"] = mab;
    }

    if(webauth != nullptr)
    {
        children["webauth"] = webauth;
    }

    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::Dot1X()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "dot1x"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::~Dot1X()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::Mab()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "mab"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::~Mab()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::Webauth()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "webauth"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::~Webauth()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::PolicyMap::PolicyMap()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    subscriber{YType::empty, "subscriber"},
    protocol{YType::enumeration, "protocol"},
    description{YType::str, "description"},
    sequence_interval{YType::uint16, "sequence-interval"}
{

    yang_name = "policy-map"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Policy::PolicyMap::~PolicyMap()
{
}

bool Native::Policy::PolicyMap::has_data() const
{
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return name.is_set
	|| type.is_set
	|| subscriber.is_set
	|| protocol.is_set
	|| description.is_set
	|| sequence_interval.is_set;
}

bool Native::Policy::PolicyMap::has_operation() const
{
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(subscriber.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(sequence_interval.yfilter);
}

std::string Native::Policy::PolicyMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Policy::PolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:policy-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (sequence_interval.is_set || is_set(sequence_interval.yfilter)) leaf_name_data.push_back(sequence_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        for(auto const & c : event)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Event>();
        c->parent = this;
        event.push_back(c);
        return c;
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : event)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-interval")
    {
        sequence_interval = value;
        sequence_interval.value_namespace = name_space;
        sequence_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "sequence-interval")
    {
        sequence_interval.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "class" || name == "name" || name == "type" || name == "subscriber" || name == "protocol" || name == "description" || name == "sequence-interval")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::Event()
    :
    event_type{YType::enumeration, "event-type"},
    match_type{YType::enumeration, "match-type"}
{

    yang_name = "event"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::~Event()
{
}

bool Native::Policy::PolicyMap::Event::has_data() const
{
    for (std::size_t index=0; index<class_number.size(); index++)
    {
        if(class_number[index]->has_data())
            return true;
    }
    return event_type.is_set
	|| match_type.is_set;
}

bool Native::Policy::PolicyMap::Event::has_operation() const
{
    for (std::size_t index=0; index<class_number.size(); index++)
    {
        if(class_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(match_type.yfilter);
}

std::string Native::Policy::PolicyMap::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event" <<"[event-type='" <<event_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-number")
    {
        for(auto const & c : class_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber>();
        c->parent = this;
        class_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-number" || name == "event-type" || name == "match-type")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ClassNumber()
    :
    number{YType::uint8, "number"},
    class_{YType::str, "class"},
    execution_type{YType::enumeration, "execution-type"}
{

    yang_name = "class-number"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::~ClassNumber()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_data() const
{
    for (std::size_t index=0; index<action_number.size(); index++)
    {
        if(action_number[index]->has_data())
            return true;
    }
    return number.is_set
	|| class_.is_set
	|| execution_type.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_operation() const
{
    for (std::size_t index=0; index<action_number.size(); index++)
    {
        if(action_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(execution_type.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (execution_type.is_set || is_set(execution_type.yfilter)) leaf_name_data.push_back(execution_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-number")
    {
        for(auto const & c : action_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber>();
        c->parent = this;
        action_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "execution-type")
    {
        execution_type = value;
        execution_type.value_namespace = name_space;
        execution_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "execution-type")
    {
        execution_type.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-number" || name == "number" || name == "class" || name == "execution-type")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::ActionNumber()
    :
    number{YType::uint8, "number"},
    clear_session{YType::empty, "clear-session"},
    authentication_restart{YType::uint16, "authentication-restart"},
    authorize{YType::empty, "authorize"}
    	,
    terminate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate>())
	,resume(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume>())
	,pause(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause>())
	,activate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate>())
	,authenticate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate>())
{
    terminate->parent = this;
    resume->parent = this;
    pause->parent = this;
    activate->parent = this;
    authenticate->parent = this;

    yang_name = "action-number"; yang_parent_name = "class-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::~ActionNumber()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_data() const
{
    return number.is_set
	|| clear_session.is_set
	|| authentication_restart.is_set
	|| authorize.is_set
	|| (terminate !=  nullptr && terminate->has_data())
	|| (resume !=  nullptr && resume->has_data())
	|| (pause !=  nullptr && pause->has_data())
	|| (activate !=  nullptr && activate->has_data())
	|| (authenticate !=  nullptr && authenticate->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(clear_session.yfilter)
	|| ydk::is_set(authentication_restart.yfilter)
	|| ydk::is_set(authorize.yfilter)
	|| (terminate !=  nullptr && terminate->has_operation())
	|| (resume !=  nullptr && resume->has_operation())
	|| (pause !=  nullptr && pause->has_operation())
	|| (activate !=  nullptr && activate->has_operation())
	|| (authenticate !=  nullptr && authenticate->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (clear_session.is_set || is_set(clear_session.yfilter)) leaf_name_data.push_back(clear_session.get_name_leafdata());
    if (authentication_restart.is_set || is_set(authentication_restart.yfilter)) leaf_name_data.push_back(authentication_restart.get_name_leafdata());
    if (authorize.is_set || is_set(authorize.yfilter)) leaf_name_data.push_back(authorize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminate")
    {
        if(terminate == nullptr)
        {
            terminate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate>();
        }
        return terminate;
    }

    if(child_yang_name == "resume")
    {
        if(resume == nullptr)
        {
            resume = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume>();
        }
        return resume;
    }

    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause>();
        }
        return pause;
    }

    if(child_yang_name == "activate")
    {
        if(activate == nullptr)
        {
            activate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate>();
        }
        return activate;
    }

    if(child_yang_name == "authenticate")
    {
        if(authenticate == nullptr)
        {
            authenticate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate>();
        }
        return authenticate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(terminate != nullptr)
    {
        children["terminate"] = terminate;
    }

    if(resume != nullptr)
    {
        children["resume"] = resume;
    }

    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    if(activate != nullptr)
    {
        children["activate"] = activate;
    }

    if(authenticate != nullptr)
    {
        children["authenticate"] = authenticate;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-session")
    {
        clear_session = value;
        clear_session.value_namespace = name_space;
        clear_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-restart")
    {
        authentication_restart = value;
        authentication_restart.value_namespace = name_space;
        authentication_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorize")
    {
        authorize = value;
        authorize.value_namespace = name_space;
        authorize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "clear-session")
    {
        clear_session.yfilter = yfilter;
    }
    if(value_path == "authentication-restart")
    {
        authentication_restart.yfilter = yfilter;
    }
    if(value_path == "authorize")
    {
        authorize.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminate" || name == "resume" || name == "pause" || name == "activate" || name == "authenticate" || name == "number" || name == "clear-session" || name == "authentication-restart" || name == "authorize")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::Terminate()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "terminate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::~Terminate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::Resume()
    :
    reauthentication{YType::empty, "reauthentication"}
{

    yang_name = "resume"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::~Resume()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_data() const
{
    return reauthentication.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reauthentication.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resume";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reauthentication.is_set || is_set(reauthentication.yfilter)) leaf_name_data.push_back(reauthentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reauthentication")
    {
        reauthentication = value;
        reauthentication.value_namespace = name_space;
        reauthentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reauthentication")
    {
        reauthentication.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauthentication")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::Pause()
    :
    reauthentication{YType::empty, "reauthentication"}
{

    yang_name = "pause"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::~Pause()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_data() const
{
    return reauthentication.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reauthentication.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reauthentication.is_set || is_set(reauthentication.yfilter)) leaf_name_data.push_back(reauthentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reauthentication")
    {
        reauthentication = value;
        reauthentication.value_namespace = name_space;
        reauthentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reauthentication")
    {
        reauthentication.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauthentication")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::Activate()
    :
    service_template{YType::str, "service-template"}
{

    yang_name = "activate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::~Activate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_data() const
{
    return service_template.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_template.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_template.is_set || is_set(service_template.yfilter)) leaf_name_data.push_back(service_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-template")
    {
        service_template = value;
        service_template.value_namespace = name_space;
        service_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-template")
    {
        service_template.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-template")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Authenticate()
    :
    using_(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_>())
{
    using_->parent = this;

    yang_name = "authenticate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::~Authenticate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_data() const
{
    return (using_ !=  nullptr && using_->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_operation() const
{
    return is_set(yfilter)
	|| (using_ !=  nullptr && using_->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "using")
    {
        if(using_ == nullptr)
        {
            using_ = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_>();
        }
        return using_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(using_ != nullptr)
    {
        children["using"] = using_;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "using")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::Using_()
    :
    method{YType::enumeration, "method"},
    both{YType::empty, "both"},
    retries{YType::uint8, "retries"},
    retry_time{YType::uint16, "retry-time"},
    priority{YType::uint8, "priority"}
{

    yang_name = "using"; yang_parent_name = "authenticate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::~Using_()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::has_data() const
{
    return method.is_set
	|| both.is_set
	|| retries.is_set
	|| retry_time.is_set
	|| priority.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(both.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(retry_time.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "using";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (both.is_set || is_set(both.yfilter)) leaf_name_data.push_back(both.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (retry_time.is_set || is_set(retry_time.yfilter)) leaf_name_data.push_back(retry_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "both")
    {
        both = value;
        both.value_namespace = name_space;
        both.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-time")
    {
        retry_time = value;
        retry_time.value_namespace = name_space;
        retry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "both")
    {
        both.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "retry-time")
    {
        retry_time.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "both" || name == "retries" || name == "retry-time" || name == "priority")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::Class_()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    insert_before{YType::str, "insert-before"}
    	,
    appnav_policy(std::make_shared<Native::Policy::PolicyMap::Class_::AppnavPolicy>())
	,policy(std::make_shared<Native::Policy::PolicyMap::Class_::Policy_>())
	,pm_policy(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy>())
	,inspect_police(std::make_shared<Native::Policy::PolicyMap::Class_::InspectPolice>())
{
    appnav_policy->parent = this;
    policy->parent = this;
    pm_policy->parent = this;
    inspect_police->parent = this;

    yang_name = "class"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::~Class_()
{
}

bool Native::Policy::PolicyMap::Class_::has_data() const
{
    for (std::size_t index=0; index<action_list.size(); index++)
    {
        if(action_list[index]->has_data())
            return true;
    }
    return name.is_set
	|| type.is_set
	|| insert_before.is_set
	|| (appnav_policy !=  nullptr && appnav_policy->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (pm_policy !=  nullptr && pm_policy->has_data())
	|| (inspect_police !=  nullptr && inspect_police->has_data());
}

bool Native::Policy::PolicyMap::Class_::has_operation() const
{
    for (std::size_t index=0; index<action_list.size(); index++)
    {
        if(action_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(insert_before.yfilter)
	|| (appnav_policy !=  nullptr && appnav_policy->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (pm_policy !=  nullptr && pm_policy->has_operation())
	|| (inspect_police !=  nullptr && inspect_police->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (insert_before.is_set || is_set(insert_before.yfilter)) leaf_name_data.push_back(insert_before.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appnav-policy")
    {
        if(appnav_policy == nullptr)
        {
            appnav_policy = std::make_shared<Native::Policy::PolicyMap::Class_::AppnavPolicy>();
        }
        return appnav_policy;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Policy::PolicyMap::Class_::Policy_>();
        }
        return policy;
    }

    if(child_yang_name == "pm-policy")
    {
        if(pm_policy == nullptr)
        {
            pm_policy = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy>();
        }
        return pm_policy;
    }

    if(child_yang_name == "inspect-police")
    {
        if(inspect_police == nullptr)
        {
            inspect_police = std::make_shared<Native::Policy::PolicyMap::Class_::InspectPolice>();
        }
        return inspect_police;
    }

    if(child_yang_name == "action-list")
    {
        for(auto const & c : action_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList>();
        c->parent = this;
        action_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(appnav_policy != nullptr)
    {
        children["appnav-policy"] = appnav_policy;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(pm_policy != nullptr)
    {
        children["pm-policy"] = pm_policy;
    }

    if(inspect_police != nullptr)
    {
        children["inspect-police"] = inspect_police;
    }

    for (auto const & c : action_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "insert-before")
    {
        insert_before = value;
        insert_before.value_namespace = name_space;
        insert_before.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "insert-before")
    {
        insert_before.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appnav-policy" || name == "policy" || name == "pm-policy" || name == "inspect-police" || name == "action-list" || name == "name" || name == "type" || name == "insert-before")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::AppnavPolicy::AppnavPolicy()
    :
    monitor_load{YType::enumeration, "monitor-load"},
    pass_through{YType::empty, "pass-through"}
{

    yang_name = "appnav-policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::AppnavPolicy::~AppnavPolicy()
{
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::has_data() const
{
    for (std::size_t index=0; index<distribute.size(); index++)
    {
        if(distribute[index]->has_data())
            return true;
    }
    return monitor_load.is_set
	|| pass_through.is_set;
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::has_operation() const
{
    for (std::size_t index=0; index<distribute.size(); index++)
    {
        if(distribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(monitor_load.yfilter)
	|| ydk::is_set(pass_through.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::AppnavPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appnav-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::AppnavPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_load.is_set || is_set(monitor_load.yfilter)) leaf_name_data.push_back(monitor_load.get_name_leafdata());
    if (pass_through.is_set || is_set(pass_through.yfilter)) leaf_name_data.push_back(pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::AppnavPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribute")
    {
        for(auto const & c : distribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute>();
        c->parent = this;
        distribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::AppnavPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : distribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::AppnavPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-load")
    {
        monitor_load = value;
        monitor_load.value_namespace = name_space;
        monitor_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass-through")
    {
        pass_through = value;
        pass_through.value_namespace = name_space;
        pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::AppnavPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-load")
    {
        monitor_load.yfilter = yfilter;
    }
    if(value_path == "pass-through")
    {
        pass_through.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribute" || name == "monitor-load" || name == "pass-through")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::Distribute()
    :
    service_node_group{YType::str, "service-node-group"},
    insert_before{YType::str, "insert-before"}
{

    yang_name = "distribute"; yang_parent_name = "appnav-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::~Distribute()
{
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::has_data() const
{
    return service_node_group.is_set
	|| insert_before.is_set;
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_node_group.yfilter)
	|| ydk::is_set(insert_before.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute" <<"[service-node-group='" <<service_node_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_node_group.is_set || is_set(service_node_group.yfilter)) leaf_name_data.push_back(service_node_group.get_name_leafdata());
    if (insert_before.is_set || is_set(insert_before.yfilter)) leaf_name_data.push_back(insert_before.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-node-group")
    {
        service_node_group = value;
        service_node_group.value_namespace = name_space;
        service_node_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insert-before")
    {
        insert_before = value;
        insert_before.value_namespace = name_space;
        insert_before.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-node-group")
    {
        service_node_group.yfilter = yfilter;
    }
    if(value_path == "insert-before")
    {
        insert_before.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-node-group" || name == "insert-before")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::Policy_::Policy_()
    :
    action{YType::enumeration, "action"},
    log{YType::empty, "log"},
    parameter_map{YType::str, "parameter-map"}
    	,
    dpi(std::make_shared<Native::Policy::PolicyMap::Class_::Policy_::Dpi>())
{
    dpi->parent = this;

    yang_name = "policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::Policy_::~Policy_()
{
}

bool Native::Policy::PolicyMap::Class_::Policy_::has_data() const
{
    return action.is_set
	|| log.is_set
	|| parameter_map.is_set
	|| (dpi !=  nullptr && dpi->has_data());
}

bool Native::Policy::PolicyMap::Class_::Policy_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(parameter_map.yfilter)
	|| (dpi !=  nullptr && dpi->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::Policy_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::Policy_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (parameter_map.is_set || is_set(parameter_map.yfilter)) leaf_name_data.push_back(parameter_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::Policy_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dpi")
    {
        if(dpi == nullptr)
        {
            dpi = std::make_shared<Native::Policy::PolicyMap::Class_::Policy_::Dpi>();
        }
        return dpi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::Policy_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dpi != nullptr)
    {
        children["dpi"] = dpi;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::Policy_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parameter-map")
    {
        parameter_map = value;
        parameter_map.value_namespace = name_space;
        parameter_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::Policy_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "parameter-map")
    {
        parameter_map.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::Policy_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dpi" || name == "action" || name == "log" || name == "parameter-map")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::Policy_::Dpi::Dpi()
    :
    type{YType::enumeration, "type"},
    policy_map{YType::str, "policy-map"}
{

    yang_name = "dpi"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::Policy_::Dpi::~Dpi()
{
}

bool Native::Policy::PolicyMap::Class_::Policy_::Dpi::has_data() const
{
    return type.is_set
	|| policy_map.is_set;
}

bool Native::Policy::PolicyMap::Class_::Policy_::Dpi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(policy_map.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::Policy_::Dpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::Policy_::Dpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (policy_map.is_set || is_set(policy_map.yfilter)) leaf_name_data.push_back(policy_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::Policy_::Dpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::Policy_::Dpi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::Policy_::Dpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map")
    {
        policy_map = value;
        policy_map.value_namespace = name_space;
        policy_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::Policy_::Dpi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "policy-map")
    {
        policy_map.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::Policy_::Dpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "policy-map")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::PmPolicy()
    :
    flow(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Flow>())
	,monitor(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor>())
{
    flow->parent = this;
    monitor->parent = this;

    yang_name = "pm-policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::~PmPolicy()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::has_data() const
{
    for (std::size_t index=0; index<react.size(); index++)
    {
        if(react[index]->has_data())
            return true;
    }
    return (flow !=  nullptr && flow->has_data())
	|| (monitor !=  nullptr && monitor->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::has_operation() const
{
    for (std::size_t index=0; index<react.size(); index++)
    {
        if(react[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "react")
    {
        for(auto const & c : react)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React>();
        c->parent = this;
        react.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    for (auto const & c : react)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::PmPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow" || name == "monitor" || name == "react")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Flow::Flow()
    :
    monitor{YType::str, "monitor"}
{

    yang_name = "flow"; yang_parent_name = "pm-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Flow::~Flow()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Flow::has_data() const
{
    return monitor.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Monitor()
    :
    metric(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric>())
{
    metric->parent = this;

    yang_name = "monitor"; yang_parent_name = "pm-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::~Monitor()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::has_data() const
{
    return (metric !=  nullptr && metric->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Metric()
    :
    rtp(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp>())
{
    rtp->parent = this;

    yang_name = "metric"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::~Metric()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::has_data() const
{
    return (rtp !=  nullptr && rtp->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::has_operation() const
{
    return is_set(yfilter)
	|| (rtp !=  nullptr && rtp->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp>();
        }
        return rtp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rtp != nullptr)
    {
        children["rtp"] = rtp;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::Rtp()
{

    yang_name = "rtp"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::~Rtp()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::has_data() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate>();
        c->parent = this;
        clock_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_rate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-rate")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::ClockRate()
    :
    number{YType::str, "number"},
    frequency{YType::uint32, "frequency"}
{

    yang_name = "clock-rate"; yang_parent_name = "rtp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::~ClockRate()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::has_data() const
{
    return number.is_set
	|| frequency.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(frequency.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "frequency")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::React()
    :
    id{YType::uint16, "id"},
    mode{YType::enumeration, "mode"},
    description{YType::str, "description"}
    	,
    action(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Action>())
	,alarm(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm>())
	,threshold(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold>())
{
    action->parent = this;
    alarm->parent = this;
    threshold->parent = this;

    yang_name = "react"; yang_parent_name = "pm-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::~React()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::has_data() const
{
    return id.is_set
	|| mode.is_set
	|| description.is_set
	|| (action !=  nullptr && action->has_data())
	|| (alarm !=  nullptr && alarm->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (alarm !=  nullptr && alarm->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "react" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Action>();
        }
        return action;
    }

    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm>();
        }
        return alarm;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(alarm != nullptr)
    {
        children["alarm"] = alarm;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "alarm" || name == "threshold" || name == "id" || name == "mode" || name == "description")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::Action()
    :
    snmp{YType::empty, "snmp"},
    syslog{YType::empty, "syslog"}
{

    yang_name = "action"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::~Action()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::has_data() const
{
    return snmp.is_set
	|| syslog.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmp.yfilter)
	|| ydk::is_set(syslog.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp" || name == "syslog")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Alarm()
    :
    severity{YType::enumeration, "severity"}
    	,
    type(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type>())
{
    type->parent = this;

    yang_name = "alarm"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::~Alarm()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::has_data() const
{
    return severity.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "severity")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Type()
    :
    discrete{YType::empty, "discrete"}
    	,
    grouped(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped>())
{
    grouped->parent = this;

    yang_name = "type"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::~Type()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::has_data() const
{
    return discrete.is_set
	|| (grouped !=  nullptr && grouped->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discrete.yfilter)
	|| (grouped !=  nullptr && grouped->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discrete.is_set || is_set(discrete.yfilter)) leaf_name_data.push_back(discrete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grouped")
    {
        if(grouped == nullptr)
        {
            grouped = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped>();
        }
        return grouped;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(grouped != nullptr)
    {
        children["grouped"] = grouped;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discrete")
    {
        discrete = value;
        discrete.value_namespace = name_space;
        discrete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discrete")
    {
        discrete.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grouped" || name == "discrete")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::Grouped()
    :
    count{YType::uint16, "count"},
    percent{YType::uint8, "percent"}
{

    yang_name = "grouped"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::~Grouped()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::has_data() const
{
    return count.is_set
	|| percent.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grouped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "percent")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Threshold()
    :
    value_(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_>())
{
    value_->parent = this;

    yang_name = "threshold"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::~Threshold()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::has_data() const
{
    return (value_ !=  nullptr && value_->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Value_()
    :
    ge{YType::str, "ge"},
    gt{YType::str, "gt"},
    le{YType::str, "le"},
    lt{YType::str, "lt"}
    	,
    range(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range>())
{
    range->parent = this;

    yang_name = "value"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::~Value_()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::has_data() const
{
    return ge.is_set
	|| gt.is_set
	|| le.is_set
	|| lt.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(le.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "ge" || name == "gt" || name == "le" || name == "lt")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::Range()
    :
    low{YType::str, "low"},
    high{YType::str, "high"}
{

    yang_name = "range"; yang_parent_name = "value"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::~Range()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::has_data() const
{
    return low.is_set
	|| high.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(high.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low" || name == "high")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::InspectPolice::InspectPolice()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class_::InspectPolice::Police>())
{
    police->parent = this;

    yang_name = "inspect-police"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::InspectPolice::~InspectPolice()
{
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::has_operation() const
{
    return is_set(yfilter)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::InspectPolice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspect-police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::InspectPolice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::InspectPolice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class_::InspectPolice::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::InspectPolice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::InspectPolice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::InspectPolice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::InspectPolice::Police::Police()
    :
    rate{YType::uint32, "rate"},
    burst{YType::uint32, "burst"}
{

    yang_name = "police"; yang_parent_name = "inspect-police"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::InspectPolice::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::Police::has_data() const
{
    return rate.is_set
	|| burst.is_set;
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(burst.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::InspectPolice::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::InspectPolice::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::InspectPolice::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::InspectPolice::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::InspectPolice::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::InspectPolice::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "burst")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::ActionList()
    :
    action_type{YType::enumeration, "action-type"},
    netflow_sampler{YType::str, "netflow-sampler"},
    service_policy{YType::str, "service-policy"},
    trust{YType::enumeration, "trust"}
    	,
    bandwidth(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Bandwidth>())
	,compression(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Compression>())
	,estimate(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Estimate>())
	,forward(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Forward>())
	,fair_queue(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::FairQueue>())
	,police_aggregate(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate>())
	,police_policy_map(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap>())
	,police_cir_percent(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCirPercent>())
	,police_rate_unit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit>())
	,police_rate_percent(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent>())
	,police_rate_pdp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp>())
	,police_target_bitrate(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate>())
	,police_flow(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow>())
	,police_catalyst(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst>())
	,police_switch(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch>())
	,priority(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Priority>())
	,queue_buffers(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers>())
	,queue_limit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueLimit>())
	,queue_limit_dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp>())
	,random_detect(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect>())
	,set(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set>())
	,shape(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape>())
{
    bandwidth->parent = this;
    compression->parent = this;
    estimate->parent = this;
    forward->parent = this;
    fair_queue->parent = this;
    police_aggregate->parent = this;
    police_policy_map->parent = this;
    police_cir_percent->parent = this;
    police_rate_unit->parent = this;
    police_rate_percent->parent = this;
    police_rate_pdp->parent = this;
    police_target_bitrate->parent = this;
    police_flow->parent = this;
    police_catalyst->parent = this;
    police_switch->parent = this;
    priority->parent = this;
    queue_buffers->parent = this;
    queue_limit->parent = this;
    queue_limit_dscp->parent = this;
    random_detect->parent = this;
    set->parent = this;
    shape->parent = this;

    yang_name = "action-list"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::~ActionList()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::has_data() const
{
    return action_type.is_set
	|| netflow_sampler.is_set
	|| service_policy.is_set
	|| trust.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (compression !=  nullptr && compression->has_data())
	|| (estimate !=  nullptr && estimate->has_data())
	|| (forward !=  nullptr && forward->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (police_aggregate !=  nullptr && police_aggregate->has_data())
	|| (police_policy_map !=  nullptr && police_policy_map->has_data())
	|| (police_cir_percent !=  nullptr && police_cir_percent->has_data())
	|| (police_rate_unit !=  nullptr && police_rate_unit->has_data())
	|| (police_rate_percent !=  nullptr && police_rate_percent->has_data())
	|| (police_rate_pdp !=  nullptr && police_rate_pdp->has_data())
	|| (police_target_bitrate !=  nullptr && police_target_bitrate->has_data())
	|| (police_flow !=  nullptr && police_flow->has_data())
	|| (police_catalyst !=  nullptr && police_catalyst->has_data())
	|| (police_switch !=  nullptr && police_switch->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (queue_buffers !=  nullptr && queue_buffers->has_data())
	|| (queue_limit !=  nullptr && queue_limit->has_data())
	|| (queue_limit_dscp !=  nullptr && queue_limit_dscp->has_data())
	|| (random_detect !=  nullptr && random_detect->has_data())
	|| (set !=  nullptr && set->has_data())
	|| (shape !=  nullptr && shape->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter)
	|| ydk::is_set(netflow_sampler.yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (compression !=  nullptr && compression->has_operation())
	|| (estimate !=  nullptr && estimate->has_operation())
	|| (forward !=  nullptr && forward->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (police_aggregate !=  nullptr && police_aggregate->has_operation())
	|| (police_policy_map !=  nullptr && police_policy_map->has_operation())
	|| (police_cir_percent !=  nullptr && police_cir_percent->has_operation())
	|| (police_rate_unit !=  nullptr && police_rate_unit->has_operation())
	|| (police_rate_percent !=  nullptr && police_rate_percent->has_operation())
	|| (police_rate_pdp !=  nullptr && police_rate_pdp->has_operation())
	|| (police_target_bitrate !=  nullptr && police_target_bitrate->has_operation())
	|| (police_flow !=  nullptr && police_flow->has_operation())
	|| (police_catalyst !=  nullptr && police_catalyst->has_operation())
	|| (police_switch !=  nullptr && police_switch->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (queue_buffers !=  nullptr && queue_buffers->has_operation())
	|| (queue_limit !=  nullptr && queue_limit->has_operation())
	|| (queue_limit_dscp !=  nullptr && queue_limit_dscp->has_operation())
	|| (random_detect !=  nullptr && random_detect->has_operation())
	|| (set !=  nullptr && set->has_operation())
	|| (shape !=  nullptr && shape->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-list" <<"[action-type='" <<action_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());
    if (netflow_sampler.is_set || is_set(netflow_sampler.yfilter)) leaf_name_data.push_back(netflow_sampler.get_name_leafdata());
    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());
    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "compression")
    {
        if(compression == nullptr)
        {
            compression = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Compression>();
        }
        return compression;
    }

    if(child_yang_name == "estimate")
    {
        if(estimate == nullptr)
        {
            estimate = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Estimate>();
        }
        return estimate;
    }

    if(child_yang_name == "forward")
    {
        if(forward == nullptr)
        {
            forward = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Forward>();
        }
        return forward;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "police-aggregate")
    {
        if(police_aggregate == nullptr)
        {
            police_aggregate = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate>();
        }
        return police_aggregate;
    }

    if(child_yang_name == "police-policy-map")
    {
        if(police_policy_map == nullptr)
        {
            police_policy_map = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap>();
        }
        return police_policy_map;
    }

    if(child_yang_name == "police-cir-percent")
    {
        if(police_cir_percent == nullptr)
        {
            police_cir_percent = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCirPercent>();
        }
        return police_cir_percent;
    }

    if(child_yang_name == "police-rate-unit")
    {
        if(police_rate_unit == nullptr)
        {
            police_rate_unit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit>();
        }
        return police_rate_unit;
    }

    if(child_yang_name == "police-rate-percent")
    {
        if(police_rate_percent == nullptr)
        {
            police_rate_percent = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent>();
        }
        return police_rate_percent;
    }

    if(child_yang_name == "police-rate-pdp")
    {
        if(police_rate_pdp == nullptr)
        {
            police_rate_pdp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp>();
        }
        return police_rate_pdp;
    }

    if(child_yang_name == "police-target-bitrate")
    {
        if(police_target_bitrate == nullptr)
        {
            police_target_bitrate = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate>();
        }
        return police_target_bitrate;
    }

    if(child_yang_name == "police-flow")
    {
        if(police_flow == nullptr)
        {
            police_flow = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow>();
        }
        return police_flow;
    }

    if(child_yang_name == "police-catalyst")
    {
        if(police_catalyst == nullptr)
        {
            police_catalyst = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst>();
        }
        return police_catalyst;
    }

    if(child_yang_name == "police-switch")
    {
        if(police_switch == nullptr)
        {
            police_switch = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch>();
        }
        return police_switch;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "queue-buffers")
    {
        if(queue_buffers == nullptr)
        {
            queue_buffers = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers>();
        }
        return queue_buffers;
    }

    if(child_yang_name == "queue-limit")
    {
        if(queue_limit == nullptr)
        {
            queue_limit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueLimit>();
        }
        return queue_limit;
    }

    if(child_yang_name == "queue-limit-dscp")
    {
        if(queue_limit_dscp == nullptr)
        {
            queue_limit_dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp>();
        }
        return queue_limit_dscp;
    }

    if(child_yang_name == "random-detect")
    {
        if(random_detect == nullptr)
        {
            random_detect = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect>();
        }
        return random_detect;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set>();
        }
        return set;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape>();
        }
        return shape;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(compression != nullptr)
    {
        children["compression"] = compression;
    }

    if(estimate != nullptr)
    {
        children["estimate"] = estimate;
    }

    if(forward != nullptr)
    {
        children["forward"] = forward;
    }

    if(fair_queue != nullptr)
    {
        children["fair-queue"] = fair_queue;
    }

    if(police_aggregate != nullptr)
    {
        children["police-aggregate"] = police_aggregate;
    }

    if(police_policy_map != nullptr)
    {
        children["police-policy-map"] = police_policy_map;
    }

    if(police_cir_percent != nullptr)
    {
        children["police-cir-percent"] = police_cir_percent;
    }

    if(police_rate_unit != nullptr)
    {
        children["police-rate-unit"] = police_rate_unit;
    }

    if(police_rate_percent != nullptr)
    {
        children["police-rate-percent"] = police_rate_percent;
    }

    if(police_rate_pdp != nullptr)
    {
        children["police-rate-pdp"] = police_rate_pdp;
    }

    if(police_target_bitrate != nullptr)
    {
        children["police-target-bitrate"] = police_target_bitrate;
    }

    if(police_flow != nullptr)
    {
        children["police-flow"] = police_flow;
    }

    if(police_catalyst != nullptr)
    {
        children["police-catalyst"] = police_catalyst;
    }

    if(police_switch != nullptr)
    {
        children["police-switch"] = police_switch;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(queue_buffers != nullptr)
    {
        children["queue-buffers"] = queue_buffers;
    }

    if(queue_limit != nullptr)
    {
        children["queue-limit"] = queue_limit;
    }

    if(queue_limit_dscp != nullptr)
    {
        children["queue-limit-dscp"] = queue_limit_dscp;
    }

    if(random_detect != nullptr)
    {
        children["random-detect"] = random_detect;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netflow-sampler")
    {
        netflow_sampler = value;
        netflow_sampler.value_namespace = name_space;
        netflow_sampler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
    if(value_path == "netflow-sampler")
    {
        netflow_sampler.yfilter = yfilter;
    }
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "compression" || name == "estimate" || name == "forward" || name == "fair-queue" || name == "police-aggregate" || name == "police-policy-map" || name == "police-cir-percent" || name == "police-rate-unit" || name == "police-rate-percent" || name == "police-rate-pdp" || name == "police-target-bitrate" || name == "police-flow" || name == "police-catalyst" || name == "police-switch" || name == "priority" || name == "queue-buffers" || name == "queue-limit" || name == "queue-limit-dscp" || name == "random-detect" || name == "set" || name == "shape" || name == "action-type" || name == "netflow-sampler" || name == "service-policy" || name == "trust")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Bandwidth()
    :
    bits{YType::uint32, "bits"},
    percent{YType::uint8, "percent"}
    	,
    remaining(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining>())
{
    remaining->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::~Bandwidth()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::has_data() const
{
    return bits.is_set
	|| percent.is_set
	|| (remaining !=  nullptr && remaining->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bits.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| (remaining !=  nullptr && remaining->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bits.is_set || is_set(bits.yfilter)) leaf_name_data.push_back(bits.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remaining")
    {
        if(remaining == nullptr)
        {
            remaining = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining>();
        }
        return remaining;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remaining != nullptr)
    {
        children["remaining"] = remaining;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bits")
    {
        bits = value;
        bits.value_namespace = name_space;
        bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bits")
    {
        bits.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remaining" || name == "bits" || name == "percent")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Remaining()
    :
    rem_option{YType::enumeration, "rem-option"},
    percent{YType::uint8, "percent"},
    ratio{YType::uint16, "ratio"}
    	,
    account(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account>())
{
    account->parent = this;

    yang_name = "remaining"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::~Remaining()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::has_data() const
{
    return rem_option.is_set
	|| percent.is_set
	|| ratio.is_set
	|| (account !=  nullptr && account->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rem_option.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(ratio.yfilter)
	|| (account !=  nullptr && account->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remaining";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rem_option.is_set || is_set(rem_option.yfilter)) leaf_name_data.push_back(rem_option.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (ratio.is_set || is_set(ratio.yfilter)) leaf_name_data.push_back(ratio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account")
    {
        if(account == nullptr)
        {
            account = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account>();
        }
        return account;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(account != nullptr)
    {
        children["account"] = account;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rem-option")
    {
        rem_option = value;
        rem_option.value_namespace = name_space;
        rem_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratio")
    {
        ratio = value;
        ratio.value_namespace = name_space;
        ratio.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rem-option")
    {
        rem_option.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "ratio")
    {
        ratio.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account" || name == "rem-option" || name == "percent" || name == "ratio")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::Account()
    :
    user_defined{YType::int32, "user-defined"}
{

    yang_name = "account"; yang_parent_name = "remaining"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::~Account()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::has_data() const
{
    return user_defined.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user_defined.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_defined.is_set || is_set(user_defined.yfilter)) leaf_name_data.push_back(user_defined.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user-defined")
    {
        user_defined = value;
        user_defined.value_namespace = name_space;
        user_defined.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user-defined")
    {
        user_defined.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-defined")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Compression::Compression()
    :
    header(nullptr) // presence node
{

    yang_name = "compression"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Compression::~Compression()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Compression::has_data() const
{
    return (header !=  nullptr && header->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Compression::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Compression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "compression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Compression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Compression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Compression::Header>();
        }
        return header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Compression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Compression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::Compression::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Compression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::Header()
    :
    ip{YType::enumeration, "ip"}
{

    yang_name = "header"; yang_parent_name = "compression"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::~Header()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::has_data() const
{
    return ip.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Estimate::Estimate()
    :
    bandwidth(nullptr) // presence node
{

    yang_name = "estimate"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Estimate::~Estimate()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::has_data() const
{
    return (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Estimate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "estimate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Estimate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Estimate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Estimate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Estimate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::Estimate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::Bandwidth()
    :
    drop_one_in{YType::uint32, "drop-one-in"}
    	,
    delay_one_in(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn>())
{
    delay_one_in->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "estimate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::~Bandwidth()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::has_data() const
{
    return drop_one_in.is_set
	|| (delay_one_in !=  nullptr && delay_one_in->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_one_in.yfilter)
	|| (delay_one_in !=  nullptr && delay_one_in->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_one_in.is_set || is_set(drop_one_in.yfilter)) leaf_name_data.push_back(drop_one_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-one-in")
    {
        if(delay_one_in == nullptr)
        {
            delay_one_in = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn>();
        }
        return delay_one_in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay_one_in != nullptr)
    {
        children["delay-one-in"] = delay_one_in;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-one-in")
    {
        drop_one_in = value;
        drop_one_in.value_namespace = name_space;
        drop_one_in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-one-in")
    {
        drop_one_in.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-one-in" || name == "drop-one-in")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::DelayOneIn()
    :
    doi{YType::uint32, "doi"},
    milliseconds{YType::uint32, "milliseconds"}
{

    yang_name = "delay-one-in"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::~DelayOneIn()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::has_data() const
{
    return doi.is_set
	|| milliseconds.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(doi.yfilter)
	|| ydk::is_set(milliseconds.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-one-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (doi.is_set || is_set(doi.yfilter)) leaf_name_data.push_back(doi.get_name_leafdata());
    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "doi")
    {
        doi = value;
        doi.value_namespace = name_space;
        doi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "doi")
    {
        doi.yfilter = yfilter;
    }
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "doi" || name == "milliseconds")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::Forward::Forward()
    :
    service_path{YType::uint32, "service-path"},
    service_index{YType::uint8, "service-index"}
{

    yang_name = "forward"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::Forward::~Forward()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Forward::has_data() const
{
    return service_path.is_set
	|| service_index.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Forward::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_path.yfilter)
	|| ydk::is_set(service_index.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Forward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::Forward::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_path.is_set || is_set(service_path.yfilter)) leaf_name_data.push_back(service_path.get_name_leafdata());
    if (service_index.is_set || is_set(service_index.yfilter)) leaf_name_data.push_back(service_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Forward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Forward::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Forward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-path")
    {
        service_path = value;
        service_path.value_namespace = name_space;
        service_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-index")
    {
        service_index = value;
        service_index.value_namespace = name_space;
        service_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::Forward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-path")
    {
        service_path.yfilter = yfilter;
    }
    if(value_path == "service-index")
    {
        service_index.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::Forward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-path" || name == "service-index")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::FairQueue::FairQueue()
    :
    dynamic_queues{YType::uint32, "dynamic-queues"},
    queue_limit{YType::uint16, "queue-limit"}
{

    yang_name = "fair-queue"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::FairQueue::~FairQueue()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::FairQueue::has_data() const
{
    return dynamic_queues.is_set
	|| queue_limit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::FairQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_queues.yfilter)
	|| ydk::is_set(queue_limit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::FairQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_queues.is_set || is_set(dynamic_queues.yfilter)) leaf_name_data.push_back(dynamic_queues.get_name_leafdata());
    if (queue_limit.is_set || is_set(queue_limit.yfilter)) leaf_name_data.push_back(queue_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::FairQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-queues")
    {
        dynamic_queues = value;
        dynamic_queues.value_namespace = name_space;
        dynamic_queues.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-limit")
    {
        queue_limit = value;
        queue_limit.value_namespace = name_space;
        queue_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::FairQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-queues")
    {
        dynamic_queues.yfilter = yfilter;
    }
    if(value_path == "queue-limit")
    {
        queue_limit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::FairQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-queues" || name == "queue-limit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::PoliceAggregate()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police>())
{
    police->parent = this;

    yang_name = "police-aggregate"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::~PoliceAggregate()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::has_operation() const
{
    return is_set(yfilter)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-aggregate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police::Police()
    :
    aggregate{YType::str, "aggregate"}
{

    yang_name = "police"; yang_parent_name = "police-aggregate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police::has_data() const
{
    return aggregate.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregate.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate.is_set || is_set(aggregate.yfilter)) leaf_name_data.push_back(aggregate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregate")
    {
        aggregate = value;
        aggregate.value_namespace = name_space;
        aggregate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregate")
    {
        aggregate.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::PolicePolicyMap()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police>())
{
    police->parent = this;

    yang_name = "police-policy-map"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::~PolicePolicyMap()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::has_operation() const
{
    return is_set(yfilter)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-policy-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Police()
    :
    cir{YType::uint64, "cir"},
    bc{YType::uint32, "bc"},
    be{YType::uint32, "be"},
    pir{YType::uint64, "pir"}
    	,
    pir_be(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe>())
	,actions(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions>())
{
    pir_be->parent = this;
    actions->parent = this;

    yang_name = "police"; yang_parent_name = "police-policy-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::has_data() const
{
    return cir.is_set
	|| bc.is_set
	|| be.is_set
	|| pir.is_set
	|| (pir_be !=  nullptr && pir_be->has_data())
	|| (actions !=  nullptr && actions->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cir.yfilter)
	|| ydk::is_set(bc.yfilter)
	|| ydk::is_set(be.yfilter)
	|| ydk::is_set(pir.yfilter)
	|| (pir_be !=  nullptr && pir_be->has_operation())
	|| (actions !=  nullptr && actions->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cir.is_set || is_set(cir.yfilter)) leaf_name_data.push_back(cir.get_name_leafdata());
    if (bc.is_set || is_set(bc.yfilter)) leaf_name_data.push_back(bc.get_name_leafdata());
    if (be.is_set || is_set(be.yfilter)) leaf_name_data.push_back(be.get_name_leafdata());
    if (pir.is_set || is_set(pir.yfilter)) leaf_name_data.push_back(pir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pir-be")
    {
        if(pir_be == nullptr)
        {
            pir_be = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe>();
        }
        return pir_be;
    }

    if(child_yang_name == "actions")
    {
        if(actions == nullptr)
        {
            actions = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions>();
        }
        return actions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pir_be != nullptr)
    {
        children["pir-be"] = pir_be;
    }

    if(actions != nullptr)
    {
        children["actions"] = actions;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cir")
    {
        cir = value;
        cir.value_namespace = name_space;
        cir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc")
    {
        bc = value;
        bc.value_namespace = name_space;
        bc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "be")
    {
        be = value;
        be.value_namespace = name_space;
        be.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pir")
    {
        pir = value;
        pir.value_namespace = name_space;
        pir.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cir")
    {
        cir.yfilter = yfilter;
    }
    if(value_path == "bc")
    {
        bc.yfilter = yfilter;
    }
    if(value_path == "be")
    {
        be.yfilter = yfilter;
    }
    if(value_path == "pir")
    {
        pir.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pir-be" || name == "actions" || name == "cir" || name == "bc" || name == "be" || name == "pir")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe::PirBe()
    :
    be{YType::uint32, "be"}
{

    yang_name = "pir-be"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe::~PirBe()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe::has_data() const
{
    return be.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(be.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir-be";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (be.is_set || is_set(be.yfilter)) leaf_name_data.push_back(be.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "be")
    {
        be = value;
        be.value_namespace = name_space;
        be.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "be")
    {
        be.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::PirBe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "be")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::Actions()
    :
    conform_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit>())
	,conform_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit>())
	,conform_set_cos_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable>())
	,conform_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit>())
	,conform_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit>())
	,conform_set_dscp_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable>())
	,conform_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit>())
	,conform_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit>())
	,conform_set_mpls_exp_imposition_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable>())
	,conform_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit>())
	,conform_set_mpls_exp_topmost_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable>())
	,conform_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit>())
	,conform_set_prec_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable>())
	,conform_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit>())
	,conform_set_qos_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable>())
	,conform_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit>())
	,conform_drop(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop>())
	,exceed_dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp>())
	,exceed_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit>())
	,exceed_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit>())
	,exceed_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit>())
	,exceed_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit>())
	,exceed_set_dscp_transmit_table(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmitTable>())
	,exceed_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetFrdeTransmit>())
	,exceed_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetMplsExpImpositionTransmit>())
	,exceed_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetMplsExpTopmostTransmit>())
	,exceed_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetPrecTransmit>())
	,exceed_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetQosTransmit>())
	,exceed_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedTransmit>())
	,exceed_drop(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDrop>())
	,violate_set_clp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetClpTransmit>())
	,violate_set_cos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetCosTransmit>())
	,violate_set_discard_class_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetDiscardClassTransmit>())
	,violate_set_dscp_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetDscpTransmit>())
	,violate_set_frde_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetFrdeTransmit>())
	,violate_set_mpls_exp_imposition_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetMplsExpImpositionTransmit>())
	,violate_set_mpls_exp_topmost_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetMplsExpTopmostTransmit>())
	,violate_set_prec_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetPrecTransmit>())
	,violate_set_qos_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetQosTransmit>())
	,violate_transmit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateTransmit>())
	,violate_drop(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateDrop>())
{
    conform_set_clp_transmit->parent = this;
    conform_set_cos_transmit->parent = this;
    conform_set_cos_transmit_table->parent = this;
    conform_set_discard_class_transmit->parent = this;
    conform_set_dscp_transmit->parent = this;
    conform_set_dscp_transmit_table->parent = this;
    conform_set_frde_transmit->parent = this;
    conform_set_mpls_exp_imposition_transmit->parent = this;
    conform_set_mpls_exp_imposition_transmit_table->parent = this;
    conform_set_mpls_exp_topmost_transmit->parent = this;
    conform_set_mpls_exp_topmost_transmit_table->parent = this;
    conform_set_prec_transmit->parent = this;
    conform_set_prec_transmit_table->parent = this;
    conform_set_qos_transmit->parent = this;
    conform_set_qos_transmit_table->parent = this;
    conform_transmit->parent = this;
    conform_drop->parent = this;
    exceed_dscp->parent = this;
    exceed_set_clp_transmit->parent = this;
    exceed_set_cos_transmit->parent = this;
    exceed_set_discard_class_transmit->parent = this;
    exceed_set_dscp_transmit->parent = this;
    exceed_set_dscp_transmit_table->parent = this;
    exceed_set_frde_transmit->parent = this;
    exceed_set_mpls_exp_imposition_transmit->parent = this;
    exceed_set_mpls_exp_topmost_transmit->parent = this;
    exceed_set_prec_transmit->parent = this;
    exceed_set_qos_transmit->parent = this;
    exceed_transmit->parent = this;
    exceed_drop->parent = this;
    violate_set_clp_transmit->parent = this;
    violate_set_cos_transmit->parent = this;
    violate_set_discard_class_transmit->parent = this;
    violate_set_dscp_transmit->parent = this;
    violate_set_frde_transmit->parent = this;
    violate_set_mpls_exp_imposition_transmit->parent = this;
    violate_set_mpls_exp_topmost_transmit->parent = this;
    violate_set_prec_transmit->parent = this;
    violate_set_qos_transmit->parent = this;
    violate_transmit->parent = this;
    violate_drop->parent = this;

    yang_name = "actions"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::~Actions()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::has_data() const
{
    return (conform_set_clp_transmit !=  nullptr && conform_set_clp_transmit->has_data())
	|| (conform_set_cos_transmit !=  nullptr && conform_set_cos_transmit->has_data())
	|| (conform_set_cos_transmit_table !=  nullptr && conform_set_cos_transmit_table->has_data())
	|| (conform_set_discard_class_transmit !=  nullptr && conform_set_discard_class_transmit->has_data())
	|| (conform_set_dscp_transmit !=  nullptr && conform_set_dscp_transmit->has_data())
	|| (conform_set_dscp_transmit_table !=  nullptr && conform_set_dscp_transmit_table->has_data())
	|| (conform_set_frde_transmit !=  nullptr && conform_set_frde_transmit->has_data())
	|| (conform_set_mpls_exp_imposition_transmit !=  nullptr && conform_set_mpls_exp_imposition_transmit->has_data())
	|| (conform_set_mpls_exp_imposition_transmit_table !=  nullptr && conform_set_mpls_exp_imposition_transmit_table->has_data())
	|| (conform_set_mpls_exp_topmost_transmit !=  nullptr && conform_set_mpls_exp_topmost_transmit->has_data())
	|| (conform_set_mpls_exp_topmost_transmit_table !=  nullptr && conform_set_mpls_exp_topmost_transmit_table->has_data())
	|| (conform_set_prec_transmit !=  nullptr && conform_set_prec_transmit->has_data())
	|| (conform_set_prec_transmit_table !=  nullptr && conform_set_prec_transmit_table->has_data())
	|| (conform_set_qos_transmit !=  nullptr && conform_set_qos_transmit->has_data())
	|| (conform_set_qos_transmit_table !=  nullptr && conform_set_qos_transmit_table->has_data())
	|| (conform_transmit !=  nullptr && conform_transmit->has_data())
	|| (conform_drop !=  nullptr && conform_drop->has_data())
	|| (exceed_dscp !=  nullptr && exceed_dscp->has_data())
	|| (exceed_set_clp_transmit !=  nullptr && exceed_set_clp_transmit->has_data())
	|| (exceed_set_cos_transmit !=  nullptr && exceed_set_cos_transmit->has_data())
	|| (exceed_set_discard_class_transmit !=  nullptr && exceed_set_discard_class_transmit->has_data())
	|| (exceed_set_dscp_transmit !=  nullptr && exceed_set_dscp_transmit->has_data())
	|| (exceed_set_dscp_transmit_table !=  nullptr && exceed_set_dscp_transmit_table->has_data())
	|| (exceed_set_frde_transmit !=  nullptr && exceed_set_frde_transmit->has_data())
	|| (exceed_set_mpls_exp_imposition_transmit !=  nullptr && exceed_set_mpls_exp_imposition_transmit->has_data())
	|| (exceed_set_mpls_exp_topmost_transmit !=  nullptr && exceed_set_mpls_exp_topmost_transmit->has_data())
	|| (exceed_set_prec_transmit !=  nullptr && exceed_set_prec_transmit->has_data())
	|| (exceed_set_qos_transmit !=  nullptr && exceed_set_qos_transmit->has_data())
	|| (exceed_transmit !=  nullptr && exceed_transmit->has_data())
	|| (exceed_drop !=  nullptr && exceed_drop->has_data())
	|| (violate_set_clp_transmit !=  nullptr && violate_set_clp_transmit->has_data())
	|| (violate_set_cos_transmit !=  nullptr && violate_set_cos_transmit->has_data())
	|| (violate_set_discard_class_transmit !=  nullptr && violate_set_discard_class_transmit->has_data())
	|| (violate_set_dscp_transmit !=  nullptr && violate_set_dscp_transmit->has_data())
	|| (violate_set_frde_transmit !=  nullptr && violate_set_frde_transmit->has_data())
	|| (violate_set_mpls_exp_imposition_transmit !=  nullptr && violate_set_mpls_exp_imposition_transmit->has_data())
	|| (violate_set_mpls_exp_topmost_transmit !=  nullptr && violate_set_mpls_exp_topmost_transmit->has_data())
	|| (violate_set_prec_transmit !=  nullptr && violate_set_prec_transmit->has_data())
	|| (violate_set_qos_transmit !=  nullptr && violate_set_qos_transmit->has_data())
	|| (violate_transmit !=  nullptr && violate_transmit->has_data())
	|| (violate_drop !=  nullptr && violate_drop->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::has_operation() const
{
    return is_set(yfilter)
	|| (conform_set_clp_transmit !=  nullptr && conform_set_clp_transmit->has_operation())
	|| (conform_set_cos_transmit !=  nullptr && conform_set_cos_transmit->has_operation())
	|| (conform_set_cos_transmit_table !=  nullptr && conform_set_cos_transmit_table->has_operation())
	|| (conform_set_discard_class_transmit !=  nullptr && conform_set_discard_class_transmit->has_operation())
	|| (conform_set_dscp_transmit !=  nullptr && conform_set_dscp_transmit->has_operation())
	|| (conform_set_dscp_transmit_table !=  nullptr && conform_set_dscp_transmit_table->has_operation())
	|| (conform_set_frde_transmit !=  nullptr && conform_set_frde_transmit->has_operation())
	|| (conform_set_mpls_exp_imposition_transmit !=  nullptr && conform_set_mpls_exp_imposition_transmit->has_operation())
	|| (conform_set_mpls_exp_imposition_transmit_table !=  nullptr && conform_set_mpls_exp_imposition_transmit_table->has_operation())
	|| (conform_set_mpls_exp_topmost_transmit !=  nullptr && conform_set_mpls_exp_topmost_transmit->has_operation())
	|| (conform_set_mpls_exp_topmost_transmit_table !=  nullptr && conform_set_mpls_exp_topmost_transmit_table->has_operation())
	|| (conform_set_prec_transmit !=  nullptr && conform_set_prec_transmit->has_operation())
	|| (conform_set_prec_transmit_table !=  nullptr && conform_set_prec_transmit_table->has_operation())
	|| (conform_set_qos_transmit !=  nullptr && conform_set_qos_transmit->has_operation())
	|| (conform_set_qos_transmit_table !=  nullptr && conform_set_qos_transmit_table->has_operation())
	|| (conform_transmit !=  nullptr && conform_transmit->has_operation())
	|| (conform_drop !=  nullptr && conform_drop->has_operation())
	|| (exceed_dscp !=  nullptr && exceed_dscp->has_operation())
	|| (exceed_set_clp_transmit !=  nullptr && exceed_set_clp_transmit->has_operation())
	|| (exceed_set_cos_transmit !=  nullptr && exceed_set_cos_transmit->has_operation())
	|| (exceed_set_discard_class_transmit !=  nullptr && exceed_set_discard_class_transmit->has_operation())
	|| (exceed_set_dscp_transmit !=  nullptr && exceed_set_dscp_transmit->has_operation())
	|| (exceed_set_dscp_transmit_table !=  nullptr && exceed_set_dscp_transmit_table->has_operation())
	|| (exceed_set_frde_transmit !=  nullptr && exceed_set_frde_transmit->has_operation())
	|| (exceed_set_mpls_exp_imposition_transmit !=  nullptr && exceed_set_mpls_exp_imposition_transmit->has_operation())
	|| (exceed_set_mpls_exp_topmost_transmit !=  nullptr && exceed_set_mpls_exp_topmost_transmit->has_operation())
	|| (exceed_set_prec_transmit !=  nullptr && exceed_set_prec_transmit->has_operation())
	|| (exceed_set_qos_transmit !=  nullptr && exceed_set_qos_transmit->has_operation())
	|| (exceed_transmit !=  nullptr && exceed_transmit->has_operation())
	|| (exceed_drop !=  nullptr && exceed_drop->has_operation())
	|| (violate_set_clp_transmit !=  nullptr && violate_set_clp_transmit->has_operation())
	|| (violate_set_cos_transmit !=  nullptr && violate_set_cos_transmit->has_operation())
	|| (violate_set_discard_class_transmit !=  nullptr && violate_set_discard_class_transmit->has_operation())
	|| (violate_set_dscp_transmit !=  nullptr && violate_set_dscp_transmit->has_operation())
	|| (violate_set_frde_transmit !=  nullptr && violate_set_frde_transmit->has_operation())
	|| (violate_set_mpls_exp_imposition_transmit !=  nullptr && violate_set_mpls_exp_imposition_transmit->has_operation())
	|| (violate_set_mpls_exp_topmost_transmit !=  nullptr && violate_set_mpls_exp_topmost_transmit->has_operation())
	|| (violate_set_prec_transmit !=  nullptr && violate_set_prec_transmit->has_operation())
	|| (violate_set_qos_transmit !=  nullptr && violate_set_qos_transmit->has_operation())
	|| (violate_transmit !=  nullptr && violate_transmit->has_operation())
	|| (violate_drop !=  nullptr && violate_drop->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-set-clp-transmit")
    {
        if(conform_set_clp_transmit == nullptr)
        {
            conform_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit>();
        }
        return conform_set_clp_transmit;
    }

    if(child_yang_name == "conform-set-cos-transmit")
    {
        if(conform_set_cos_transmit == nullptr)
        {
            conform_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit>();
        }
        return conform_set_cos_transmit;
    }

    if(child_yang_name == "conform-set-cos-transmit-table")
    {
        if(conform_set_cos_transmit_table == nullptr)
        {
            conform_set_cos_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable>();
        }
        return conform_set_cos_transmit_table;
    }

    if(child_yang_name == "conform-set-discard-class-transmit")
    {
        if(conform_set_discard_class_transmit == nullptr)
        {
            conform_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit>();
        }
        return conform_set_discard_class_transmit;
    }

    if(child_yang_name == "conform-set-dscp-transmit")
    {
        if(conform_set_dscp_transmit == nullptr)
        {
            conform_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit>();
        }
        return conform_set_dscp_transmit;
    }

    if(child_yang_name == "conform-set-dscp-transmit-table")
    {
        if(conform_set_dscp_transmit_table == nullptr)
        {
            conform_set_dscp_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable>();
        }
        return conform_set_dscp_transmit_table;
    }

    if(child_yang_name == "conform-set-frde-transmit")
    {
        if(conform_set_frde_transmit == nullptr)
        {
            conform_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit>();
        }
        return conform_set_frde_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-imposition-transmit")
    {
        if(conform_set_mpls_exp_imposition_transmit == nullptr)
        {
            conform_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit>();
        }
        return conform_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-imposition-transmit-table")
    {
        if(conform_set_mpls_exp_imposition_transmit_table == nullptr)
        {
            conform_set_mpls_exp_imposition_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable>();
        }
        return conform_set_mpls_exp_imposition_transmit_table;
    }

    if(child_yang_name == "conform-set-mpls-exp-topmost-transmit")
    {
        if(conform_set_mpls_exp_topmost_transmit == nullptr)
        {
            conform_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit>();
        }
        return conform_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "conform-set-mpls-exp-topmost-transmit-table")
    {
        if(conform_set_mpls_exp_topmost_transmit_table == nullptr)
        {
            conform_set_mpls_exp_topmost_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable>();
        }
        return conform_set_mpls_exp_topmost_transmit_table;
    }

    if(child_yang_name == "conform-set-prec-transmit")
    {
        if(conform_set_prec_transmit == nullptr)
        {
            conform_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit>();
        }
        return conform_set_prec_transmit;
    }

    if(child_yang_name == "conform-set-prec-transmit-table")
    {
        if(conform_set_prec_transmit_table == nullptr)
        {
            conform_set_prec_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable>();
        }
        return conform_set_prec_transmit_table;
    }

    if(child_yang_name == "conform-set-qos-transmit")
    {
        if(conform_set_qos_transmit == nullptr)
        {
            conform_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit>();
        }
        return conform_set_qos_transmit;
    }

    if(child_yang_name == "conform-set-qos-transmit-table")
    {
        if(conform_set_qos_transmit_table == nullptr)
        {
            conform_set_qos_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable>();
        }
        return conform_set_qos_transmit_table;
    }

    if(child_yang_name == "conform-transmit")
    {
        if(conform_transmit == nullptr)
        {
            conform_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit>();
        }
        return conform_transmit;
    }

    if(child_yang_name == "conform-drop")
    {
        if(conform_drop == nullptr)
        {
            conform_drop = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop>();
        }
        return conform_drop;
    }

    if(child_yang_name == "exceed-dscp")
    {
        if(exceed_dscp == nullptr)
        {
            exceed_dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp>();
        }
        return exceed_dscp;
    }

    if(child_yang_name == "exceed-set-clp-transmit")
    {
        if(exceed_set_clp_transmit == nullptr)
        {
            exceed_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit>();
        }
        return exceed_set_clp_transmit;
    }

    if(child_yang_name == "exceed-set-cos-transmit")
    {
        if(exceed_set_cos_transmit == nullptr)
        {
            exceed_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit>();
        }
        return exceed_set_cos_transmit;
    }

    if(child_yang_name == "exceed-set-discard-class-transmit")
    {
        if(exceed_set_discard_class_transmit == nullptr)
        {
            exceed_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit>();
        }
        return exceed_set_discard_class_transmit;
    }

    if(child_yang_name == "exceed-set-dscp-transmit")
    {
        if(exceed_set_dscp_transmit == nullptr)
        {
            exceed_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit>();
        }
        return exceed_set_dscp_transmit;
    }

    if(child_yang_name == "exceed-set-dscp-transmit-table")
    {
        if(exceed_set_dscp_transmit_table == nullptr)
        {
            exceed_set_dscp_transmit_table = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmitTable>();
        }
        return exceed_set_dscp_transmit_table;
    }

    if(child_yang_name == "exceed-set-frde-transmit")
    {
        if(exceed_set_frde_transmit == nullptr)
        {
            exceed_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetFrdeTransmit>();
        }
        return exceed_set_frde_transmit;
    }

    if(child_yang_name == "exceed-set-mpls-exp-imposition-transmit")
    {
        if(exceed_set_mpls_exp_imposition_transmit == nullptr)
        {
            exceed_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetMplsExpImpositionTransmit>();
        }
        return exceed_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "exceed-set-mpls-exp-topmost-transmit")
    {
        if(exceed_set_mpls_exp_topmost_transmit == nullptr)
        {
            exceed_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetMplsExpTopmostTransmit>();
        }
        return exceed_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "exceed-set-prec-transmit")
    {
        if(exceed_set_prec_transmit == nullptr)
        {
            exceed_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetPrecTransmit>();
        }
        return exceed_set_prec_transmit;
    }

    if(child_yang_name == "exceed-set-qos-transmit")
    {
        if(exceed_set_qos_transmit == nullptr)
        {
            exceed_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetQosTransmit>();
        }
        return exceed_set_qos_transmit;
    }

    if(child_yang_name == "exceed-transmit")
    {
        if(exceed_transmit == nullptr)
        {
            exceed_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedTransmit>();
        }
        return exceed_transmit;
    }

    if(child_yang_name == "exceed-drop")
    {
        if(exceed_drop == nullptr)
        {
            exceed_drop = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDrop>();
        }
        return exceed_drop;
    }

    if(child_yang_name == "violate-set-clp-transmit")
    {
        if(violate_set_clp_transmit == nullptr)
        {
            violate_set_clp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetClpTransmit>();
        }
        return violate_set_clp_transmit;
    }

    if(child_yang_name == "violate-set-cos-transmit")
    {
        if(violate_set_cos_transmit == nullptr)
        {
            violate_set_cos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetCosTransmit>();
        }
        return violate_set_cos_transmit;
    }

    if(child_yang_name == "violate-set-discard-class-transmit")
    {
        if(violate_set_discard_class_transmit == nullptr)
        {
            violate_set_discard_class_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetDiscardClassTransmit>();
        }
        return violate_set_discard_class_transmit;
    }

    if(child_yang_name == "violate-set-dscp-transmit")
    {
        if(violate_set_dscp_transmit == nullptr)
        {
            violate_set_dscp_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetDscpTransmit>();
        }
        return violate_set_dscp_transmit;
    }

    if(child_yang_name == "violate-set-frde-transmit")
    {
        if(violate_set_frde_transmit == nullptr)
        {
            violate_set_frde_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetFrdeTransmit>();
        }
        return violate_set_frde_transmit;
    }

    if(child_yang_name == "violate-set-mpls-exp-imposition-transmit")
    {
        if(violate_set_mpls_exp_imposition_transmit == nullptr)
        {
            violate_set_mpls_exp_imposition_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetMplsExpImpositionTransmit>();
        }
        return violate_set_mpls_exp_imposition_transmit;
    }

    if(child_yang_name == "violate-set-mpls-exp-topmost-transmit")
    {
        if(violate_set_mpls_exp_topmost_transmit == nullptr)
        {
            violate_set_mpls_exp_topmost_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetMplsExpTopmostTransmit>();
        }
        return violate_set_mpls_exp_topmost_transmit;
    }

    if(child_yang_name == "violate-set-prec-transmit")
    {
        if(violate_set_prec_transmit == nullptr)
        {
            violate_set_prec_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetPrecTransmit>();
        }
        return violate_set_prec_transmit;
    }

    if(child_yang_name == "violate-set-qos-transmit")
    {
        if(violate_set_qos_transmit == nullptr)
        {
            violate_set_qos_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateSetQosTransmit>();
        }
        return violate_set_qos_transmit;
    }

    if(child_yang_name == "violate-transmit")
    {
        if(violate_transmit == nullptr)
        {
            violate_transmit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateTransmit>();
        }
        return violate_transmit;
    }

    if(child_yang_name == "violate-drop")
    {
        if(violate_drop == nullptr)
        {
            violate_drop = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ViolateDrop>();
        }
        return violate_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_set_clp_transmit != nullptr)
    {
        children["conform-set-clp-transmit"] = conform_set_clp_transmit;
    }

    if(conform_set_cos_transmit != nullptr)
    {
        children["conform-set-cos-transmit"] = conform_set_cos_transmit;
    }

    if(conform_set_cos_transmit_table != nullptr)
    {
        children["conform-set-cos-transmit-table"] = conform_set_cos_transmit_table;
    }

    if(conform_set_discard_class_transmit != nullptr)
    {
        children["conform-set-discard-class-transmit"] = conform_set_discard_class_transmit;
    }

    if(conform_set_dscp_transmit != nullptr)
    {
        children["conform-set-dscp-transmit"] = conform_set_dscp_transmit;
    }

    if(conform_set_dscp_transmit_table != nullptr)
    {
        children["conform-set-dscp-transmit-table"] = conform_set_dscp_transmit_table;
    }

    if(conform_set_frde_transmit != nullptr)
    {
        children["conform-set-frde-transmit"] = conform_set_frde_transmit;
    }

    if(conform_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["conform-set-mpls-exp-imposition-transmit"] = conform_set_mpls_exp_imposition_transmit;
    }

    if(conform_set_mpls_exp_imposition_transmit_table != nullptr)
    {
        children["conform-set-mpls-exp-imposition-transmit-table"] = conform_set_mpls_exp_imposition_transmit_table;
    }

    if(conform_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["conform-set-mpls-exp-topmost-transmit"] = conform_set_mpls_exp_topmost_transmit;
    }

    if(conform_set_mpls_exp_topmost_transmit_table != nullptr)
    {
        children["conform-set-mpls-exp-topmost-transmit-table"] = conform_set_mpls_exp_topmost_transmit_table;
    }

    if(conform_set_prec_transmit != nullptr)
    {
        children["conform-set-prec-transmit"] = conform_set_prec_transmit;
    }

    if(conform_set_prec_transmit_table != nullptr)
    {
        children["conform-set-prec-transmit-table"] = conform_set_prec_transmit_table;
    }

    if(conform_set_qos_transmit != nullptr)
    {
        children["conform-set-qos-transmit"] = conform_set_qos_transmit;
    }

    if(conform_set_qos_transmit_table != nullptr)
    {
        children["conform-set-qos-transmit-table"] = conform_set_qos_transmit_table;
    }

    if(conform_transmit != nullptr)
    {
        children["conform-transmit"] = conform_transmit;
    }

    if(conform_drop != nullptr)
    {
        children["conform-drop"] = conform_drop;
    }

    if(exceed_dscp != nullptr)
    {
        children["exceed-dscp"] = exceed_dscp;
    }

    if(exceed_set_clp_transmit != nullptr)
    {
        children["exceed-set-clp-transmit"] = exceed_set_clp_transmit;
    }

    if(exceed_set_cos_transmit != nullptr)
    {
        children["exceed-set-cos-transmit"] = exceed_set_cos_transmit;
    }

    if(exceed_set_discard_class_transmit != nullptr)
    {
        children["exceed-set-discard-class-transmit"] = exceed_set_discard_class_transmit;
    }

    if(exceed_set_dscp_transmit != nullptr)
    {
        children["exceed-set-dscp-transmit"] = exceed_set_dscp_transmit;
    }

    if(exceed_set_dscp_transmit_table != nullptr)
    {
        children["exceed-set-dscp-transmit-table"] = exceed_set_dscp_transmit_table;
    }

    if(exceed_set_frde_transmit != nullptr)
    {
        children["exceed-set-frde-transmit"] = exceed_set_frde_transmit;
    }

    if(exceed_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["exceed-set-mpls-exp-imposition-transmit"] = exceed_set_mpls_exp_imposition_transmit;
    }

    if(exceed_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["exceed-set-mpls-exp-topmost-transmit"] = exceed_set_mpls_exp_topmost_transmit;
    }

    if(exceed_set_prec_transmit != nullptr)
    {
        children["exceed-set-prec-transmit"] = exceed_set_prec_transmit;
    }

    if(exceed_set_qos_transmit != nullptr)
    {
        children["exceed-set-qos-transmit"] = exceed_set_qos_transmit;
    }

    if(exceed_transmit != nullptr)
    {
        children["exceed-transmit"] = exceed_transmit;
    }

    if(exceed_drop != nullptr)
    {
        children["exceed-drop"] = exceed_drop;
    }

    if(violate_set_clp_transmit != nullptr)
    {
        children["violate-set-clp-transmit"] = violate_set_clp_transmit;
    }

    if(violate_set_cos_transmit != nullptr)
    {
        children["violate-set-cos-transmit"] = violate_set_cos_transmit;
    }

    if(violate_set_discard_class_transmit != nullptr)
    {
        children["violate-set-discard-class-transmit"] = violate_set_discard_class_transmit;
    }

    if(violate_set_dscp_transmit != nullptr)
    {
        children["violate-set-dscp-transmit"] = violate_set_dscp_transmit;
    }

    if(violate_set_frde_transmit != nullptr)
    {
        children["violate-set-frde-transmit"] = violate_set_frde_transmit;
    }

    if(violate_set_mpls_exp_imposition_transmit != nullptr)
    {
        children["violate-set-mpls-exp-imposition-transmit"] = violate_set_mpls_exp_imposition_transmit;
    }

    if(violate_set_mpls_exp_topmost_transmit != nullptr)
    {
        children["violate-set-mpls-exp-topmost-transmit"] = violate_set_mpls_exp_topmost_transmit;
    }

    if(violate_set_prec_transmit != nullptr)
    {
        children["violate-set-prec-transmit"] = violate_set_prec_transmit;
    }

    if(violate_set_qos_transmit != nullptr)
    {
        children["violate-set-qos-transmit"] = violate_set_qos_transmit;
    }

    if(violate_transmit != nullptr)
    {
        children["violate-transmit"] = violate_transmit;
    }

    if(violate_drop != nullptr)
    {
        children["violate-drop"] = violate_drop;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-set-clp-transmit" || name == "conform-set-cos-transmit" || name == "conform-set-cos-transmit-table" || name == "conform-set-discard-class-transmit" || name == "conform-set-dscp-transmit" || name == "conform-set-dscp-transmit-table" || name == "conform-set-frde-transmit" || name == "conform-set-mpls-exp-imposition-transmit" || name == "conform-set-mpls-exp-imposition-transmit-table" || name == "conform-set-mpls-exp-topmost-transmit" || name == "conform-set-mpls-exp-topmost-transmit-table" || name == "conform-set-prec-transmit" || name == "conform-set-prec-transmit-table" || name == "conform-set-qos-transmit" || name == "conform-set-qos-transmit-table" || name == "conform-transmit" || name == "conform-drop" || name == "exceed-dscp" || name == "exceed-set-clp-transmit" || name == "exceed-set-cos-transmit" || name == "exceed-set-discard-class-transmit" || name == "exceed-set-dscp-transmit" || name == "exceed-set-dscp-transmit-table" || name == "exceed-set-frde-transmit" || name == "exceed-set-mpls-exp-imposition-transmit" || name == "exceed-set-mpls-exp-topmost-transmit" || name == "exceed-set-prec-transmit" || name == "exceed-set-qos-transmit" || name == "exceed-transmit" || name == "exceed-drop" || name == "violate-set-clp-transmit" || name == "violate-set-cos-transmit" || name == "violate-set-discard-class-transmit" || name == "violate-set-dscp-transmit" || name == "violate-set-frde-transmit" || name == "violate-set-mpls-exp-imposition-transmit" || name == "violate-set-mpls-exp-topmost-transmit" || name == "violate-set-prec-transmit" || name == "violate-set-qos-transmit" || name == "violate-transmit" || name == "violate-drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformSetClpTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::~ConformSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction::ConformAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetClpTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformSetCosTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::~ConformSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction::ConformAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction::has_data() const
{
    return set_cos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformSetCosTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-cos-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::~ConformSetCosTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-cos-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction::ConformAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-cos-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetCosTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformSetDiscardClassTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::~ConformSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::ConformAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDiscardClassTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformSetDscpTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::~ConformSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction::ConformAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-dscp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction::has_data() const
{
    return set_dscp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformSetDscpTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-dscp-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::~ConformSetDscpTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-dscp-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction::ConformAction()
    :
    set_dscp_transmit{YType::str, "set-dscp-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-dscp-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction::has_data() const
{
    return set_dscp_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_dscp_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_dscp_transmit.is_set || is_set(set_dscp_transmit.yfilter)) leaf_name_data.push_back(set_dscp_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit = value;
        set_dscp_transmit.value_namespace = name_space;
        set_dscp_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-dscp-transmit")
    {
        set_dscp_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetDscpTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-dscp-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformSetFrdeTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-frde-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::~ConformSetFrdeTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-frde-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction::ConformAction()
    :
    set_frde_transmit{YType::empty, "set-frde-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-frde-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction::has_data() const
{
    return set_frde_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_frde_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_frde_transmit.is_set || is_set(set_frde_transmit.yfilter)) leaf_name_data.push_back(set_frde_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit = value;
        set_frde_transmit.value_namespace = name_space;
        set_frde_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-frde-transmit")
    {
        set_frde_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetFrdeTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-frde-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformSetMplsExpImpositionTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-imposition-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::~ConformSetMplsExpImpositionTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-imposition-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::ConformAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-imposition-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformSetMplsExpImpositionTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-imposition-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::~ConformSetMplsExpImpositionTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-imposition-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_imposition_transmit{YType::str, "set-mpls-exp-imposition-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-imposition-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_imposition_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_imposition_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_imposition_transmit.is_set || is_set(set_mpls_exp_imposition_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_imposition_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit = value;
        set_mpls_exp_imposition_transmit.value_namespace = name_space;
        set_mpls_exp_imposition_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-imposition-transmit")
    {
        set_mpls_exp_imposition_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpImpositionTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-imposition-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformSetMplsExpTopmostTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::~ConformSetMplsExpTopmostTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformSetMplsExpTopmostTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-mpls-exp-topmost-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::~ConformSetMplsExpTopmostTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-mpls-exp-topmost-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::ConformAction()
    :
    set_mpls_exp_topmost_transmit{YType::str, "set-mpls-exp-topmost-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-mpls-exp-topmost-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_data() const
{
    return set_mpls_exp_topmost_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_mpls_exp_topmost_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_mpls_exp_topmost_transmit.is_set || is_set(set_mpls_exp_topmost_transmit.yfilter)) leaf_name_data.push_back(set_mpls_exp_topmost_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit = value;
        set_mpls_exp_topmost_transmit.value_namespace = name_space;
        set_mpls_exp_topmost_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-mpls-exp-topmost-transmit")
    {
        set_mpls_exp_topmost_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetMplsExpTopmostTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-mpls-exp-topmost-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformSetPrecTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::~ConformSetPrecTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction::has_data() const
{
    return set_prec_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformSetPrecTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-prec-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::~ConformSetPrecTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-prec-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction::ConformAction()
    :
    set_prec_transmit{YType::str, "set-prec-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-prec-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction::has_data() const
{
    return set_prec_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_prec_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_prec_transmit.is_set || is_set(set_prec_transmit.yfilter)) leaf_name_data.push_back(set_prec_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit = value;
        set_prec_transmit.value_namespace = name_space;
        set_prec_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-prec-transmit")
    {
        set_prec_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetPrecTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-prec-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformSetQosTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::~ConformSetQosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction::has_data() const
{
    return set_qos_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformSetQosTransmitTable()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-set-qos-transmit-table"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::~ConformSetQosTransmitTable()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-set-qos-transmit-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction::ConformAction()
    :
    set_qos_transmit{YType::str, "set-qos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-set-qos-transmit-table"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction::has_data() const
{
    return set_qos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_qos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_qos_transmit.is_set || is_set(set_qos_transmit.yfilter)) leaf_name_data.push_back(set_qos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit = value;
        set_qos_transmit.value_namespace = name_space;
        set_qos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-qos-transmit")
    {
        set_qos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformSetQosTransmitTable::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-qos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformTransmit()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::~ConformTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction::ConformAction()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction::has_data() const
{
    return transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformTransmit::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformDrop()
    :
    conform_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction>())
{
    conform_action->parent = this;

    yang_name = "conform-drop"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::~ConformDrop()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::has_data() const
{
    return (conform_action !=  nullptr && conform_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::has_operation() const
{
    return is_set(yfilter)
	|| (conform_action !=  nullptr && conform_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conform-action")
    {
        if(conform_action == nullptr)
        {
            conform_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction>();
        }
        return conform_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conform_action != nullptr)
    {
        children["conform-action"] = conform_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction::ConformAction()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "conform-action"; yang_parent_name = "conform-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction::~ConformAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction::has_data() const
{
    return drop.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ConformDrop::ConformAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedDscp()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-dscp"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::~ExceedDscp()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction::ExceedAction()
    :
    dscp{YType::str, "dscp"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction::has_data() const
{
    return dscp.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedDscp::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedSetClpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-clp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::~ExceedSetClpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-clp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction::ExceedAction()
    :
    set_clp_transmit{YType::empty, "set-clp-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-clp-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction::has_data() const
{
    return set_clp_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_clp_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_clp_transmit.is_set || is_set(set_clp_transmit.yfilter)) leaf_name_data.push_back(set_clp_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit = value;
        set_clp_transmit.value_namespace = name_space;
        set_clp_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-clp-transmit")
    {
        set_clp_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetClpTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-clp-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedSetCosTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-cos-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::~ExceedSetCosTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-cos-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction::ExceedAction()
    :
    set_cos_transmit{YType::str, "set-cos-transmit"},
    table{YType::str, "table"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-cos-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction::has_data() const
{
    return set_cos_transmit.is_set
	|| table.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_cos_transmit.yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_cos_transmit.is_set || is_set(set_cos_transmit.yfilter)) leaf_name_data.push_back(set_cos_transmit.get_name_leafdata());
    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit = value;
        set_cos_transmit.value_namespace = name_space;
        set_cos_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-cos-transmit")
    {
        set_cos_transmit.yfilter = yfilter;
    }
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetCosTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-cos-transmit" || name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedSetDiscardClassTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-discard-class-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::~ExceedSetDiscardClassTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-discard-class-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::ExceedAction()
    :
    set_discard_class_transmit{YType::uint8, "set-discard-class-transmit"}
{

    yang_name = "exceed-action"; yang_parent_name = "exceed-set-discard-class-transmit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::~ExceedAction()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_data() const
{
    return set_discard_class_transmit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_discard_class_transmit.yfilter);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_discard_class_transmit.is_set || is_set(set_discard_class_transmit.yfilter)) leaf_name_data.push_back(set_discard_class_transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit = value;
        set_discard_class_transmit.value_namespace = name_space;
        set_discard_class_transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-discard-class-transmit")
    {
        set_discard_class_transmit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDiscardClassTransmit::ExceedAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-discard-class-transmit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::ExceedSetDscpTransmit()
    :
    exceed_action(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::ExceedAction>())
{
    exceed_action->parent = this;

    yang_name = "exceed-set-dscp-transmit"; yang_parent_name = "actions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::~ExceedSetDscpTransmit()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::has_data() const
{
    return (exceed_action !=  nullptr && exceed_action->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::has_operation() const
{
    return is_set(yfilter)
	|| (exceed_action !=  nullptr && exceed_action->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-set-dscp-transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exceed-action")
    {
        if(exceed_action == nullptr)
        {
            exceed_action = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::ExceedAction>();
        }
        return exceed_action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exceed_action != nullptr)
    {
        children["exceed-action"] = exceed_action;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap::Police::Actions::ExceedSetDscpTransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exceed-action")
        return true;
    return false;
}

const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Application::Attribute::MediaType::audio {0, "audio"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Application::Attribute::MediaType::audio_video {1, "audio-video"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Application::Attribute::MediaType::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Application::Attribute::MediaType::data {3, "data"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Application::Attribute::MediaType::video {4, "video"};

const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::x802_11_iapp {0, "x802-11-iapp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ace_svr {1, "ace-svr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::aol {2, "aol"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::appleqtc {3, "appleqtc"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::biff {4, "biff"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::bittorrent {5, "bittorrent"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::bootpc {6, "bootpc"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::bootps {7, "bootps"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::cddbp {8, "cddbp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::cifs {9, "cifs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::cisco_fna {10, "cisco-fna"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::cisco_net_mgmt {11, "cisco-net-mgmt"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::cisco_svcs {12, "cisco-svcs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::cisco_sys {13, "cisco-sys"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::cisco_tdp {14, "cisco-tdp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::cisco_tna {15, "cisco-tna"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::citriximaclient {16, "citriximaclient"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::clp {17, "clp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::creativepartnr {18, "creativepartnr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::creativeserver {19, "creativeserver"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::daytime {20, "daytime"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::dbase {21, "dbase"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::dbcontrol_agent {22, "dbcontrol_agent"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ddns_v3 {23, "ddns-v3"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::dhcp_failover {24, "dhcp-failover"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::directconnect {25, "directconnect"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::discard {26, "discard"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::dnsix {27, "dnsix"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::echo {28, "echo"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::entrust_svc_hdlr {29, "entrust-svc-hdlr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::entrust_svcs {30, "entrust-svcs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::exec {31, "exec"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::fcip_port {32, "fcip-port"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ftps {33, "ftps"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::gdoi {34, "gdoi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::giop {35, "giop"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::gtpv0 {36, "gtpv0"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::gtpv1 {37, "gtpv1"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::h225ras {38, "h225ras"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::h323callsigalt {39, "h323callsigalt"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::hp_alarm_mgr {40, "hp-alarm-mgr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::hp_collector {41, "hp-collector"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::hp_managed_node {42, "hp-managed-node"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::hsrp {43, "hsrp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::https {44, "https"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ica {45, "ica"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::icabrowser {46, "icabrowser"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ident {47, "ident"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::igmpv3lite {48, "igmpv3lite"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::imap3 {49, "imap3"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::imaps {50, "imaps"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ipass {51, "ipass"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ipsec_msft {52, "ipsec-msft"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::irc_serv {53, "irc-serv"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ircs {54, "ircs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ircu {55, "ircu"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::isakmp {56, "isakmp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::iscsi {57, "iscsi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::iscsi_target {58, "iscsi-target"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::kermit {59, "kermit"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ldap_admin {60, "ldap-admin"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ldaps {61, "ldaps"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::login {62, "login"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::lotusmtap {63, "lotusmtap"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::lotusnote {64, "lotusnote"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::mapi {65, "mapi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ms_ad_rep {66, "ms-ad-rep"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ms_exch_nspi {67, "ms-exch-nspi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ms_frs {68, "ms-frs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ms_frsapi {69, "ms-frsapi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ms_rfr {70, "ms-rfr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::msn_messenger {71, "msn-messenger"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::netlogon {72, "netlogon"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::microsoft_ds {73, "microsoft-ds"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ms_cluster_net {74, "ms-cluster-net"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ms_dotnetster {75, "ms-dotnetster"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ms_sna {76, "ms-sna"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ms_sql {77, "ms-sql"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ms_sql_m {78, "ms-sql-m"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::msexch_routing {79, "msexch-routing"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::msnmsgr {80, "msnmsgr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::msrpc {81, "msrpc"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::mysql {82, "mysql"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::n2h2server {83, "n2h2server"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ncp {84, "ncp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::net8_cman {85, "net8-cman"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::netbios_dgm {86, "netbios-dgm"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::netbios_ns {87, "netbios-ns"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::netbios_ssn {88, "netbios-ssn"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::netstat {89, "netstat"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::oem_agent {90, "oem-agent"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::oracle {91, "oracle"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::oracle_em_vp {92, "oracle-em-vp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::oraclenames {93, "oraclenames"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::orasrv {94, "orasrv"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::pcanywheredata {95, "pcanywheredata"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::pcanywherestat {96, "pcanywherestat"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::pop3s {97, "pop3s"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::pwdgen {98, "pwdgen"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::qmtp {99, "qmtp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::r_winsock {100, "r-winsock"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::radius {101, "radius"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::rdb_dbs_disp {102, "rdb-dbs-disp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::realmedia {103, "realmedia"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::realsecure {104, "realsecure"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::router {105, "router"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::rsvp_encap {106, "rsvp-encap"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::rsvp_tunnel {107, "rsvp_tunnel"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::rtc_pm_port {108, "rtc-pm-port"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::rtelnet {109, "rtelnet"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::send {110, "send"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::shell {111, "shell"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::sip_tls {112, "sip-tls"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::sms {113, "sms"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::smtp {114, "smtp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::snmptrap {115, "snmptrap"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::sql_net {116, "sql-net"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::sqlserv {117, "sqlserv"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::sqlsrv {118, "sqlsrv"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::sshell {119, "sshell"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ssp {120, "ssp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::syslog_conn {121, "syslog-conn"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::tacacs {122, "tacacs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::tacacs_ds {123, "tacacs-ds"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::tarantella {124, "tarantella"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::tcp {125, "tcp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::telnets {126, "telnets"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::time {127, "time"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::timed {128, "timed"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::tr_rsrb {129, "tr-rsrb"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ttc {130, "ttc"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::udp {131, "udp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::uucp {132, "uucp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::vqp {133, "vqp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::webster {134, "webster"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::who {135, "who"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::wins {136, "wins"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::x11 {137, "x11"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::xdmcp {138, "xdmcp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::ymsgr {139, "ymsgr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::aarp {140, "aarp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::appletalk {141, "appletalk"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::arp {142, "arp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::bgp {143, "bgp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::bridge {144, "bridge"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::bstun {145, "bstun"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not_::Protocol::Protocols::cdp {146, "cdp"};

const Enum::YLeaf Native::Policy::PolicyMap::Type::access_control {0, "access-control"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::appnav {1, "appnav"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::inspect {2, "inspect"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::control {3, "control"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::packet_service {4, "packet-service"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::performance_monitor {5, "performance-monitor"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::service {6, "service"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::service_chain {7, "service-chain"};

const Enum::YLeaf Native::Policy::PolicyMap::Protocol::http {0, "http"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::im {1, "im"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::imap {2, "imap"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::p2p {3, "p2p"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::pop3 {4, "pop3"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::smtp {5, "smtp"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::sunrpc {6, "sunrpc"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::aaa_available {0, "aaa-available"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::absolute_timeout {1, "absolute-timeout"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::agent_found {2, "agent-found"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authentication_failure {3, "authentication-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authentication_success {4, "authentication-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authorization_failure {5, "authorization-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authorization_success {6, "authorization-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::identity_update {7, "identity-update"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::inactivity_timeout {8, "inactivity-timeout"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::remote_authentication_failure {9, "remote-authentication-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::remote_authentication_success {10, "remote-authentication-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::session_disconnected {11, "session-disconnected"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::session_started {12, "session-started"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::tag_added {13, "tag-added"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::tag_removed {14, "tag-removed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_activated {15, "template-activated"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_activation_failed {16, "template-activation-failed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_deactivated {17, "template-deactivated"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_deactivation_failed {18, "template-deactivation-failed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::timer_expiry {19, "timer-expiry"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::violation {20, "violation"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::MatchType::match_all {0, "match-all"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::MatchType::match_first {1, "match-first"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::Class_::always {0, "always"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_all {0, "do-all"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_until_failure {1, "do-until-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_until_success {2, "do-until-success"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::Method::dot1x {0, "dot1x"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::Method::mab {1, "mab"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using_::Method::webauth {2, "webauth"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::Type::inspect {0, "inspect"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::MS_port_mapper {0, "MS-port-mapper"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::cifs {1, "cifs"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::http {2, "http"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::ica {3, "ica"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::mapi {4, "mapi"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::nfs {5, "nfs"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::ssl {6, "ssl"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoad::video {7, "video"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Action::cxsc {0, "cxsc"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Action::drop {1, "drop"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Action::inspect {2, "inspect"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Action::pass {3, "pass"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Action::service_policy {4, "service-policy"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::ParameterMap::global {0, "global"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::ParameterMap::gtp {1, "gtp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type::gtpv0 {0, "gtpv0"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type::gtpv1 {1, "gtpv1"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type::imap {2, "imap"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type::pop3 {3, "pop3"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type::smtp {4, "smtp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::Type::sunrpc {5, "sunrpc"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::celb {0, "celb"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::cn {1, "cn"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::default_ {2, "default"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::dvi4 {3, "dvi4"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::dvi4_2 {4, "dvi4-2"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::dvi4_3 {5, "dvi4-3"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::dvi4_4 {6, "dvi4-4"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::g722 {7, "g722"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::g723 {8, "g723"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::g728 {9, "g728"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::g729 {10, "g729"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::gsm {11, "gsm"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::h261 {12, "h261"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::h263 {13, "h263"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::jpeg {14, "jpeg"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::l16 {15, "l16"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::l16_2 {16, "l16-2"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::lpc {17, "lpc"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::mp2t {18, "mp2t"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::mpa {19, "mpa"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::mpv {20, "mpv"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::nv {21, "nv"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::pcma {22, "pcma"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::pcmu {23, "pcmu"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::qcelp {24, "qcelp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Mode::media_stop {0, "media-stop"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Mode::mrv {1, "mrv"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Mode::rtp_jitter_average {2, "rtp-jitter-average"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Mode::transport_packets_lost_rate {3, "transport-packets-lost-rate"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Severity::alert {0, "alert"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Severity::critical {1, "critical"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Severity::emergency {2, "emergency"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Severity::error {3, "error"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Severity::info {4, "info"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Trust::cos {0, "cos"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Trust::dscp {1, "dscp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Trust::ip_precedence {2, "ip-precedence"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::RemOption::percent {0, "percent"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::RemOption::ratio {1, "ratio"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::Ip::rtp {0, "rtp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::Ip::tcp {1, "tcp"};


}
}

