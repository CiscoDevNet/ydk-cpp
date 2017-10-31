
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_1.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_bfd_oper {

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "ipv6-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::has_data() const
{
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    sessiontype{YType::enumeration, "sessiontype"},
    local_discriminator{YType::uint32, "local-discriminator"}
    	,
    ip_destination_address(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress>())
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "ipv6-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| sessiontype.is_set
	|| local_discriminator.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
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

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_destination_address != nullptr)
    {
        children["ip-destination-address"] = ip_destination_address;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "sessiontype" || name == "local-discriminator")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPaths()
{

    yang_name = "ipv6-multi-hop-multi-paths"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopMultiPaths::~Ipv6MultiHopMultiPaths()
{
}

bool Bfd::Ipv6MultiHopMultiPaths::has_data() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_multi_path.size(); index++)
    {
        if(ipv6_multi_hop_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_multi_path.size(); index++)
    {
        if(ipv6_multi_hop_multi_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6MultiHopMultiPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-multi-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopMultiPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-multi-path")
    {
        for(auto const & c : ipv6_multi_hop_multi_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath>();
        c->parent = this;
        ipv6_multi_hop_multi_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopMultiPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_multi_hop_multi_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6MultiHopMultiPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopMultiPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopMultiPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-multi-hop-multi-path")
        return true;
    return false;
}

Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::Ipv6MultiHopMultiPath()
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

    yang_name = "ipv6-multi-hop-multi-path"; yang_parent_name = "ipv6-multi-hop-multi-paths"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::~Ipv6MultiHopMultiPath()
{
}

bool Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::has_data() const
{
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

bool Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::has_operation() const
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

std::string Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-multi-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-multi-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "location" || name == "vrf-name" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "node-id" || name == "incoming-label-xr" || name == "session-interface-name")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadCounters()
    :
    ipv4bf_do_mplste_head_packet_counters(std::make_shared<Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters>())
{
    ipv4bf_do_mplste_head_packet_counters->parent = this;

    yang_name = "ipv4bf-do-mplste-head-counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadCounters::~Ipv4BfDoMplsteHeadCounters()
{
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::has_data() const
{
    return (ipv4bf_do_mplste_head_packet_counters !=  nullptr && ipv4bf_do_mplste_head_packet_counters->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4bf_do_mplste_head_packet_counters !=  nullptr && ipv4bf_do_mplste_head_packet_counters->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bf-do-mplste-head-packet-counters")
    {
        if(ipv4bf_do_mplste_head_packet_counters == nullptr)
        {
            ipv4bf_do_mplste_head_packet_counters = std::make_shared<Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters>();
        }
        return ipv4bf_do_mplste_head_packet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4bf_do_mplste_head_packet_counters != nullptr)
    {
        children["ipv4bf-do-mplste-head-packet-counters"] = ipv4bf_do_mplste_head_packet_counters;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4BfDoMplsteHeadCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4bf-do-mplste-head-packet-counters")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounters()
{

    yang_name = "ipv4bf-do-mplste-head-packet-counters"; yang_parent_name = "ipv4bf-do-mplste-head-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::~Ipv4BfDoMplsteHeadPacketCounters()
{
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::has_data() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_packet_counter.size(); index++)
    {
        if(ipv4bf_do_mplste_head_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_packet_counter.size(); index++)
    {
        if(ipv4bf_do_mplste_head_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bf-do-mplste-head-packet-counter")
    {
        for(auto const & c : ipv4bf_do_mplste_head_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter>();
        c->parent = this;
        ipv4bf_do_mplste_head_packet_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4bf_do_mplste_head_packet_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4bf-do-mplste-head-packet-counter")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::Ipv4BfDoMplsteHeadPacketCounter()
    :
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    display_type{YType::enumeration, "display-type"}
{

    yang_name = "ipv4bf-do-mplste-head-packet-counter"; yang_parent_name = "ipv4bf-do-mplste-head-packet-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::~Ipv4BfDoMplsteHeadPacketCounter()
{
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::has_data() const
{
    return interface_name.is_set
	|| location.is_set
	|| hello_transmit_count.is_set
	|| hello_receive_count.is_set
	|| echo_transmit_count.is_set
	|| echo_receive_count.is_set
	|| display_type.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(hello_transmit_count.yfilter)
	|| ydk::is_set(hello_receive_count.yfilter)
	|| ydk::is_set(echo_transmit_count.yfilter)
	|| ydk::is_set(echo_receive_count.yfilter)
	|| ydk::is_set(display_type.yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-counters/ipv4bf-do-mplste-head-packet-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-packet-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.yfilter)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.yfilter)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.yfilter)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.yfilter)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.yfilter)) leaf_name_data.push_back(display_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
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

void Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
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

bool Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "location" || name == "hello-transmit-count" || name == "hello-receive-count" || name == "echo-transmit-count" || name == "echo-receive-count" || name == "display-type")
        return true;
    return false;
}

Bfd::SessionMibs::SessionMibs()
{

    yang_name = "session-mibs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionMibs::~SessionMibs()
{
}

bool Bfd::SessionMibs::has_data() const
{
    for (std::size_t index=0; index<session_mib.size(); index++)
    {
        if(session_mib[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::SessionMibs::has_operation() const
{
    for (std::size_t index=0; index<session_mib.size(); index++)
    {
        if(session_mib[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::SessionMibs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionMibs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-mibs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionMibs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionMibs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-mib")
    {
        for(auto const & c : session_mib)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::SessionMibs::SessionMib>();
        c->parent = this;
        session_mib.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionMibs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_mib)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::SessionMibs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::SessionMibs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::SessionMibs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-mib")
        return true;
    return false;
}

Bfd::SessionMibs::SessionMib::SessionMib()
    :
    discriminator{YType::int32, "discriminator"},
    local_discriminator{YType::uint32, "local-discriminator"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    sessionversion{YType::uint32, "sessionversion"},
    session_state{YType::uint32, "session-state"},
    trap_bitmap{YType::uint32, "trap-bitmap"},
    pkt_in{YType::uint64, "pkt-in"},
    pkt_out{YType::uint64, "pkt-out"},
    last_up_time_sec{YType::uint64, "last-up-time-sec"},
    last_up_time_nsec{YType::uint32, "last-up-time-nsec"},
    last_down_time_sec{YType::uint64, "last-down-time-sec"},
    last_down_time_nsec{YType::uint32, "last-down-time-nsec"},
    last_down_diag{YType::enumeration, "last-down-diag"},
    up_counter{YType::uint32, "up-counter"},
    last_time_cached{YType::uint64, "last-time-cached"},
    interface_name{YType::str, "interface-name"},
    int_handle{YType::uint32, "int-handle"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    desired_min_tx_interval{YType::uint32, "desired-min-tx-interval"},
    required_min_rx_interval{YType::uint32, "required-min-rx-interval"},
    required_min_rx_echo_interval{YType::uint32, "required-min-rx-echo-interval"}
    	,
    dest_address(std::make_shared<Bfd::SessionMibs::SessionMib::DestAddress>())
{
    dest_address->parent = this;

    yang_name = "session-mib"; yang_parent_name = "session-mibs"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionMibs::SessionMib::~SessionMib()
{
}

bool Bfd::SessionMibs::SessionMib::has_data() const
{
    return discriminator.is_set
	|| local_discriminator.is_set
	|| remote_discriminator.is_set
	|| sessionversion.is_set
	|| session_state.is_set
	|| trap_bitmap.is_set
	|| pkt_in.is_set
	|| pkt_out.is_set
	|| last_up_time_sec.is_set
	|| last_up_time_nsec.is_set
	|| last_down_time_sec.is_set
	|| last_down_time_nsec.is_set
	|| last_down_diag.is_set
	|| up_counter.is_set
	|| last_time_cached.is_set
	|| interface_name.is_set
	|| int_handle.is_set
	|| detection_multiplier.is_set
	|| desired_min_tx_interval.is_set
	|| required_min_rx_interval.is_set
	|| required_min_rx_echo_interval.is_set
	|| (dest_address !=  nullptr && dest_address->has_data());
}

bool Bfd::SessionMibs::SessionMib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discriminator.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(sessionversion.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(trap_bitmap.yfilter)
	|| ydk::is_set(pkt_in.yfilter)
	|| ydk::is_set(pkt_out.yfilter)
	|| ydk::is_set(last_up_time_sec.yfilter)
	|| ydk::is_set(last_up_time_nsec.yfilter)
	|| ydk::is_set(last_down_time_sec.yfilter)
	|| ydk::is_set(last_down_time_nsec.yfilter)
	|| ydk::is_set(last_down_diag.yfilter)
	|| ydk::is_set(up_counter.yfilter)
	|| ydk::is_set(last_time_cached.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(int_handle.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(desired_min_tx_interval.yfilter)
	|| ydk::is_set(required_min_rx_interval.yfilter)
	|| ydk::is_set(required_min_rx_echo_interval.yfilter)
	|| (dest_address !=  nullptr && dest_address->has_operation());
}

std::string Bfd::SessionMibs::SessionMib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-mibs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionMibs::SessionMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-mib" <<"[discriminator='" <<discriminator <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionMibs::SessionMib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (sessionversion.is_set || is_set(sessionversion.yfilter)) leaf_name_data.push_back(sessionversion.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (trap_bitmap.is_set || is_set(trap_bitmap.yfilter)) leaf_name_data.push_back(trap_bitmap.get_name_leafdata());
    if (pkt_in.is_set || is_set(pkt_in.yfilter)) leaf_name_data.push_back(pkt_in.get_name_leafdata());
    if (pkt_out.is_set || is_set(pkt_out.yfilter)) leaf_name_data.push_back(pkt_out.get_name_leafdata());
    if (last_up_time_sec.is_set || is_set(last_up_time_sec.yfilter)) leaf_name_data.push_back(last_up_time_sec.get_name_leafdata());
    if (last_up_time_nsec.is_set || is_set(last_up_time_nsec.yfilter)) leaf_name_data.push_back(last_up_time_nsec.get_name_leafdata());
    if (last_down_time_sec.is_set || is_set(last_down_time_sec.yfilter)) leaf_name_data.push_back(last_down_time_sec.get_name_leafdata());
    if (last_down_time_nsec.is_set || is_set(last_down_time_nsec.yfilter)) leaf_name_data.push_back(last_down_time_nsec.get_name_leafdata());
    if (last_down_diag.is_set || is_set(last_down_diag.yfilter)) leaf_name_data.push_back(last_down_diag.get_name_leafdata());
    if (up_counter.is_set || is_set(up_counter.yfilter)) leaf_name_data.push_back(up_counter.get_name_leafdata());
    if (last_time_cached.is_set || is_set(last_time_cached.yfilter)) leaf_name_data.push_back(last_time_cached.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (int_handle.is_set || is_set(int_handle.yfilter)) leaf_name_data.push_back(int_handle.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (desired_min_tx_interval.is_set || is_set(desired_min_tx_interval.yfilter)) leaf_name_data.push_back(desired_min_tx_interval.get_name_leafdata());
    if (required_min_rx_interval.is_set || is_set(required_min_rx_interval.yfilter)) leaf_name_data.push_back(required_min_rx_interval.get_name_leafdata());
    if (required_min_rx_echo_interval.is_set || is_set(required_min_rx_echo_interval.yfilter)) leaf_name_data.push_back(required_min_rx_echo_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionMibs::SessionMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-address")
    {
        if(dest_address == nullptr)
        {
            dest_address = std::make_shared<Bfd::SessionMibs::SessionMib::DestAddress>();
        }
        return dest_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionMibs::SessionMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dest_address != nullptr)
    {
        children["dest-address"] = dest_address;
    }

    return children;
}

void Bfd::SessionMibs::SessionMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionversion")
    {
        sessionversion = value;
        sessionversion.value_namespace = name_space;
        sessionversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-bitmap")
    {
        trap_bitmap = value;
        trap_bitmap.value_namespace = name_space;
        trap_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-in")
    {
        pkt_in = value;
        pkt_in.value_namespace = name_space;
        pkt_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-out")
    {
        pkt_out = value;
        pkt_out.value_namespace = name_space;
        pkt_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-up-time-sec")
    {
        last_up_time_sec = value;
        last_up_time_sec.value_namespace = name_space;
        last_up_time_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-up-time-nsec")
    {
        last_up_time_nsec = value;
        last_up_time_nsec.value_namespace = name_space;
        last_up_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-down-time-sec")
    {
        last_down_time_sec = value;
        last_down_time_sec.value_namespace = name_space;
        last_down_time_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-down-time-nsec")
    {
        last_down_time_nsec = value;
        last_down_time_nsec.value_namespace = name_space;
        last_down_time_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-down-diag")
    {
        last_down_diag = value;
        last_down_diag.value_namespace = name_space;
        last_down_diag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-counter")
    {
        up_counter = value;
        up_counter.value_namespace = name_space;
        up_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-cached")
    {
        last_time_cached = value;
        last_time_cached.value_namespace = name_space;
        last_time_cached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "int-handle")
    {
        int_handle = value;
        int_handle.value_namespace = name_space;
        int_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-min-tx-interval")
    {
        desired_min_tx_interval = value;
        desired_min_tx_interval.value_namespace = name_space;
        desired_min_tx_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-min-rx-interval")
    {
        required_min_rx_interval = value;
        required_min_rx_interval.value_namespace = name_space;
        required_min_rx_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-min-rx-echo-interval")
    {
        required_min_rx_echo_interval = value;
        required_min_rx_echo_interval.value_namespace = name_space;
        required_min_rx_echo_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionMibs::SessionMib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "sessionversion")
    {
        sessionversion.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "trap-bitmap")
    {
        trap_bitmap.yfilter = yfilter;
    }
    if(value_path == "pkt-in")
    {
        pkt_in.yfilter = yfilter;
    }
    if(value_path == "pkt-out")
    {
        pkt_out.yfilter = yfilter;
    }
    if(value_path == "last-up-time-sec")
    {
        last_up_time_sec.yfilter = yfilter;
    }
    if(value_path == "last-up-time-nsec")
    {
        last_up_time_nsec.yfilter = yfilter;
    }
    if(value_path == "last-down-time-sec")
    {
        last_down_time_sec.yfilter = yfilter;
    }
    if(value_path == "last-down-time-nsec")
    {
        last_down_time_nsec.yfilter = yfilter;
    }
    if(value_path == "last-down-diag")
    {
        last_down_diag.yfilter = yfilter;
    }
    if(value_path == "up-counter")
    {
        up_counter.yfilter = yfilter;
    }
    if(value_path == "last-time-cached")
    {
        last_time_cached.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "int-handle")
    {
        int_handle.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "desired-min-tx-interval")
    {
        desired_min_tx_interval.yfilter = yfilter;
    }
    if(value_path == "required-min-rx-interval")
    {
        required_min_rx_interval.yfilter = yfilter;
    }
    if(value_path == "required-min-rx-echo-interval")
    {
        required_min_rx_echo_interval.yfilter = yfilter;
    }
}

bool Bfd::SessionMibs::SessionMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-address" || name == "discriminator" || name == "local-discriminator" || name == "remote-discriminator" || name == "sessionversion" || name == "session-state" || name == "trap-bitmap" || name == "pkt-in" || name == "pkt-out" || name == "last-up-time-sec" || name == "last-up-time-nsec" || name == "last-down-time-sec" || name == "last-down-time-nsec" || name == "last-down-diag" || name == "up-counter" || name == "last-time-cached" || name == "interface-name" || name == "int-handle" || name == "detection-multiplier" || name == "desired-min-tx-interval" || name == "required-min-rx-interval" || name == "required-min-rx-echo-interval")
        return true;
    return false;
}

Bfd::SessionMibs::SessionMib::DestAddress::DestAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "dest-address"; yang_parent_name = "session-mib"; is_top_level_class = false; has_list_ancestor = true;
}

Bfd::SessionMibs::SessionMib::DestAddress::~DestAddress()
{
}

bool Bfd::SessionMibs::SessionMib::DestAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::SessionMibs::SessionMib::DestAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::SessionMibs::SessionMib::DestAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionMibs::SessionMib::DestAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionMibs::SessionMib::DestAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionMibs::SessionMib::DestAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionMibs::SessionMib::DestAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionMibs::SessionMib::DestAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionMibs::SessionMib::DestAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSummary::Ipv6MultiHopSummary()
    :
    session_state(std::make_shared<Bfd::Ipv6MultiHopSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv6-multi-hop-summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSummary::~Ipv6MultiHopSummary()
{
}

bool Bfd::Ipv6MultiHopSummary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6MultiHopSummary::has_operation() const
{
    return is_set(yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6MultiHopSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv6MultiHopSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv6MultiHopSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    down_count{YType::uint32, "down-count"},
    up_count{YType::uint32, "up-count"},
    unknown_count{YType::uint32, "unknown-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv6-multi-hop-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6MultiHopSummary::SessionState::has_data() const
{
    return total_count.is_set
	|| down_count.is_set
	|| up_count.is_set
	|| unknown_count.is_set;
}

bool Bfd::Ipv6MultiHopSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter);
}

std::string Bfd::Ipv6MultiHopSummary::SessionState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6MultiHopSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6MultiHopSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "down-count" || name == "up-count" || name == "unknown-count")
        return true;
    return false;
}

Bfd::LabelSummaryNodes::LabelSummaryNodes()
{

    yang_name = "label-summary-nodes"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSummaryNodes::~LabelSummaryNodes()
{
}

bool Bfd::LabelSummaryNodes::has_data() const
{
    for (std::size_t index=0; index<label_summary_node.size(); index++)
    {
        if(label_summary_node[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelSummaryNodes::has_operation() const
{
    for (std::size_t index=0; index<label_summary_node.size(); index++)
    {
        if(label_summary_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::LabelSummaryNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSummaryNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSummaryNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSummaryNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-summary-node")
    {
        for(auto const & c : label_summary_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelSummaryNodes::LabelSummaryNode>();
        c->parent = this;
        label_summary_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSummaryNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_summary_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::LabelSummaryNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelSummaryNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelSummaryNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-summary-node")
        return true;
    return false;
}

Bfd::LabelSummaryNodes::LabelSummaryNode::LabelSummaryNode()
    :
    location_name{YType::str, "location-name"}
    	,
    session_state(std::make_shared<Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState>())
{
    session_state->parent = this;

    yang_name = "label-summary-node"; yang_parent_name = "label-summary-nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSummaryNodes::LabelSummaryNode::~LabelSummaryNode()
{
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::has_data() const
{
    return location_name.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::LabelSummaryNodes::LabelSummaryNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-summary-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSummaryNodes::LabelSummaryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary-node" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSummaryNodes::LabelSummaryNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSummaryNodes::LabelSummaryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSummaryNodes::LabelSummaryNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::LabelSummaryNodes::LabelSummaryNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSummaryNodes::LabelSummaryNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "location-name")
        return true;
    return false;
}

Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    up_count{YType::uint32, "up-count"},
    down_count{YType::uint32, "down-count"},
    unknown_count{YType::uint32, "unknown-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"}
{

    yang_name = "session-state"; yang_parent_name = "label-summary-node"; is_top_level_class = false; has_list_ancestor = true;
}

Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::~SessionState()
{
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::has_data() const
{
    return total_count.is_set
	|| up_count.is_set
	|| down_count.is_set
	|| unknown_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set;
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(standby_count.yfilter);
}

std::string Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.yfilter)) leaf_name_data.push_back(standby_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
        standby_count.value_namespace = name_space;
        standby_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "standby-count")
    {
        standby_count.yfilter = yfilter;
    }
}

bool Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "up-count" || name == "down-count" || name == "unknown-count" || name == "retry-count" || name == "standby-count")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBriefs()
{

    yang_name = "ipv6-multi-hop-session-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionBriefs::~Ipv6MultiHopSessionBriefs()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::has_data() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_session_brief.size(); index++)
    {
        if(ipv6_multi_hop_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_session_brief.size(); index++)
    {
        if(ipv6_multi_hop_session_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6MultiHopSessionBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-session-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-session-brief")
    {
        for(auto const & c : ipv6_multi_hop_session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief>();
        c->parent = this;
        ipv6_multi_hop_session_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_multi_hop_session_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopSessionBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-multi-hop-session-brief")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::Ipv6MultiHopSessionBrief()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    vrf_name{YType::str, "vrf-name"},
    node_id{YType::str, "node-id"},
    state{YType::enumeration, "state"},
    session_type{YType::enumeration, "session-type"},
    session_subtype{YType::str, "session-subtype"},
    session_flags{YType::uint32, "session-flags"}
    	,
    status_brief_information(std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "ipv6-multi-hop-session-brief"; yang_parent_name = "ipv6-multi-hop-session-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::~Ipv6MultiHopSessionBrief()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| location.is_set
	|| vrf_name.is_set
	|| node_id.is_set
	|| state.is_set
	|| session_type.is_set
	|| session_subtype.is_set
	|| session_flags.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(session_flags.yfilter)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-session-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.yfilter)) leaf_name_data.push_back(session_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-brief-information" || name == "source-address" || name == "destination-address" || name == "location" || name == "vrf-name" || name == "node-id" || name == "state" || name == "session-type" || name == "session-subtype" || name == "session-flags")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "ipv6-multi-hop-session-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-briefs/ipv6-multi-hop-session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-briefs/ipv6-multi-hop-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-briefs/ipv6-multi-hop-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::SessionBriefs::SessionBriefs()
{

    yang_name = "session-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionBriefs::~SessionBriefs()
{
}

bool Bfd::SessionBriefs::has_data() const
{
    for (std::size_t index=0; index<session_brief.size(); index++)
    {
        if(session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::SessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<session_brief.size(); index++)
    {
        if(session_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::SessionBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-brief")
    {
        for(auto const & c : session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::SessionBriefs::SessionBrief>();
        c->parent = this;
        session_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::SessionBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::SessionBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::SessionBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-brief")
        return true;
    return false;
}

Bfd::SessionBriefs::SessionBrief::SessionBrief()
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
    status_brief_information(std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "session-brief"; yang_parent_name = "session-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionBriefs::SessionBrief::~SessionBrief()
{
}

bool Bfd::SessionBriefs::SessionBrief::has_data() const
{
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

bool Bfd::SessionBriefs::SessionBrief::has_operation() const
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

std::string Bfd::SessionBriefs::SessionBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionBriefs::SessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionBriefs::SessionBrief::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bfd::SessionBriefs::SessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionBriefs::SessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    return children;
}

void Bfd::SessionBriefs::SessionBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionBriefs::SessionBrief::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionBriefs::SessionBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-brief-information" || name == "interface-name" || name == "destination-address" || name == "location" || name == "node-id" || name == "state" || name == "session-type" || name == "session-subtype" || name == "session-flags")
        return true;
    return false;
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "session-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-briefs/session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-briefs/session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-briefs/session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummaries()
{

    yang_name = "ipv6-single-hop-node-location-summaries"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopNodeLocationSummaries::~Ipv6SingleHopNodeLocationSummaries()
{
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_node_location_summary.size(); index++)
    {
        if(ipv6_single_hop_node_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_node_location_summary.size(); index++)
    {
        if(ipv6_single_hop_node_location_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6SingleHopNodeLocationSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopNodeLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-node-location-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopNodeLocationSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopNodeLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-node-location-summary")
    {
        for(auto const & c : ipv6_single_hop_node_location_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary>();
        c->parent = this;
        ipv6_single_hop_node_location_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopNodeLocationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_single_hop_node_location_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-node-location-summary")
        return true;
    return false;
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::Ipv6SingleHopNodeLocationSummary()
    :
    location{YType::str, "location"}
    	,
    session_state(std::make_shared<Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv6-single-hop-node-location-summary"; yang_parent_name = "ipv6-single-hop-node-location-summaries"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::~Ipv6SingleHopNodeLocationSummary()
{
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::has_data() const
{
    return location.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-node-location-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-node-location-summary" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "location")
        return true;
    return false;
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    up_count{YType::uint32, "up-count"},
    down_count{YType::uint32, "down-count"},
    unknown_count{YType::uint32, "unknown-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv6-single-hop-node-location-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::has_data() const
{
    return total_count.is_set
	|| up_count.is_set
	|| down_count.is_set
	|| unknown_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set;
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(standby_count.yfilter);
}

std::string Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.yfilter)) leaf_name_data.push_back(standby_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
        standby_count.value_namespace = name_space;
        standby_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "standby-count")
    {
        standby_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "up-count" || name == "down-count" || name == "unknown-count" || name == "retry-count" || name == "standby-count")
        return true;
    return false;
}

Bfd::Summary::Summary()
    :
    session_state(std::make_shared<Bfd::Summary::SessionState>())
{
    session_state->parent = this;

    yang_name = "summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Summary::~Summary()
{
}

bool Bfd::Summary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Summary::has_operation() const
{
    return is_set(yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Summary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state")
        return true;
    return false;
}

Bfd::Summary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    down_count{YType::uint32, "down-count"},
    up_count{YType::uint32, "up-count"},
    unknown_count{YType::uint32, "unknown-count"}
{

    yang_name = "session-state"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Summary::SessionState::~SessionState()
{
}

bool Bfd::Summary::SessionState::has_data() const
{
    return total_count.is_set
	|| down_count.is_set
	|| up_count.is_set
	|| unknown_count.is_set;
}

bool Bfd::Summary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter);
}

std::string Bfd::Summary::SessionState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Summary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Summary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Summary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Summary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Summary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Summary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Summary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "down-count" || name == "up-count" || name == "unknown-count")
        return true;
    return false;
}

Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummaries()
{

    yang_name = "ipv4bfd-mplste-tail-node-summaries"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfdMplsteTailNodeSummaries::~Ipv4BfdMplsteTailNodeSummaries()
{
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv4bfd_mplste_tail_node_summary.size(); index++)
    {
        if(ipv4bfd_mplste_tail_node_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4bfd_mplste_tail_node_summary.size(); index++)
    {
        if(ipv4bfd_mplste_tail_node_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4BfdMplsteTailNodeSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfdMplsteTailNodeSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bfd-mplste-tail-node-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfdMplsteTailNodeSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfdMplsteTailNodeSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bfd-mplste-tail-node-summary")
    {
        for(auto const & c : ipv4bfd_mplste_tail_node_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary>();
        c->parent = this;
        ipv4bfd_mplste_tail_node_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfdMplsteTailNodeSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4bfd_mplste_tail_node_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4BfdMplsteTailNodeSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4BfdMplsteTailNodeSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4bfd-mplste-tail-node-summary")
        return true;
    return false;
}

Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::Ipv4BfdMplsteTailNodeSummary()
    :
    location_name{YType::str, "location-name"}
    	,
    session_state(std::make_shared<Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4bfd-mplste-tail-node-summary"; yang_parent_name = "ipv4bfd-mplste-tail-node-summaries"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::~Ipv4BfdMplsteTailNodeSummary()
{
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::has_data() const
{
    return location_name.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bfd-mplste-tail-node-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bfd-mplste-tail-node-summary" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "location-name")
        return true;
    return false;
}

Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    up_count{YType::uint32, "up-count"},
    down_count{YType::uint32, "down-count"},
    unknown_count{YType::uint32, "unknown-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv4bfd-mplste-tail-node-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::has_data() const
{
    return total_count.is_set
	|| up_count.is_set
	|| down_count.is_set
	|| unknown_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set;
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(standby_count.yfilter);
}

std::string Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.yfilter)) leaf_name_data.push_back(standby_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
        standby_count.value_namespace = name_space;
        standby_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "standby-count")
    {
        standby_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "up-count" || name == "down-count" || name == "unknown-count" || name == "retry-count" || name == "standby-count")
        return true;
    return false;
}

Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummaries()
{

    yang_name = "ipv4-single-hop-location-summaries"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopLocationSummaries::~Ipv4SingleHopLocationSummaries()
{
}

bool Bfd::Ipv4SingleHopLocationSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv4_single_hop_location_summary.size(); index++)
    {
        if(ipv4_single_hop_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4SingleHopLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_single_hop_location_summary.size(); index++)
    {
        if(ipv4_single_hop_location_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4SingleHopLocationSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-location-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopLocationSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-single-hop-location-summary")
    {
        for(auto const & c : ipv4_single_hop_location_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary>();
        c->parent = this;
        ipv4_single_hop_location_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopLocationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_single_hop_location_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4SingleHopLocationSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4SingleHopLocationSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4SingleHopLocationSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-single-hop-location-summary")
        return true;
    return false;
}

Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::Ipv4SingleHopLocationSummary()
    :
    location_name{YType::str, "location-name"}
    	,
    session_state(std::make_shared<Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4-single-hop-location-summary"; yang_parent_name = "ipv4-single-hop-location-summaries"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::~Ipv4SingleHopLocationSummary()
{
}

bool Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::has_data() const
{
    return location_name.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-location-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-location-summary" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "location-name")
        return true;
    return false;
}

Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    up_count{YType::uint32, "up-count"},
    down_count{YType::uint32, "down-count"},
    unknown_count{YType::uint32, "unknown-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv4-single-hop-location-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::has_data() const
{
    return total_count.is_set
	|| up_count.is_set
	|| down_count.is_set
	|| unknown_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set;
}

bool Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(standby_count.yfilter);
}

std::string Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.yfilter)) leaf_name_data.push_back(standby_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
        standby_count.value_namespace = name_space;
        standby_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "standby-count")
    {
        standby_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "up-count" || name == "down-count" || name == "unknown-count" || name == "retry-count" || name == "standby-count")
        return true;
    return false;
}

Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNodes()
{

    yang_name = "ipv4bfd-mplste-head-summary-nodes"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfdMplsteHeadSummaryNodes::~Ipv4BfdMplsteHeadSummaryNodes()
{
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::has_data() const
{
    for (std::size_t index=0; index<ipv4bfd_mplste_head_summary_node.size(); index++)
    {
        if(ipv4bfd_mplste_head_summary_node[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::has_operation() const
{
    for (std::size_t index=0; index<ipv4bfd_mplste_head_summary_node.size(); index++)
    {
        if(ipv4bfd_mplste_head_summary_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4BfdMplsteHeadSummaryNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfdMplsteHeadSummaryNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bfd-mplste-head-summary-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfdMplsteHeadSummaryNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfdMplsteHeadSummaryNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bfd-mplste-head-summary-node")
    {
        for(auto const & c : ipv4bfd_mplste_head_summary_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode>();
        c->parent = this;
        ipv4bfd_mplste_head_summary_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfdMplsteHeadSummaryNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4bfd_mplste_head_summary_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4BfdMplsteHeadSummaryNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4BfdMplsteHeadSummaryNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4bfd-mplste-head-summary-node")
        return true;
    return false;
}

Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::Ipv4BfdMplsteHeadSummaryNode()
    :
    location_name{YType::str, "location-name"}
    	,
    session_state(std::make_shared<Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4bfd-mplste-head-summary-node"; yang_parent_name = "ipv4bfd-mplste-head-summary-nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::~Ipv4BfdMplsteHeadSummaryNode()
{
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::has_data() const
{
    return location_name.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bfd-mplste-head-summary-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bfd-mplste-head-summary-node" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "location-name")
        return true;
    return false;
}

Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    up_count{YType::uint32, "up-count"},
    down_count{YType::uint32, "down-count"},
    unknown_count{YType::uint32, "unknown-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv4bfd-mplste-head-summary-node"; is_top_level_class = false; has_list_ancestor = true;
}

Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::~SessionState()
{
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::has_data() const
{
    return total_count.is_set
	|| up_count.is_set
	|| down_count.is_set
	|| unknown_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set;
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(standby_count.yfilter);
}

std::string Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.yfilter)) leaf_name_data.push_back(standby_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
        standby_count.value_namespace = name_space;
        standby_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "standby-count")
    {
        standby_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "up-count" || name == "down-count" || name == "unknown-count" || name == "retry-count" || name == "standby-count")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetails()
{

    yang_name = "label-session-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::~LabelSessionDetails()
{
}

bool Bfd::LabelSessionDetails::has_data() const
{
    for (std::size_t index=0; index<label_session_detail.size(); index++)
    {
        if(label_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<label_session_detail.size(); index++)
    {
        if(label_session_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::LabelSessionDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-session-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-session-detail")
    {
        for(auto const & c : label_session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail>();
        c->parent = this;
        label_session_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_session_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::LabelSessionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelSessionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelSessionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-session-detail")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LabelSessionDetail()
    :
    interface_name{YType::str, "interface-name"},
    incoming_label{YType::int32, "incoming-label"},
    location{YType::str, "location"}
    	,
    status_information(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation>())
	,mp_download_state(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState>())
	,lsp_ping_info(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo>())
{
    status_information->parent = this;
    mp_download_state->parent = this;
    lsp_ping_info->parent = this;

    yang_name = "label-session-detail"; yang_parent_name = "label-session-details"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::~LabelSessionDetail()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| incoming_label.is_set
	|| location.is_set
	|| (status_information !=  nullptr && status_information->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(location.yfilter)
	|| (status_information !=  nullptr && status_information->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-session-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation>();
        }
        return status_information;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_information != nullptr)
    {
        children["status-information"] = status_information;
    }

    if(mp_download_state != nullptr)
    {
        children["mp-download-state"] = mp_download_state;
    }

    if(lsp_ping_info != nullptr)
    {
        children["lsp-ping-info"] = lsp_ping_info;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : association_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-information" || name == "mp-download-state" || name == "lsp-ping-info" || name == "owner-information" || name == "association-information" || name == "interface-name" || name == "incoming-label" || name == "location")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusInformation()
    :
    sessiontype{YType::enumeration, "sessiontype"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    to_up_state_count{YType::uint32, "to-up-state-count"},
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    latency_number{YType::uint32, "latency-number"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_average{YType::uint32, "latency-average"},
    node_id{YType::str, "node-id"},
    internal_label{YType::uint32, "internal-label"}
    	,
    source_address(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress>())
	,last_state_change(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange>())
	,transmit_packet(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket>())
	,receive_packet(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket>())
	,status_brief_information(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation>())
	,async_transmit_statistics(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,async_receive_statistics(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics>())
{
    source_address->parent = this;
    last_state_change->parent = this;
    transmit_packet->parent = this;
    receive_packet->parent = this;
    status_brief_information->parent = this;
    async_transmit_statistics->parent = this;
    async_receive_statistics->parent = this;
    echo_transmit_statistics->parent = this;
    echo_received_statistics->parent = this;

    yang_name = "status-information"; yang_parent_name = "label-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::has_data() const
{
    return sessiontype.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| remote_discriminator.is_set
	|| to_up_state_count.is_set
	|| desired_minimum_echo_transmit_interval.is_set
	|| remote_negotiated_interval.is_set
	|| latency_number.is_set
	|| latency_minimum.is_set
	|| latency_maximum.is_set
	|| latency_average.is_set
	|| node_id.is_set
	|| internal_label.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(to_up_state_count.yfilter)
	|| ydk::is_set(desired_minimum_echo_transmit_interval.yfilter)
	|| ydk::is_set(remote_negotiated_interval.yfilter)
	|| ydk::is_set(latency_number.yfilter)
	|| ydk::is_set(latency_minimum.yfilter)
	|| ydk::is_set(latency_maximum.yfilter)
	|| ydk::is_set(latency_average.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.yfilter)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());
    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.yfilter)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.yfilter)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.yfilter)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.yfilter)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.yfilter)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(last_state_change != nullptr)
    {
        children["last-state-change"] = last_state_change;
    }

    if(transmit_packet != nullptr)
    {
        children["transmit-packet"] = transmit_packet;
    }

    if(receive_packet != nullptr)
    {
        children["receive-packet"] = receive_packet;
    }

    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    if(async_transmit_statistics != nullptr)
    {
        children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(async_receive_statistics != nullptr)
    {
        children["async-receive-statistics"] = async_receive_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        children["echo-received-statistics"] = echo_received_statistics;
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
        to_up_state_count.value_namespace = name_space;
        to_up_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
        desired_minimum_echo_transmit_interval.value_namespace = name_space;
        desired_minimum_echo_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
        remote_negotiated_interval.value_namespace = name_space;
        remote_negotiated_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
        latency_number.value_namespace = name_space;
        latency_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
        latency_minimum.value_namespace = name_space;
        latency_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
        latency_maximum.value_namespace = name_space;
        latency_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
        latency_average.value_namespace = name_space;
        latency_average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
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
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval.yfilter = yfilter;
    }
    if(value_path == "latency-number")
    {
        latency_number.yfilter = yfilter;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum.yfilter = yfilter;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum.yfilter = yfilter;
    }
    if(value_path == "latency-average")
    {
        latency_average.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "last-state-change" || name == "transmit-packet" || name == "receive-packet" || name == "status-brief-information" || name == "async-transmit-statistics" || name == "async-receive-statistics" || name == "echo-transmit-statistics" || name == "echo-received-statistics" || name == "sessiontype" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "remote-discriminator" || name == "to-up-state-count" || name == "desired-minimum-echo-transmit-interval" || name == "remote-negotiated-interval" || name == "latency-number" || name == "latency-minimum" || name == "latency-maximum" || name == "latency-average" || name == "node-id" || name == "internal-label")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "last-state-change"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "seconds")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "transmit-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "receive-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-receive-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-received-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "label-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_download_state.yfilter)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.yfilter)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change_time != nullptr)
    {
        children["change-time"] = change_time;
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
        mp_download_state.value_namespace = name_space;
        mp_download_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-time" || name == "mp-download-state")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "change-time"; yang_parent_name = "mp-download-state"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/mp-download-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"}
    	,
    lsp_ping_tx_last_time(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_rx_last_time(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime>())
{
    lsp_ping_tx_last_time->parent = this;
    lsp_ping_tx_last_error_time->parent = this;
    lsp_ping_rx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "label-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_rx_last_output.is_set
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_ping_tx_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_error_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_rc.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_error_rc.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_discr.yfilter)
	|| ydk::is_set(lsp_ping_rx_count.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_code.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_subcode.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_output.yfilter)
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation());
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.yfilter)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_ping_tx_last_time != nullptr)
    {
        children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_rx_last_time != nullptr)
    {
        children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
        lsp_ping_tx_count.value_namespace = name_space;
        lsp_ping_tx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
        lsp_ping_tx_error_count.value_namespace = name_space;
        lsp_ping_tx_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
        lsp_ping_tx_last_rc.value_namespace = name_space;
        lsp_ping_tx_last_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
        lsp_ping_tx_last_error_rc.value_namespace = name_space;
        lsp_ping_tx_last_error_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
        lsp_ping_rx_last_discr.value_namespace = name_space;
        lsp_ping_rx_last_discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
        lsp_ping_rx_count.value_namespace = name_space;
        lsp_ping_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
        lsp_ping_rx_last_code.value_namespace = name_space;
        lsp_ping_rx_last_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
        lsp_ping_rx_last_subcode.value_namespace = name_space;
        lsp_ping_rx_last_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
        lsp_ping_rx_last_output.value_namespace = name_space;
        lsp_ping_rx_last_output.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-ping-tx-last-time" || name == "lsp-ping-tx-last-error-time" || name == "lsp-ping-rx-last-time" || name == "lsp-ping-tx-count" || name == "lsp-ping-tx-error-count" || name == "lsp-ping-tx-last-rc" || name == "lsp-ping-tx-last-error-rc" || name == "lsp-ping-rx-last-discr" || name == "lsp-ping-rx-count" || name == "lsp-ping-rx-last-code" || name == "lsp-ping-rx-last-subcode" || name == "lsp-ping-rx-last-output")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "label-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::has_data() const
{
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    sessiontype{YType::enumeration, "sessiontype"},
    local_discriminator{YType::uint32, "local-discriminator"}
    	,
    ip_destination_address(std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress>())
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "label-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| sessiontype.is_set
	|| local_discriminator.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
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

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_destination_address != nullptr)
    {
        children["ip-destination-address"] = ip_destination_address;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "sessiontype" || name == "local-discriminator")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-details/label-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetails()
{

    yang_name = "ipv6-single-hop-session-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::~Ipv6SingleHopSessionDetails()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_session_detail.size(); index++)
    {
        if(ipv6_single_hop_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_session_detail.size(); index++)
    {
        if(ipv6_single_hop_session_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-session-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-session-detail")
    {
        for(auto const & c : ipv6_single_hop_session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail>();
        c->parent = this;
        ipv6_single_hop_session_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_single_hop_session_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopSessionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopSessionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-session-detail")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::Ipv6SingleHopSessionDetail()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"}
    	,
    status_information(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation>())
	,mp_download_state(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState>())
	,lsp_ping_info(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo>())
{
    status_information->parent = this;
    mp_download_state->parent = this;
    lsp_ping_info->parent = this;

    yang_name = "ipv6-single-hop-session-detail"; yang_parent_name = "ipv6-single-hop-session-details"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::~Ipv6SingleHopSessionDetail()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| destination_address.is_set
	|| location.is_set
	|| (status_information !=  nullptr && status_information->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| (status_information !=  nullptr && status_information->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-session-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation>();
        }
        return status_information;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_information != nullptr)
    {
        children["status-information"] = status_information;
    }

    if(mp_download_state != nullptr)
    {
        children["mp-download-state"] = mp_download_state;
    }

    if(lsp_ping_info != nullptr)
    {
        children["lsp-ping-info"] = lsp_ping_info;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : association_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-information" || name == "mp-download-state" || name == "lsp-ping-info" || name == "owner-information" || name == "association-information" || name == "interface-name" || name == "destination-address" || name == "location")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusInformation()
    :
    sessiontype{YType::enumeration, "sessiontype"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    to_up_state_count{YType::uint32, "to-up-state-count"},
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    latency_number{YType::uint32, "latency-number"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_average{YType::uint32, "latency-average"},
    node_id{YType::str, "node-id"},
    internal_label{YType::uint32, "internal-label"}
    	,
    source_address(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress>())
	,last_state_change(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange>())
	,transmit_packet(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket>())
	,receive_packet(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket>())
	,status_brief_information(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation>())
	,async_transmit_statistics(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,async_receive_statistics(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics>())
{
    source_address->parent = this;
    last_state_change->parent = this;
    transmit_packet->parent = this;
    receive_packet->parent = this;
    status_brief_information->parent = this;
    async_transmit_statistics->parent = this;
    async_receive_statistics->parent = this;
    echo_transmit_statistics->parent = this;
    echo_received_statistics->parent = this;

    yang_name = "status-information"; yang_parent_name = "ipv6-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::has_data() const
{
    return sessiontype.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| remote_discriminator.is_set
	|| to_up_state_count.is_set
	|| desired_minimum_echo_transmit_interval.is_set
	|| remote_negotiated_interval.is_set
	|| latency_number.is_set
	|| latency_minimum.is_set
	|| latency_maximum.is_set
	|| latency_average.is_set
	|| node_id.is_set
	|| internal_label.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(to_up_state_count.yfilter)
	|| ydk::is_set(desired_minimum_echo_transmit_interval.yfilter)
	|| ydk::is_set(remote_negotiated_interval.yfilter)
	|| ydk::is_set(latency_number.yfilter)
	|| ydk::is_set(latency_minimum.yfilter)
	|| ydk::is_set(latency_maximum.yfilter)
	|| ydk::is_set(latency_average.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.yfilter)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());
    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.yfilter)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.yfilter)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.yfilter)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.yfilter)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.yfilter)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(last_state_change != nullptr)
    {
        children["last-state-change"] = last_state_change;
    }

    if(transmit_packet != nullptr)
    {
        children["transmit-packet"] = transmit_packet;
    }

    if(receive_packet != nullptr)
    {
        children["receive-packet"] = receive_packet;
    }

    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    if(async_transmit_statistics != nullptr)
    {
        children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(async_receive_statistics != nullptr)
    {
        children["async-receive-statistics"] = async_receive_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        children["echo-received-statistics"] = echo_received_statistics;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
        to_up_state_count.value_namespace = name_space;
        to_up_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
        desired_minimum_echo_transmit_interval.value_namespace = name_space;
        desired_minimum_echo_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
        remote_negotiated_interval.value_namespace = name_space;
        remote_negotiated_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
        latency_number.value_namespace = name_space;
        latency_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
        latency_minimum.value_namespace = name_space;
        latency_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
        latency_maximum.value_namespace = name_space;
        latency_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
        latency_average.value_namespace = name_space;
        latency_average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
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
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval.yfilter = yfilter;
    }
    if(value_path == "latency-number")
    {
        latency_number.yfilter = yfilter;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum.yfilter = yfilter;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum.yfilter = yfilter;
    }
    if(value_path == "latency-average")
    {
        latency_average.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "last-state-change" || name == "transmit-packet" || name == "receive-packet" || name == "status-brief-information" || name == "async-transmit-statistics" || name == "async-receive-statistics" || name == "echo-transmit-statistics" || name == "echo-received-statistics" || name == "sessiontype" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "remote-discriminator" || name == "to-up-state-count" || name == "desired-minimum-echo-transmit-interval" || name == "remote-negotiated-interval" || name == "latency-number" || name == "latency-minimum" || name == "latency-maximum" || name == "latency-average" || name == "node-id" || name == "internal-label")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "last-state-change"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "transmit-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "receive-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-receive-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-received-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "ipv6-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_download_state.yfilter)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.yfilter)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change_time != nullptr)
    {
        children["change-time"] = change_time;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
        mp_download_state.value_namespace = name_space;
        mp_download_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-time" || name == "mp-download-state")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "change-time"; yang_parent_name = "mp-download-state"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/mp-download-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"}
    	,
    lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime>())
{
    lsp_ping_tx_last_time->parent = this;
    lsp_ping_tx_last_error_time->parent = this;
    lsp_ping_rx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv6-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_rx_last_output.is_set
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_ping_tx_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_error_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_rc.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_error_rc.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_discr.yfilter)
	|| ydk::is_set(lsp_ping_rx_count.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_code.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_subcode.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_output.yfilter)
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.yfilter)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_ping_tx_last_time != nullptr)
    {
        children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_rx_last_time != nullptr)
    {
        children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
        lsp_ping_tx_count.value_namespace = name_space;
        lsp_ping_tx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
        lsp_ping_tx_error_count.value_namespace = name_space;
        lsp_ping_tx_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
        lsp_ping_tx_last_rc.value_namespace = name_space;
        lsp_ping_tx_last_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
        lsp_ping_tx_last_error_rc.value_namespace = name_space;
        lsp_ping_tx_last_error_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
        lsp_ping_rx_last_discr.value_namespace = name_space;
        lsp_ping_rx_last_discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
        lsp_ping_rx_count.value_namespace = name_space;
        lsp_ping_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
        lsp_ping_rx_last_code.value_namespace = name_space;
        lsp_ping_rx_last_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
        lsp_ping_rx_last_subcode.value_namespace = name_space;
        lsp_ping_rx_last_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
        lsp_ping_rx_last_output.value_namespace = name_space;
        lsp_ping_rx_last_output.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-ping-tx-last-time" || name == "lsp-ping-tx-last-error-time" || name == "lsp-ping-rx-last-time" || name == "lsp-ping-tx-count" || name == "lsp-ping-tx-error-count" || name == "lsp-ping-tx-last-rc" || name == "lsp-ping-tx-last-error-rc" || name == "lsp-ping-rx-last-discr" || name == "lsp-ping-rx-count" || name == "lsp-ping-rx-last-code" || name == "lsp-ping-rx-last-subcode" || name == "lsp-ping-rx-last-output")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "ipv6-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::has_data() const
{
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    sessiontype{YType::enumeration, "sessiontype"},
    local_discriminator{YType::uint32, "local-discriminator"}
    	,
    ip_destination_address(std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress>())
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "ipv6-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| sessiontype.is_set
	|| local_discriminator.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
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

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_destination_address != nullptr)
    {
        children["ip-destination-address"] = ip_destination_address;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "sessiontype" || name == "local-discriminator")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-details/ipv6-single-hop-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv4MultiHopCounters::Ipv4MultiHopCounters()
    :
    ipv4_multi_hop_packet_counters(std::make_shared<Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters>())
{
    ipv4_multi_hop_packet_counters->parent = this;

    yang_name = "ipv4-multi-hop-counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4MultiHopCounters::~Ipv4MultiHopCounters()
{
}

bool Bfd::Ipv4MultiHopCounters::has_data() const
{
    return (ipv4_multi_hop_packet_counters !=  nullptr && ipv4_multi_hop_packet_counters->has_data());
}

bool Bfd::Ipv4MultiHopCounters::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_multi_hop_packet_counters !=  nullptr && ipv4_multi_hop_packet_counters->has_operation());
}

std::string Bfd::Ipv4MultiHopCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-multi-hop-packet-counters")
    {
        if(ipv4_multi_hop_packet_counters == nullptr)
        {
            ipv4_multi_hop_packet_counters = std::make_shared<Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters>();
        }
        return ipv4_multi_hop_packet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_multi_hop_packet_counters != nullptr)
    {
        children["ipv4-multi-hop-packet-counters"] = ipv4_multi_hop_packet_counters;
    }

    return children;
}

void Bfd::Ipv4MultiHopCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4MultiHopCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4MultiHopCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-multi-hop-packet-counters")
        return true;
    return false;
}

Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounters()
{

    yang_name = "ipv4-multi-hop-packet-counters"; yang_parent_name = "ipv4-multi-hop-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::~Ipv4MultiHopPacketCounters()
{
}

bool Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::has_data() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_packet_counter.size(); index++)
    {
        if(ipv4_multi_hop_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_packet_counter.size(); index++)
    {
        if(ipv4_multi_hop_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-multi-hop-packet-counter")
    {
        for(auto const & c : ipv4_multi_hop_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter>();
        c->parent = this;
        ipv4_multi_hop_packet_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_multi_hop_packet_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-multi-hop-packet-counter")
        return true;
    return false;
}

Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::Ipv4MultiHopPacketCounter()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    vrf_name{YType::str, "vrf-name"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    display_type{YType::enumeration, "display-type"}
{

    yang_name = "ipv4-multi-hop-packet-counter"; yang_parent_name = "ipv4-multi-hop-packet-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::~Ipv4MultiHopPacketCounter()
{
}

bool Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| location.is_set
	|| vrf_name.is_set
	|| hello_transmit_count.is_set
	|| hello_receive_count.is_set
	|| echo_transmit_count.is_set
	|| echo_receive_count.is_set
	|| display_type.is_set;
}

bool Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(hello_transmit_count.yfilter)
	|| ydk::is_set(hello_receive_count.yfilter)
	|| ydk::is_set(echo_transmit_count.yfilter)
	|| ydk::is_set(echo_receive_count.yfilter)
	|| ydk::is_set(display_type.yfilter);
}

std::string Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-counters/ipv4-multi-hop-packet-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-packet-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.yfilter)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.yfilter)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.yfilter)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.yfilter)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.yfilter)) leaf_name_data.push_back(display_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "location" || name == "vrf-name" || name == "hello-transmit-count" || name == "hello-receive-count" || name == "echo-transmit-count" || name == "echo-receive-count" || name == "display-type")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetails()
{

    yang_name = "session-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::~SessionDetails()
{
}

bool Bfd::SessionDetails::has_data() const
{
    for (std::size_t index=0; index<session_detail.size(); index++)
    {
        if(session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::SessionDetails::has_operation() const
{
    for (std::size_t index=0; index<session_detail.size(); index++)
    {
        if(session_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::SessionDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detail")
    {
        for(auto const & c : session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::SessionDetails::SessionDetail>();
        c->parent = this;
        session_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::SessionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::SessionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::SessionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detail")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::SessionDetail()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"}
    	,
    status_information(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation>())
	,mp_download_state(std::make_shared<Bfd::SessionDetails::SessionDetail::MpDownloadState>())
	,lsp_ping_info(std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo>())
{
    status_information->parent = this;
    mp_download_state->parent = this;
    lsp_ping_info->parent = this;

    yang_name = "session-detail"; yang_parent_name = "session-details"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::~SessionDetail()
{
}

bool Bfd::SessionDetails::SessionDetail::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| destination_address.is_set
	|| location.is_set
	|| (status_information !=  nullptr && status_information->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data());
}

bool Bfd::SessionDetails::SessionDetail::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| (status_information !=  nullptr && status_information->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation>();
        }
        return status_information;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::SessionDetails::SessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::SessionDetails::SessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_information != nullptr)
    {
        children["status-information"] = status_information;
    }

    if(mp_download_state != nullptr)
    {
        children["mp-download-state"] = mp_download_state;
    }

    if(lsp_ping_info != nullptr)
    {
        children["lsp-ping-info"] = lsp_ping_info;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : association_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Bfd::SessionDetails::SessionDetail::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Bfd::SessionDetails::SessionDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-information" || name == "mp-download-state" || name == "lsp-ping-info" || name == "owner-information" || name == "association-information" || name == "interface-name" || name == "destination-address" || name == "location")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusInformation()
    :
    sessiontype{YType::enumeration, "sessiontype"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    to_up_state_count{YType::uint32, "to-up-state-count"},
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    latency_number{YType::uint32, "latency-number"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_average{YType::uint32, "latency-average"},
    node_id{YType::str, "node-id"},
    internal_label{YType::uint32, "internal-label"}
    	,
    source_address(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress>())
	,last_state_change(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange>())
	,transmit_packet(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket>())
	,receive_packet(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket>())
	,status_brief_information(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation>())
	,async_transmit_statistics(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,async_receive_statistics(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics>())
{
    source_address->parent = this;
    last_state_change->parent = this;
    transmit_packet->parent = this;
    receive_packet->parent = this;
    status_brief_information->parent = this;
    async_transmit_statistics->parent = this;
    async_receive_statistics->parent = this;
    echo_transmit_statistics->parent = this;
    echo_received_statistics->parent = this;

    yang_name = "status-information"; yang_parent_name = "session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::has_data() const
{
    return sessiontype.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| remote_discriminator.is_set
	|| to_up_state_count.is_set
	|| desired_minimum_echo_transmit_interval.is_set
	|| remote_negotiated_interval.is_set
	|| latency_number.is_set
	|| latency_minimum.is_set
	|| latency_maximum.is_set
	|| latency_average.is_set
	|| node_id.is_set
	|| internal_label.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data());
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(to_up_state_count.yfilter)
	|| ydk::is_set(desired_minimum_echo_transmit_interval.yfilter)
	|| ydk::is_set(remote_negotiated_interval.yfilter)
	|| ydk::is_set(latency_number.yfilter)
	|| ydk::is_set(latency_minimum.yfilter)
	|| ydk::is_set(latency_maximum.yfilter)
	|| ydk::is_set(latency_average.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.yfilter)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());
    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.yfilter)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.yfilter)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.yfilter)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.yfilter)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.yfilter)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(last_state_change != nullptr)
    {
        children["last-state-change"] = last_state_change;
    }

    if(transmit_packet != nullptr)
    {
        children["transmit-packet"] = transmit_packet;
    }

    if(receive_packet != nullptr)
    {
        children["receive-packet"] = receive_packet;
    }

    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    if(async_transmit_statistics != nullptr)
    {
        children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(async_receive_statistics != nullptr)
    {
        children["async-receive-statistics"] = async_receive_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        children["echo-received-statistics"] = echo_received_statistics;
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
        to_up_state_count.value_namespace = name_space;
        to_up_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
        desired_minimum_echo_transmit_interval.value_namespace = name_space;
        desired_minimum_echo_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
        remote_negotiated_interval.value_namespace = name_space;
        remote_negotiated_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
        latency_number.value_namespace = name_space;
        latency_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
        latency_minimum.value_namespace = name_space;
        latency_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
        latency_maximum.value_namespace = name_space;
        latency_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
        latency_average.value_namespace = name_space;
        latency_average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
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
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval.yfilter = yfilter;
    }
    if(value_path == "latency-number")
    {
        latency_number.yfilter = yfilter;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum.yfilter = yfilter;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum.yfilter = yfilter;
    }
    if(value_path == "latency-average")
    {
        latency_average.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "last-state-change" || name == "transmit-packet" || name == "receive-packet" || name == "status-brief-information" || name == "async-transmit-statistics" || name == "async-receive-statistics" || name == "echo-transmit-statistics" || name == "echo-received-statistics" || name == "sessiontype" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "remote-discriminator" || name == "to-up-state-count" || name == "desired-minimum-echo-transmit-interval" || name == "remote-negotiated-interval" || name == "latency-number" || name == "latency-minimum" || name == "latency-maximum" || name == "latency-average" || name == "node-id" || name == "internal-label")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "last-state-change"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "seconds")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "transmit-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "receive-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-receive-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-received-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_download_state.yfilter)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::MpDownloadState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::MpDownloadState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.yfilter)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change_time != nullptr)
    {
        children["change-time"] = change_time;
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::MpDownloadState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
        mp_download_state.value_namespace = name_space;
        mp_download_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::MpDownloadState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-time" || name == "mp-download-state")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "change-time"; yang_parent_name = "mp-download-state"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/mp-download-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"}
    	,
    lsp_ping_tx_last_time(std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_rx_last_time(std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime>())
{
    lsp_ping_tx_last_time->parent = this;
    lsp_ping_tx_last_error_time->parent = this;
    lsp_ping_rx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_rx_last_output.is_set
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data());
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_ping_tx_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_error_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_rc.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_error_rc.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_discr.yfilter)
	|| ydk::is_set(lsp_ping_rx_count.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_code.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_subcode.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_output.yfilter)
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::LspPingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.yfilter)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_ping_tx_last_time != nullptr)
    {
        children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_rx_last_time != nullptr)
    {
        children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
        lsp_ping_tx_count.value_namespace = name_space;
        lsp_ping_tx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
        lsp_ping_tx_error_count.value_namespace = name_space;
        lsp_ping_tx_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
        lsp_ping_tx_last_rc.value_namespace = name_space;
        lsp_ping_tx_last_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
        lsp_ping_tx_last_error_rc.value_namespace = name_space;
        lsp_ping_tx_last_error_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
        lsp_ping_rx_last_discr.value_namespace = name_space;
        lsp_ping_rx_last_discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
        lsp_ping_rx_count.value_namespace = name_space;
        lsp_ping_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
        lsp_ping_rx_last_code.value_namespace = name_space;
        lsp_ping_rx_last_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
        lsp_ping_rx_last_subcode.value_namespace = name_space;
        lsp_ping_rx_last_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
        lsp_ping_rx_last_output.value_namespace = name_space;
        lsp_ping_rx_last_output.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output.yfilter = yfilter;
    }
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-ping-tx-last-time" || name == "lsp-ping-tx-last-error-time" || name == "lsp-ping-rx-last-time" || name == "lsp-ping-tx-count" || name == "lsp-ping-tx-error-count" || name == "lsp-ping-tx-last-rc" || name == "lsp-ping-tx-last-error-rc" || name == "lsp-ping-rx-last-discr" || name == "lsp-ping-rx-count" || name == "lsp-ping-rx-last-code" || name == "lsp-ping-rx-last-subcode" || name == "lsp-ping-rx-last-output")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::OwnerInformation::has_data() const
{
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::SessionDetails::SessionDetail::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionDetails::SessionDetail::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionDetails::SessionDetail::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    sessiontype{YType::enumeration, "sessiontype"},
    local_discriminator{YType::uint32, "local-discriminator"}
    	,
    ip_destination_address(std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress>())
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| sessiontype.is_set
	|| local_discriminator.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
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

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_destination_address != nullptr)
    {
        children["ip-destination-address"] = ip_destination_address;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionDetails::SessionDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "sessiontype" || name == "local-discriminator")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPaths()
{

    yang_name = "ipv4-single-hop-multi-paths"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopMultiPaths::~Ipv4SingleHopMultiPaths()
{
}

bool Bfd::Ipv4SingleHopMultiPaths::has_data() const
{
    for (std::size_t index=0; index<ipv4_single_hop_multi_path.size(); index++)
    {
        if(ipv4_single_hop_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4SingleHopMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv4_single_hop_multi_path.size(); index++)
    {
        if(ipv4_single_hop_multi_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4SingleHopMultiPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-multi-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopMultiPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-single-hop-multi-path")
    {
        for(auto const & c : ipv4_single_hop_multi_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath>();
        c->parent = this;
        ipv4_single_hop_multi_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopMultiPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_single_hop_multi_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4SingleHopMultiPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4SingleHopMultiPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4SingleHopMultiPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-single-hop-multi-path")
        return true;
    return false;
}

Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::Ipv4SingleHopMultiPath()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    session_interface_name{YType::str, "session-interface-name"}
{

    yang_name = "ipv4-single-hop-multi-path"; yang_parent_name = "ipv4-single-hop-multi-paths"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::~Ipv4SingleHopMultiPath()
{
}

bool Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::has_data() const
{
    return interface_name.is_set
	|| destination_address.is_set
	|| location.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| incoming_label_xr.is_set
	|| session_interface_name.is_set;
}

bool Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(incoming_label_xr.yfilter)
	|| ydk::is_set(session_interface_name.yfilter);
}

std::string Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-multi-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-multi-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.yfilter)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.yfilter)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "destination-address" || name == "location" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "node-id" || name == "incoming-label-xr" || name == "session-interface-name")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBriefs()
{

    yang_name = "ipv4-single-hop-session-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionBriefs::~Ipv4SingleHopSessionBriefs()
{
}

bool Bfd::Ipv4SingleHopSessionBriefs::has_data() const
{
    for (std::size_t index=0; index<ipv4_single_hop_session_brief.size(); index++)
    {
        if(ipv4_single_hop_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4SingleHopSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv4_single_hop_session_brief.size(); index++)
    {
        if(ipv4_single_hop_session_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4SingleHopSessionBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-session-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-single-hop-session-brief")
    {
        for(auto const & c : ipv4_single_hop_session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief>();
        c->parent = this;
        ipv4_single_hop_session_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_single_hop_session_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4SingleHopSessionBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4SingleHopSessionBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-single-hop-session-brief")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::Ipv4SingleHopSessionBrief()
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
    status_brief_information(std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "ipv4-single-hop-session-brief"; yang_parent_name = "ipv4-single-hop-session-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::~Ipv4SingleHopSessionBrief()
{
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::has_data() const
{
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

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::has_operation() const
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

std::string Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-session-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-brief-information" || name == "interface-name" || name == "destination-address" || name == "location" || name == "node-id" || name == "state" || name == "session-type" || name == "session-subtype" || name == "session-flags")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "ipv4-single-hop-session-brief"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-briefs/ipv4-single-hop-session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-briefs/ipv4-single-hop-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-briefs/ipv4-single-hop-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopCounters()
    :
    ipv6_multi_hop_packet_counters(std::make_shared<Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters>())
{
    ipv6_multi_hop_packet_counters->parent = this;

    yang_name = "ipv6-multi-hop-counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopCounters::~Ipv6MultiHopCounters()
{
}

bool Bfd::Ipv6MultiHopCounters::has_data() const
{
    return (ipv6_multi_hop_packet_counters !=  nullptr && ipv6_multi_hop_packet_counters->has_data());
}

bool Bfd::Ipv6MultiHopCounters::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6_multi_hop_packet_counters !=  nullptr && ipv6_multi_hop_packet_counters->has_operation());
}

std::string Bfd::Ipv6MultiHopCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-packet-counters")
    {
        if(ipv6_multi_hop_packet_counters == nullptr)
        {
            ipv6_multi_hop_packet_counters = std::make_shared<Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters>();
        }
        return ipv6_multi_hop_packet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_multi_hop_packet_counters != nullptr)
    {
        children["ipv6-multi-hop-packet-counters"] = ipv6_multi_hop_packet_counters;
    }

    return children;
}

void Bfd::Ipv6MultiHopCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-multi-hop-packet-counters")
        return true;
    return false;
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounters()
{

    yang_name = "ipv6-multi-hop-packet-counters"; yang_parent_name = "ipv6-multi-hop-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::~Ipv6MultiHopPacketCounters()
{
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::has_data() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_packet_counter.size(); index++)
    {
        if(ipv6_multi_hop_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_packet_counter.size(); index++)
    {
        if(ipv6_multi_hop_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-packet-counter")
    {
        for(auto const & c : ipv6_multi_hop_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter>();
        c->parent = this;
        ipv6_multi_hop_packet_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_multi_hop_packet_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-multi-hop-packet-counter")
        return true;
    return false;
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::Ipv6MultiHopPacketCounter()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    vrf_name{YType::str, "vrf-name"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    display_type{YType::enumeration, "display-type"}
{

    yang_name = "ipv6-multi-hop-packet-counter"; yang_parent_name = "ipv6-multi-hop-packet-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::~Ipv6MultiHopPacketCounter()
{
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| location.is_set
	|| vrf_name.is_set
	|| hello_transmit_count.is_set
	|| hello_receive_count.is_set
	|| echo_transmit_count.is_set
	|| echo_receive_count.is_set
	|| display_type.is_set;
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(hello_transmit_count.yfilter)
	|| ydk::is_set(hello_receive_count.yfilter)
	|| ydk::is_set(echo_transmit_count.yfilter)
	|| ydk::is_set(echo_receive_count.yfilter)
	|| ydk::is_set(display_type.yfilter);
}

std::string Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-counters/ipv6-multi-hop-packet-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-packet-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.yfilter)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.yfilter)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.yfilter)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.yfilter)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.yfilter)) leaf_name_data.push_back(display_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "location" || name == "vrf-name" || name == "hello-transmit-count" || name == "hello-receive-count" || name == "echo-transmit-count" || name == "echo-receive-count" || name == "display-type")
        return true;
    return false;
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummaries()
{

    yang_name = "ipv6-single-hop-location-summaries"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopLocationSummaries::~Ipv6SingleHopLocationSummaries()
{
}

bool Bfd::Ipv6SingleHopLocationSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_location_summary.size(); index++)
    {
        if(ipv6_single_hop_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_location_summary.size(); index++)
    {
        if(ipv6_single_hop_location_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6SingleHopLocationSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-location-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopLocationSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-location-summary")
    {
        for(auto const & c : ipv6_single_hop_location_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary>();
        c->parent = this;
        ipv6_single_hop_location_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopLocationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_single_hop_location_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopLocationSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopLocationSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopLocationSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-location-summary")
        return true;
    return false;
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::Ipv6SingleHopLocationSummary()
    :
    location_name{YType::str, "location-name"}
    	,
    session_state(std::make_shared<Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv6-single-hop-location-summary"; yang_parent_name = "ipv6-single-hop-location-summaries"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::~Ipv6SingleHopLocationSummary()
{
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::has_data() const
{
    return location_name.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-location-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-location-summary" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "location-name")
        return true;
    return false;
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    up_count{YType::uint32, "up-count"},
    down_count{YType::uint32, "down-count"},
    unknown_count{YType::uint32, "unknown-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv6-single-hop-location-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::has_data() const
{
    return total_count.is_set
	|| up_count.is_set
	|| down_count.is_set
	|| unknown_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set;
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(standby_count.yfilter);
}

std::string Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.yfilter)) leaf_name_data.push_back(standby_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
        standby_count.value_namespace = name_space;
        standby_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "standby-count")
    {
        standby_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "up-count" || name == "down-count" || name == "unknown-count" || name == "retry-count" || name == "standby-count")
        return true;
    return false;
}

Bfd::LabelCounters::LabelCounters()
    :
    label_packet_counters(std::make_shared<Bfd::LabelCounters::LabelPacketCounters>())
{
    label_packet_counters->parent = this;

    yang_name = "label-counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelCounters::~LabelCounters()
{
}

bool Bfd::LabelCounters::has_data() const
{
    return (label_packet_counters !=  nullptr && label_packet_counters->has_data());
}

bool Bfd::LabelCounters::has_operation() const
{
    return is_set(yfilter)
	|| (label_packet_counters !=  nullptr && label_packet_counters->has_operation());
}

std::string Bfd::LabelCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-packet-counters")
    {
        if(label_packet_counters == nullptr)
        {
            label_packet_counters = std::make_shared<Bfd::LabelCounters::LabelPacketCounters>();
        }
        return label_packet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_packet_counters != nullptr)
    {
        children["label-packet-counters"] = label_packet_counters;
    }

    return children;
}

void Bfd::LabelCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-packet-counters")
        return true;
    return false;
}

Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounters()
{

    yang_name = "label-packet-counters"; yang_parent_name = "label-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelCounters::LabelPacketCounters::~LabelPacketCounters()
{
}

bool Bfd::LabelCounters::LabelPacketCounters::has_data() const
{
    for (std::size_t index=0; index<label_packet_counter.size(); index++)
    {
        if(label_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelCounters::LabelPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<label_packet_counter.size(); index++)
    {
        if(label_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::LabelCounters::LabelPacketCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelCounters::LabelPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelCounters::LabelPacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelCounters::LabelPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-packet-counter")
    {
        for(auto const & c : label_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter>();
        c->parent = this;
        label_packet_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelCounters::LabelPacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_packet_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::LabelCounters::LabelPacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelCounters::LabelPacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelCounters::LabelPacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-packet-counter")
        return true;
    return false;
}

Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::LabelPacketCounter()
    :
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    display_type{YType::enumeration, "display-type"}
{

    yang_name = "label-packet-counter"; yang_parent_name = "label-packet-counters"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::~LabelPacketCounter()
{
}

bool Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::has_data() const
{
    return interface_name.is_set
	|| location.is_set
	|| hello_transmit_count.is_set
	|| hello_receive_count.is_set
	|| echo_transmit_count.is_set
	|| echo_receive_count.is_set
	|| display_type.is_set;
}

bool Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(hello_transmit_count.yfilter)
	|| ydk::is_set(hello_receive_count.yfilter)
	|| ydk::is_set(echo_transmit_count.yfilter)
	|| ydk::is_set(echo_receive_count.yfilter)
	|| ydk::is_set(display_type.yfilter);
}

std::string Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-counters/label-packet-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-packet-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.yfilter)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.yfilter)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.yfilter)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.yfilter)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.yfilter)) leaf_name_data.push_back(display_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
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

void Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
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

bool Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "location" || name == "hello-transmit-count" || name == "hello-receive-count" || name == "echo-transmit-count" || name == "echo-receive-count" || name == "display-type")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetails()
{

    yang_name = "ipv4bf-do-mplste-head-session-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::~Ipv4BfDoMplsteHeadSessionDetails()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::has_data() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_session_detail.size(); index++)
    {
        if(ipv4bf_do_mplste_head_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_session_detail.size(); index++)
    {
        if(ipv4bf_do_mplste_head_session_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-session-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bf-do-mplste-head-session-detail")
    {
        for(auto const & c : ipv4bf_do_mplste_head_session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail>();
        c->parent = this;
        ipv4bf_do_mplste_head_session_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4bf_do_mplste_head_session_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4bf-do-mplste-head-session-detail")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::Ipv4BfDoMplsteHeadSessionDetail()
    :
    interface_name{YType::str, "interface-name"},
    vrf_name{YType::str, "vrf-name"},
    incoming_label{YType::int32, "incoming-label"},
    fe_ctype{YType::int32, "fe-ctype"},
    fec_subgroup_id{YType::int32, "fec-subgroup-id"},
    feclspid{YType::int32, "feclspid"},
    fec_tunnel_id{YType::int32, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_destination{YType::str, "fec-destination"},
    fecp2mpid{YType::int32, "fecp2mpid"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_ctype{YType::int32, "fec-ctype"},
    location{YType::str, "location"}
    	,
    status_information(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation>())
	,mp_download_state(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState>())
	,lsp_ping_info(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo>())
{
    status_information->parent = this;
    mp_download_state->parent = this;
    lsp_ping_info->parent = this;

    yang_name = "ipv4bf-do-mplste-head-session-detail"; yang_parent_name = "ipv4bf-do-mplste-head-session-details"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::~Ipv4BfDoMplsteHeadSessionDetail()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
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
	|| (status_information !=  nullptr && status_information->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
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
	|| (status_information !=  nullptr && status_information->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-session-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::get_name_leaf_data() const
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation>();
        }
        return status_information;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_information != nullptr)
    {
        children["status-information"] = status_information;
    }

    if(mp_download_state != nullptr)
    {
        children["mp-download-state"] = mp_download_state;
    }

    if(lsp_ping_info != nullptr)
    {
        children["lsp-ping-info"] = lsp_ping_info;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : association_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-information" || name == "mp-download-state" || name == "lsp-ping-info" || name == "owner-information" || name == "association-information" || name == "interface-name" || name == "vrf-name" || name == "incoming-label" || name == "fe-ctype" || name == "fec-subgroup-id" || name == "feclspid" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-destination" || name == "fecp2mpid" || name == "fec-subgroup-originator" || name == "fec-ctype" || name == "location")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusInformation()
    :
    sessiontype{YType::enumeration, "sessiontype"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    to_up_state_count{YType::uint32, "to-up-state-count"},
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    latency_number{YType::uint32, "latency-number"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_average{YType::uint32, "latency-average"},
    node_id{YType::str, "node-id"},
    internal_label{YType::uint32, "internal-label"}
    	,
    source_address(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress>())
	,last_state_change(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange>())
	,transmit_packet(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket>())
	,receive_packet(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket>())
	,status_brief_information(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation>())
	,async_transmit_statistics(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,async_receive_statistics(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics>())
{
    source_address->parent = this;
    last_state_change->parent = this;
    transmit_packet->parent = this;
    receive_packet->parent = this;
    status_brief_information->parent = this;
    async_transmit_statistics->parent = this;
    async_receive_statistics->parent = this;
    echo_transmit_statistics->parent = this;
    echo_received_statistics->parent = this;

    yang_name = "status-information"; yang_parent_name = "ipv4bf-do-mplste-head-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::has_data() const
{
    return sessiontype.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| remote_discriminator.is_set
	|| to_up_state_count.is_set
	|| desired_minimum_echo_transmit_interval.is_set
	|| remote_negotiated_interval.is_set
	|| latency_number.is_set
	|| latency_minimum.is_set
	|| latency_maximum.is_set
	|| latency_average.is_set
	|| node_id.is_set
	|| internal_label.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(to_up_state_count.yfilter)
	|| ydk::is_set(desired_minimum_echo_transmit_interval.yfilter)
	|| ydk::is_set(remote_negotiated_interval.yfilter)
	|| ydk::is_set(latency_number.yfilter)
	|| ydk::is_set(latency_minimum.yfilter)
	|| ydk::is_set(latency_maximum.yfilter)
	|| ydk::is_set(latency_average.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.yfilter)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());
    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.yfilter)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.yfilter)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.yfilter)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.yfilter)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.yfilter)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(last_state_change != nullptr)
    {
        children["last-state-change"] = last_state_change;
    }

    if(transmit_packet != nullptr)
    {
        children["transmit-packet"] = transmit_packet;
    }

    if(receive_packet != nullptr)
    {
        children["receive-packet"] = receive_packet;
    }

    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    if(async_transmit_statistics != nullptr)
    {
        children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(async_receive_statistics != nullptr)
    {
        children["async-receive-statistics"] = async_receive_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        children["echo-received-statistics"] = echo_received_statistics;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
        to_up_state_count.value_namespace = name_space;
        to_up_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
        desired_minimum_echo_transmit_interval.value_namespace = name_space;
        desired_minimum_echo_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
        remote_negotiated_interval.value_namespace = name_space;
        remote_negotiated_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
        latency_number.value_namespace = name_space;
        latency_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
        latency_minimum.value_namespace = name_space;
        latency_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
        latency_maximum.value_namespace = name_space;
        latency_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
        latency_average.value_namespace = name_space;
        latency_average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
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
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval.yfilter = yfilter;
    }
    if(value_path == "latency-number")
    {
        latency_number.yfilter = yfilter;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum.yfilter = yfilter;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum.yfilter = yfilter;
    }
    if(value_path == "latency-average")
    {
        latency_average.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "last-state-change" || name == "transmit-packet" || name == "receive-packet" || name == "status-brief-information" || name == "async-transmit-statistics" || name == "async-receive-statistics" || name == "echo-transmit-statistics" || name == "echo-received-statistics" || name == "sessiontype" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "remote-discriminator" || name == "to-up-state-count" || name == "desired-minimum-echo-transmit-interval" || name == "remote-negotiated-interval" || name == "latency-number" || name == "latency-minimum" || name == "latency-maximum" || name == "latency-average" || name == "node-id" || name == "internal-label")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "last-state-change"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "transmit-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "receive-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-receive-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-received-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "ipv4bf-do-mplste-head-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_download_state.yfilter)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.yfilter)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change_time != nullptr)
    {
        children["change-time"] = change_time;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
        mp_download_state.value_namespace = name_space;
        mp_download_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-time" || name == "mp-download-state")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "change-time"; yang_parent_name = "mp-download-state"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/mp-download-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"}
    	,
    lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime>())
{
    lsp_ping_tx_last_time->parent = this;
    lsp_ping_tx_last_error_time->parent = this;
    lsp_ping_rx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv4bf-do-mplste-head-session-detail"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_rx_last_output.is_set
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_ping_tx_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_error_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_rc.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_error_rc.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_discr.yfilter)
	|| ydk::is_set(lsp_ping_rx_count.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_code.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_subcode.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_output.yfilter)
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.yfilter)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_ping_tx_last_time != nullptr)
    {
        children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_rx_last_time != nullptr)
    {
        children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
        lsp_ping_tx_count.value_namespace = name_space;
        lsp_ping_tx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
        lsp_ping_tx_error_count.value_namespace = name_space;
        lsp_ping_tx_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
        lsp_ping_tx_last_rc.value_namespace = name_space;
        lsp_ping_tx_last_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
        lsp_ping_tx_last_error_rc.value_namespace = name_space;
        lsp_ping_tx_last_error_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
        lsp_ping_rx_last_discr.value_namespace = name_space;
        lsp_ping_rx_last_discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
        lsp_ping_rx_count.value_namespace = name_space;
        lsp_ping_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
        lsp_ping_rx_last_code.value_namespace = name_space;
        lsp_ping_rx_last_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
        lsp_ping_rx_last_subcode.value_namespace = name_space;
        lsp_ping_rx_last_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
        lsp_ping_rx_last_output.value_namespace = name_space;
        lsp_ping_rx_last_output.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output.yfilter = yfilter;
    }
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-ping-tx-last-time" || name == "lsp-ping-tx-last-error-time" || name == "lsp-ping-rx-last-time" || name == "lsp-ping-tx-count" || name == "lsp-ping-tx-error-count" || name == "lsp-ping-tx-last-rc" || name == "lsp-ping-tx-last-error-rc" || name == "lsp-ping-rx-last-discr" || name == "lsp-ping-rx-count" || name == "lsp-ping-rx-last-code" || name == "lsp-ping-rx-last-subcode" || name == "lsp-ping-rx-last-output")
        return true;
    return false;
}


}
}

