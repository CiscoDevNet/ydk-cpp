
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_bfd_oper {

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "ipv4bf-do-mplste-head-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::OwnerInformation::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    sessiontype{YType::enumeration, "sessiontype"},
    local_discriminator{YType::uint32, "local-discriminator"}
        ,
    ip_destination_address(std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress>())
    , owner_information(this, {})
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "ipv4bf-do-mplste-head-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| sessiontype.is_set
	|| local_discriminator.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation>();
        ent_->parent = this;
        owner_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_destination_address != nullptr)
    {
        _children["ip-destination-address"] = ip_destination_address;
    }

    count_ = 0;
    for (auto ent_ : owner_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "sessiontype" || name == "local-discriminator")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
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

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
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

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteHeadSessionDetails::Ipv4bfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::RelationBriefs::RelationBriefs()
    :
    relation_brief(this, {})
{

    yang_name = "relation-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::RelationBriefs::~RelationBriefs()
{
}

bool Bfd::RelationBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<relation_brief.len(); index++)
    {
        if(relation_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::RelationBriefs::has_operation() const
{
    for (std::size_t index=0; index<relation_brief.len(); index++)
    {
        if(relation_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::RelationBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relation-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::RelationBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relation-brief")
    {
        auto ent_ = std::make_shared<Bfd::RelationBriefs::RelationBrief>();
        ent_->parent = this;
        relation_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::RelationBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : relation_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::RelationBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::RelationBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::RelationBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relation-brief")
        return true;
    return false;
}

Bfd::RelationBriefs::RelationBrief::RelationBrief()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::str, "destination-address"},
    state{YType::enumeration, "state"}
        ,
    link_information(this, {})
{

    yang_name = "relation-brief"; yang_parent_name = "relation-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::RelationBriefs::RelationBrief::~RelationBrief()
{
}

bool Bfd::RelationBriefs::RelationBrief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_information.len(); index++)
    {
        if(link_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| destination_address.is_set
	|| state.is_set;
}

bool Bfd::RelationBriefs::RelationBrief::has_operation() const
{
    for (std::size_t index=0; index<link_information.len(); index++)
    {
        if(link_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Bfd::RelationBriefs::RelationBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationBriefs::RelationBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relation-brief";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationBriefs::RelationBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::RelationBriefs::RelationBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-information")
    {
        auto ent_ = std::make_shared<Bfd::RelationBriefs::RelationBrief::LinkInformation>();
        ent_->parent = this;
        link_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::RelationBriefs::RelationBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::RelationBriefs::RelationBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::RelationBriefs::RelationBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Bfd::RelationBriefs::RelationBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-information" || name == "interface-name" || name == "destination-address" || name == "state")
        return true;
    return false;
}

Bfd::RelationBriefs::RelationBrief::LinkInformation::LinkInformation()
    :
    state{YType::enumeration, "state"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "link-information"; yang_parent_name = "relation-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::RelationBriefs::RelationBrief::LinkInformation::~LinkInformation()
{
}

bool Bfd::RelationBriefs::RelationBrief::LinkInformation::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| interface_name.is_set;
}

bool Bfd::RelationBriefs::RelationBrief::LinkInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Bfd::RelationBriefs::RelationBrief::LinkInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-briefs/relation-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationBriefs::RelationBrief::LinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationBriefs::RelationBrief::LinkInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::RelationBriefs::RelationBrief::LinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::RelationBriefs::RelationBrief::LinkInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::RelationBriefs::RelationBrief::LinkInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::RelationBriefs::RelationBrief::LinkInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Bfd::RelationBriefs::RelationBrief::LinkInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "interface-name")
        return true;
    return false;
}

Bfd::ClientBriefs::ClientBriefs()
    :
    client_brief(this, {"name"})
{

    yang_name = "client-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::ClientBriefs::~ClientBriefs()
{
}

bool Bfd::ClientBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_brief.len(); index++)
    {
        if(client_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::ClientBriefs::has_operation() const
{
    for (std::size_t index=0; index<client_brief.len(); index++)
    {
        if(client_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::ClientBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::ClientBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::ClientBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::ClientBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-brief")
    {
        auto ent_ = std::make_shared<Bfd::ClientBriefs::ClientBrief>();
        ent_->parent = this;
        client_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::ClientBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::ClientBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::ClientBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::ClientBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-brief")
        return true;
    return false;
}

Bfd::ClientBriefs::ClientBrief::ClientBrief()
    :
    name{YType::str, "name"},
    name_xr{YType::str, "name-xr"},
    node_id{YType::str, "node-id"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "client-brief"; yang_parent_name = "client-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::ClientBriefs::ClientBrief::~ClientBrief()
{
}

bool Bfd::ClientBriefs::ClientBrief::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| name_xr.is_set
	|| node_id.is_set
	|| session_count.is_set;
}

bool Bfd::ClientBriefs::ClientBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(name_xr.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string Bfd::ClientBriefs::ClientBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/client-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::ClientBriefs::ClientBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-brief";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::ClientBriefs::ClientBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_xr.is_set || is_set(name_xr.yfilter)) leaf_name_data.push_back(name_xr.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::ClientBriefs::ClientBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::ClientBriefs::ClientBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::ClientBriefs::ClientBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-xr")
    {
        name_xr = value;
        name_xr.value_namespace = name_space;
        name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::ClientBriefs::ClientBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "name-xr")
    {
        name_xr.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool Bfd::ClientBriefs::ClientBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "name-xr" || name == "node-id" || name == "session-count")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPaths()
    :
    ipv4bf_do_mplste_head_multi_path(this, {})
{

    yang_name = "ipv4bf-do-mplste-head-multi-paths"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadMultiPaths::~Ipv4bfDoMplsteHeadMultiPaths()
{
}

bool Bfd::Ipv4bfDoMplsteHeadMultiPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_multi_path.len(); index++)
    {
        if(ipv4bf_do_mplste_head_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4bfDoMplsteHeadMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_multi_path.len(); index++)
    {
        if(ipv4bf_do_mplste_head_multi_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4bfDoMplsteHeadMultiPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-multi-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadMultiPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bf-do-mplste-head-multi-path")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPath>();
        ent_->parent = this;
        ipv4bf_do_mplste_head_multi_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadMultiPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4bf_do_mplste_head_multi_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadMultiPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4bfDoMplsteHeadMultiPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4bfDoMplsteHeadMultiPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4bf-do-mplste-head-multi-path")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPath::Ipv4bfDoMplsteHeadMultiPath()
    :
    interface_name{YType::str, "interface-name"},
    vrf_name{YType::str, "vrf-name"},
    incoming_label{YType::uint32, "incoming-label"},
    fe_ctype{YType::uint32, "fe-ctype"},
    fec_subgroup_id{YType::uint32, "fec-subgroup-id"},
    feclspid{YType::uint32, "feclspid"},
    fec_tunnel_id{YType::uint32, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_destination{YType::str, "fec-destination"},
    fecp2mpid{YType::uint32, "fecp2mpid"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_ctype{YType::uint32, "fec-ctype"},
    location{YType::str, "location"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    session_interface_name{YType::str, "session-interface-name"}
{

    yang_name = "ipv4bf-do-mplste-head-multi-path"; yang_parent_name = "ipv4bf-do-mplste-head-multi-paths"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPath::~Ipv4bfDoMplsteHeadMultiPath()
{
}

bool Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPath::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| vrf_name.is_set
	|| incoming_label.is_set
	|| fe_ctype.is_set
	|| fec_subgroup_id.is_set
	|| feclspid.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_destination.is_set
	|| fecp2mpid.is_set
	|| fec_subgroup_originator.is_set
	|| fec_ctype.is_set
	|| location.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| incoming_label_xr.is_set
	|| session_interface_name.is_set;
}

bool Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(fe_ctype.yfilter)
	|| ydk::is_set(fec_subgroup_id.yfilter)
	|| ydk::is_set(feclspid.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_destination.yfilter)
	|| ydk::is_set(fecp2mpid.yfilter)
	|| ydk::is_set(fec_subgroup_originator.yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(incoming_label_xr.yfilter)
	|| ydk::is_set(session_interface_name.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-multi-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-multi-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (fec_subgroup_id.is_set || is_set(fec_subgroup_id.yfilter)) leaf_name_data.push_back(fec_subgroup_id.get_name_leafdata());
    if (feclspid.is_set || is_set(feclspid.yfilter)) leaf_name_data.push_back(feclspid.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_destination.is_set || is_set(fec_destination.yfilter)) leaf_name_data.push_back(fec_destination.get_name_leafdata());
    if (fecp2mpid.is_set || is_set(fecp2mpid.yfilter)) leaf_name_data.push_back(fecp2mpid.get_name_leafdata());
    if (fec_subgroup_originator.is_set || is_set(fec_subgroup_originator.yfilter)) leaf_name_data.push_back(fec_subgroup_originator.get_name_leafdata());
    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.yfilter)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.yfilter)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id = value;
        fec_subgroup_id.value_namespace = name_space;
        fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feclspid")
    {
        feclspid = value;
        feclspid.value_namespace = name_space;
        feclspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination")
    {
        fec_destination = value;
        fec_destination.value_namespace = name_space;
        fec_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid = value;
        fecp2mpid.value_namespace = name_space;
        fecp2mpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator = value;
        fec_subgroup_originator.value_namespace = name_space;
        fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
        incoming_label_xr.value_namespace = name_space;
        incoming_label_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
        session_interface_name.value_namespace = name_space;
        session_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "feclspid")
    {
        feclspid.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-destination")
    {
        fec_destination.yfilter = yfilter;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid.yfilter = yfilter;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr.yfilter = yfilter;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteHeadMultiPaths::Ipv4bfDoMplsteHeadMultiPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "vrf-name" || name == "incoming-label" || name == "fe-ctype" || name == "fec-subgroup-id" || name == "feclspid" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-destination" || name == "fecp2mpid" || name == "fec-subgroup-originator" || name == "fec-ctype" || name == "location" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "node-id" || name == "incoming-label-xr" || name == "session-interface-name")
        return true;
    return false;
}

Bfd::RelationDetails::RelationDetails()
    :
    relation_detail(this, {})
{

    yang_name = "relation-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::RelationDetails::~RelationDetails()
{
}

bool Bfd::RelationDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<relation_detail.len(); index++)
    {
        if(relation_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::RelationDetails::has_operation() const
{
    for (std::size_t index=0; index<relation_detail.len(); index++)
    {
        if(relation_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::RelationDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relation-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::RelationDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relation-detail")
    {
        auto ent_ = std::make_shared<Bfd::RelationDetails::RelationDetail>();
        ent_->parent = this;
        relation_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::RelationDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : relation_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::RelationDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::RelationDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::RelationDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relation-detail")
        return true;
    return false;
}

Bfd::RelationDetails::RelationDetail::RelationDetail()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::str, "destination-address"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"}
        ,
    link_information(this, {})
    , association_information(this, {})
{

    yang_name = "relation-detail"; yang_parent_name = "relation-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::RelationDetails::RelationDetail::~RelationDetail()
{
}

bool Bfd::RelationDetails::RelationDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_information.len(); index++)
    {
        if(link_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<association_information.len(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| destination_address.is_set
	|| state.is_set
	|| local_discriminator.is_set;
}

bool Bfd::RelationDetails::RelationDetail::has_operation() const
{
    for (std::size_t index=0; index<link_information.len(); index++)
    {
        if(link_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<association_information.len(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter);
}

std::string Bfd::RelationDetails::RelationDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationDetails::RelationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relation-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationDetails::RelationDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::RelationDetails::RelationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-information")
    {
        auto ent_ = std::make_shared<Bfd::RelationDetails::RelationDetail::LinkInformation>();
        ent_->parent = this;
        link_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "association-information")
    {
        auto ent_ = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation>();
        ent_->parent = this;
        association_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::RelationDetails::RelationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : association_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::RelationDetails::RelationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::RelationDetails::RelationDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
}

bool Bfd::RelationDetails::RelationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-information" || name == "association-information" || name == "interface-name" || name == "destination-address" || name == "state" || name == "local-discriminator")
        return true;
    return false;
}

Bfd::RelationDetails::RelationDetail::LinkInformation::LinkInformation()
    :
    state{YType::enumeration, "state"},
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"}
{

    yang_name = "link-information"; yang_parent_name = "relation-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::RelationDetails::RelationDetail::LinkInformation::~LinkInformation()
{
}

bool Bfd::RelationDetails::RelationDetail::LinkInformation::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| interface_name.is_set
	|| local_discriminator.is_set;
}

bool Bfd::RelationDetails::RelationDetail::LinkInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(local_discriminator.yfilter);
}

std::string Bfd::RelationDetails::RelationDetail::LinkInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationDetails::RelationDetail::LinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationDetails::RelationDetail::LinkInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::RelationDetails::RelationDetail::LinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::RelationDetails::RelationDetail::LinkInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::RelationDetails::RelationDetail::LinkInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::RelationDetails::RelationDetail::LinkInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
}

bool Bfd::RelationDetails::RelationDetail::LinkInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "interface-name" || name == "local-discriminator")
        return true;
    return false;
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    sessiontype{YType::enumeration, "sessiontype"},
    local_discriminator{YType::uint32, "local-discriminator"}
        ,
    ip_destination_address(std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress>())
    , owner_information(this, {})
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "relation-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| sessiontype.is_set
	|| local_discriminator.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation());
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationDetails::RelationDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        auto ent_ = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation>();
        ent_->parent = this;
        owner_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::RelationDetails::RelationDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_destination_address != nullptr)
    {
        _children["ip-destination-address"] = ip_destination_address;
    }

    count_ = 0;
    for (auto ent_ : owner_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "sessiontype" || name == "local-discriminator")
        return true;
    return false;
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
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

void Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
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

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailCounters()
    :
    ipv4bf_do_mplste_tail_packet_counters(std::make_shared<Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters>())
{
    ipv4bf_do_mplste_tail_packet_counters->parent = this;

    yang_name = "ipv4bf-do-mplste-tail-counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailCounters::~Ipv4bfDoMplsteTailCounters()
{
}

bool Bfd::Ipv4bfDoMplsteTailCounters::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4bf_do_mplste_tail_packet_counters !=  nullptr && ipv4bf_do_mplste_tail_packet_counters->has_data());
}

bool Bfd::Ipv4bfDoMplsteTailCounters::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4bf_do_mplste_tail_packet_counters !=  nullptr && ipv4bf_do_mplste_tail_packet_counters->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteTailCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bf-do-mplste-tail-packet-counters")
    {
        if(ipv4bf_do_mplste_tail_packet_counters == nullptr)
        {
            ipv4bf_do_mplste_tail_packet_counters = std::make_shared<Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters>();
        }
        return ipv4bf_do_mplste_tail_packet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4bf_do_mplste_tail_packet_counters != nullptr)
    {
        _children["ipv4bf-do-mplste-tail-packet-counters"] = ipv4bf_do_mplste_tail_packet_counters;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4bfDoMplsteTailCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4bfDoMplsteTailCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4bf-do-mplste-tail-packet-counters")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounters()
    :
    ipv4bf_do_mplste_tail_packet_counter(this, {})
{

    yang_name = "ipv4bf-do-mplste-tail-packet-counters"; yang_parent_name = "ipv4bf-do-mplste-tail-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::~Ipv4bfDoMplsteTailPacketCounters()
{
}

bool Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_packet_counter.len(); index++)
    {
        if(ipv4bf_do_mplste_tail_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_packet_counter.len(); index++)
    {
        if(ipv4bf_do_mplste_tail_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bf-do-mplste-tail-packet-counter")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounter>();
        ent_->parent = this;
        ipv4bf_do_mplste_tail_packet_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4bf_do_mplste_tail_packet_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4bf-do-mplste-tail-packet-counter")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounter::Ipv4bfDoMplsteTailPacketCounter()
    :
    vrf_name{YType::str, "vrf-name"},
    incoming_label{YType::uint32, "incoming-label"},
    fe_ctype{YType::uint32, "fe-ctype"},
    fec_subgroup_id{YType::uint32, "fec-subgroup-id"},
    feclspid{YType::uint32, "feclspid"},
    fec_tunnel_id{YType::uint32, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_destination{YType::str, "fec-destination"},
    fecp2mpid{YType::uint32, "fecp2mpid"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_ctype{YType::uint32, "fec-ctype"},
    location{YType::str, "location"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    display_type{YType::enumeration, "display-type"}
{

    yang_name = "ipv4bf-do-mplste-tail-packet-counter"; yang_parent_name = "ipv4bf-do-mplste-tail-packet-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounter::~Ipv4bfDoMplsteTailPacketCounter()
{
}

bool Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounter::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| incoming_label.is_set
	|| fe_ctype.is_set
	|| fec_subgroup_id.is_set
	|| feclspid.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_destination.is_set
	|| fecp2mpid.is_set
	|| fec_subgroup_originator.is_set
	|| fec_ctype.is_set
	|| location.is_set
	|| hello_transmit_count.is_set
	|| hello_receive_count.is_set
	|| echo_transmit_count.is_set
	|| echo_receive_count.is_set
	|| display_type.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(fe_ctype.yfilter)
	|| ydk::is_set(fec_subgroup_id.yfilter)
	|| ydk::is_set(feclspid.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_destination.yfilter)
	|| ydk::is_set(fecp2mpid.yfilter)
	|| ydk::is_set(fec_subgroup_originator.yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(hello_transmit_count.yfilter)
	|| ydk::is_set(hello_receive_count.yfilter)
	|| ydk::is_set(echo_transmit_count.yfilter)
	|| ydk::is_set(echo_receive_count.yfilter)
	|| ydk::is_set(display_type.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-counters/ipv4bf-do-mplste-tail-packet-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-packet-counter";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (fec_subgroup_id.is_set || is_set(fec_subgroup_id.yfilter)) leaf_name_data.push_back(fec_subgroup_id.get_name_leafdata());
    if (feclspid.is_set || is_set(feclspid.yfilter)) leaf_name_data.push_back(feclspid.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_destination.is_set || is_set(fec_destination.yfilter)) leaf_name_data.push_back(fec_destination.get_name_leafdata());
    if (fecp2mpid.is_set || is_set(fecp2mpid.yfilter)) leaf_name_data.push_back(fecp2mpid.get_name_leafdata());
    if (fec_subgroup_originator.is_set || is_set(fec_subgroup_originator.yfilter)) leaf_name_data.push_back(fec_subgroup_originator.get_name_leafdata());
    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.yfilter)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.yfilter)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.yfilter)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.yfilter)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.yfilter)) leaf_name_data.push_back(display_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id = value;
        fec_subgroup_id.value_namespace = name_space;
        fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feclspid")
    {
        feclspid = value;
        feclspid.value_namespace = name_space;
        feclspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination")
    {
        fec_destination = value;
        fec_destination.value_namespace = name_space;
        fec_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid = value;
        fecp2mpid.value_namespace = name_space;
        fecp2mpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator = value;
        fec_subgroup_originator.value_namespace = name_space;
        fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
        hello_transmit_count.value_namespace = name_space;
        hello_transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
        hello_receive_count.value_namespace = name_space;
        hello_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
        echo_transmit_count.value_namespace = name_space;
        echo_transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
        echo_receive_count.value_namespace = name_space;
        echo_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-type")
    {
        display_type = value;
        display_type.value_namespace = name_space;
        display_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "feclspid")
    {
        feclspid.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-destination")
    {
        fec_destination.yfilter = yfilter;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid.yfilter = yfilter;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count.yfilter = yfilter;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count.yfilter = yfilter;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count.yfilter = yfilter;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count.yfilter = yfilter;
    }
    if(value_path == "display-type")
    {
        display_type.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailCounters::Ipv4bfDoMplsteTailPacketCounters::Ipv4bfDoMplsteTailPacketCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "incoming-label" || name == "fe-ctype" || name == "fec-subgroup-id" || name == "feclspid" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-destination" || name == "fecp2mpid" || name == "fec-subgroup-originator" || name == "fec-ctype" || name == "location" || name == "hello-transmit-count" || name == "hello-receive-count" || name == "echo-transmit-count" || name == "echo-receive-count" || name == "display-type")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBriefs()
    :
    ipv6_single_hop_session_brief(this, {})
{

    yang_name = "ipv6-single-hop-session-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6SingleHopSessionBriefs::~Ipv6SingleHopSessionBriefs()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_single_hop_session_brief.len(); index++)
    {
        if(ipv6_single_hop_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_session_brief.len(); index++)
    {
        if(ipv6_single_hop_session_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6SingleHopSessionBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-session-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6SingleHopSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-session-brief")
    {
        auto ent_ = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief>();
        ent_->parent = this;
        ipv6_single_hop_session_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6SingleHopSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_single_hop_session_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv6SingleHopSessionBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopSessionBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-session-brief")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::Ipv6SingleHopSessionBrief()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    state{YType::enumeration, "state"},
    session_type{YType::enumeration, "session-type"},
    session_subtype{YType::str, "session-subtype"},
    session_flags{YType::uint32, "session-flags"}
        ,
    status_brief_information(std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "ipv6-single-hop-session-brief"; yang_parent_name = "ipv6-single-hop-session-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::~Ipv6SingleHopSessionBrief()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| destination_address.is_set
	|| location.is_set
	|| node_id.is_set
	|| state.is_set
	|| session_type.is_set
	|| session_subtype.is_set
	|| session_flags.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(session_flags.yfilter)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-session-brief";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.yfilter)) leaf_name_data.push_back(session_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status_brief_information != nullptr)
    {
        _children["status-brief-information"] = status_brief_information;
    }

    return _children;
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
        session_flags.value_namespace = name_space;
        session_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "session-flags")
    {
        session_flags.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-brief-information" || name == "interface-name" || name == "destination-address" || name == "location" || name == "node-id" || name == "state" || name == "session-type" || name == "session-subtype" || name == "session-flags")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
    , echo_interval_multiplier(std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "ipv6-single-hop-session-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::has_data() const
{
    if (is_presence_container) return true;
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-briefs/ipv6-single-hop-session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(async_interval_multiplier != nullptr)
    {
        _children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        _children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return _children;
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-briefs/ipv6-single-hop-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-briefs/ipv6-single-hop-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPaths()
    :
    ipv4bf_do_mplste_tail_multi_path(this, {})
{

    yang_name = "ipv4bf-do-mplste-tail-multi-paths"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailMultiPaths::~Ipv4bfDoMplsteTailMultiPaths()
{
}

bool Bfd::Ipv4bfDoMplsteTailMultiPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_multi_path.len(); index++)
    {
        if(ipv4bf_do_mplste_tail_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4bfDoMplsteTailMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_multi_path.len(); index++)
    {
        if(ipv4bf_do_mplste_tail_multi_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailMultiPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-multi-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailMultiPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bf-do-mplste-tail-multi-path")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPath>();
        ent_->parent = this;
        ipv4bf_do_mplste_tail_multi_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailMultiPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4bf_do_mplste_tail_multi_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailMultiPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4bfDoMplsteTailMultiPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4bfDoMplsteTailMultiPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4bf-do-mplste-tail-multi-path")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPath::Ipv4bfDoMplsteTailMultiPath()
    :
    vrf_name{YType::str, "vrf-name"},
    incoming_label{YType::uint32, "incoming-label"},
    fe_ctype{YType::uint32, "fe-ctype"},
    fec_subgroup_id{YType::uint32, "fec-subgroup-id"},
    feclspid{YType::uint32, "feclspid"},
    fec_tunnel_id{YType::uint32, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_destination{YType::str, "fec-destination"},
    fecp2mpid{YType::uint32, "fecp2mpid"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_ctype{YType::uint32, "fec-ctype"},
    location{YType::str, "location"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    session_interface_name{YType::str, "session-interface-name"}
{

    yang_name = "ipv4bf-do-mplste-tail-multi-path"; yang_parent_name = "ipv4bf-do-mplste-tail-multi-paths"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPath::~Ipv4bfDoMplsteTailMultiPath()
{
}

bool Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPath::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| incoming_label.is_set
	|| fe_ctype.is_set
	|| fec_subgroup_id.is_set
	|| feclspid.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_destination.is_set
	|| fecp2mpid.is_set
	|| fec_subgroup_originator.is_set
	|| fec_ctype.is_set
	|| location.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| incoming_label_xr.is_set
	|| session_interface_name.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(fe_ctype.yfilter)
	|| ydk::is_set(fec_subgroup_id.yfilter)
	|| ydk::is_set(feclspid.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_destination.yfilter)
	|| ydk::is_set(fecp2mpid.yfilter)
	|| ydk::is_set(fec_subgroup_originator.yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(incoming_label_xr.yfilter)
	|| ydk::is_set(session_interface_name.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-multi-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-multi-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (fec_subgroup_id.is_set || is_set(fec_subgroup_id.yfilter)) leaf_name_data.push_back(fec_subgroup_id.get_name_leafdata());
    if (feclspid.is_set || is_set(feclspid.yfilter)) leaf_name_data.push_back(feclspid.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_destination.is_set || is_set(fec_destination.yfilter)) leaf_name_data.push_back(fec_destination.get_name_leafdata());
    if (fecp2mpid.is_set || is_set(fecp2mpid.yfilter)) leaf_name_data.push_back(fecp2mpid.get_name_leafdata());
    if (fec_subgroup_originator.is_set || is_set(fec_subgroup_originator.yfilter)) leaf_name_data.push_back(fec_subgroup_originator.get_name_leafdata());
    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.yfilter)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.yfilter)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id = value;
        fec_subgroup_id.value_namespace = name_space;
        fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feclspid")
    {
        feclspid = value;
        feclspid.value_namespace = name_space;
        feclspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination")
    {
        fec_destination = value;
        fec_destination.value_namespace = name_space;
        fec_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid = value;
        fecp2mpid.value_namespace = name_space;
        fecp2mpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator = value;
        fec_subgroup_originator.value_namespace = name_space;
        fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
        incoming_label_xr.value_namespace = name_space;
        incoming_label_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
        session_interface_name.value_namespace = name_space;
        session_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "feclspid")
    {
        feclspid.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-destination")
    {
        fec_destination.yfilter = yfilter;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid.yfilter = yfilter;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr.yfilter = yfilter;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailMultiPaths::Ipv4bfDoMplsteTailMultiPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "incoming-label" || name == "fe-ctype" || name == "fec-subgroup-id" || name == "feclspid" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-destination" || name == "fecp2mpid" || name == "fec-subgroup-originator" || name == "fec-ctype" || name == "location" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "node-id" || name == "incoming-label-xr" || name == "session-interface-name")
        return true;
    return false;
}

Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPaths()
    :
    ipv4_multi_hop_multi_path(this, {})
{

    yang_name = "ipv4-multi-hop-multi-paths"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopMultiPaths::~Ipv4MultiHopMultiPaths()
{
}

bool Bfd::Ipv4MultiHopMultiPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_multi_hop_multi_path.len(); index++)
    {
        if(ipv4_multi_hop_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4MultiHopMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_multi_path.len(); index++)
    {
        if(ipv4_multi_hop_multi_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4MultiHopMultiPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-multi-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopMultiPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-multi-hop-multi-path")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath>();
        ent_->parent = this;
        ipv4_multi_hop_multi_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopMultiPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_multi_hop_multi_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4MultiHopMultiPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4MultiHopMultiPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4MultiHopMultiPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-multi-hop-multi-path")
        return true;
    return false;
}

Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::Ipv4MultiHopMultiPath()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    vrf_name{YType::str, "vrf-name"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    session_interface_name{YType::str, "session-interface-name"}
{

    yang_name = "ipv4-multi-hop-multi-path"; yang_parent_name = "ipv4-multi-hop-multi-paths"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::~Ipv4MultiHopMultiPath()
{
}

bool Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| location.is_set
	|| vrf_name.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| incoming_label_xr.is_set
	|| session_interface_name.is_set;
}

bool Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(incoming_label_xr.yfilter)
	|| ydk::is_set(session_interface_name.yfilter);
}

std::string Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-multi-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-multi-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.yfilter)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.yfilter)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
        incoming_label_xr.value_namespace = name_space;
        incoming_label_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
        session_interface_name.value_namespace = name_space;
        session_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr.yfilter = yfilter;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "location" || name == "vrf-name" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "node-id" || name == "incoming-label-xr" || name == "session-interface-name")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadSummary::Ipv4bfDoMplsteHeadSummary()
    :
    session_state(std::make_shared<Bfd::Ipv4bfDoMplsteHeadSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4bf-do-mplste-head-summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSummary::~Ipv4bfDoMplsteHeadSummary()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSummary::has_data() const
{
    if (is_presence_container) return true;
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4bfDoMplsteHeadSummary::has_operation() const
{
    return is_set(yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteHeadSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv4bfDoMplsteHeadSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_state != nullptr)
    {
        _children["session-state"] = session_state;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4bfDoMplsteHeadSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4bfDoMplsteHeadSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    down_count{YType::uint32, "down-count"},
    up_count{YType::uint32, "up-count"},
    unknown_count{YType::uint32, "unknown-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv4bf-do-mplste-head-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSummary::SessionState::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| down_count.is_set
	|| up_count.is_set
	|| unknown_count.is_set;
}

bool Bfd::Ipv4bfDoMplsteHeadSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteHeadSummary::SessionState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteHeadSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteHeadSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "down-count" || name == "up-count" || name == "unknown-count")
        return true;
    return false;
}


}
}

