
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_34.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_35.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::ReservationStatistics32Bit()
    :
    setup_requests{YType::uint32, "setup-requests"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_admits{YType::uint32, "setup-admits"},
    setup_rejects{YType::uint32, "setup-rejects"},
    tear_requests{YType::uint32, "tear-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"}
{

    yang_name = "reservation-statistics32-bit"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::~ReservationStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLinks()
{

    yang_name = "statstics-links"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::StatsticsLinks::~StatsticsLinks()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::has_data() const
{
    for (std::size_t index=0; index<statstics_link.size(); index++)
    {
        if(statstics_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::has_operation() const
{
    for (std::size_t index=0; index<statstics_link.size(); index++)
    {
        if(statstics_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statstics-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statstics-link")
    {
        auto c = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink>();
        c->parent = this;
        statstics_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : statstics_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Statistics::StatsticsLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statstics-link")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::StatsticsLink()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    link_address{YType::str, "link-address"}
    	,
    incoming_path_statistics(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics>())
	,incoming_reservation_statistics(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics>())
	,outgoing_path_statistics(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics>())
	,outgoing_reservation_statistics(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics>())
	,incoming_path_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit>())
	,incoming_reservation_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit>())
	,outgoing_path_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit>())
	,outgoing_reservation_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit>())
{
    incoming_path_statistics->parent = this;
    incoming_reservation_statistics->parent = this;
    outgoing_path_statistics->parent = this;
    outgoing_reservation_statistics->parent = this;
    incoming_path_statistics32_bit->parent = this;
    incoming_reservation_statistics32_bit->parent = this;
    outgoing_path_statistics32_bit->parent = this;
    outgoing_reservation_statistics32_bit->parent = this;

    yang_name = "statstics-link"; yang_parent_name = "statstics-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::~StatsticsLink()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| link_address.is_set
	|| (incoming_path_statistics !=  nullptr && incoming_path_statistics->has_data())
	|| (incoming_reservation_statistics !=  nullptr && incoming_reservation_statistics->has_data())
	|| (outgoing_path_statistics !=  nullptr && outgoing_path_statistics->has_data())
	|| (outgoing_reservation_statistics !=  nullptr && outgoing_reservation_statistics->has_data())
	|| (incoming_path_statistics32_bit !=  nullptr && incoming_path_statistics32_bit->has_data())
	|| (incoming_reservation_statistics32_bit !=  nullptr && incoming_reservation_statistics32_bit->has_data())
	|| (outgoing_path_statistics32_bit !=  nullptr && outgoing_path_statistics32_bit->has_data())
	|| (outgoing_reservation_statistics32_bit !=  nullptr && outgoing_reservation_statistics32_bit->has_data());
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| (incoming_path_statistics !=  nullptr && incoming_path_statistics->has_operation())
	|| (incoming_reservation_statistics !=  nullptr && incoming_reservation_statistics->has_operation())
	|| (outgoing_path_statistics !=  nullptr && outgoing_path_statistics->has_operation())
	|| (outgoing_reservation_statistics !=  nullptr && outgoing_reservation_statistics->has_operation())
	|| (incoming_path_statistics32_bit !=  nullptr && incoming_path_statistics32_bit->has_operation())
	|| (incoming_reservation_statistics32_bit !=  nullptr && incoming_reservation_statistics32_bit->has_operation())
	|| (outgoing_path_statistics32_bit !=  nullptr && outgoing_path_statistics32_bit->has_operation())
	|| (outgoing_reservation_statistics32_bit !=  nullptr && outgoing_reservation_statistics32_bit->has_operation());
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/statstics-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statstics-link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-path-statistics")
    {
        if(incoming_path_statistics == nullptr)
        {
            incoming_path_statistics = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics>();
        }
        return incoming_path_statistics;
    }

    if(child_yang_name == "incoming-reservation-statistics")
    {
        if(incoming_reservation_statistics == nullptr)
        {
            incoming_reservation_statistics = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics>();
        }
        return incoming_reservation_statistics;
    }

    if(child_yang_name == "outgoing-path-statistics")
    {
        if(outgoing_path_statistics == nullptr)
        {
            outgoing_path_statistics = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics>();
        }
        return outgoing_path_statistics;
    }

    if(child_yang_name == "outgoing-reservation-statistics")
    {
        if(outgoing_reservation_statistics == nullptr)
        {
            outgoing_reservation_statistics = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics>();
        }
        return outgoing_reservation_statistics;
    }

    if(child_yang_name == "incoming-path-statistics32-bit")
    {
        if(incoming_path_statistics32_bit == nullptr)
        {
            incoming_path_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit>();
        }
        return incoming_path_statistics32_bit;
    }

    if(child_yang_name == "incoming-reservation-statistics32-bit")
    {
        if(incoming_reservation_statistics32_bit == nullptr)
        {
            incoming_reservation_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit>();
        }
        return incoming_reservation_statistics32_bit;
    }

    if(child_yang_name == "outgoing-path-statistics32-bit")
    {
        if(outgoing_path_statistics32_bit == nullptr)
        {
            outgoing_path_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit>();
        }
        return outgoing_path_statistics32_bit;
    }

    if(child_yang_name == "outgoing-reservation-statistics32-bit")
    {
        if(outgoing_reservation_statistics32_bit == nullptr)
        {
            outgoing_reservation_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit>();
        }
        return outgoing_reservation_statistics32_bit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(incoming_path_statistics != nullptr)
    {
        children["incoming-path-statistics"] = incoming_path_statistics;
    }

    if(incoming_reservation_statistics != nullptr)
    {
        children["incoming-reservation-statistics"] = incoming_reservation_statistics;
    }

    if(outgoing_path_statistics != nullptr)
    {
        children["outgoing-path-statistics"] = outgoing_path_statistics;
    }

    if(outgoing_reservation_statistics != nullptr)
    {
        children["outgoing-reservation-statistics"] = outgoing_reservation_statistics;
    }

    if(incoming_path_statistics32_bit != nullptr)
    {
        children["incoming-path-statistics32-bit"] = incoming_path_statistics32_bit;
    }

    if(incoming_reservation_statistics32_bit != nullptr)
    {
        children["incoming-reservation-statistics32-bit"] = incoming_reservation_statistics32_bit;
    }

    if(outgoing_path_statistics32_bit != nullptr)
    {
        children["outgoing-path-statistics32-bit"] = outgoing_path_statistics32_bit;
    }

    if(outgoing_reservation_statistics32_bit != nullptr)
    {
        children["outgoing-reservation-statistics32-bit"] = outgoing_reservation_statistics32_bit;
    }

    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-path-statistics" || name == "incoming-reservation-statistics" || name == "outgoing-path-statistics" || name == "outgoing-reservation-statistics" || name == "incoming-path-statistics32-bit" || name == "incoming-reservation-statistics32-bit" || name == "outgoing-path-statistics32-bit" || name == "outgoing-reservation-statistics32-bit" || name == "interface-name" || name == "interface-name-xr" || name == "link-address")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::IncomingPathStatistics()
    :
    setup_requests{YType::uint16, "setup-requests"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_admits{YType::uint16, "setup-admits"},
    setup_rejects{YType::uint16, "setup-rejects"},
    tear_requests{YType::uint16, "tear-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"}
{

    yang_name = "incoming-path-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::~IncomingPathStatistics()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-path-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::IncomingReservationStatistics()
    :
    setup_requests{YType::uint16, "setup-requests"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_admits{YType::uint16, "setup-admits"},
    setup_rejects{YType::uint16, "setup-rejects"},
    tear_requests{YType::uint16, "tear-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"}
{

    yang_name = "incoming-reservation-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::~IncomingReservationStatistics()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-reservation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::OutgoingPathStatistics()
    :
    setup_requests{YType::uint16, "setup-requests"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_admits{YType::uint16, "setup-admits"},
    setup_rejects{YType::uint16, "setup-rejects"},
    tear_requests{YType::uint16, "tear-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"}
{

    yang_name = "outgoing-path-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::~OutgoingPathStatistics()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-path-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::OutgoingReservationStatistics()
    :
    setup_requests{YType::uint16, "setup-requests"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_admits{YType::uint16, "setup-admits"},
    setup_rejects{YType::uint16, "setup-rejects"},
    tear_requests{YType::uint16, "tear-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"}
{

    yang_name = "outgoing-reservation-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::~OutgoingReservationStatistics()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-reservation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::IncomingPathStatistics32Bit()
    :
    setup_requests{YType::uint32, "setup-requests"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_admits{YType::uint32, "setup-admits"},
    setup_rejects{YType::uint32, "setup-rejects"},
    tear_requests{YType::uint32, "tear-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"}
{

    yang_name = "incoming-path-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::~IncomingPathStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-path-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::IncomingReservationStatistics32Bit()
    :
    setup_requests{YType::uint32, "setup-requests"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_admits{YType::uint32, "setup-admits"},
    setup_rejects{YType::uint32, "setup-rejects"},
    tear_requests{YType::uint32, "tear-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"}
{

    yang_name = "incoming-reservation-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::~IncomingReservationStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-reservation-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::OutgoingPathStatistics32Bit()
    :
    setup_requests{YType::uint32, "setup-requests"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_admits{YType::uint32, "setup-admits"},
    setup_rejects{YType::uint32, "setup-rejects"},
    tear_requests{YType::uint32, "tear-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"}
{

    yang_name = "outgoing-path-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::~OutgoingPathStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-path-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::OutgoingReservationStatistics32Bit()
    :
    setup_requests{YType::uint32, "setup-requests"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_admits{YType::uint32, "setup-admits"},
    setup_rejects{YType::uint32, "setup-rejects"},
    tear_requests{YType::uint32, "tear-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"}
{

    yang_name = "outgoing-reservation-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::~OutgoingReservationStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-reservation-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocation()
    :
    global(std::make_shared<MplsLcacStandby::BandwidthAllocation::Global>())
	,bandwidth_allocation_links(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks>())
{
    global->parent = this;
    bandwidth_allocation_links->parent = this;

    yang_name = "bandwidth-allocation"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAllocation::~BandwidthAllocation()
{
}

bool MplsLcacStandby::BandwidthAllocation::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (bandwidth_allocation_links !=  nullptr && bandwidth_allocation_links->has_data());
}

bool MplsLcacStandby::BandwidthAllocation::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (bandwidth_allocation_links !=  nullptr && bandwidth_allocation_links->has_operation());
}

std::string MplsLcacStandby::BandwidthAllocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAllocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLcacStandby::BandwidthAllocation::Global>();
        }
        return global;
    }

    if(child_yang_name == "bandwidth-allocation-links")
    {
        if(bandwidth_allocation_links == nullptr)
        {
            bandwidth_allocation_links = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks>();
        }
        return bandwidth_allocation_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(bandwidth_allocation_links != nullptr)
    {
        children["bandwidth-allocation-links"] = bandwidth_allocation_links;
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BandwidthAllocation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BandwidthAllocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "bandwidth-allocation-links")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::Global::Global()
    :
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    bandwidth_hold_time{YType::uint16, "bandwidth-hold-time"}
{

    yang_name = "global"; yang_parent_name = "bandwidth-allocation"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAllocation::Global::~Global()
{
}

bool MplsLcacStandby::BandwidthAllocation::Global::has_data() const
{
    return is_role_standby.is_set
	|| links.is_set
	|| bandwidth_hold_time.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(bandwidth_hold_time.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-allocation/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAllocation::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (bandwidth_hold_time.is_set || is_set(bandwidth_hold_time.yfilter)) leaf_name_data.push_back(bandwidth_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAllocation::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-hold-time")
    {
        bandwidth_hold_time = value;
        bandwidth_hold_time.value_namespace = name_space;
        bandwidth_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "bandwidth-hold-time")
    {
        bandwidth_hold_time.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-role-standby" || name == "links" || name == "bandwidth-hold-time")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLinks()
{

    yang_name = "bandwidth-allocation-links"; yang_parent_name = "bandwidth-allocation"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::~BandwidthAllocationLinks()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::has_data() const
{
    for (std::size_t index=0; index<bandwidth_allocation_link.size(); index++)
    {
        if(bandwidth_allocation_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_allocation_link.size(); index++)
    {
        if(bandwidth_allocation_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-allocation/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-allocation-link")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink>();
        c->parent = this;
        bandwidth_allocation_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bandwidth_allocation_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-allocation-link")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::BandwidthAllocationLink()
    :
    interface_name{YType::str, "interface-name"},
    total_bandwidth_descriptors{YType::uint16, "total-bandwidth-descriptors"},
    bandwidth_descriptors{YType::uint16, "bandwidth-descriptors"},
    bandwidth_pool{YType::enumeration, "bandwidth-pool"},
    flooding_up_thresholds_are_default{YType::boolean, "flooding-up-thresholds-are-default"},
    flooding_down_thresholds_are_default{YType::boolean, "flooding-down-thresholds-are-default"},
    flooding_up_thresholds_are_global{YType::boolean, "flooding-up-thresholds-are-global"},
    flooding_down_thresholds_are_global{YType::boolean, "flooding-down-thresholds-are-global"}
    	,
    link_common(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon>())
	,upstream_bandwidth(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth>())
	,downstream_bandwidth(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth>())
{
    link_common->parent = this;
    upstream_bandwidth->parent = this;
    downstream_bandwidth->parent = this;

    yang_name = "bandwidth-allocation-link"; yang_parent_name = "bandwidth-allocation-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::~BandwidthAllocationLink()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_data() const
{
    for (std::size_t index=0; index<flooding_up_threshold.size(); index++)
    {
        if(flooding_up_threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<flooding_down_threshold.size(); index++)
    {
        if(flooding_down_threshold[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| total_bandwidth_descriptors.is_set
	|| bandwidth_descriptors.is_set
	|| bandwidth_pool.is_set
	|| flooding_up_thresholds_are_default.is_set
	|| flooding_down_thresholds_are_default.is_set
	|| flooding_up_thresholds_are_global.is_set
	|| flooding_down_thresholds_are_global.is_set
	|| (link_common !=  nullptr && link_common->has_data())
	|| (upstream_bandwidth !=  nullptr && upstream_bandwidth->has_data())
	|| (downstream_bandwidth !=  nullptr && downstream_bandwidth->has_data());
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_operation() const
{
    for (std::size_t index=0; index<flooding_up_threshold.size(); index++)
    {
        if(flooding_up_threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<flooding_down_threshold.size(); index++)
    {
        if(flooding_down_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(total_bandwidth_descriptors.yfilter)
	|| ydk::is_set(bandwidth_descriptors.yfilter)
	|| ydk::is_set(bandwidth_pool.yfilter)
	|| ydk::is_set(flooding_up_thresholds_are_default.yfilter)
	|| ydk::is_set(flooding_down_thresholds_are_default.yfilter)
	|| ydk::is_set(flooding_up_thresholds_are_global.yfilter)
	|| ydk::is_set(flooding_down_thresholds_are_global.yfilter)
	|| (link_common !=  nullptr && link_common->has_operation())
	|| (upstream_bandwidth !=  nullptr && upstream_bandwidth->has_operation())
	|| (downstream_bandwidth !=  nullptr && downstream_bandwidth->has_operation());
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-allocation/bandwidth-allocation-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation-link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (total_bandwidth_descriptors.is_set || is_set(total_bandwidth_descriptors.yfilter)) leaf_name_data.push_back(total_bandwidth_descriptors.get_name_leafdata());
    if (bandwidth_descriptors.is_set || is_set(bandwidth_descriptors.yfilter)) leaf_name_data.push_back(bandwidth_descriptors.get_name_leafdata());
    if (bandwidth_pool.is_set || is_set(bandwidth_pool.yfilter)) leaf_name_data.push_back(bandwidth_pool.get_name_leafdata());
    if (flooding_up_thresholds_are_default.is_set || is_set(flooding_up_thresholds_are_default.yfilter)) leaf_name_data.push_back(flooding_up_thresholds_are_default.get_name_leafdata());
    if (flooding_down_thresholds_are_default.is_set || is_set(flooding_down_thresholds_are_default.yfilter)) leaf_name_data.push_back(flooding_down_thresholds_are_default.get_name_leafdata());
    if (flooding_up_thresholds_are_global.is_set || is_set(flooding_up_thresholds_are_global.yfilter)) leaf_name_data.push_back(flooding_up_thresholds_are_global.get_name_leafdata());
    if (flooding_down_thresholds_are_global.is_set || is_set(flooding_down_thresholds_are_global.yfilter)) leaf_name_data.push_back(flooding_down_thresholds_are_global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-common")
    {
        if(link_common == nullptr)
        {
            link_common = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon>();
        }
        return link_common;
    }

    if(child_yang_name == "upstream-bandwidth")
    {
        if(upstream_bandwidth == nullptr)
        {
            upstream_bandwidth = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth>();
        }
        return upstream_bandwidth;
    }

    if(child_yang_name == "downstream-bandwidth")
    {
        if(downstream_bandwidth == nullptr)
        {
            downstream_bandwidth = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth>();
        }
        return downstream_bandwidth;
    }

    if(child_yang_name == "flooding-up-threshold")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold>();
        c->parent = this;
        flooding_up_threshold.push_back(c);
        return c;
    }

    if(child_yang_name == "flooding-down-threshold")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold>();
        c->parent = this;
        flooding_down_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_common != nullptr)
    {
        children["link-common"] = link_common;
    }

    if(upstream_bandwidth != nullptr)
    {
        children["upstream-bandwidth"] = upstream_bandwidth;
    }

    if(downstream_bandwidth != nullptr)
    {
        children["downstream-bandwidth"] = downstream_bandwidth;
    }

    count = 0;
    for (auto const & c : flooding_up_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : flooding_down_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bandwidth-descriptors")
    {
        total_bandwidth_descriptors = value;
        total_bandwidth_descriptors.value_namespace = name_space;
        total_bandwidth_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-descriptors")
    {
        bandwidth_descriptors = value;
        bandwidth_descriptors.value_namespace = name_space;
        bandwidth_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool = value;
        bandwidth_pool.value_namespace = name_space;
        bandwidth_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-up-thresholds-are-default")
    {
        flooding_up_thresholds_are_default = value;
        flooding_up_thresholds_are_default.value_namespace = name_space;
        flooding_up_thresholds_are_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-down-thresholds-are-default")
    {
        flooding_down_thresholds_are_default = value;
        flooding_down_thresholds_are_default.value_namespace = name_space;
        flooding_down_thresholds_are_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-up-thresholds-are-global")
    {
        flooding_up_thresholds_are_global = value;
        flooding_up_thresholds_are_global.value_namespace = name_space;
        flooding_up_thresholds_are_global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-down-thresholds-are-global")
    {
        flooding_down_thresholds_are_global = value;
        flooding_down_thresholds_are_global.value_namespace = name_space;
        flooding_down_thresholds_are_global.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "total-bandwidth-descriptors")
    {
        total_bandwidth_descriptors.yfilter = yfilter;
    }
    if(value_path == "bandwidth-descriptors")
    {
        bandwidth_descriptors.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool.yfilter = yfilter;
    }
    if(value_path == "flooding-up-thresholds-are-default")
    {
        flooding_up_thresholds_are_default.yfilter = yfilter;
    }
    if(value_path == "flooding-down-thresholds-are-default")
    {
        flooding_down_thresholds_are_default.yfilter = yfilter;
    }
    if(value_path == "flooding-up-thresholds-are-global")
    {
        flooding_up_thresholds_are_global.yfilter = yfilter;
    }
    if(value_path == "flooding-down-thresholds-are-global")
    {
        flooding_down_thresholds_are_global.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-common" || name == "upstream-bandwidth" || name == "downstream-bandwidth" || name == "flooding-up-threshold" || name == "flooding-down-threshold" || name == "interface-name" || name == "total-bandwidth-descriptors" || name == "bandwidth-descriptors" || name == "bandwidth-pool" || name == "flooding-up-thresholds-are-default" || name == "flooding-down-thresholds-are-default" || name == "flooding-up-thresholds-are-global" || name == "flooding-down-thresholds-are-global")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkCommon()
    :
    link_id{YType::str, "link-id"},
    link_address{YType::str, "link-address"},
    is_unnumbered{YType::boolean, "is-unnumbered"},
    has_protection{YType::boolean, "has-protection"},
    capability{YType::uint32, "capability"},
    working_priority{YType::uint32, "working-priority"},
    resource_provider{YType::enumeration, "resource-provider"},
    is_resource_provider_installed{YType::boolean, "is-resource-provider-installed"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    physical_bandwidth{YType::uint64, "physical-bandwidth"},
    bcm_id{YType::uint16, "bcm-id"},
    maximum_reservable_bandwidth{YType::uint64, "maximum-reservable-bandwidth"},
    last_flooded_effective_maximum_reservable_bandwidth{YType::uint64, "last-flooded-effective-maximum-reservable-bandwidth"},
    incoming_reservable_bandwidth_percentage{YType::uint8, "incoming-reservable-bandwidth-percentage"},
    outgoing_reservable_bandwidth_percentage{YType::uint8, "outgoing-reservable-bandwidth-percentage"},
    maximum_reservable_pool0_bandwidth{YType::uint64, "maximum-reservable-pool0-bandwidth"},
    incoming_reservable_pool0_bandwidth_percentage{YType::uint8, "incoming-reservable-pool0-bandwidth-percentage"},
    outgoing_reservable_pool0_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool0-bandwidth-percentage"},
    maximum_reservable_pool1_bandwidth{YType::uint64, "maximum-reservable-pool1-bandwidth"},
    incoming_reservable_pool1_bandwidth_percentage{YType::uint8, "incoming-reservable-pool1-bandwidth-percentage"},
    outgoing_reservable_pool1_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool1-bandwidth-percentage"},
    inbound_admission_method{YType::enumeration, "inbound-admission-method"},
    outbound_admission_method{YType::enumeration, "outbound-admission-method"},
    igp_neighbors{YType::uint16, "igp-neighbors"}
    	,
    link_flags(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags>())
{
    link_flags->parent = this;

    yang_name = "link-common"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::~LinkCommon()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_data() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_address.is_set
	|| is_unnumbered.is_set
	|| has_protection.is_set
	|| capability.is_set
	|| working_priority.is_set
	|| resource_provider.is_set
	|| is_resource_provider_installed.is_set
	|| bandwidth_units.is_set
	|| physical_bandwidth.is_set
	|| bcm_id.is_set
	|| maximum_reservable_bandwidth.is_set
	|| last_flooded_effective_maximum_reservable_bandwidth.is_set
	|| incoming_reservable_bandwidth_percentage.is_set
	|| outgoing_reservable_bandwidth_percentage.is_set
	|| maximum_reservable_pool0_bandwidth.is_set
	|| incoming_reservable_pool0_bandwidth_percentage.is_set
	|| outgoing_reservable_pool0_bandwidth_percentage.is_set
	|| maximum_reservable_pool1_bandwidth.is_set
	|| incoming_reservable_pool1_bandwidth_percentage.is_set
	|| outgoing_reservable_pool1_bandwidth_percentage.is_set
	|| inbound_admission_method.is_set
	|| outbound_admission_method.is_set
	|| igp_neighbors.is_set
	|| (link_flags !=  nullptr && link_flags->has_data());
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_operation() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(is_unnumbered.yfilter)
	|| ydk::is_set(has_protection.yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(working_priority.yfilter)
	|| ydk::is_set(resource_provider.yfilter)
	|| ydk::is_set(is_resource_provider_installed.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(physical_bandwidth.yfilter)
	|| ydk::is_set(bcm_id.yfilter)
	|| ydk::is_set(maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(incoming_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(maximum_reservable_pool0_bandwidth.yfilter)
	|| ydk::is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(maximum_reservable_pool1_bandwidth.yfilter)
	|| ydk::is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(inbound_admission_method.yfilter)
	|| ydk::is_set(outbound_admission_method.yfilter)
	|| ydk::is_set(igp_neighbors.yfilter)
	|| (link_flags !=  nullptr && link_flags->has_operation());
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (is_unnumbered.is_set || is_set(is_unnumbered.yfilter)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());
    if (has_protection.is_set || is_set(has_protection.yfilter)) leaf_name_data.push_back(has_protection.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (working_priority.is_set || is_set(working_priority.yfilter)) leaf_name_data.push_back(working_priority.get_name_leafdata());
    if (resource_provider.is_set || is_set(resource_provider.yfilter)) leaf_name_data.push_back(resource_provider.get_name_leafdata());
    if (is_resource_provider_installed.is_set || is_set(is_resource_provider_installed.yfilter)) leaf_name_data.push_back(is_resource_provider_installed.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.yfilter)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.yfilter)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (maximum_reservable_bandwidth.is_set || is_set(maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_bandwidth.get_name_leafdata());
    if (last_flooded_effective_maximum_reservable_bandwidth.is_set || is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(last_flooded_effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (incoming_reservable_bandwidth_percentage.is_set || is_set(incoming_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_bandwidth_percentage.is_set || is_set(outgoing_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_bandwidth_percentage.get_name_leafdata());
    if (maximum_reservable_pool0_bandwidth.is_set || is_set(maximum_reservable_pool0_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool0_bandwidth.get_name_leafdata());
    if (incoming_reservable_pool0_bandwidth_percentage.is_set || is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool0_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (maximum_reservable_pool1_bandwidth.is_set || is_set(maximum_reservable_pool1_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool1_bandwidth.get_name_leafdata());
    if (incoming_reservable_pool1_bandwidth_percentage.is_set || is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool1_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (inbound_admission_method.is_set || is_set(inbound_admission_method.yfilter)) leaf_name_data.push_back(inbound_admission_method.get_name_leafdata());
    if (outbound_admission_method.is_set || is_set(outbound_admission_method.yfilter)) leaf_name_data.push_back(outbound_admission_method.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.yfilter)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-flags")
    {
        if(link_flags == nullptr)
        {
            link_flags = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags>();
        }
        return link_flags;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-switching-capability-descriptor")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor>();
        c->parent = this;
        interface_switching_capability_descriptor.push_back(c);
        return c;
    }

    if(child_yang_name == "flooded-areas")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas>();
        c->parent = this;
        flooded_areas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_flags != nullptr)
    {
        children["link-flags"] = link_flags;
    }

    count = 0;
    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : interface_switching_capability_descriptor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : flooded_areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
        is_unnumbered.value_namespace = name_space;
        is_unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-protection")
    {
        has_protection = value;
        has_protection.value_namespace = name_space;
        has_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "working-priority")
    {
        working_priority = value;
        working_priority.value_namespace = name_space;
        working_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-provider")
    {
        resource_provider = value;
        resource_provider.value_namespace = name_space;
        resource_provider.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed = value;
        is_resource_provider_installed.value_namespace = name_space;
        is_resource_provider_installed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
        physical_bandwidth.value_namespace = name_space;
        physical_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
        bcm_id.value_namespace = name_space;
        bcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth = value;
        maximum_reservable_bandwidth.value_namespace = name_space;
        maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth = value;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace = name_space;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage = value;
        incoming_reservable_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage = value;
        outgoing_reservable_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth = value;
        maximum_reservable_pool0_bandwidth.value_namespace = name_space;
        maximum_reservable_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage = value;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage = value;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth = value;
        maximum_reservable_pool1_bandwidth.value_namespace = name_space;
        maximum_reservable_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage = value;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage = value;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method = value;
        inbound_admission_method.value_namespace = name_space;
        inbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method = value;
        outbound_admission_method.value_namespace = name_space;
        outbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
        igp_neighbors.value_namespace = name_space;
        igp_neighbors.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered.yfilter = yfilter;
    }
    if(value_path == "has-protection")
    {
        has_protection.yfilter = yfilter;
    }
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "working-priority")
    {
        working_priority.yfilter = yfilter;
    }
    if(value_path == "resource-provider")
    {
        resource_provider.yfilter = yfilter;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bcm-id")
    {
        bcm_id.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-flags" || name == "shared-risk-link-group" || name == "interface-switching-capability-descriptor" || name == "flooded-areas" || name == "link-id" || name == "link-address" || name == "is-unnumbered" || name == "has-protection" || name == "capability" || name == "working-priority" || name == "resource-provider" || name == "is-resource-provider-installed" || name == "bandwidth-units" || name == "physical-bandwidth" || name == "bcm-id" || name == "maximum-reservable-bandwidth" || name == "last-flooded-effective-maximum-reservable-bandwidth" || name == "incoming-reservable-bandwidth-percentage" || name == "outgoing-reservable-bandwidth-percentage" || name == "maximum-reservable-pool0-bandwidth" || name == "incoming-reservable-pool0-bandwidth-percentage" || name == "outgoing-reservable-pool0-bandwidth-percentage" || name == "maximum-reservable-pool1-bandwidth" || name == "incoming-reservable-pool1-bandwidth-percentage" || name == "outgoing-reservable-pool1-bandwidth-percentage" || name == "inbound-admission-method" || name == "outbound-admission-method" || name == "igp-neighbors")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::LinkFlags()
    :
    is_mpls_te_on{YType::boolean, "is-mpls-te-on"},
    signaling_agent{YType::enumeration, "signaling-agent"},
    is_admin_up{YType::boolean, "is-admin-up"}
{

    yang_name = "link-flags"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::~LinkFlags()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_data() const
{
    return is_mpls_te_on.is_set
	|| signaling_agent.is_set
	|| is_admin_up.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_mpls_te_on.yfilter)
	|| ydk::is_set(signaling_agent.yfilter)
	|| ydk::is_set(is_admin_up.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mpls_te_on.is_set || is_set(is_mpls_te_on.yfilter)) leaf_name_data.push_back(is_mpls_te_on.get_name_leafdata());
    if (signaling_agent.is_set || is_set(signaling_agent.yfilter)) leaf_name_data.push_back(signaling_agent.get_name_leafdata());
    if (is_admin_up.is_set || is_set(is_admin_up.yfilter)) leaf_name_data.push_back(is_admin_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on = value;
        is_mpls_te_on.value_namespace = name_space;
        is_mpls_te_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent = value;
        signaling_agent.value_namespace = name_space;
        signaling_agent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admin-up")
    {
        is_admin_up = value;
        is_admin_up.value_namespace = name_space;
        is_admin_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on.yfilter = yfilter;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent.yfilter = yfilter;
    }
    if(value_path == "is-admin-up")
    {
        is_admin_up.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-mpls-te-on" || name == "signaling-agent" || name == "is-admin-up")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::InterfaceSwitchingCapabilityDescriptor()
    :
    key{YType::uint8, "key"},
    switching_capability{YType::uint8, "switching-capability"},
    encoding{YType::uint8, "encoding"}
{

    yang_name = "interface-switching-capability-descriptor"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::~InterfaceSwitchingCapabilityDescriptor()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_data() const
{
    return key.is_set
	|| switching_capability.is_set
	|| encoding.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(switching_capability.yfilter)
	|| ydk::is_set(encoding.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-switching-capability-descriptor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (switching_capability.is_set || is_set(switching_capability.yfilter)) leaf_name_data.push_back(switching_capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-capability")
    {
        switching_capability = value;
        switching_capability.value_namespace = name_space;
        switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "switching-capability")
    {
        switching_capability.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "switching-capability" || name == "encoding")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::FloodedAreas()
    :
    flooded_area{YType::str, "flooded-area"}
{

    yang_name = "flooded-areas"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::~FloodedAreas()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_data() const
{
    return flooded_area.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flooded_area.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooded_area.is_set || is_set(flooded_area.yfilter)) leaf_name_data.push_back(flooded_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flooded-area")
    {
        flooded_area = value;
        flooded_area.value_namespace = name_space;
        flooded_area.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flooded-area")
    {
        flooded_area.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-area")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::UpstreamBandwidth()
    :
    bandwidth_direction{YType::enumeration, "bandwidth-direction"},
    is_admission_method_allocated_bandwidth{YType::boolean, "is-admission-method-allocated-bandwidth"},
    bandwidth_units{YType::enumeration, "bandwidth-units"}
{

    yang_name = "upstream-bandwidth"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::~UpstreamBandwidth()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_data() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_data())
            return true;
    }
    return bandwidth_direction.is_set
	|| is_admission_method_allocated_bandwidth.is_set
	|| bandwidth_units.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_direction.yfilter)
	|| ydk::is_set(is_admission_method_allocated_bandwidth.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upstream-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_direction.is_set || is_set(bandwidth_direction.yfilter)) leaf_name_data.push_back(bandwidth_direction.get_name_leafdata());
    if (is_admission_method_allocated_bandwidth.is_set || is_set(is_admission_method_allocated_bandwidth.yfilter)) leaf_name_data.push_back(is_admission_method_allocated_bandwidth.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-pool0")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0>();
        c->parent = this;
        bandwidth_pool0.push_back(c);
        return c;
    }

    if(child_yang_name == "bandwidth-pool1")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1>();
        c->parent = this;
        bandwidth_pool1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bandwidth_pool0)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : bandwidth_pool1)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction = value;
        bandwidth_direction.value_namespace = name_space;
        bandwidth_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth = value;
        is_admission_method_allocated_bandwidth.value_namespace = name_space;
        is_admission_method_allocated_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction.yfilter = yfilter;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-pool0" || name == "bandwidth-pool1" || name == "bandwidth-direction" || name == "is-admission-method-allocated-bandwidth" || name == "bandwidth-units")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::BandwidthPool0()
    :
    hold_priority{YType::uint8, "hold-priority"},
    held_amount{YType::uint32, "held-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    locked_amount{YType::uint32, "locked-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool0"; yang_parent_name = "upstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::~BandwidthPool0()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_data() const
{
    return hold_priority.is_set
	|| held_amount.is_set
	|| total_held_amount.is_set
	|| locked_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "held-amount" || name == "total-held-amount" || name == "locked-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::BandwidthPool1()
    :
    hold_priority{YType::uint8, "hold-priority"},
    held_amount{YType::uint32, "held-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    locked_amount{YType::uint32, "locked-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool1"; yang_parent_name = "upstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::~BandwidthPool1()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_data() const
{
    return hold_priority.is_set
	|| held_amount.is_set
	|| total_held_amount.is_set
	|| locked_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "held-amount" || name == "total-held-amount" || name == "locked-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::DownstreamBandwidth()
    :
    bandwidth_direction{YType::enumeration, "bandwidth-direction"},
    is_admission_method_allocated_bandwidth{YType::boolean, "is-admission-method-allocated-bandwidth"},
    bandwidth_units{YType::enumeration, "bandwidth-units"}
{

    yang_name = "downstream-bandwidth"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::~DownstreamBandwidth()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_data() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_data())
            return true;
    }
    return bandwidth_direction.is_set
	|| is_admission_method_allocated_bandwidth.is_set
	|| bandwidth_units.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_direction.yfilter)
	|| ydk::is_set(is_admission_method_allocated_bandwidth.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_direction.is_set || is_set(bandwidth_direction.yfilter)) leaf_name_data.push_back(bandwidth_direction.get_name_leafdata());
    if (is_admission_method_allocated_bandwidth.is_set || is_set(is_admission_method_allocated_bandwidth.yfilter)) leaf_name_data.push_back(is_admission_method_allocated_bandwidth.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-pool0")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0>();
        c->parent = this;
        bandwidth_pool0.push_back(c);
        return c;
    }

    if(child_yang_name == "bandwidth-pool1")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1>();
        c->parent = this;
        bandwidth_pool1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bandwidth_pool0)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : bandwidth_pool1)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction = value;
        bandwidth_direction.value_namespace = name_space;
        bandwidth_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth = value;
        is_admission_method_allocated_bandwidth.value_namespace = name_space;
        is_admission_method_allocated_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction.yfilter = yfilter;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-pool0" || name == "bandwidth-pool1" || name == "bandwidth-direction" || name == "is-admission-method-allocated-bandwidth" || name == "bandwidth-units")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::BandwidthPool0()
    :
    hold_priority{YType::uint8, "hold-priority"},
    held_amount{YType::uint32, "held-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    locked_amount{YType::uint32, "locked-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool0"; yang_parent_name = "downstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::~BandwidthPool0()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_data() const
{
    return hold_priority.is_set
	|| held_amount.is_set
	|| total_held_amount.is_set
	|| locked_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "held-amount" || name == "total-held-amount" || name == "locked-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::BandwidthPool1()
    :
    hold_priority{YType::uint8, "hold-priority"},
    held_amount{YType::uint32, "held-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    locked_amount{YType::uint32, "locked-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool1"; yang_parent_name = "downstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::~BandwidthPool1()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_data() const
{
    return hold_priority.is_set
	|| held_amount.is_set
	|| total_held_amount.is_set
	|| locked_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "held-amount" || name == "total-held-amount" || name == "locked-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::FloodingUpThreshold()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "flooding-up-threshold"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::~FloodingUpThreshold()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding-up-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::FloodingDownThreshold()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "flooding-down-threshold"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::~FloodingDownThreshold()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding-down-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcacStandby::Gmpls::Gmpls()
    :
    nni(std::make_shared<MplsLcacStandby::Gmpls::Nni>())
	,uni(std::make_shared<MplsLcacStandby::Gmpls::Uni>())
{
    nni->parent = this;
    uni->parent = this;

    yang_name = "gmpls"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Gmpls::~Gmpls()
{
}

bool MplsLcacStandby::Gmpls::has_data() const
{
    return (nni !=  nullptr && nni->has_data())
	|| (uni !=  nullptr && uni->has_data());
}

bool MplsLcacStandby::Gmpls::has_operation() const
{
    return is_set(yfilter)
	|| (nni !=  nullptr && nni->has_operation())
	|| (uni !=  nullptr && uni->has_operation());
}

std::string MplsLcacStandby::Gmpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Gmpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Gmpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Gmpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nni")
    {
        if(nni == nullptr)
        {
            nni = std::make_shared<MplsLcacStandby::Gmpls::Nni>();
        }
        return nni;
    }

    if(child_yang_name == "uni")
    {
        if(uni == nullptr)
        {
            uni = std::make_shared<MplsLcacStandby::Gmpls::Uni>();
        }
        return uni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Gmpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nni != nullptr)
    {
        children["nni"] = nni;
    }

    if(uni != nullptr)
    {
        children["uni"] = uni;
    }

    return children;
}

void MplsLcacStandby::Gmpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Gmpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Gmpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nni" || name == "uni")
        return true;
    return false;
}

MplsLcacStandby::Gmpls::Nni::Nni()
{

    yang_name = "nni"; yang_parent_name = "gmpls"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Gmpls::Nni::~Nni()
{
}

bool MplsLcacStandby::Gmpls::Nni::has_data() const
{
    return false;
}

bool MplsLcacStandby::Gmpls::Nni::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsLcacStandby::Gmpls::Nni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/gmpls/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Gmpls::Nni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Gmpls::Nni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Gmpls::Nni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Gmpls::Nni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Gmpls::Nni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Gmpls::Nni::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Gmpls::Nni::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsLcacStandby::Gmpls::Uni::Uni()
{

    yang_name = "uni"; yang_parent_name = "gmpls"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Gmpls::Uni::~Uni()
{
}

bool MplsLcacStandby::Gmpls::Uni::has_data() const
{
    return false;
}

bool MplsLcacStandby::Gmpls::Uni::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsLcacStandby::Gmpls::Uni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/gmpls/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Gmpls::Uni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Gmpls::Uni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Gmpls::Uni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Gmpls::Uni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Gmpls::Uni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Gmpls::Uni::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Gmpls::Uni::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsLcacStandby::BfdNeighbors::BfdNeighbors()
{

    yang_name = "bfd-neighbors"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BfdNeighbors::~BfdNeighbors()
{
}

bool MplsLcacStandby::BfdNeighbors::has_data() const
{
    for (std::size_t index=0; index<bfd_neighbor.size(); index++)
    {
        if(bfd_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::BfdNeighbors::has_operation() const
{
    for (std::size_t index=0; index<bfd_neighbor.size(); index++)
    {
        if(bfd_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::BfdNeighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BfdNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BfdNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BfdNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-neighbor")
    {
        auto c = std::make_shared<MplsLcacStandby::BfdNeighbors::BfdNeighbor>();
        c->parent = this;
        bfd_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BfdNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bfd_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::BfdNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BfdNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BfdNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-neighbor")
        return true;
    return false;
}

MplsLcacStandby::BfdNeighbors::BfdNeighbor::BfdNeighbor()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "bfd-neighbor"; yang_parent_name = "bfd-neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BfdNeighbors::BfdNeighbor::~BfdNeighbor()
{
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bfd-neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-neighbor" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::BfdNeighbors::BfdNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BfdNeighbors::BfdNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "interface-name")
        return true;
    return false;
}

MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    is_bfd_up{YType::boolean, "is-bfd-up"}
{

    yang_name = "neighbor"; yang_parent_name = "bfd-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::~Neighbor()
{
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| is_bfd_up.is_set;
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(is_bfd_up.yfilter);
}

std::string MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (is_bfd_up.is_set || is_set(is_bfd_up.yfilter)) leaf_name_data.push_back(is_bfd_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-up")
    {
        is_bfd_up = value;
        is_bfd_up.value_namespace = name_space;
        is_bfd_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "is-bfd-up")
    {
        is_bfd_up.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-bfd-up")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccount()
    :
    bandwidth_account_links(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks>())
{
    bandwidth_account_links->parent = this;

    yang_name = "bandwidth-account"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAccount::~BandwidthAccount()
{
}

bool MplsLcacStandby::BandwidthAccount::has_data() const
{
    return (bandwidth_account_links !=  nullptr && bandwidth_account_links->has_data());
}

bool MplsLcacStandby::BandwidthAccount::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth_account_links !=  nullptr && bandwidth_account_links->has_operation());
}

std::string MplsLcacStandby::BandwidthAccount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAccount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-links")
    {
        if(bandwidth_account_links == nullptr)
        {
            bandwidth_account_links = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks>();
        }
        return bandwidth_account_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth_account_links != nullptr)
    {
        children["bandwidth-account-links"] = bandwidth_account_links;
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BandwidthAccount::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BandwidthAccount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-links")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLinks()
{

    yang_name = "bandwidth-account-links"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::~BandwidthAccountLinks()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::has_data() const
{
    for (std::size_t index=0; index<bandwidth_account_link.size(); index++)
    {
        if(bandwidth_account_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_account_link.size(); index++)
    {
        if(bandwidth_account_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-account/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-link")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink>();
        c->parent = this;
        bandwidth_account_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bandwidth_account_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-link")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::BandwidthAccountLink()
    :
    interface_name{YType::str, "interface-name"},
    link_id{YType::str, "link-id"}
    	,
    common_info(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo>())
	,rsvp_te_sample_history(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory>())
	,sr_sample_history(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory>())
{
    common_info->parent = this;
    rsvp_te_sample_history->parent = this;
    sr_sample_history->parent = this;

    yang_name = "bandwidth-account-link"; yang_parent_name = "bandwidth-account-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::~BandwidthAccountLink()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_data() const
{
    return interface_name.is_set
	|| link_id.is_set
	|| (common_info !=  nullptr && common_info->has_data())
	|| (rsvp_te_sample_history !=  nullptr && rsvp_te_sample_history->has_data())
	|| (sr_sample_history !=  nullptr && sr_sample_history->has_data());
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| (common_info !=  nullptr && common_info->has_operation())
	|| (rsvp_te_sample_history !=  nullptr && rsvp_te_sample_history->has_operation())
	|| (sr_sample_history !=  nullptr && sr_sample_history->has_operation());
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-account/bandwidth-account-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-info")
    {
        if(common_info == nullptr)
        {
            common_info = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo>();
        }
        return common_info;
    }

    if(child_yang_name == "rsvp-te-sample-history")
    {
        if(rsvp_te_sample_history == nullptr)
        {
            rsvp_te_sample_history = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory>();
        }
        return rsvp_te_sample_history;
    }

    if(child_yang_name == "sr-sample-history")
    {
        if(sr_sample_history == nullptr)
        {
            sr_sample_history = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory>();
        }
        return sr_sample_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(common_info != nullptr)
    {
        children["common-info"] = common_info;
    }

    if(rsvp_te_sample_history != nullptr)
    {
        children["rsvp-te-sample-history"] = rsvp_te_sample_history;
    }

    if(sr_sample_history != nullptr)
    {
        children["sr-sample-history"] = sr_sample_history;
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-info" || name == "rsvp-te-sample-history" || name == "sr-sample-history" || name == "interface-name" || name == "link-id")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::CommonInfo()
    :
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    application_enforced{YType::boolean, "application-enforced"},
    collection_type{YType::enumeration, "collection-type"},
    sample_time_remaining_timestamp_nanosec{YType::uint64, "sample-time-remaining-timestamp-nanosec"},
    last_sample_collection_timestamp_nanosec{YType::uint64, "last-sample-collection-timestamp-nanosec"},
    next_sample_collection_nanosec{YType::uint64, "next-sample-collection-nanosec"},
    application_time_remaining_nanosec{YType::uint64, "application-time-remaining-nanosec"},
    last_application_timestamp_nanosec{YType::uint64, "last-application-timestamp-nanosec"},
    next_application_timestamp_nanosec{YType::uint64, "next-application-timestamp-nanosec"},
    effective_maximum_reservable_bandwidth{YType::uint64, "effective-maximum-reservable-bandwidth"}
    	,
    rsvp_te_bandwidth_utilization(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization>())
	,sr_bandwidth_utilization(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization>())
{
    rsvp_te_bandwidth_utilization->parent = this;
    sr_bandwidth_utilization->parent = this;

    yang_name = "common-info"; yang_parent_name = "bandwidth-account-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::~CommonInfo()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_data() const
{
    return is_bandwidth_account_enabled.is_set
	|| application_enforced.is_set
	|| collection_type.is_set
	|| sample_time_remaining_timestamp_nanosec.is_set
	|| last_sample_collection_timestamp_nanosec.is_set
	|| next_sample_collection_nanosec.is_set
	|| application_time_remaining_nanosec.is_set
	|| last_application_timestamp_nanosec.is_set
	|| next_application_timestamp_nanosec.is_set
	|| effective_maximum_reservable_bandwidth.is_set
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_data())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_data());
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_account_enabled.yfilter)
	|| ydk::is_set(application_enforced.yfilter)
	|| ydk::is_set(collection_type.yfilter)
	|| ydk::is_set(sample_time_remaining_timestamp_nanosec.yfilter)
	|| ydk::is_set(last_sample_collection_timestamp_nanosec.yfilter)
	|| ydk::is_set(next_sample_collection_nanosec.yfilter)
	|| ydk::is_set(application_time_remaining_nanosec.yfilter)
	|| ydk::is_set(last_application_timestamp_nanosec.yfilter)
	|| ydk::is_set(next_application_timestamp_nanosec.yfilter)
	|| ydk::is_set(effective_maximum_reservable_bandwidth.yfilter)
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_operation())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_operation());
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.yfilter)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (application_enforced.is_set || is_set(application_enforced.yfilter)) leaf_name_data.push_back(application_enforced.get_name_leafdata());
    if (collection_type.is_set || is_set(collection_type.yfilter)) leaf_name_data.push_back(collection_type.get_name_leafdata());
    if (sample_time_remaining_timestamp_nanosec.is_set || is_set(sample_time_remaining_timestamp_nanosec.yfilter)) leaf_name_data.push_back(sample_time_remaining_timestamp_nanosec.get_name_leafdata());
    if (last_sample_collection_timestamp_nanosec.is_set || is_set(last_sample_collection_timestamp_nanosec.yfilter)) leaf_name_data.push_back(last_sample_collection_timestamp_nanosec.get_name_leafdata());
    if (next_sample_collection_nanosec.is_set || is_set(next_sample_collection_nanosec.yfilter)) leaf_name_data.push_back(next_sample_collection_nanosec.get_name_leafdata());
    if (application_time_remaining_nanosec.is_set || is_set(application_time_remaining_nanosec.yfilter)) leaf_name_data.push_back(application_time_remaining_nanosec.get_name_leafdata());
    if (last_application_timestamp_nanosec.is_set || is_set(last_application_timestamp_nanosec.yfilter)) leaf_name_data.push_back(last_application_timestamp_nanosec.get_name_leafdata());
    if (next_application_timestamp_nanosec.is_set || is_set(next_application_timestamp_nanosec.yfilter)) leaf_name_data.push_back(next_application_timestamp_nanosec.get_name_leafdata());
    if (effective_maximum_reservable_bandwidth.is_set || is_set(effective_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(effective_maximum_reservable_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-bandwidth-utilization")
    {
        if(rsvp_te_bandwidth_utilization == nullptr)
        {
            rsvp_te_bandwidth_utilization = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization>();
        }
        return rsvp_te_bandwidth_utilization;
    }

    if(child_yang_name == "sr-bandwidth-utilization")
    {
        if(sr_bandwidth_utilization == nullptr)
        {
            sr_bandwidth_utilization = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization>();
        }
        return sr_bandwidth_utilization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvp_te_bandwidth_utilization != nullptr)
    {
        children["rsvp-te-bandwidth-utilization"] = rsvp_te_bandwidth_utilization;
    }

    if(sr_bandwidth_utilization != nullptr)
    {
        children["sr-bandwidth-utilization"] = sr_bandwidth_utilization;
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
        is_bandwidth_account_enabled.value_namespace = name_space;
        is_bandwidth_account_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-enforced")
    {
        application_enforced = value;
        application_enforced.value_namespace = name_space;
        application_enforced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-type")
    {
        collection_type = value;
        collection_type.value_namespace = name_space;
        collection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-time-remaining-timestamp-nanosec")
    {
        sample_time_remaining_timestamp_nanosec = value;
        sample_time_remaining_timestamp_nanosec.value_namespace = name_space;
        sample_time_remaining_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sample-collection-timestamp-nanosec")
    {
        last_sample_collection_timestamp_nanosec = value;
        last_sample_collection_timestamp_nanosec.value_namespace = name_space;
        last_sample_collection_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-sample-collection-nanosec")
    {
        next_sample_collection_nanosec = value;
        next_sample_collection_nanosec.value_namespace = name_space;
        next_sample_collection_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-time-remaining-nanosec")
    {
        application_time_remaining_nanosec = value;
        application_time_remaining_nanosec.value_namespace = name_space;
        application_time_remaining_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-application-timestamp-nanosec")
    {
        last_application_timestamp_nanosec = value;
        last_application_timestamp_nanosec.value_namespace = name_space;
        last_application_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-application-timestamp-nanosec")
    {
        next_application_timestamp_nanosec = value;
        next_application_timestamp_nanosec.value_namespace = name_space;
        next_application_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-maximum-reservable-bandwidth")
    {
        effective_maximum_reservable_bandwidth = value;
        effective_maximum_reservable_bandwidth.value_namespace = name_space;
        effective_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled.yfilter = yfilter;
    }
    if(value_path == "application-enforced")
    {
        application_enforced.yfilter = yfilter;
    }
    if(value_path == "collection-type")
    {
        collection_type.yfilter = yfilter;
    }
    if(value_path == "sample-time-remaining-timestamp-nanosec")
    {
        sample_time_remaining_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "last-sample-collection-timestamp-nanosec")
    {
        last_sample_collection_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "next-sample-collection-nanosec")
    {
        next_sample_collection_nanosec.yfilter = yfilter;
    }
    if(value_path == "application-time-remaining-nanosec")
    {
        application_time_remaining_nanosec.yfilter = yfilter;
    }
    if(value_path == "last-application-timestamp-nanosec")
    {
        last_application_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "next-application-timestamp-nanosec")
    {
        next_application_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "effective-maximum-reservable-bandwidth")
    {
        effective_maximum_reservable_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-bandwidth-utilization" || name == "sr-bandwidth-utilization" || name == "is-bandwidth-account-enabled" || name == "application-enforced" || name == "collection-type" || name == "sample-time-remaining-timestamp-nanosec" || name == "last-sample-collection-timestamp-nanosec" || name == "next-sample-collection-nanosec" || name == "application-time-remaining-nanosec" || name == "last-application-timestamp-nanosec" || name == "next-application-timestamp-nanosec" || name == "effective-maximum-reservable-bandwidth")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::RsvpTeBandwidthUtilization()
    :
    total_link_bandwidth_utilization{YType::uint64, "total-link-bandwidth-utilization"},
    rsvp_te_bandwidth_utilization{YType::uint64, "rsvp-te-bandwidth-utilization"},
    non_rsvp_te_bandwidth_utilization{YType::uint64, "non-rsvp-te-bandwidth-utilization"},
    rsvp_te_adjusted_bandwidth_utilization{YType::uint64, "rsvp-te-adjusted-bandwidth-utilization"},
    rsvp_te_enforced_bandwidth_utilization{YType::uint64, "rsvp-te-enforced-bandwidth-utilization"}
{

    yang_name = "rsvp-te-bandwidth-utilization"; yang_parent_name = "common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::~RsvpTeBandwidthUtilization()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::has_data() const
{
    return total_link_bandwidth_utilization.is_set
	|| rsvp_te_bandwidth_utilization.is_set
	|| non_rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_adjusted_bandwidth_utilization.is_set
	|| rsvp_te_enforced_bandwidth_utilization.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_link_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(non_rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_enforced_bandwidth_utilization.yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_link_bandwidth_utilization.is_set || is_set(total_link_bandwidth_utilization.yfilter)) leaf_name_data.push_back(total_link_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_bandwidth_utilization.is_set || is_set(rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (non_rsvp_te_bandwidth_utilization.is_set || is_set(non_rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_adjusted_bandwidth_utilization.is_set || is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_adjusted_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_enforced_bandwidth_utilization.is_set || is_set(rsvp_te_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_enforced_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization = value;
        total_link_bandwidth_utilization.value_namespace = name_space;
        total_link_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization = value;
        rsvp_te_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization = value;
        non_rsvp_te_bandwidth_utilization.value_namespace = name_space;
        non_rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization = value;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization = value;
        rsvp_te_enforced_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_enforced_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-link-bandwidth-utilization" || name == "rsvp-te-bandwidth-utilization" || name == "non-rsvp-te-bandwidth-utilization" || name == "rsvp-te-adjusted-bandwidth-utilization" || name == "rsvp-te-enforced-bandwidth-utilization")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::SrBandwidthUtilization()
    :
    sr_bandwidth_utilization{YType::uint64, "sr-bandwidth-utilization"},
    sr_adjusted_bandwidth_utilization{YType::uint64, "sr-adjusted-bandwidth-utilization"},
    sr_enforced_bandwidth_utilization{YType::uint64, "sr-enforced-bandwidth-utilization"}
{

    yang_name = "sr-bandwidth-utilization"; yang_parent_name = "common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::~SrBandwidthUtilization()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::has_data() const
{
    return sr_bandwidth_utilization.is_set
	|| sr_adjusted_bandwidth_utilization.is_set
	|| sr_enforced_bandwidth_utilization.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_enforced_bandwidth_utilization.yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_bandwidth_utilization.is_set || is_set(sr_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_bandwidth_utilization.get_name_leafdata());
    if (sr_adjusted_bandwidth_utilization.is_set || is_set(sr_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_adjusted_bandwidth_utilization.get_name_leafdata());
    if (sr_enforced_bandwidth_utilization.is_set || is_set(sr_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_enforced_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-bandwidth-utilization")
    {
        sr_bandwidth_utilization = value;
        sr_bandwidth_utilization.value_namespace = name_space;
        sr_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-adjusted-bandwidth-utilization")
    {
        sr_adjusted_bandwidth_utilization = value;
        sr_adjusted_bandwidth_utilization.value_namespace = name_space;
        sr_adjusted_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-enforced-bandwidth-utilization")
    {
        sr_enforced_bandwidth_utilization = value;
        sr_enforced_bandwidth_utilization.value_namespace = name_space;
        sr_enforced_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-bandwidth-utilization")
    {
        sr_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "sr-adjusted-bandwidth-utilization")
    {
        sr_adjusted_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "sr-enforced-bandwidth-utilization")
    {
        sr_enforced_bandwidth_utilization.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-bandwidth-utilization" || name == "sr-adjusted-bandwidth-utilization" || name == "sr-enforced-bandwidth-utilization")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeSampleHistory()
{

    yang_name = "rsvp-te-sample-history"; yang_parent_name = "bandwidth-account-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::~RsvpTeSampleHistory()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::has_data() const
{
    for (std::size_t index=0; index<rsvp_te_active_interval_sample.size(); index++)
    {
        if(rsvp_te_active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsvp_te_previous_interval_sample.size(); index++)
    {
        if(rsvp_te_previous_interval_sample[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<rsvp_te_active_interval_sample.size(); index++)
    {
        if(rsvp_te_active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsvp_te_previous_interval_sample.size(); index++)
    {
        if(rsvp_te_previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-active-interval-sample")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample>();
        c->parent = this;
        rsvp_te_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "rsvp-te-previous-interval-sample")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample>();
        c->parent = this;
        rsvp_te_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rsvp_te_active_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : rsvp_te_previous_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-active-interval-sample" || name == "rsvp-te-previous-interval-sample")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::RsvpTeActiveIntervalSample()
    :
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"},
    total_rate{YType::uint64, "total-rate"},
    total_packet_rate{YType::uint64, "total-packet-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    rsvp_te_packet_rate{YType::uint64, "rsvp-te-packet-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    non_rsvp_te_packet_rate{YType::uint64, "non-rsvp-te-packet-rate"}
{

    yang_name = "rsvp-te-active-interval-sample"; yang_parent_name = "rsvp-te-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::~RsvpTeActiveIntervalSample()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::has_data() const
{
    return timestamp_nanosec.is_set
	|| total_rate.is_set
	|| total_packet_rate.is_set
	|| rsvp_te_rate.is_set
	|| rsvp_te_packet_rate.is_set
	|| non_rsvp_te_rate.is_set
	|| non_rsvp_te_packet_rate.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter)
	|| ydk::is_set(total_rate.yfilter)
	|| ydk::is_set(total_packet_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(rsvp_te_packet_rate.yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter)
	|| ydk::is_set(non_rsvp_te_packet_rate.yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());
    if (total_packet_rate.is_set || is_set(total_packet_rate.yfilter)) leaf_name_data.push_back(total_packet_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_packet_rate.is_set || is_set(rsvp_te_packet_rate.yfilter)) leaf_name_data.push_back(rsvp_te_packet_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (non_rsvp_te_packet_rate.is_set || is_set(non_rsvp_te_packet_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_packet_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec = value;
        timestamp_nanosec.value_namespace = name_space;
        timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
        total_rate.value_namespace = name_space;
        total_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate = value;
        total_packet_rate.value_namespace = name_space;
        total_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
        rsvp_te_rate.value_namespace = name_space;
        rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate = value;
        rsvp_te_packet_rate.value_namespace = name_space;
        rsvp_te_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
        non_rsvp_te_rate.value_namespace = name_space;
        non_rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate = value;
        non_rsvp_te_packet_rate.value_namespace = name_space;
        non_rsvp_te_packet_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "total-rate")
    {
        total_rate.yfilter = yfilter;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate.yfilter = yfilter;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp-nanosec" || name == "total-rate" || name == "total-packet-rate" || name == "rsvp-te-rate" || name == "rsvp-te-packet-rate" || name == "non-rsvp-te-rate" || name == "non-rsvp-te-packet-rate")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::RsvpTePreviousIntervalSample()
    :
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"},
    total_rate{YType::uint64, "total-rate"},
    total_packet_rate{YType::uint64, "total-packet-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    rsvp_te_packet_rate{YType::uint64, "rsvp-te-packet-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    non_rsvp_te_packet_rate{YType::uint64, "non-rsvp-te-packet-rate"}
{

    yang_name = "rsvp-te-previous-interval-sample"; yang_parent_name = "rsvp-te-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::~RsvpTePreviousIntervalSample()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::has_data() const
{
    return timestamp_nanosec.is_set
	|| total_rate.is_set
	|| total_packet_rate.is_set
	|| rsvp_te_rate.is_set
	|| rsvp_te_packet_rate.is_set
	|| non_rsvp_te_rate.is_set
	|| non_rsvp_te_packet_rate.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter)
	|| ydk::is_set(total_rate.yfilter)
	|| ydk::is_set(total_packet_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(rsvp_te_packet_rate.yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter)
	|| ydk::is_set(non_rsvp_te_packet_rate.yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());
    if (total_packet_rate.is_set || is_set(total_packet_rate.yfilter)) leaf_name_data.push_back(total_packet_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_packet_rate.is_set || is_set(rsvp_te_packet_rate.yfilter)) leaf_name_data.push_back(rsvp_te_packet_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (non_rsvp_te_packet_rate.is_set || is_set(non_rsvp_te_packet_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_packet_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec = value;
        timestamp_nanosec.value_namespace = name_space;
        timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
        total_rate.value_namespace = name_space;
        total_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate = value;
        total_packet_rate.value_namespace = name_space;
        total_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
        rsvp_te_rate.value_namespace = name_space;
        rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate = value;
        rsvp_te_packet_rate.value_namespace = name_space;
        rsvp_te_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
        non_rsvp_te_rate.value_namespace = name_space;
        non_rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate = value;
        non_rsvp_te_packet_rate.value_namespace = name_space;
        non_rsvp_te_packet_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "total-rate")
    {
        total_rate.yfilter = yfilter;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate.yfilter = yfilter;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp-nanosec" || name == "total-rate" || name == "total-packet-rate" || name == "rsvp-te-rate" || name == "rsvp-te-packet-rate" || name == "non-rsvp-te-rate" || name == "non-rsvp-te-packet-rate")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrSampleHistory()
{

    yang_name = "sr-sample-history"; yang_parent_name = "bandwidth-account-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::~SrSampleHistory()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::has_data() const
{
    for (std::size_t index=0; index<sr_active_interval_sample.size(); index++)
    {
        if(sr_active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_previous_interval_sample.size(); index++)
    {
        if(sr_previous_interval_sample[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<sr_active_interval_sample.size(); index++)
    {
        if(sr_active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_previous_interval_sample.size(); index++)
    {
        if(sr_previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-active-interval-sample")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample>();
        c->parent = this;
        sr_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-previous-interval-sample")
    {
        auto c = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample>();
        c->parent = this;
        sr_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sr_active_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : sr_previous_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-active-interval-sample" || name == "sr-previous-interval-sample")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::SrActiveIntervalSample()
    :
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"},
    sr_rate{YType::uint64, "sr-rate"},
    sr_packet_rate{YType::uint64, "sr-packet-rate"}
{

    yang_name = "sr-active-interval-sample"; yang_parent_name = "sr-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::~SrActiveIntervalSample()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::has_data() const
{
    return timestamp_nanosec.is_set
	|| sr_rate.is_set
	|| sr_packet_rate.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter)
	|| ydk::is_set(sr_rate.yfilter)
	|| ydk::is_set(sr_packet_rate.yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());
    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());
    if (sr_packet_rate.is_set || is_set(sr_packet_rate.yfilter)) leaf_name_data.push_back(sr_packet_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec = value;
        timestamp_nanosec.value_namespace = name_space;
        timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-rate")
    {
        sr_rate = value;
        sr_rate.value_namespace = name_space;
        sr_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-packet-rate")
    {
        sr_packet_rate = value;
        sr_packet_rate.value_namespace = name_space;
        sr_packet_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "sr-rate")
    {
        sr_rate.yfilter = yfilter;
    }
    if(value_path == "sr-packet-rate")
    {
        sr_packet_rate.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp-nanosec" || name == "sr-rate" || name == "sr-packet-rate")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::SrPreviousIntervalSample()
    :
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"},
    sr_rate{YType::uint64, "sr-rate"},
    sr_packet_rate{YType::uint64, "sr-packet-rate"}
{

    yang_name = "sr-previous-interval-sample"; yang_parent_name = "sr-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::~SrPreviousIntervalSample()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::has_data() const
{
    return timestamp_nanosec.is_set
	|| sr_rate.is_set
	|| sr_packet_rate.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter)
	|| ydk::is_set(sr_rate.yfilter)
	|| ydk::is_set(sr_packet_rate.yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());
    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());
    if (sr_packet_rate.is_set || is_set(sr_packet_rate.yfilter)) leaf_name_data.push_back(sr_packet_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec = value;
        timestamp_nanosec.value_namespace = name_space;
        timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-rate")
    {
        sr_rate = value;
        sr_rate.value_namespace = name_space;
        sr_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-packet-rate")
    {
        sr_packet_rate = value;
        sr_packet_rate.value_namespace = name_space;
        sr_packet_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "sr-rate")
    {
        sr_rate.yfilter = yfilter;
    }
    if(value_path == "sr-packet-rate")
    {
        sr_packet_rate.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp-nanosec" || name == "sr-rate" || name == "sr-packet-rate")
        return true;
    return false;
}

MplsLcacStandby::LinkSummary::LinkSummary()
    :
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    maximum_links{YType::uint16, "maximum-links"},
    is_flooding_enabled{YType::boolean, "is-flooding-enabled"}
    	,
    bandwidth_account_summary(std::make_shared<MplsLcacStandby::LinkSummary::BandwidthAccountSummary>())
{
    bandwidth_account_summary->parent = this;

    yang_name = "link-summary"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkSummary::~LinkSummary()
{
}

bool MplsLcacStandby::LinkSummary::has_data() const
{
    for (std::size_t index=0; index<areas_summary.size(); index++)
    {
        if(areas_summary[index]->has_data())
            return true;
    }
    return is_role_standby.is_set
	|| links.is_set
	|| maximum_links.is_set
	|| is_flooding_enabled.is_set
	|| (bandwidth_account_summary !=  nullptr && bandwidth_account_summary->has_data());
}

bool MplsLcacStandby::LinkSummary::has_operation() const
{
    for (std::size_t index=0; index<areas_summary.size(); index++)
    {
        if(areas_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(maximum_links.yfilter)
	|| ydk::is_set(is_flooding_enabled.yfilter)
	|| (bandwidth_account_summary !=  nullptr && bandwidth_account_summary->has_operation());
}

std::string MplsLcacStandby::LinkSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (maximum_links.is_set || is_set(maximum_links.yfilter)) leaf_name_data.push_back(maximum_links.get_name_leafdata());
    if (is_flooding_enabled.is_set || is_set(is_flooding_enabled.yfilter)) leaf_name_data.push_back(is_flooding_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-summary")
    {
        if(bandwidth_account_summary == nullptr)
        {
            bandwidth_account_summary = std::make_shared<MplsLcacStandby::LinkSummary::BandwidthAccountSummary>();
        }
        return bandwidth_account_summary;
    }

    if(child_yang_name == "areas-summary")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkSummary::AreasSummary>();
        c->parent = this;
        areas_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth_account_summary != nullptr)
    {
        children["bandwidth-account-summary"] = bandwidth_account_summary;
    }

    count = 0;
    for (auto const & c : areas_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::LinkSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-links")
    {
        maximum_links = value;
        maximum_links.value_namespace = name_space;
        maximum_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flooding-enabled")
    {
        is_flooding_enabled = value;
        is_flooding_enabled.value_namespace = name_space;
        is_flooding_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "maximum-links")
    {
        maximum_links.yfilter = yfilter;
    }
    if(value_path == "is-flooding-enabled")
    {
        is_flooding_enabled.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-summary" || name == "areas-summary" || name == "is-role-standby" || name == "links" || name == "maximum-links" || name == "is-flooding-enabled")
        return true;
    return false;
}

MplsLcacStandby::LinkSummary::BandwidthAccountSummary::BandwidthAccountSummary()
    :
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_time_remaining{YType::uint32, "sample-time-remaining"},
    application_interval{YType::uint32, "application-interval"},
    application_time_remaining{YType::uint32, "application-time-remaining"}
{

    yang_name = "bandwidth-account-summary"; yang_parent_name = "link-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkSummary::BandwidthAccountSummary::~BandwidthAccountSummary()
{
}

bool MplsLcacStandby::LinkSummary::BandwidthAccountSummary::has_data() const
{
    return is_bandwidth_account_enabled.is_set
	|| sample_interval.is_set
	|| sample_time_remaining.is_set
	|| application_interval.is_set
	|| application_time_remaining.is_set;
}

bool MplsLcacStandby::LinkSummary::BandwidthAccountSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_account_enabled.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_time_remaining.yfilter)
	|| ydk::is_set(application_interval.yfilter)
	|| ydk::is_set(application_time_remaining.yfilter);
}

std::string MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.yfilter)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_time_remaining.is_set || is_set(sample_time_remaining.yfilter)) leaf_name_data.push_back(sample_time_remaining.get_name_leafdata());
    if (application_interval.is_set || is_set(application_interval.yfilter)) leaf_name_data.push_back(application_interval.get_name_leafdata());
    if (application_time_remaining.is_set || is_set(application_time_remaining.yfilter)) leaf_name_data.push_back(application_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkSummary::BandwidthAccountSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
        is_bandwidth_account_enabled.value_namespace = name_space;
        is_bandwidth_account_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining = value;
        sample_time_remaining.value_namespace = name_space;
        sample_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-interval")
    {
        application_interval = value;
        application_interval.value_namespace = name_space;
        application_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining = value;
        application_time_remaining.value_namespace = name_space;
        application_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkSummary::BandwidthAccountSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining.yfilter = yfilter;
    }
    if(value_path == "application-interval")
    {
        application_interval.yfilter = yfilter;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkSummary::BandwidthAccountSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-account-enabled" || name == "sample-interval" || name == "sample-time-remaining" || name == "application-interval" || name == "application-time-remaining")
        return true;
    return false;
}

MplsLcacStandby::LinkSummary::AreasSummary::AreasSummary()
    :
    area_id{YType::str, "area-id"},
    protocol{YType::enumeration, "protocol"},
    is_flooded{YType::boolean, "is-flooded"},
    is_periodic_flooding_on{YType::boolean, "is-periodic-flooding-on"},
    periodic_flooding_interval{YType::uint16, "periodic-flooding-interval"},
    links_flooded{YType::uint16, "links-flooded"},
    system_id{YType::str, "system-id"},
    local_node_router_id{YType::str, "local-node-router-id"},
    igp_neighbors{YType::uint16, "igp-neighbors"}
{

    yang_name = "areas-summary"; yang_parent_name = "link-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkSummary::AreasSummary::~AreasSummary()
{
}

bool MplsLcacStandby::LinkSummary::AreasSummary::has_data() const
{
    return area_id.is_set
	|| protocol.is_set
	|| is_flooded.is_set
	|| is_periodic_flooding_on.is_set
	|| periodic_flooding_interval.is_set
	|| links_flooded.is_set
	|| system_id.is_set
	|| local_node_router_id.is_set
	|| igp_neighbors.is_set;
}

bool MplsLcacStandby::LinkSummary::AreasSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(is_flooded.yfilter)
	|| ydk::is_set(is_periodic_flooding_on.yfilter)
	|| ydk::is_set(periodic_flooding_interval.yfilter)
	|| ydk::is_set(links_flooded.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(local_node_router_id.yfilter)
	|| ydk::is_set(igp_neighbors.yfilter);
}

std::string MplsLcacStandby::LinkSummary::AreasSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkSummary::AreasSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkSummary::AreasSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (is_flooded.is_set || is_set(is_flooded.yfilter)) leaf_name_data.push_back(is_flooded.get_name_leafdata());
    if (is_periodic_flooding_on.is_set || is_set(is_periodic_flooding_on.yfilter)) leaf_name_data.push_back(is_periodic_flooding_on.get_name_leafdata());
    if (periodic_flooding_interval.is_set || is_set(periodic_flooding_interval.yfilter)) leaf_name_data.push_back(periodic_flooding_interval.get_name_leafdata());
    if (links_flooded.is_set || is_set(links_flooded.yfilter)) leaf_name_data.push_back(links_flooded.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (local_node_router_id.is_set || is_set(local_node_router_id.yfilter)) leaf_name_data.push_back(local_node_router_id.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.yfilter)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkSummary::AreasSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkSummary::AreasSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkSummary::AreasSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flooded")
    {
        is_flooded = value;
        is_flooded.value_namespace = name_space;
        is_flooded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-periodic-flooding-on")
    {
        is_periodic_flooding_on = value;
        is_periodic_flooding_on.value_namespace = name_space;
        is_periodic_flooding_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-flooding-interval")
    {
        periodic_flooding_interval = value;
        periodic_flooding_interval.value_namespace = name_space;
        periodic_flooding_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links-flooded")
    {
        links_flooded = value;
        links_flooded.value_namespace = name_space;
        links_flooded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node-router-id")
    {
        local_node_router_id = value;
        local_node_router_id.value_namespace = name_space;
        local_node_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
        igp_neighbors.value_namespace = name_space;
        igp_neighbors.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkSummary::AreasSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "is-flooded")
    {
        is_flooded.yfilter = yfilter;
    }
    if(value_path == "is-periodic-flooding-on")
    {
        is_periodic_flooding_on.yfilter = yfilter;
    }
    if(value_path == "periodic-flooding-interval")
    {
        periodic_flooding_interval.yfilter = yfilter;
    }
    if(value_path == "links-flooded")
    {
        links_flooded.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "local-node-router-id")
    {
        local_node_router_id.yfilter = yfilter;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkSummary::AreasSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "protocol" || name == "is-flooded" || name == "is-periodic-flooding-on" || name == "periodic-flooding-interval" || name == "links-flooded" || name == "system-id" || name == "local-node-router-id" || name == "igp-neighbors")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::LinkInformation()
    :
    global(std::make_shared<MplsLcacStandby::LinkInformation::Global>())
	,links(std::make_shared<MplsLcacStandby::LinkInformation::Links>())
{
    global->parent = this;
    links->parent = this;

    yang_name = "link-information"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkInformation::~LinkInformation()
{
}

bool MplsLcacStandby::LinkInformation::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (links !=  nullptr && links->has_data());
}

bool MplsLcacStandby::LinkInformation::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (links !=  nullptr && links->has_operation());
}

std::string MplsLcacStandby::LinkInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLcacStandby::LinkInformation::Global>();
        }
        return global;
    }

    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<MplsLcacStandby::LinkInformation::Links>();
        }
        return links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(links != nullptr)
    {
        children["links"] = links;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::LinkInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::LinkInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "links")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Global::Global()
    :
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    maximum_links{YType::uint16, "maximum-links"}
{

    yang_name = "global"; yang_parent_name = "link-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkInformation::Global::~Global()
{
}

bool MplsLcacStandby::LinkInformation::Global::has_data() const
{
    return is_role_standby.is_set
	|| links.is_set
	|| maximum_links.is_set;
}

bool MplsLcacStandby::LinkInformation::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(maximum_links.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkInformation::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (maximum_links.is_set || is_set(maximum_links.yfilter)) leaf_name_data.push_back(maximum_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-links")
    {
        maximum_links = value;
        maximum_links.value_namespace = name_space;
        maximum_links.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "maximum-links")
    {
        maximum_links.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-role-standby" || name == "links" || name == "maximum-links")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Links()
{

    yang_name = "links"; yang_parent_name = "link-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkInformation::Links::~Links()
{
}

bool MplsLcacStandby::LinkInformation::Links::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::LinkInformation::Links::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkInformation::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::LinkInformation::Links::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::LinkInformation::Links::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::Link()
    :
    interface_name{YType::str, "interface-name"},
    reason_not_flooded{YType::str, "reason-not-flooded"},
    maximum_reservation_bandwidth_rdm{YType::uint64, "maximum-reservation-bandwidth-rdm"},
    reservable_pool0_bandwidth_rdm{YType::uint64, "reservable-pool0-bandwidth-rdm"},
    reservable_pool1_bandwidth_rdm{YType::uint64, "reservable-pool1-bandwidth-rdm"},
    maximum_reservation_bandwidth_mam{YType::uint64, "maximum-reservation-bandwidth-mam"},
    reservable_pool0_bandwidth_mam{YType::uint64, "reservable-pool0-bandwidth-mam"},
    reservable_pool1_bandwidth_mam{YType::uint64, "reservable-pool1-bandwidth-mam"},
    link_attributes{YType::uint32, "link-attributes"},
    is_attribute_incomplete{YType::boolean, "is-attribute-incomplete"},
    is_name_based_attribute{YType::boolean, "is-name-based-attribute"},
    te_metric{YType::uint32, "te-metric"},
    is_te_metric_valid{YType::boolean, "is-te-metric-valid"}
    	,
    link_common(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon>())
	,bandwidth_account(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount>())
	,hw_oor(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::HwOor>())
{
    link_common->parent = this;
    bandwidth_account->parent = this;
    hw_oor->parent = this;

    yang_name = "link"; yang_parent_name = "links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::LinkInformation::Links::Link::~Link()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::has_data() const
{
    for (std::size_t index=0; index<link_extended_attribute.size(); index++)
    {
        if(link_extended_attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link_forwad_ref_value.size(); index++)
    {
        if(link_forwad_ref_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<affinity_map.size(); index++)
    {
        if(affinity_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lockout.size(); index++)
    {
        if(lockout[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| reason_not_flooded.is_set
	|| maximum_reservation_bandwidth_rdm.is_set
	|| reservable_pool0_bandwidth_rdm.is_set
	|| reservable_pool1_bandwidth_rdm.is_set
	|| maximum_reservation_bandwidth_mam.is_set
	|| reservable_pool0_bandwidth_mam.is_set
	|| reservable_pool1_bandwidth_mam.is_set
	|| link_attributes.is_set
	|| is_attribute_incomplete.is_set
	|| is_name_based_attribute.is_set
	|| te_metric.is_set
	|| is_te_metric_valid.is_set
	|| (link_common !=  nullptr && link_common->has_data())
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_data())
	|| (hw_oor !=  nullptr && hw_oor->has_data());
}

bool MplsLcacStandby::LinkInformation::Links::Link::has_operation() const
{
    for (std::size_t index=0; index<link_extended_attribute.size(); index++)
    {
        if(link_extended_attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link_forwad_ref_value.size(); index++)
    {
        if(link_forwad_ref_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<affinity_map.size(); index++)
    {
        if(affinity_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lockout.size(); index++)
    {
        if(lockout[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(reason_not_flooded.yfilter)
	|| ydk::is_set(maximum_reservation_bandwidth_rdm.yfilter)
	|| ydk::is_set(reservable_pool0_bandwidth_rdm.yfilter)
	|| ydk::is_set(reservable_pool1_bandwidth_rdm.yfilter)
	|| ydk::is_set(maximum_reservation_bandwidth_mam.yfilter)
	|| ydk::is_set(reservable_pool0_bandwidth_mam.yfilter)
	|| ydk::is_set(reservable_pool1_bandwidth_mam.yfilter)
	|| ydk::is_set(link_attributes.yfilter)
	|| ydk::is_set(is_attribute_incomplete.yfilter)
	|| ydk::is_set(is_name_based_attribute.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(is_te_metric_valid.yfilter)
	|| (link_common !=  nullptr && link_common->has_operation())
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_operation())
	|| (hw_oor !=  nullptr && hw_oor->has_operation());
}

std::string MplsLcacStandby::LinkInformation::Links::Link::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-information/links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::LinkInformation::Links::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (reason_not_flooded.is_set || is_set(reason_not_flooded.yfilter)) leaf_name_data.push_back(reason_not_flooded.get_name_leafdata());
    if (maximum_reservation_bandwidth_rdm.is_set || is_set(maximum_reservation_bandwidth_rdm.yfilter)) leaf_name_data.push_back(maximum_reservation_bandwidth_rdm.get_name_leafdata());
    if (reservable_pool0_bandwidth_rdm.is_set || is_set(reservable_pool0_bandwidth_rdm.yfilter)) leaf_name_data.push_back(reservable_pool0_bandwidth_rdm.get_name_leafdata());
    if (reservable_pool1_bandwidth_rdm.is_set || is_set(reservable_pool1_bandwidth_rdm.yfilter)) leaf_name_data.push_back(reservable_pool1_bandwidth_rdm.get_name_leafdata());
    if (maximum_reservation_bandwidth_mam.is_set || is_set(maximum_reservation_bandwidth_mam.yfilter)) leaf_name_data.push_back(maximum_reservation_bandwidth_mam.get_name_leafdata());
    if (reservable_pool0_bandwidth_mam.is_set || is_set(reservable_pool0_bandwidth_mam.yfilter)) leaf_name_data.push_back(reservable_pool0_bandwidth_mam.get_name_leafdata());
    if (reservable_pool1_bandwidth_mam.is_set || is_set(reservable_pool1_bandwidth_mam.yfilter)) leaf_name_data.push_back(reservable_pool1_bandwidth_mam.get_name_leafdata());
    if (link_attributes.is_set || is_set(link_attributes.yfilter)) leaf_name_data.push_back(link_attributes.get_name_leafdata());
    if (is_attribute_incomplete.is_set || is_set(is_attribute_incomplete.yfilter)) leaf_name_data.push_back(is_attribute_incomplete.get_name_leafdata());
    if (is_name_based_attribute.is_set || is_set(is_name_based_attribute.yfilter)) leaf_name_data.push_back(is_name_based_attribute.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (is_te_metric_valid.is_set || is_set(is_te_metric_valid.yfilter)) leaf_name_data.push_back(is_te_metric_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-common")
    {
        if(link_common == nullptr)
        {
            link_common = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon>();
        }
        return link_common;
    }

    if(child_yang_name == "bandwidth-account")
    {
        if(bandwidth_account == nullptr)
        {
            bandwidth_account = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount>();
        }
        return bandwidth_account;
    }

    if(child_yang_name == "hw-oor")
    {
        if(hw_oor == nullptr)
        {
            hw_oor = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::HwOor>();
        }
        return hw_oor;
    }

    if(child_yang_name == "link-extended-attribute")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute>();
        c->parent = this;
        link_extended_attribute.push_back(c);
        return c;
    }

    if(child_yang_name == "link-forwad-ref-value")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue>();
        c->parent = this;
        link_forwad_ref_value.push_back(c);
        return c;
    }

    if(child_yang_name == "affinity-map")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::AffinityMap>();
        c->parent = this;
        affinity_map.push_back(c);
        return c;
    }

    if(child_yang_name == "areas")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::Areas>();
        c->parent = this;
        areas.push_back(c);
        return c;
    }

    if(child_yang_name == "lockout")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::Lockout>();
        c->parent = this;
        lockout.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_common != nullptr)
    {
        children["link-common"] = link_common;
    }

    if(bandwidth_account != nullptr)
    {
        children["bandwidth-account"] = bandwidth_account;
    }

    if(hw_oor != nullptr)
    {
        children["hw-oor"] = hw_oor;
    }

    count = 0;
    for (auto const & c : link_extended_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : link_forwad_ref_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : affinity_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : lockout)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason-not-flooded")
    {
        reason_not_flooded = value;
        reason_not_flooded.value_namespace = name_space;
        reason_not_flooded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservation-bandwidth-rdm")
    {
        maximum_reservation_bandwidth_rdm = value;
        maximum_reservation_bandwidth_rdm.value_namespace = name_space;
        maximum_reservation_bandwidth_rdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool0-bandwidth-rdm")
    {
        reservable_pool0_bandwidth_rdm = value;
        reservable_pool0_bandwidth_rdm.value_namespace = name_space;
        reservable_pool0_bandwidth_rdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool1-bandwidth-rdm")
    {
        reservable_pool1_bandwidth_rdm = value;
        reservable_pool1_bandwidth_rdm.value_namespace = name_space;
        reservable_pool1_bandwidth_rdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservation-bandwidth-mam")
    {
        maximum_reservation_bandwidth_mam = value;
        maximum_reservation_bandwidth_mam.value_namespace = name_space;
        maximum_reservation_bandwidth_mam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool0-bandwidth-mam")
    {
        reservable_pool0_bandwidth_mam = value;
        reservable_pool0_bandwidth_mam.value_namespace = name_space;
        reservable_pool0_bandwidth_mam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool1-bandwidth-mam")
    {
        reservable_pool1_bandwidth_mam = value;
        reservable_pool1_bandwidth_mam.value_namespace = name_space;
        reservable_pool1_bandwidth_mam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-attributes")
    {
        link_attributes = value;
        link_attributes.value_namespace = name_space;
        link_attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-incomplete")
    {
        is_attribute_incomplete = value;
        is_attribute_incomplete.value_namespace = name_space;
        is_attribute_incomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-name-based-attribute")
    {
        is_name_based_attribute = value;
        is_name_based_attribute.value_namespace = name_space;
        is_name_based_attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-metric-valid")
    {
        is_te_metric_valid = value;
        is_te_metric_valid.value_namespace = name_space;
        is_te_metric_valid.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "reason-not-flooded")
    {
        reason_not_flooded.yfilter = yfilter;
    }
    if(value_path == "maximum-reservation-bandwidth-rdm")
    {
        maximum_reservation_bandwidth_rdm.yfilter = yfilter;
    }
    if(value_path == "reservable-pool0-bandwidth-rdm")
    {
        reservable_pool0_bandwidth_rdm.yfilter = yfilter;
    }
    if(value_path == "reservable-pool1-bandwidth-rdm")
    {
        reservable_pool1_bandwidth_rdm.yfilter = yfilter;
    }
    if(value_path == "maximum-reservation-bandwidth-mam")
    {
        maximum_reservation_bandwidth_mam.yfilter = yfilter;
    }
    if(value_path == "reservable-pool0-bandwidth-mam")
    {
        reservable_pool0_bandwidth_mam.yfilter = yfilter;
    }
    if(value_path == "reservable-pool1-bandwidth-mam")
    {
        reservable_pool1_bandwidth_mam.yfilter = yfilter;
    }
    if(value_path == "link-attributes")
    {
        link_attributes.yfilter = yfilter;
    }
    if(value_path == "is-attribute-incomplete")
    {
        is_attribute_incomplete.yfilter = yfilter;
    }
    if(value_path == "is-name-based-attribute")
    {
        is_name_based_attribute.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "is-te-metric-valid")
    {
        is_te_metric_valid.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-common" || name == "bandwidth-account" || name == "hw-oor" || name == "link-extended-attribute" || name == "link-forwad-ref-value" || name == "affinity-map" || name == "areas" || name == "lockout" || name == "interface-name" || name == "reason-not-flooded" || name == "maximum-reservation-bandwidth-rdm" || name == "reservable-pool0-bandwidth-rdm" || name == "reservable-pool1-bandwidth-rdm" || name == "maximum-reservation-bandwidth-mam" || name == "reservable-pool0-bandwidth-mam" || name == "reservable-pool1-bandwidth-mam" || name == "link-attributes" || name == "is-attribute-incomplete" || name == "is-name-based-attribute" || name == "te-metric" || name == "is-te-metric-valid")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkCommon()
    :
    link_id{YType::str, "link-id"},
    link_address{YType::str, "link-address"},
    is_unnumbered{YType::boolean, "is-unnumbered"},
    has_protection{YType::boolean, "has-protection"},
    capability{YType::uint32, "capability"},
    working_priority{YType::uint32, "working-priority"},
    resource_provider{YType::enumeration, "resource-provider"},
    is_resource_provider_installed{YType::boolean, "is-resource-provider-installed"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    physical_bandwidth{YType::uint64, "physical-bandwidth"},
    bcm_id{YType::uint16, "bcm-id"},
    maximum_reservable_bandwidth{YType::uint64, "maximum-reservable-bandwidth"},
    last_flooded_effective_maximum_reservable_bandwidth{YType::uint64, "last-flooded-effective-maximum-reservable-bandwidth"},
    incoming_reservable_bandwidth_percentage{YType::uint8, "incoming-reservable-bandwidth-percentage"},
    outgoing_reservable_bandwidth_percentage{YType::uint8, "outgoing-reservable-bandwidth-percentage"},
    maximum_reservable_pool0_bandwidth{YType::uint64, "maximum-reservable-pool0-bandwidth"},
    incoming_reservable_pool0_bandwidth_percentage{YType::uint8, "incoming-reservable-pool0-bandwidth-percentage"},
    outgoing_reservable_pool0_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool0-bandwidth-percentage"},
    maximum_reservable_pool1_bandwidth{YType::uint64, "maximum-reservable-pool1-bandwidth"},
    incoming_reservable_pool1_bandwidth_percentage{YType::uint8, "incoming-reservable-pool1-bandwidth-percentage"},
    outgoing_reservable_pool1_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool1-bandwidth-percentage"},
    inbound_admission_method{YType::enumeration, "inbound-admission-method"},
    outbound_admission_method{YType::enumeration, "outbound-admission-method"},
    igp_neighbors{YType::uint16, "igp-neighbors"}
    	,
    link_flags(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags>())
{
    link_flags->parent = this;

    yang_name = "link-common"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::~LinkCommon()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::has_data() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_address.is_set
	|| is_unnumbered.is_set
	|| has_protection.is_set
	|| capability.is_set
	|| working_priority.is_set
	|| resource_provider.is_set
	|| is_resource_provider_installed.is_set
	|| bandwidth_units.is_set
	|| physical_bandwidth.is_set
	|| bcm_id.is_set
	|| maximum_reservable_bandwidth.is_set
	|| last_flooded_effective_maximum_reservable_bandwidth.is_set
	|| incoming_reservable_bandwidth_percentage.is_set
	|| outgoing_reservable_bandwidth_percentage.is_set
	|| maximum_reservable_pool0_bandwidth.is_set
	|| incoming_reservable_pool0_bandwidth_percentage.is_set
	|| outgoing_reservable_pool0_bandwidth_percentage.is_set
	|| maximum_reservable_pool1_bandwidth.is_set
	|| incoming_reservable_pool1_bandwidth_percentage.is_set
	|| outgoing_reservable_pool1_bandwidth_percentage.is_set
	|| inbound_admission_method.is_set
	|| outbound_admission_method.is_set
	|| igp_neighbors.is_set
	|| (link_flags !=  nullptr && link_flags->has_data());
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::has_operation() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(is_unnumbered.yfilter)
	|| ydk::is_set(has_protection.yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(working_priority.yfilter)
	|| ydk::is_set(resource_provider.yfilter)
	|| ydk::is_set(is_resource_provider_installed.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(physical_bandwidth.yfilter)
	|| ydk::is_set(bcm_id.yfilter)
	|| ydk::is_set(maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(incoming_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(maximum_reservable_pool0_bandwidth.yfilter)
	|| ydk::is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(maximum_reservable_pool1_bandwidth.yfilter)
	|| ydk::is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(inbound_admission_method.yfilter)
	|| ydk::is_set(outbound_admission_method.yfilter)
	|| ydk::is_set(igp_neighbors.yfilter)
	|| (link_flags !=  nullptr && link_flags->has_operation());
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (is_unnumbered.is_set || is_set(is_unnumbered.yfilter)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());
    if (has_protection.is_set || is_set(has_protection.yfilter)) leaf_name_data.push_back(has_protection.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (working_priority.is_set || is_set(working_priority.yfilter)) leaf_name_data.push_back(working_priority.get_name_leafdata());
    if (resource_provider.is_set || is_set(resource_provider.yfilter)) leaf_name_data.push_back(resource_provider.get_name_leafdata());
    if (is_resource_provider_installed.is_set || is_set(is_resource_provider_installed.yfilter)) leaf_name_data.push_back(is_resource_provider_installed.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.yfilter)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.yfilter)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (maximum_reservable_bandwidth.is_set || is_set(maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_bandwidth.get_name_leafdata());
    if (last_flooded_effective_maximum_reservable_bandwidth.is_set || is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(last_flooded_effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (incoming_reservable_bandwidth_percentage.is_set || is_set(incoming_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_bandwidth_percentage.is_set || is_set(outgoing_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_bandwidth_percentage.get_name_leafdata());
    if (maximum_reservable_pool0_bandwidth.is_set || is_set(maximum_reservable_pool0_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool0_bandwidth.get_name_leafdata());
    if (incoming_reservable_pool0_bandwidth_percentage.is_set || is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool0_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (maximum_reservable_pool1_bandwidth.is_set || is_set(maximum_reservable_pool1_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool1_bandwidth.get_name_leafdata());
    if (incoming_reservable_pool1_bandwidth_percentage.is_set || is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool1_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (inbound_admission_method.is_set || is_set(inbound_admission_method.yfilter)) leaf_name_data.push_back(inbound_admission_method.get_name_leafdata());
    if (outbound_admission_method.is_set || is_set(outbound_admission_method.yfilter)) leaf_name_data.push_back(outbound_admission_method.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.yfilter)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-flags")
    {
        if(link_flags == nullptr)
        {
            link_flags = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags>();
        }
        return link_flags;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-switching-capability-descriptor")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor>();
        c->parent = this;
        interface_switching_capability_descriptor.push_back(c);
        return c;
    }

    if(child_yang_name == "flooded-areas")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas>();
        c->parent = this;
        flooded_areas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_flags != nullptr)
    {
        children["link-flags"] = link_flags;
    }

    count = 0;
    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : interface_switching_capability_descriptor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : flooded_areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
        is_unnumbered.value_namespace = name_space;
        is_unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-protection")
    {
        has_protection = value;
        has_protection.value_namespace = name_space;
        has_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "working-priority")
    {
        working_priority = value;
        working_priority.value_namespace = name_space;
        working_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-provider")
    {
        resource_provider = value;
        resource_provider.value_namespace = name_space;
        resource_provider.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed = value;
        is_resource_provider_installed.value_namespace = name_space;
        is_resource_provider_installed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
        physical_bandwidth.value_namespace = name_space;
        physical_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
        bcm_id.value_namespace = name_space;
        bcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth = value;
        maximum_reservable_bandwidth.value_namespace = name_space;
        maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth = value;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace = name_space;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage = value;
        incoming_reservable_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage = value;
        outgoing_reservable_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth = value;
        maximum_reservable_pool0_bandwidth.value_namespace = name_space;
        maximum_reservable_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage = value;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage = value;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth = value;
        maximum_reservable_pool1_bandwidth.value_namespace = name_space;
        maximum_reservable_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage = value;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage = value;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method = value;
        inbound_admission_method.value_namespace = name_space;
        inbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method = value;
        outbound_admission_method.value_namespace = name_space;
        outbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
        igp_neighbors.value_namespace = name_space;
        igp_neighbors.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered.yfilter = yfilter;
    }
    if(value_path == "has-protection")
    {
        has_protection.yfilter = yfilter;
    }
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "working-priority")
    {
        working_priority.yfilter = yfilter;
    }
    if(value_path == "resource-provider")
    {
        resource_provider.yfilter = yfilter;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bcm-id")
    {
        bcm_id.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-flags" || name == "shared-risk-link-group" || name == "interface-switching-capability-descriptor" || name == "flooded-areas" || name == "link-id" || name == "link-address" || name == "is-unnumbered" || name == "has-protection" || name == "capability" || name == "working-priority" || name == "resource-provider" || name == "is-resource-provider-installed" || name == "bandwidth-units" || name == "physical-bandwidth" || name == "bcm-id" || name == "maximum-reservable-bandwidth" || name == "last-flooded-effective-maximum-reservable-bandwidth" || name == "incoming-reservable-bandwidth-percentage" || name == "outgoing-reservable-bandwidth-percentage" || name == "maximum-reservable-pool0-bandwidth" || name == "incoming-reservable-pool0-bandwidth-percentage" || name == "outgoing-reservable-pool0-bandwidth-percentage" || name == "maximum-reservable-pool1-bandwidth" || name == "incoming-reservable-pool1-bandwidth-percentage" || name == "outgoing-reservable-pool1-bandwidth-percentage" || name == "inbound-admission-method" || name == "outbound-admission-method" || name == "igp-neighbors")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::LinkFlags()
    :
    is_mpls_te_on{YType::boolean, "is-mpls-te-on"},
    signaling_agent{YType::enumeration, "signaling-agent"},
    is_admin_up{YType::boolean, "is-admin-up"}
{

    yang_name = "link-flags"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::~LinkFlags()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_data() const
{
    return is_mpls_te_on.is_set
	|| signaling_agent.is_set
	|| is_admin_up.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_mpls_te_on.yfilter)
	|| ydk::is_set(signaling_agent.yfilter)
	|| ydk::is_set(is_admin_up.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mpls_te_on.is_set || is_set(is_mpls_te_on.yfilter)) leaf_name_data.push_back(is_mpls_te_on.get_name_leafdata());
    if (signaling_agent.is_set || is_set(signaling_agent.yfilter)) leaf_name_data.push_back(signaling_agent.get_name_leafdata());
    if (is_admin_up.is_set || is_set(is_admin_up.yfilter)) leaf_name_data.push_back(is_admin_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on = value;
        is_mpls_te_on.value_namespace = name_space;
        is_mpls_te_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent = value;
        signaling_agent.value_namespace = name_space;
        signaling_agent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admin-up")
    {
        is_admin_up = value;
        is_admin_up.value_namespace = name_space;
        is_admin_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on.yfilter = yfilter;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent.yfilter = yfilter;
    }
    if(value_path == "is-admin-up")
    {
        is_admin_up.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-mpls-te-on" || name == "signaling-agent" || name == "is-admin-up")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::InterfaceSwitchingCapabilityDescriptor()
    :
    key{YType::uint8, "key"},
    switching_capability{YType::uint8, "switching-capability"},
    encoding{YType::uint8, "encoding"}
{

    yang_name = "interface-switching-capability-descriptor"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::~InterfaceSwitchingCapabilityDescriptor()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_data() const
{
    return key.is_set
	|| switching_capability.is_set
	|| encoding.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(switching_capability.yfilter)
	|| ydk::is_set(encoding.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-switching-capability-descriptor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (switching_capability.is_set || is_set(switching_capability.yfilter)) leaf_name_data.push_back(switching_capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-capability")
    {
        switching_capability = value;
        switching_capability.value_namespace = name_space;
        switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "switching-capability")
    {
        switching_capability.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "switching-capability" || name == "encoding")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::FloodedAreas()
    :
    flooded_area{YType::str, "flooded-area"}
{

    yang_name = "flooded-areas"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::~FloodedAreas()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_data() const
{
    return flooded_area.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flooded_area.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooded_area.is_set || is_set(flooded_area.yfilter)) leaf_name_data.push_back(flooded_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flooded-area")
    {
        flooded_area = value;
        flooded_area.value_namespace = name_space;
        flooded_area.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flooded-area")
    {
        flooded_area.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-area")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccount()
    :
    bandwidth_account_common_info(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo>())
	,rsvp_te_bandwidth_sample_history(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory>())
	,sr_bandwidth_sample_history(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory>())
{
    bandwidth_account_common_info->parent = this;
    rsvp_te_bandwidth_sample_history->parent = this;
    sr_bandwidth_sample_history->parent = this;

    yang_name = "bandwidth-account"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::~BandwidthAccount()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::has_data() const
{
    return (bandwidth_account_common_info !=  nullptr && bandwidth_account_common_info->has_data())
	|| (rsvp_te_bandwidth_sample_history !=  nullptr && rsvp_te_bandwidth_sample_history->has_data())
	|| (sr_bandwidth_sample_history !=  nullptr && sr_bandwidth_sample_history->has_data());
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth_account_common_info !=  nullptr && bandwidth_account_common_info->has_operation())
	|| (rsvp_te_bandwidth_sample_history !=  nullptr && rsvp_te_bandwidth_sample_history->has_operation())
	|| (sr_bandwidth_sample_history !=  nullptr && sr_bandwidth_sample_history->has_operation());
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-common-info")
    {
        if(bandwidth_account_common_info == nullptr)
        {
            bandwidth_account_common_info = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo>();
        }
        return bandwidth_account_common_info;
    }

    if(child_yang_name == "rsvp-te-bandwidth-sample-history")
    {
        if(rsvp_te_bandwidth_sample_history == nullptr)
        {
            rsvp_te_bandwidth_sample_history = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory>();
        }
        return rsvp_te_bandwidth_sample_history;
    }

    if(child_yang_name == "sr-bandwidth-sample-history")
    {
        if(sr_bandwidth_sample_history == nullptr)
        {
            sr_bandwidth_sample_history = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory>();
        }
        return sr_bandwidth_sample_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth_account_common_info != nullptr)
    {
        children["bandwidth-account-common-info"] = bandwidth_account_common_info;
    }

    if(rsvp_te_bandwidth_sample_history != nullptr)
    {
        children["rsvp-te-bandwidth-sample-history"] = rsvp_te_bandwidth_sample_history;
    }

    if(sr_bandwidth_sample_history != nullptr)
    {
        children["sr-bandwidth-sample-history"] = sr_bandwidth_sample_history;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-common-info" || name == "rsvp-te-bandwidth-sample-history" || name == "sr-bandwidth-sample-history")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthAccountCommonInfo()
    :
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    application_enforced{YType::boolean, "application-enforced"},
    collection_type{YType::enumeration, "collection-type"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_time_remaining{YType::uint32, "sample-time-remaining"},
    last_sample_collection_timestamp{YType::uint32, "last-sample-collection-timestamp"},
    next_sample_collection{YType::uint32, "next-sample-collection"},
    application_interval{YType::uint32, "application-interval"},
    application_time_remaining{YType::uint32, "application-time-remaining"},
    last_application_timestamp{YType::uint32, "last-application-timestamp"},
    next_application{YType::uint32, "next-application"},
    adjustment_factor{YType::uint32, "adjustment-factor"},
    max_reservable_bandwidth_threshold_are_default{YType::boolean, "max-reservable-bandwidth-threshold-are-default"},
    up_threshold_max_reservable_bandwidth{YType::uint8, "up-threshold-max-reservable-bandwidth"},
    down_threshold_max_reservable_bandwidth{YType::uint8, "down-threshold-max-reservable-bandwidth"}
    	,
    rsvp_te_bandwidth_utilization(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization>())
	,sr_bandwidth_utilization(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization>())
{
    rsvp_te_bandwidth_utilization->parent = this;
    sr_bandwidth_utilization->parent = this;

    yang_name = "bandwidth-account-common-info"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::~BandwidthAccountCommonInfo()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_data() const
{
    return is_bandwidth_account_enabled.is_set
	|| application_enforced.is_set
	|| collection_type.is_set
	|| sample_interval.is_set
	|| sample_time_remaining.is_set
	|| last_sample_collection_timestamp.is_set
	|| next_sample_collection.is_set
	|| application_interval.is_set
	|| application_time_remaining.is_set
	|| last_application_timestamp.is_set
	|| next_application.is_set
	|| adjustment_factor.is_set
	|| max_reservable_bandwidth_threshold_are_default.is_set
	|| up_threshold_max_reservable_bandwidth.is_set
	|| down_threshold_max_reservable_bandwidth.is_set
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_data())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_data());
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_account_enabled.yfilter)
	|| ydk::is_set(application_enforced.yfilter)
	|| ydk::is_set(collection_type.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_time_remaining.yfilter)
	|| ydk::is_set(last_sample_collection_timestamp.yfilter)
	|| ydk::is_set(next_sample_collection.yfilter)
	|| ydk::is_set(application_interval.yfilter)
	|| ydk::is_set(application_time_remaining.yfilter)
	|| ydk::is_set(last_application_timestamp.yfilter)
	|| ydk::is_set(next_application.yfilter)
	|| ydk::is_set(adjustment_factor.yfilter)
	|| ydk::is_set(max_reservable_bandwidth_threshold_are_default.yfilter)
	|| ydk::is_set(up_threshold_max_reservable_bandwidth.yfilter)
	|| ydk::is_set(down_threshold_max_reservable_bandwidth.yfilter)
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_operation())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_operation());
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-common-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.yfilter)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (application_enforced.is_set || is_set(application_enforced.yfilter)) leaf_name_data.push_back(application_enforced.get_name_leafdata());
    if (collection_type.is_set || is_set(collection_type.yfilter)) leaf_name_data.push_back(collection_type.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_time_remaining.is_set || is_set(sample_time_remaining.yfilter)) leaf_name_data.push_back(sample_time_remaining.get_name_leafdata());
    if (last_sample_collection_timestamp.is_set || is_set(last_sample_collection_timestamp.yfilter)) leaf_name_data.push_back(last_sample_collection_timestamp.get_name_leafdata());
    if (next_sample_collection.is_set || is_set(next_sample_collection.yfilter)) leaf_name_data.push_back(next_sample_collection.get_name_leafdata());
    if (application_interval.is_set || is_set(application_interval.yfilter)) leaf_name_data.push_back(application_interval.get_name_leafdata());
    if (application_time_remaining.is_set || is_set(application_time_remaining.yfilter)) leaf_name_data.push_back(application_time_remaining.get_name_leafdata());
    if (last_application_timestamp.is_set || is_set(last_application_timestamp.yfilter)) leaf_name_data.push_back(last_application_timestamp.get_name_leafdata());
    if (next_application.is_set || is_set(next_application.yfilter)) leaf_name_data.push_back(next_application.get_name_leafdata());
    if (adjustment_factor.is_set || is_set(adjustment_factor.yfilter)) leaf_name_data.push_back(adjustment_factor.get_name_leafdata());
    if (max_reservable_bandwidth_threshold_are_default.is_set || is_set(max_reservable_bandwidth_threshold_are_default.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth_threshold_are_default.get_name_leafdata());
    if (up_threshold_max_reservable_bandwidth.is_set || is_set(up_threshold_max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(up_threshold_max_reservable_bandwidth.get_name_leafdata());
    if (down_threshold_max_reservable_bandwidth.is_set || is_set(down_threshold_max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(down_threshold_max_reservable_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-bandwidth-utilization")
    {
        if(rsvp_te_bandwidth_utilization == nullptr)
        {
            rsvp_te_bandwidth_utilization = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization>();
        }
        return rsvp_te_bandwidth_utilization;
    }

    if(child_yang_name == "sr-bandwidth-utilization")
    {
        if(sr_bandwidth_utilization == nullptr)
        {
            sr_bandwidth_utilization = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization>();
        }
        return sr_bandwidth_utilization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvp_te_bandwidth_utilization != nullptr)
    {
        children["rsvp-te-bandwidth-utilization"] = rsvp_te_bandwidth_utilization;
    }

    if(sr_bandwidth_utilization != nullptr)
    {
        children["sr-bandwidth-utilization"] = sr_bandwidth_utilization;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
        is_bandwidth_account_enabled.value_namespace = name_space;
        is_bandwidth_account_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-enforced")
    {
        application_enforced = value;
        application_enforced.value_namespace = name_space;
        application_enforced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-type")
    {
        collection_type = value;
        collection_type.value_namespace = name_space;
        collection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining = value;
        sample_time_remaining.value_namespace = name_space;
        sample_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sample-collection-timestamp")
    {
        last_sample_collection_timestamp = value;
        last_sample_collection_timestamp.value_namespace = name_space;
        last_sample_collection_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-sample-collection")
    {
        next_sample_collection = value;
        next_sample_collection.value_namespace = name_space;
        next_sample_collection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-interval")
    {
        application_interval = value;
        application_interval.value_namespace = name_space;
        application_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining = value;
        application_time_remaining.value_namespace = name_space;
        application_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-application-timestamp")
    {
        last_application_timestamp = value;
        last_application_timestamp.value_namespace = name_space;
        last_application_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-application")
    {
        next_application = value;
        next_application.value_namespace = name_space;
        next_application.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-factor")
    {
        adjustment_factor = value;
        adjustment_factor.value_namespace = name_space;
        adjustment_factor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth-threshold-are-default")
    {
        max_reservable_bandwidth_threshold_are_default = value;
        max_reservable_bandwidth_threshold_are_default.value_namespace = name_space;
        max_reservable_bandwidth_threshold_are_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-threshold-max-reservable-bandwidth")
    {
        up_threshold_max_reservable_bandwidth = value;
        up_threshold_max_reservable_bandwidth.value_namespace = name_space;
        up_threshold_max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-threshold-max-reservable-bandwidth")
    {
        down_threshold_max_reservable_bandwidth = value;
        down_threshold_max_reservable_bandwidth.value_namespace = name_space;
        down_threshold_max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled.yfilter = yfilter;
    }
    if(value_path == "application-enforced")
    {
        application_enforced.yfilter = yfilter;
    }
    if(value_path == "collection-type")
    {
        collection_type.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining.yfilter = yfilter;
    }
    if(value_path == "last-sample-collection-timestamp")
    {
        last_sample_collection_timestamp.yfilter = yfilter;
    }
    if(value_path == "next-sample-collection")
    {
        next_sample_collection.yfilter = yfilter;
    }
    if(value_path == "application-interval")
    {
        application_interval.yfilter = yfilter;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining.yfilter = yfilter;
    }
    if(value_path == "last-application-timestamp")
    {
        last_application_timestamp.yfilter = yfilter;
    }
    if(value_path == "next-application")
    {
        next_application.yfilter = yfilter;
    }
    if(value_path == "adjustment-factor")
    {
        adjustment_factor.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth-threshold-are-default")
    {
        max_reservable_bandwidth_threshold_are_default.yfilter = yfilter;
    }
    if(value_path == "up-threshold-max-reservable-bandwidth")
    {
        up_threshold_max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "down-threshold-max-reservable-bandwidth")
    {
        down_threshold_max_reservable_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-bandwidth-utilization" || name == "sr-bandwidth-utilization" || name == "is-bandwidth-account-enabled" || name == "application-enforced" || name == "collection-type" || name == "sample-interval" || name == "sample-time-remaining" || name == "last-sample-collection-timestamp" || name == "next-sample-collection" || name == "application-interval" || name == "application-time-remaining" || name == "last-application-timestamp" || name == "next-application" || name == "adjustment-factor" || name == "max-reservable-bandwidth-threshold-are-default" || name == "up-threshold-max-reservable-bandwidth" || name == "down-threshold-max-reservable-bandwidth")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::RsvpTeBandwidthUtilization()
    :
    total_link_bandwidth_utilization{YType::uint64, "total-link-bandwidth-utilization"},
    rsvp_te_bandwidth_utilization{YType::uint64, "rsvp-te-bandwidth-utilization"},
    non_rsvp_te_bandwidth_utilization{YType::uint64, "non-rsvp-te-bandwidth-utilization"},
    rsvp_te_adjusted_bandwidth_utilization{YType::uint64, "rsvp-te-adjusted-bandwidth-utilization"},
    rsvp_te_enforced_bandwidth_utilization{YType::uint64, "rsvp-te-enforced-bandwidth-utilization"}
{

    yang_name = "rsvp-te-bandwidth-utilization"; yang_parent_name = "bandwidth-account-common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::~RsvpTeBandwidthUtilization()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::has_data() const
{
    return total_link_bandwidth_utilization.is_set
	|| rsvp_te_bandwidth_utilization.is_set
	|| non_rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_adjusted_bandwidth_utilization.is_set
	|| rsvp_te_enforced_bandwidth_utilization.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_link_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(non_rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_enforced_bandwidth_utilization.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_link_bandwidth_utilization.is_set || is_set(total_link_bandwidth_utilization.yfilter)) leaf_name_data.push_back(total_link_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_bandwidth_utilization.is_set || is_set(rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (non_rsvp_te_bandwidth_utilization.is_set || is_set(non_rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_adjusted_bandwidth_utilization.is_set || is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_adjusted_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_enforced_bandwidth_utilization.is_set || is_set(rsvp_te_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_enforced_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization = value;
        total_link_bandwidth_utilization.value_namespace = name_space;
        total_link_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization = value;
        rsvp_te_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization = value;
        non_rsvp_te_bandwidth_utilization.value_namespace = name_space;
        non_rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization = value;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization = value;
        rsvp_te_enforced_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_enforced_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-link-bandwidth-utilization" || name == "rsvp-te-bandwidth-utilization" || name == "non-rsvp-te-bandwidth-utilization" || name == "rsvp-te-adjusted-bandwidth-utilization" || name == "rsvp-te-enforced-bandwidth-utilization")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::SrBandwidthUtilization()
    :
    sr_bandwidth_utilization{YType::uint64, "sr-bandwidth-utilization"},
    sr_adjusted_bandwidth_utilization{YType::uint64, "sr-adjusted-bandwidth-utilization"},
    sr_enforced_bandwidth_utilization{YType::uint64, "sr-enforced-bandwidth-utilization"}
{

    yang_name = "sr-bandwidth-utilization"; yang_parent_name = "bandwidth-account-common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::~SrBandwidthUtilization()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::has_data() const
{
    return sr_bandwidth_utilization.is_set
	|| sr_adjusted_bandwidth_utilization.is_set
	|| sr_enforced_bandwidth_utilization.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_enforced_bandwidth_utilization.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_bandwidth_utilization.is_set || is_set(sr_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_bandwidth_utilization.get_name_leafdata());
    if (sr_adjusted_bandwidth_utilization.is_set || is_set(sr_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_adjusted_bandwidth_utilization.get_name_leafdata());
    if (sr_enforced_bandwidth_utilization.is_set || is_set(sr_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_enforced_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-bandwidth-utilization")
    {
        sr_bandwidth_utilization = value;
        sr_bandwidth_utilization.value_namespace = name_space;
        sr_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-adjusted-bandwidth-utilization")
    {
        sr_adjusted_bandwidth_utilization = value;
        sr_adjusted_bandwidth_utilization.value_namespace = name_space;
        sr_adjusted_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-enforced-bandwidth-utilization")
    {
        sr_enforced_bandwidth_utilization = value;
        sr_enforced_bandwidth_utilization.value_namespace = name_space;
        sr_enforced_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-bandwidth-utilization")
    {
        sr_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "sr-adjusted-bandwidth-utilization")
    {
        sr_adjusted_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "sr-enforced-bandwidth-utilization")
    {
        sr_enforced_bandwidth_utilization.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-bandwidth-utilization" || name == "sr-adjusted-bandwidth-utilization" || name == "sr-enforced-bandwidth-utilization")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeBandwidthSampleHistory()
{

    yang_name = "rsvp-te-bandwidth-sample-history"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::~RsvpTeBandwidthSampleHistory()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::has_data() const
{
    for (std::size_t index=0; index<rsvp_te_active_interval_sample.size(); index++)
    {
        if(rsvp_te_active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsvp_te_previous_interval_sample.size(); index++)
    {
        if(rsvp_te_previous_interval_sample[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<rsvp_te_active_interval_sample.size(); index++)
    {
        if(rsvp_te_active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsvp_te_previous_interval_sample.size(); index++)
    {
        if(rsvp_te_previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-bandwidth-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-active-interval-sample")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample>();
        c->parent = this;
        rsvp_te_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "rsvp-te-previous-interval-sample")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample>();
        c->parent = this;
        rsvp_te_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rsvp_te_active_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : rsvp_te_previous_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-active-interval-sample" || name == "rsvp-te-previous-interval-sample")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::RsvpTeActiveIntervalSample()
    :
    timestamp{YType::uint32, "timestamp"},
    total_rate{YType::uint64, "total-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"}
{

    yang_name = "rsvp-te-active-interval-sample"; yang_parent_name = "rsvp-te-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::~RsvpTeActiveIntervalSample()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::has_data() const
{
    return timestamp.is_set
	|| total_rate.is_set
	|| rsvp_te_rate.is_set
	|| non_rsvp_te_rate.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(total_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
        total_rate.value_namespace = name_space;
        total_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
        rsvp_te_rate.value_namespace = name_space;
        rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
        non_rsvp_te_rate.value_namespace = name_space;
        non_rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "total-rate")
    {
        total_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "total-rate" || name == "rsvp-te-rate" || name == "non-rsvp-te-rate")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::RsvpTePreviousIntervalSample()
    :
    timestamp{YType::uint32, "timestamp"},
    total_rate{YType::uint64, "total-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"}
{

    yang_name = "rsvp-te-previous-interval-sample"; yang_parent_name = "rsvp-te-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::~RsvpTePreviousIntervalSample()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::has_data() const
{
    return timestamp.is_set
	|| total_rate.is_set
	|| rsvp_te_rate.is_set
	|| non_rsvp_te_rate.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(total_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
        total_rate.value_namespace = name_space;
        total_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
        rsvp_te_rate.value_namespace = name_space;
        rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
        non_rsvp_te_rate.value_namespace = name_space;
        non_rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "total-rate")
    {
        total_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "total-rate" || name == "rsvp-te-rate" || name == "non-rsvp-te-rate")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrBandwidthSampleHistory()
{

    yang_name = "sr-bandwidth-sample-history"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::~SrBandwidthSampleHistory()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::has_data() const
{
    for (std::size_t index=0; index<sr_active_interval_sample.size(); index++)
    {
        if(sr_active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_previous_interval_sample.size(); index++)
    {
        if(sr_previous_interval_sample[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<sr_active_interval_sample.size(); index++)
    {
        if(sr_active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_previous_interval_sample.size(); index++)
    {
        if(sr_previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-bandwidth-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-active-interval-sample")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample>();
        c->parent = this;
        sr_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-previous-interval-sample")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample>();
        c->parent = this;
        sr_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sr_active_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : sr_previous_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-active-interval-sample" || name == "sr-previous-interval-sample")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::SrActiveIntervalSample()
    :
    timestamp{YType::uint32, "timestamp"},
    sr_rate{YType::uint64, "sr-rate"}
{

    yang_name = "sr-active-interval-sample"; yang_parent_name = "sr-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::~SrActiveIntervalSample()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::has_data() const
{
    return timestamp.is_set
	|| sr_rate.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(sr_rate.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-rate")
    {
        sr_rate = value;
        sr_rate.value_namespace = name_space;
        sr_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "sr-rate")
    {
        sr_rate.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "sr-rate")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::SrPreviousIntervalSample()
    :
    timestamp{YType::uint32, "timestamp"},
    sr_rate{YType::uint64, "sr-rate"}
{

    yang_name = "sr-previous-interval-sample"; yang_parent_name = "sr-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::~SrPreviousIntervalSample()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::has_data() const
{
    return timestamp.is_set
	|| sr_rate.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(sr_rate.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-rate")
    {
        sr_rate = value;
        sr_rate.value_namespace = name_space;
        sr_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "sr-rate")
    {
        sr_rate.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "sr-rate")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOor()
    :
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    hw_oor_timestamp{YType::uint32, "hw-oor-timestamp"},
    hw_o_or_green_recovery_time{YType::uint32, "hw-o-or-green-recovery-time"}
{

    yang_name = "hw-oor"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::HwOor::~HwOor()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::has_data() const
{
    for (std::size_t index=0; index<hw_o_or_link_statistic.size(); index++)
    {
        if(hw_o_or_link_statistic[index]->has_data())
            return true;
    }
    return hw_oor_state.is_set
	|| hw_oor_timestamp.is_set
	|| hw_o_or_green_recovery_time.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::has_operation() const
{
    for (std::size_t index=0; index<hw_o_or_link_statistic.size(); index++)
    {
        if(hw_o_or_link_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hw_oor_state.yfilter)
	|| ydk::is_set(hw_oor_timestamp.yfilter)
	|| ydk::is_set(hw_o_or_green_recovery_time.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::HwOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::HwOor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_oor_state.is_set || is_set(hw_oor_state.yfilter)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (hw_oor_timestamp.is_set || is_set(hw_oor_timestamp.yfilter)) leaf_name_data.push_back(hw_oor_timestamp.get_name_leafdata());
    if (hw_o_or_green_recovery_time.is_set || is_set(hw_o_or_green_recovery_time.yfilter)) leaf_name_data.push_back(hw_o_or_green_recovery_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::HwOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-o-or-link-statistic")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic>();
        c->parent = this;
        hw_o_or_link_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::HwOor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : hw_o_or_link_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::HwOor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
        hw_oor_state.value_namespace = name_space;
        hw_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-oor-timestamp")
    {
        hw_oor_timestamp = value;
        hw_oor_timestamp.value_namespace = name_space;
        hw_oor_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-o-or-green-recovery-time")
    {
        hw_o_or_green_recovery_time = value;
        hw_o_or_green_recovery_time.value_namespace = name_space;
        hw_o_or_green_recovery_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::HwOor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-oor-state")
    {
        hw_oor_state.yfilter = yfilter;
    }
    if(value_path == "hw-oor-timestamp")
    {
        hw_oor_timestamp.yfilter = yfilter;
    }
    if(value_path == "hw-o-or-green-recovery-time")
    {
        hw_o_or_green_recovery_time.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-o-or-link-statistic" || name == "hw-oor-state" || name == "hw-oor-timestamp" || name == "hw-o-or-green-recovery-time")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::HwOOrLinkStatistic()
    :
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    transitions{YType::uint32, "transitions"},
    node_protection_disable_number{YType::uint32, "node-protection-disable-number"},
    rejected_ls_ps_number{YType::uint32, "rejected-ls-ps-number"},
    accepted_ls_ps_number{YType::uint32, "accepted-ls-ps-number"},
    accepted_reopt_ls_ps_number{YType::uint32, "accepted-reopt-ls-ps-number"},
    rejected_reopt_ls_ps_number{YType::uint32, "rejected-reopt-ls-ps-number"}
{

    yang_name = "hw-o-or-link-statistic"; yang_parent_name = "hw-oor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::~HwOOrLinkStatistic()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_data() const
{
    return hw_oor_state.is_set
	|| transitions.is_set
	|| node_protection_disable_number.is_set
	|| rejected_ls_ps_number.is_set
	|| accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hw_oor_state.yfilter)
	|| ydk::is_set(transitions.yfilter)
	|| ydk::is_set(node_protection_disable_number.yfilter)
	|| ydk::is_set(rejected_ls_ps_number.yfilter)
	|| ydk::is_set(accepted_ls_ps_number.yfilter)
	|| ydk::is_set(accepted_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(rejected_reopt_ls_ps_number.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-o-or-link-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_oor_state.is_set || is_set(hw_oor_state.yfilter)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (transitions.is_set || is_set(transitions.yfilter)) leaf_name_data.push_back(transitions.get_name_leafdata());
    if (node_protection_disable_number.is_set || is_set(node_protection_disable_number.yfilter)) leaf_name_data.push_back(node_protection_disable_number.get_name_leafdata());
    if (rejected_ls_ps_number.is_set || is_set(rejected_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_ls_ps_number.get_name_leafdata());
    if (accepted_ls_ps_number.is_set || is_set(accepted_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_ls_ps_number.get_name_leafdata());
    if (accepted_reopt_ls_ps_number.is_set || is_set(accepted_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_reopt_ls_ps_number.get_name_leafdata());
    if (rejected_reopt_ls_ps_number.is_set || is_set(rejected_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_reopt_ls_ps_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
        hw_oor_state.value_namespace = name_space;
        hw_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitions")
    {
        transitions = value;
        transitions.value_namespace = name_space;
        transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number = value;
        node_protection_disable_number.value_namespace = name_space;
        node_protection_disable_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number = value;
        rejected_ls_ps_number.value_namespace = name_space;
        rejected_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number = value;
        accepted_ls_ps_number.value_namespace = name_space;
        accepted_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number = value;
        accepted_reopt_ls_ps_number.value_namespace = name_space;
        accepted_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number = value;
        rejected_reopt_ls_ps_number.value_namespace = name_space;
        rejected_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-oor-state")
    {
        hw_oor_state.yfilter = yfilter;
    }
    if(value_path == "transitions")
    {
        transitions.yfilter = yfilter;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number.yfilter = yfilter;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-oor-state" || name == "transitions" || name == "node-protection-disable-number" || name == "rejected-ls-ps-number" || name == "accepted-ls-ps-number" || name == "accepted-reopt-ls-ps-number" || name == "rejected-reopt-ls-ps-number")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::LinkExtendedAttribute()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "link-extended-attribute"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::~LinkExtendedAttribute()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-extended-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::LinkForwadRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "link-forwad-ref-value"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::~LinkForwadRefValue()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-forwad-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityMap()
    :
    affinity_name{YType::str, "affinity-name"},
    affinity_value{YType::uint32, "affinity-value"},
    affinity_bit_position{YType::uint8, "affinity-bit-position"},
    affinity_table_id{YType::enumeration, "affinity-table-id"}
{

    yang_name = "affinity-map"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::~AffinityMap()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::has_data() const
{
    for (std::size_t index=0; index<affinity_extended_value.size(); index++)
    {
        if(affinity_extended_value[index]->has_data())
            return true;
    }
    return affinity_name.is_set
	|| affinity_value.is_set
	|| affinity_bit_position.is_set
	|| affinity_table_id.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::has_operation() const
{
    for (std::size_t index=0; index<affinity_extended_value.size(); index++)
    {
        if(affinity_extended_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_name.yfilter)
	|| ydk::is_set(affinity_value.yfilter)
	|| ydk::is_set(affinity_bit_position.yfilter)
	|| ydk::is_set(affinity_table_id.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_name.is_set || is_set(affinity_name.yfilter)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (affinity_value.is_set || is_set(affinity_value.yfilter)) leaf_name_data.push_back(affinity_value.get_name_leafdata());
    if (affinity_bit_position.is_set || is_set(affinity_bit_position.yfilter)) leaf_name_data.push_back(affinity_bit_position.get_name_leafdata());
    if (affinity_table_id.is_set || is_set(affinity_table_id.yfilter)) leaf_name_data.push_back(affinity_table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-extended-value")
    {
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue>();
        c->parent = this;
        affinity_extended_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : affinity_extended_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-name")
    {
        affinity_name = value;
        affinity_name.value_namespace = name_space;
        affinity_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-value")
    {
        affinity_value = value;
        affinity_value.value_namespace = name_space;
        affinity_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position = value;
        affinity_bit_position.value_namespace = name_space;
        affinity_bit_position.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id = value;
        affinity_table_id.value_namespace = name_space;
        affinity_table_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-name")
    {
        affinity_name.yfilter = yfilter;
    }
    if(value_path == "affinity-value")
    {
        affinity_value.yfilter = yfilter;
    }
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position.yfilter = yfilter;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-extended-value" || name == "affinity-name" || name == "affinity-value" || name == "affinity-bit-position" || name == "affinity-table-id")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::AffinityExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "affinity-extended-value"; yang_parent_name = "affinity-map"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::~AffinityExtendedValue()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::Areas::Areas()
    :
    area_id{YType::str, "area-id"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_address{YType::str, "neighbor-address"},
    is_neighbor_up{YType::boolean, "is-neighbor-up"},
    igp_metric{YType::uint32, "igp-metric"}
{

    yang_name = "areas"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::Areas::~Areas()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::Areas::has_data() const
{
    return area_id.is_set
	|| neighbor_id.is_set
	|| neighbor_address.is_set
	|| is_neighbor_up.is_set
	|| igp_metric.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::Areas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(is_neighbor_up.yfilter)
	|| ydk::is_set(igp_metric.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::Areas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (is_neighbor_up.is_set || is_set(is_neighbor_up.yfilter)) leaf_name_data.push_back(is_neighbor_up.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::Areas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::Areas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up = value;
        is_neighbor_up.value_namespace = name_space;
        is_neighbor_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::Areas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::Areas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "neighbor-id" || name == "neighbor-address" || name == "is-neighbor-up" || name == "igp-metric")
        return true;
    return false;
}

MplsLcacStandby::LinkInformation::Links::Link::Lockout::Lockout()
    :
    is_lockout{YType::boolean, "is-lockout"},
    lockout_on_timestamp{YType::uint32, "lockout-on-timestamp"},
    lockout_off_timestamp{YType::uint32, "lockout-off-timestamp"}
{

    yang_name = "lockout"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::LinkInformation::Links::Link::Lockout::~Lockout()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::Lockout::has_data() const
{
    return is_lockout.is_set
	|| lockout_on_timestamp.is_set
	|| lockout_off_timestamp.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::Lockout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_lockout.yfilter)
	|| ydk::is_set(lockout_on_timestamp.yfilter)
	|| ydk::is_set(lockout_off_timestamp.yfilter);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::Lockout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::LinkInformation::Links::Link::Lockout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_lockout.is_set || is_set(is_lockout.yfilter)) leaf_name_data.push_back(is_lockout.get_name_leafdata());
    if (lockout_on_timestamp.is_set || is_set(lockout_on_timestamp.yfilter)) leaf_name_data.push_back(lockout_on_timestamp.get_name_leafdata());
    if (lockout_off_timestamp.is_set || is_set(lockout_off_timestamp.yfilter)) leaf_name_data.push_back(lockout_off_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::Lockout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::LinkInformation::Links::Link::Lockout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::Lockout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-lockout")
    {
        is_lockout = value;
        is_lockout.value_namespace = name_space;
        is_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout-on-timestamp")
    {
        lockout_on_timestamp = value;
        lockout_on_timestamp.value_namespace = name_space;
        lockout_on_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout-off-timestamp")
    {
        lockout_off_timestamp = value;
        lockout_off_timestamp.value_namespace = name_space;
        lockout_off_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::LinkInformation::Links::Link::Lockout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-lockout")
    {
        is_lockout.yfilter = yfilter;
    }
    if(value_path == "lockout-on-timestamp")
    {
        lockout_on_timestamp.yfilter = yfilter;
    }
    if(value_path == "lockout-off-timestamp")
    {
        lockout_off_timestamp.yfilter = yfilter;
    }
}

bool MplsLcacStandby::LinkInformation::Links::Link::Lockout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-lockout" || name == "lockout-on-timestamp" || name == "lockout-off-timestamp")
        return true;
    return false;
}

MplsLcacStandby::AdmissionControl::AdmissionControl()
    :
    global(std::make_shared<MplsLcacStandby::AdmissionControl::Global>())
	,admitted_tunnels(std::make_shared<MplsLcacStandby::AdmissionControl::AdmittedTunnels>())
	,link_interfaces(std::make_shared<MplsLcacStandby::AdmissionControl::LinkInterfaces>())
{
    global->parent = this;
    admitted_tunnels->parent = this;
    link_interfaces->parent = this;

    yang_name = "admission-control"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::AdmissionControl::~AdmissionControl()
{
}

bool MplsLcacStandby::AdmissionControl::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (admitted_tunnels !=  nullptr && admitted_tunnels->has_data())
	|| (link_interfaces !=  nullptr && link_interfaces->has_data());
}

bool MplsLcacStandby::AdmissionControl::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (admitted_tunnels !=  nullptr && admitted_tunnels->has_operation())
	|| (link_interfaces !=  nullptr && link_interfaces->has_operation());
}

std::string MplsLcacStandby::AdmissionControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::AdmissionControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::AdmissionControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLcacStandby::AdmissionControl::Global>();
        }
        return global;
    }

    if(child_yang_name == "admitted-tunnels")
    {
        if(admitted_tunnels == nullptr)
        {
            admitted_tunnels = std::make_shared<MplsLcacStandby::AdmissionControl::AdmittedTunnels>();
        }
        return admitted_tunnels;
    }

    if(child_yang_name == "link-interfaces")
    {
        if(link_interfaces == nullptr)
        {
            link_interfaces = std::make_shared<MplsLcacStandby::AdmissionControl::LinkInterfaces>();
        }
        return link_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::AdmissionControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(admitted_tunnels != nullptr)
    {
        children["admitted-tunnels"] = admitted_tunnels;
    }

    if(link_interfaces != nullptr)
    {
        children["link-interfaces"] = link_interfaces;
    }

    return children;
}

void MplsLcacStandby::AdmissionControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::AdmissionControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::AdmissionControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "admitted-tunnels" || name == "link-interfaces")
        return true;
    return false;
}

MplsLcacStandby::AdmissionControl::Global::Global()
    :
    is_role_standby{YType::boolean, "is-role-standby"},
    total_tunnels{YType::uint32, "total-tunnels"},
    total_p2mp_tunnels{YType::uint32, "total-p2mp-tunnels"},
    selected_tunnels{YType::uint32, "selected-tunnels"},
    bandwidth_units{YType::enumeration, "bandwidth-units"}
{

    yang_name = "global"; yang_parent_name = "admission-control"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::AdmissionControl::Global::~Global()
{
}

bool MplsLcacStandby::AdmissionControl::Global::has_data() const
{
    return is_role_standby.is_set
	|| total_tunnels.is_set
	|| total_p2mp_tunnels.is_set
	|| selected_tunnels.is_set
	|| bandwidth_units.is_set;
}

bool MplsLcacStandby::AdmissionControl::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(total_p2mp_tunnels.yfilter)
	|| ydk::is_set(selected_tunnels.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter);
}

std::string MplsLcacStandby::AdmissionControl::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::AdmissionControl::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::AdmissionControl::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (total_p2mp_tunnels.is_set || is_set(total_p2mp_tunnels.yfilter)) leaf_name_data.push_back(total_p2mp_tunnels.get_name_leafdata());
    if (selected_tunnels.is_set || is_set(selected_tunnels.yfilter)) leaf_name_data.push_back(selected_tunnels.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::AdmissionControl::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::AdmissionControl::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels = value;
        total_p2mp_tunnels.value_namespace = name_space;
        total_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels = value;
        selected_tunnels.value_namespace = name_space;
        selected_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::AdmissionControl::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels.yfilter = yfilter;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
}

bool MplsLcacStandby::AdmissionControl::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-role-standby" || name == "total-tunnels" || name == "total-p2mp-tunnels" || name == "selected-tunnels" || name == "bandwidth-units")
        return true;
    return false;
}

MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnels()
{

    yang_name = "admitted-tunnels"; yang_parent_name = "admission-control"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::AdmissionControl::AdmittedTunnels::~AdmittedTunnels()
{
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::has_data() const
{
    for (std::size_t index=0; index<admitted_tunnel.size(); index++)
    {
        if(admitted_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::has_operation() const
{
    for (std::size_t index=0; index<admitted_tunnel.size(); index++)
    {
        if(admitted_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admitted-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admitted-tunnel")
    {
        auto c = std::make_shared<MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel>();
        c->parent = this;
        admitted_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : admitted_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::AdmissionControl::AdmittedTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::AdmissionControl::AdmittedTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admitted-tunnel")
        return true;
    return false;
}

MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::AdmittedTunnel()
    :
    source_address{YType::str, "source-address"},
    destination_port{YType::int32, "destination-port"},
    source_port{YType::int32, "source-port"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    next_hop_address{YType::str, "next-hop-address"},
    ctype{YType::enumeration, "ctype"},
    p2mp_id{YType::int32, "p2mp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    bandwidth_state{YType::enumeration, "bandwidth-state"},
    bandwidth_pool{YType::enumeration, "bandwidth-pool"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    up_link_name{YType::str, "up-link-name"},
    down_link_name{YType::str, "down-link-name"},
    tunnel_state{YType::enumeration, "tunnel-state"},
    bandwidth{YType::uint64, "bandwidth"},
    local_label{YType::uint32, "local-label"},
    outgoing_label{YType::uint32, "outgoing-label"},
    backup_interface{YType::str, "backup-interface"},
    is_rerouted{YType::boolean, "is-rerouted"}
{

    yang_name = "admitted-tunnel"; yang_parent_name = "admitted-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::~AdmittedTunnel()
{
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_data() const
{
    return source_address.is_set
	|| destination_port.is_set
	|| source_port.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| next_hop_address.is_set
	|| ctype.is_set
	|| p2mp_id.is_set
	|| tunnel_name.is_set
	|| bandwidth_state.is_set
	|| bandwidth_pool.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| up_link_name.is_set
	|| down_link_name.is_set
	|| tunnel_state.is_set
	|| bandwidth.is_set
	|| local_label.is_set
	|| outgoing_label.is_set
	|| backup_interface.is_set
	|| is_rerouted.is_set;
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(bandwidth_state.yfilter)
	|| ydk::is_set(bandwidth_pool.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(up_link_name.yfilter)
	|| ydk::is_set(down_link_name.yfilter)
	|| ydk::is_set(tunnel_state.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(is_rerouted.yfilter);
}

std::string MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/admitted-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admitted-tunnel" <<"[source-address='" <<source_address <<"']" <<"[destination-port='" <<destination_port <<"']" <<"[source-port='" <<source_port <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[ctype='" <<ctype <<"']" <<"[p2mp-id='" <<p2mp_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (bandwidth_state.is_set || is_set(bandwidth_state.yfilter)) leaf_name_data.push_back(bandwidth_state.get_name_leafdata());
    if (bandwidth_pool.is_set || is_set(bandwidth_pool.yfilter)) leaf_name_data.push_back(bandwidth_pool.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (up_link_name.is_set || is_set(up_link_name.yfilter)) leaf_name_data.push_back(up_link_name.get_name_leafdata());
    if (down_link_name.is_set || is_set(down_link_name.yfilter)) leaf_name_data.push_back(down_link_name.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (is_rerouted.is_set || is_set(is_rerouted.yfilter)) leaf_name_data.push_back(is_rerouted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-state")
    {
        bandwidth_state = value;
        bandwidth_state.value_namespace = name_space;
        bandwidth_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool = value;
        bandwidth_pool.value_namespace = name_space;
        bandwidth_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-link-name")
    {
        up_link_name = value;
        up_link_name.value_namespace = name_space;
        up_link_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-link-name")
    {
        down_link_name = value;
        down_link_name.value_namespace = name_space;
        down_link_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rerouted")
    {
        is_rerouted = value;
        is_rerouted.value_namespace = name_space;
        is_rerouted.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-state")
    {
        bandwidth_state.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "up-link-name")
    {
        up_link_name.yfilter = yfilter;
    }
    if(value_path == "down-link-name")
    {
        down_link_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "is-rerouted")
    {
        is_rerouted.yfilter = yfilter;
    }
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-port" || name == "source-port" || name == "destination-address" || name == "extended-tunnel-id" || name == "next-hop-address" || name == "ctype" || name == "p2mp-id" || name == "tunnel-name" || name == "bandwidth-state" || name == "bandwidth-pool" || name == "setup-priority" || name == "hold-priority" || name == "up-link-name" || name == "down-link-name" || name == "tunnel-state" || name == "bandwidth" || name == "local-label" || name == "outgoing-label" || name == "backup-interface" || name == "is-rerouted")
        return true;
    return false;
}

MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterfaces()
{

    yang_name = "link-interfaces"; yang_parent_name = "admission-control"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::AdmissionControl::LinkInterfaces::~LinkInterfaces()
{
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::has_data() const
{
    for (std::size_t index=0; index<link_interface.size(); index++)
    {
        if(link_interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::has_operation() const
{
    for (std::size_t index=0; index<link_interface.size(); index++)
    {
        if(link_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::AdmissionControl::LinkInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::AdmissionControl::LinkInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::AdmissionControl::LinkInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::LinkInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-interface")
    {
        auto c = std::make_shared<MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface>();
        c->parent = this;
        link_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::AdmissionControl::LinkInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::AdmissionControl::LinkInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::AdmissionControl::LinkInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-interface")
        return true;
    return false;
}

MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::LinkInterface()
    :
    interface_name{YType::str, "interface-name"},
    is_role_standby{YType::boolean, "is-role-standby"},
    total_tunnels{YType::uint32, "total-tunnels"},
    total_p2mp_tunnels{YType::uint32, "total-p2mp-tunnels"},
    selected_tunnels{YType::uint32, "selected-tunnels"},
    bandwidth_units{YType::enumeration, "bandwidth-units"}
{

    yang_name = "link-interface"; yang_parent_name = "link-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::~LinkInterface()
{
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::has_data() const
{
    return interface_name.is_set
	|| is_role_standby.is_set
	|| total_tunnels.is_set
	|| total_p2mp_tunnels.is_set
	|| selected_tunnels.is_set
	|| bandwidth_units.is_set;
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(total_p2mp_tunnels.yfilter)
	|| ydk::is_set(selected_tunnels.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter);
}

std::string MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/link-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (total_p2mp_tunnels.is_set || is_set(total_p2mp_tunnels.yfilter)) leaf_name_data.push_back(total_p2mp_tunnels.get_name_leafdata());
    if (selected_tunnels.is_set || is_set(selected_tunnels.yfilter)) leaf_name_data.push_back(selected_tunnels.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels = value;
        total_p2mp_tunnels.value_namespace = name_space;
        total_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels = value;
        selected_tunnels.value_namespace = name_space;
        selected_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels.yfilter = yfilter;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "is-role-standby" || name == "total-tunnels" || name == "total-p2mp-tunnels" || name == "selected-tunnels" || name == "bandwidth-units")
        return true;
    return false;
}

MplsLcacStandby::SoftPreemptionGlobalInfo::SoftPreemptionGlobalInfo()
    :
    is_configured{YType::boolean, "is-configured"},
    is_timeout_interval_configured{YType::boolean, "is-timeout-interval-configured"},
    timeout_interval{YType::uint32, "timeout-interval"}
{

    yang_name = "soft-preemption-global-info"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::SoftPreemptionGlobalInfo::~SoftPreemptionGlobalInfo()
{
}

bool MplsLcacStandby::SoftPreemptionGlobalInfo::has_data() const
{
    return is_configured.is_set
	|| is_timeout_interval_configured.is_set
	|| timeout_interval.is_set;
}

bool MplsLcacStandby::SoftPreemptionGlobalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(is_timeout_interval_configured.yfilter)
	|| ydk::is_set(timeout_interval.yfilter);
}

std::string MplsLcacStandby::SoftPreemptionGlobalInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::SoftPreemptionGlobalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-global-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::SoftPreemptionGlobalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (is_timeout_interval_configured.is_set || is_set(is_timeout_interval_configured.yfilter)) leaf_name_data.push_back(is_timeout_interval_configured.get_name_leafdata());
    if (timeout_interval.is_set || is_set(timeout_interval.yfilter)) leaf_name_data.push_back(timeout_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::SoftPreemptionGlobalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::SoftPreemptionGlobalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::SoftPreemptionGlobalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-timeout-interval-configured")
    {
        is_timeout_interval_configured = value;
        is_timeout_interval_configured.value_namespace = name_space;
        is_timeout_interval_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-interval")
    {
        timeout_interval = value;
        timeout_interval.value_namespace = name_space;
        timeout_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::SoftPreemptionGlobalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "is-timeout-interval-configured")
    {
        is_timeout_interval_configured.yfilter = yfilter;
    }
    if(value_path == "timeout-interval")
    {
        timeout_interval.yfilter = yfilter;
    }
}

bool MplsLcacStandby::SoftPreemptionGlobalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-configured" || name == "is-timeout-interval-configured" || name == "timeout-interval")
        return true;
    return false;
}

MplsLcacStandby::SoftPreemptions::SoftPreemptions()
{

    yang_name = "soft-preemptions"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::SoftPreemptions::~SoftPreemptions()
{
}

bool MplsLcacStandby::SoftPreemptions::has_data() const
{
    for (std::size_t index=0; index<soft_preemption.size(); index++)
    {
        if(soft_preemption[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::SoftPreemptions::has_operation() const
{
    for (std::size_t index=0; index<soft_preemption.size(); index++)
    {
        if(soft_preemption[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::SoftPreemptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::SoftPreemptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemptions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::SoftPreemptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::SoftPreemptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "soft-preemption")
    {
        auto c = std::make_shared<MplsLcacStandby::SoftPreemptions::SoftPreemption>();
        c->parent = this;
        soft_preemption.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::SoftPreemptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : soft_preemption)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::SoftPreemptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::SoftPreemptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::SoftPreemptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "soft-preemption")
        return true;
    return false;
}

MplsLcacStandby::SoftPreemptions::SoftPreemption::SoftPreemption()
    :
    interface_name{YType::str, "interface-name"},
    link_address{YType::str, "link-address"},
    total_soft_preempted_bandwidth_bc0{YType::uint64, "total-soft-preempted-bandwidth-bc0"},
    total_soft_preempted_bandwidth_bc1{YType::uint64, "total-soft-preempted-bandwidth-bc1"},
    current_soft_preempted_bandwidth_bc0{YType::uint64, "current-soft-preempted-bandwidth-bc0"},
    current_soft_preempted_bandwidth_bc1{YType::uint64, "current-soft-preempted-bandwidth-bc1"},
    release_soft_preempted_bandwidth_bc0{YType::uint64, "release-soft-preempted-bandwidth-bc0"},
    release_soft_preempted_bandwidth_bc1{YType::uint64, "release-soft-preempted-bandwidth-bc1"},
    current_over_subscribed_bandwidth_bc0{YType::uint64, "current-over-subscribed-bandwidth-bc0"},
    current_over_subscribed_bandwidth_bc1{YType::uint64, "current-over-subscribed-bandwidth-bc1"}
{

    yang_name = "soft-preemption"; yang_parent_name = "soft-preemptions"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::SoftPreemptions::SoftPreemption::~SoftPreemption()
{
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::has_data() const
{
    for (std::size_t index=0; index<current_soft_preemption_lsp.size(); index++)
    {
        if(current_soft_preemption_lsp[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| link_address.is_set
	|| total_soft_preempted_bandwidth_bc0.is_set
	|| total_soft_preempted_bandwidth_bc1.is_set
	|| current_soft_preempted_bandwidth_bc0.is_set
	|| current_soft_preempted_bandwidth_bc1.is_set
	|| release_soft_preempted_bandwidth_bc0.is_set
	|| release_soft_preempted_bandwidth_bc1.is_set
	|| current_over_subscribed_bandwidth_bc0.is_set
	|| current_over_subscribed_bandwidth_bc1.is_set;
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::has_operation() const
{
    for (std::size_t index=0; index<current_soft_preemption_lsp.size(); index++)
    {
        if(current_soft_preemption_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(total_soft_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(total_soft_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(current_soft_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(current_soft_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(release_soft_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(release_soft_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(current_over_subscribed_bandwidth_bc0.yfilter)
	|| ydk::is_set(current_over_subscribed_bandwidth_bc1.yfilter);
}

std::string MplsLcacStandby::SoftPreemptions::SoftPreemption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/soft-preemptions/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::SoftPreemptions::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::SoftPreemptions::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (total_soft_preempted_bandwidth_bc0.is_set || is_set(total_soft_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(total_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (total_soft_preempted_bandwidth_bc1.is_set || is_set(total_soft_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(total_soft_preempted_bandwidth_bc1.get_name_leafdata());
    if (current_soft_preempted_bandwidth_bc0.is_set || is_set(current_soft_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(current_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (current_soft_preempted_bandwidth_bc1.is_set || is_set(current_soft_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(current_soft_preempted_bandwidth_bc1.get_name_leafdata());
    if (release_soft_preempted_bandwidth_bc0.is_set || is_set(release_soft_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(release_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (release_soft_preempted_bandwidth_bc1.is_set || is_set(release_soft_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(release_soft_preempted_bandwidth_bc1.get_name_leafdata());
    if (current_over_subscribed_bandwidth_bc0.is_set || is_set(current_over_subscribed_bandwidth_bc0.yfilter)) leaf_name_data.push_back(current_over_subscribed_bandwidth_bc0.get_name_leafdata());
    if (current_over_subscribed_bandwidth_bc1.is_set || is_set(current_over_subscribed_bandwidth_bc1.yfilter)) leaf_name_data.push_back(current_over_subscribed_bandwidth_bc1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::SoftPreemptions::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-soft-preemption-lsp")
    {
        auto c = std::make_shared<MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp>();
        c->parent = this;
        current_soft_preemption_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::SoftPreemptions::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : current_soft_preemption_lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::SoftPreemptions::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc0")
    {
        total_soft_preempted_bandwidth_bc0 = value;
        total_soft_preempted_bandwidth_bc0.value_namespace = name_space;
        total_soft_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc1")
    {
        total_soft_preempted_bandwidth_bc1 = value;
        total_soft_preempted_bandwidth_bc1.value_namespace = name_space;
        total_soft_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc0")
    {
        current_soft_preempted_bandwidth_bc0 = value;
        current_soft_preempted_bandwidth_bc0.value_namespace = name_space;
        current_soft_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc1")
    {
        current_soft_preempted_bandwidth_bc1 = value;
        current_soft_preempted_bandwidth_bc1.value_namespace = name_space;
        current_soft_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc0")
    {
        release_soft_preempted_bandwidth_bc0 = value;
        release_soft_preempted_bandwidth_bc0.value_namespace = name_space;
        release_soft_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc1")
    {
        release_soft_preempted_bandwidth_bc1 = value;
        release_soft_preempted_bandwidth_bc1.value_namespace = name_space;
        release_soft_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc0")
    {
        current_over_subscribed_bandwidth_bc0 = value;
        current_over_subscribed_bandwidth_bc0.value_namespace = name_space;
        current_over_subscribed_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc1")
    {
        current_over_subscribed_bandwidth_bc1 = value;
        current_over_subscribed_bandwidth_bc1.value_namespace = name_space;
        current_over_subscribed_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::SoftPreemptions::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc0")
    {
        total_soft_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc1")
    {
        total_soft_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc0")
    {
        current_soft_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc1")
    {
        current_soft_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc0")
    {
        release_soft_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc1")
    {
        release_soft_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc0")
    {
        current_over_subscribed_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc1")
    {
        current_over_subscribed_bandwidth_bc1.yfilter = yfilter;
    }
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-soft-preemption-lsp" || name == "interface-name" || name == "link-address" || name == "total-soft-preempted-bandwidth-bc0" || name == "total-soft-preempted-bandwidth-bc1" || name == "current-soft-preempted-bandwidth-bc0" || name == "current-soft-preempted-bandwidth-bc1" || name == "release-soft-preempted-bandwidth-bc0" || name == "release-soft-preempted-bandwidth-bc1" || name == "current-over-subscribed-bandwidth-bc0" || name == "current-over-subscribed-bandwidth-bc1")
        return true;
    return false;
}

MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::CurrentSoftPreemptionLsp()
    :
    tunnel_id{YType::uint16, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    soft_preempted{YType::boolean, "soft-preempted"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"},
    bandwidth_preempted{YType::boolean, "bandwidth-preempted"},
    soft_preempted_fr_rrewrite{YType::boolean, "soft-preempted-fr-rrewrite"}
{

    yang_name = "current-soft-preemption-lsp"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::~CurrentSoftPreemptionLsp()
{
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_data() const
{
    return tunnel_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| bandwidth_type.is_set
	|| soft_preempted.is_set
	|| soft_preemption_timeout.is_set
	|| bandwidth_preempted.is_set
	|| soft_preempted_fr_rrewrite.is_set;
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(soft_preempted.yfilter)
	|| ydk::is_set(soft_preemption_timeout.yfilter)
	|| ydk::is_set(bandwidth_preempted.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite.yfilter);
}

std::string MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-soft-preemption-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (soft_preempted.is_set || is_set(soft_preempted.yfilter)) leaf_name_data.push_back(soft_preempted.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.yfilter)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());
    if (bandwidth_preempted.is_set || is_set(bandwidth_preempted.yfilter)) leaf_name_data.push_back(bandwidth_preempted.get_name_leafdata());
    if (soft_preempted_fr_rrewrite.is_set || is_set(soft_preempted_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted = value;
        soft_preempted.value_namespace = name_space;
        soft_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
        soft_preemption_timeout.value_namespace = name_space;
        soft_preemption_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted = value;
        bandwidth_preempted.value_namespace = name_space;
        bandwidth_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite = value;
        soft_preempted_fr_rrewrite.value_namespace = name_space;
        soft_preempted_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout.yfilter = yfilter;
    }
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite.yfilter = yfilter;
    }
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "requested-bandwidth" || name == "setup-priority" || name == "hold-priority" || name == "bandwidth-type" || name == "soft-preempted" || name == "soft-preemption-timeout" || name == "bandwidth-preempted" || name == "soft-preempted-fr-rrewrite")
        return true;
    return false;
}

MplsLcac::MplsLcac()
    :
    neighbors(std::make_shared<MplsLcac::Neighbors>())
	,preemption_events(std::make_shared<MplsLcac::PreemptionEvents>())
	,advertisements(std::make_shared<MplsLcac::Advertisements>())
	,statistics(std::make_shared<MplsLcac::Statistics>())
	,bandwidth_allocation(std::make_shared<MplsLcac::BandwidthAllocation>())
	,gmpls(std::make_shared<MplsLcac::Gmpls>())
	,bfd_neighbors(std::make_shared<MplsLcac::BfdNeighbors>())
	,bandwidth_account(std::make_shared<MplsLcac::BandwidthAccount>())
	,link_summary(std::make_shared<MplsLcac::LinkSummary>())
	,link_information(std::make_shared<MplsLcac::LinkInformation>())
	,admission_control(std::make_shared<MplsLcac::AdmissionControl>())
	,soft_preemption_global_info(std::make_shared<MplsLcac::SoftPreemptionGlobalInfo>())
	,soft_preemptions(std::make_shared<MplsLcac::SoftPreemptions>())
{
    neighbors->parent = this;
    preemption_events->parent = this;
    advertisements->parent = this;
    statistics->parent = this;
    bandwidth_allocation->parent = this;
    gmpls->parent = this;
    bfd_neighbors->parent = this;
    bandwidth_account->parent = this;
    link_summary->parent = this;
    link_information->parent = this;
    admission_control->parent = this;
    soft_preemption_global_info->parent = this;
    soft_preemptions->parent = this;

    yang_name = "mpls-lcac"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsLcac::~MplsLcac()
{
}

bool MplsLcac::has_data() const
{
    return (neighbors !=  nullptr && neighbors->has_data())
	|| (preemption_events !=  nullptr && preemption_events->has_data())
	|| (advertisements !=  nullptr && advertisements->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (bandwidth_allocation !=  nullptr && bandwidth_allocation->has_data())
	|| (gmpls !=  nullptr && gmpls->has_data())
	|| (bfd_neighbors !=  nullptr && bfd_neighbors->has_data())
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_data())
	|| (link_summary !=  nullptr && link_summary->has_data())
	|| (link_information !=  nullptr && link_information->has_data())
	|| (admission_control !=  nullptr && admission_control->has_data())
	|| (soft_preemption_global_info !=  nullptr && soft_preemption_global_info->has_data())
	|| (soft_preemptions !=  nullptr && soft_preemptions->has_data());
}

bool MplsLcac::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (preemption_events !=  nullptr && preemption_events->has_operation())
	|| (advertisements !=  nullptr && advertisements->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (bandwidth_allocation !=  nullptr && bandwidth_allocation->has_operation())
	|| (gmpls !=  nullptr && gmpls->has_operation())
	|| (bfd_neighbors !=  nullptr && bfd_neighbors->has_operation())
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_operation())
	|| (link_summary !=  nullptr && link_summary->has_operation())
	|| (link_information !=  nullptr && link_information->has_operation())
	|| (admission_control !=  nullptr && admission_control->has_operation())
	|| (soft_preemption_global_info !=  nullptr && soft_preemption_global_info->has_operation())
	|| (soft_preemptions !=  nullptr && soft_preemptions->has_operation());
}

std::string MplsLcac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<MplsLcac::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "preemption-events")
    {
        if(preemption_events == nullptr)
        {
            preemption_events = std::make_shared<MplsLcac::PreemptionEvents>();
        }
        return preemption_events;
    }

    if(child_yang_name == "advertisements")
    {
        if(advertisements == nullptr)
        {
            advertisements = std::make_shared<MplsLcac::Advertisements>();
        }
        return advertisements;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsLcac::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "bandwidth-allocation")
    {
        if(bandwidth_allocation == nullptr)
        {
            bandwidth_allocation = std::make_shared<MplsLcac::BandwidthAllocation>();
        }
        return bandwidth_allocation;
    }

    if(child_yang_name == "gmpls")
    {
        if(gmpls == nullptr)
        {
            gmpls = std::make_shared<MplsLcac::Gmpls>();
        }
        return gmpls;
    }

    if(child_yang_name == "bfd-neighbors")
    {
        if(bfd_neighbors == nullptr)
        {
            bfd_neighbors = std::make_shared<MplsLcac::BfdNeighbors>();
        }
        return bfd_neighbors;
    }

    if(child_yang_name == "bandwidth-account")
    {
        if(bandwidth_account == nullptr)
        {
            bandwidth_account = std::make_shared<MplsLcac::BandwidthAccount>();
        }
        return bandwidth_account;
    }

    if(child_yang_name == "link-summary")
    {
        if(link_summary == nullptr)
        {
            link_summary = std::make_shared<MplsLcac::LinkSummary>();
        }
        return link_summary;
    }

    if(child_yang_name == "link-information")
    {
        if(link_information == nullptr)
        {
            link_information = std::make_shared<MplsLcac::LinkInformation>();
        }
        return link_information;
    }

    if(child_yang_name == "admission-control")
    {
        if(admission_control == nullptr)
        {
            admission_control = std::make_shared<MplsLcac::AdmissionControl>();
        }
        return admission_control;
    }

    if(child_yang_name == "soft-preemption-global-info")
    {
        if(soft_preemption_global_info == nullptr)
        {
            soft_preemption_global_info = std::make_shared<MplsLcac::SoftPreemptionGlobalInfo>();
        }
        return soft_preemption_global_info;
    }

    if(child_yang_name == "soft-preemptions")
    {
        if(soft_preemptions == nullptr)
        {
            soft_preemptions = std::make_shared<MplsLcac::SoftPreemptions>();
        }
        return soft_preemptions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(preemption_events != nullptr)
    {
        children["preemption-events"] = preemption_events;
    }

    if(advertisements != nullptr)
    {
        children["advertisements"] = advertisements;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(bandwidth_allocation != nullptr)
    {
        children["bandwidth-allocation"] = bandwidth_allocation;
    }

    if(gmpls != nullptr)
    {
        children["gmpls"] = gmpls;
    }

    if(bfd_neighbors != nullptr)
    {
        children["bfd-neighbors"] = bfd_neighbors;
    }

    if(bandwidth_account != nullptr)
    {
        children["bandwidth-account"] = bandwidth_account;
    }

    if(link_summary != nullptr)
    {
        children["link-summary"] = link_summary;
    }

    if(link_information != nullptr)
    {
        children["link-information"] = link_information;
    }

    if(admission_control != nullptr)
    {
        children["admission-control"] = admission_control;
    }

    if(soft_preemption_global_info != nullptr)
    {
        children["soft-preemption-global-info"] = soft_preemption_global_info;
    }

    if(soft_preemptions != nullptr)
    {
        children["soft-preemptions"] = soft_preemptions;
    }

    return children;
}

void MplsLcac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsLcac::clone_ptr() const
{
    return std::make_shared<MplsLcac>();
}

std::string MplsLcac::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsLcac::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsLcac::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsLcac::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsLcac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors" || name == "preemption-events" || name == "advertisements" || name == "statistics" || name == "bandwidth-allocation" || name == "gmpls" || name == "bfd-neighbors" || name == "bandwidth-account" || name == "link-summary" || name == "link-information" || name == "admission-control" || name == "soft-preemption-global-info" || name == "soft-preemptions")
        return true;
    return false;
}

MplsLcac::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Neighbors::~Neighbors()
{
}

bool MplsLcac::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<MplsLcac::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

MplsLcac::Neighbors::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Neighbors::Neighbor::~Neighbor()
{
}

bool MplsLcac::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsLcac::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLcac::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<MplsLcac::Neighbors::Neighbor::Neighbor_>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLcac::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "interface-name")
        return true;
    return false;
}

MplsLcac::Neighbors::Neighbor::Neighbor_::Neighbor_()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_id{YType::str, "neighbor-id"},
    area_id{YType::str, "area-id"},
    neighbor_address{YType::str, "neighbor-address"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Neighbors::Neighbor::Neighbor_::~Neighbor_()
{
}

bool MplsLcac::Neighbors::Neighbor::Neighbor_::has_data() const
{
    return interface_name.is_set
	|| neighbor_id.is_set
	|| area_id.is_set
	|| neighbor_address.is_set;
}

bool MplsLcac::Neighbors::Neighbor::Neighbor_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(neighbor_address.yfilter);
}

std::string MplsLcac::Neighbors::Neighbor::Neighbor_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Neighbors::Neighbor::Neighbor_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Neighbors::Neighbor::Neighbor_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Neighbors::Neighbor::Neighbor_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Neighbors::Neighbor::Neighbor_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Neighbors::Neighbor::Neighbor_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool MplsLcac::Neighbors::Neighbor::Neighbor_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "neighbor-id" || name == "area-id" || name == "neighbor-address")
        return true;
    return false;
}

MplsLcac::PreemptionEvents::PreemptionEvents()
{

    yang_name = "preemption-events"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::PreemptionEvents::~PreemptionEvents()
{
}

bool MplsLcac::PreemptionEvents::has_data() const
{
    for (std::size_t index=0; index<preemption_event.size(); index++)
    {
        if(preemption_event[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::PreemptionEvents::has_operation() const
{
    for (std::size_t index=0; index<preemption_event.size(); index++)
    {
        if(preemption_event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::PreemptionEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::PreemptionEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::PreemptionEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::PreemptionEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preemption-event")
    {
        auto c = std::make_shared<MplsLcac::PreemptionEvents::PreemptionEvent>();
        c->parent = this;
        preemption_event.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::PreemptionEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : preemption_event)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::PreemptionEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::PreemptionEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::PreemptionEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preemption-event")
        return true;
    return false;
}

MplsLcac::PreemptionEvents::PreemptionEvent::PreemptionEvent()
    :
    event_index{YType::uint32, "event-index"},
    tunnel_id{YType::uint16, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    old_bandwidth_bc0{YType::uint64, "old-bandwidth-bc0"},
    old_bandwidth_bc1{YType::uint64, "old-bandwidth-bc1"},
    new_bandwidth_bc0{YType::uint64, "new-bandwidth-bc0"},
    new_bandwidth_bc1{YType::uint64, "new-bandwidth-bc1"},
    bandwidth_overshoot0{YType::uint64, "bandwidth-overshoot0"},
    bandwidth_overshoot1{YType::uint64, "bandwidth-overshoot1"},
    interface_name{YType::str, "interface-name"},
    event_time{YType::uint32, "event-time"},
    ls_ps{YType::uint16, "ls-ps"},
    soft_preempted_ls_ps{YType::uint16, "soft-preempted-ls-ps"},
    soft_preempted_ls_ps_fr_rrewrite{YType::uint16, "soft-preempted-ls-ps-fr-rrewrite"},
    hard_preempted_ls_ps{YType::uint16, "hard-preempted-ls-ps"},
    total_preempted_bandwidth_bc0{YType::uint64, "total-preempted-bandwidth-bc0"},
    total_preempted_bandwidth_bc1{YType::uint64, "total-preempted-bandwidth-bc1"},
    softly_preempted_bandwidth_bc0{YType::uint64, "softly-preempted-bandwidth-bc0"},
    softly_preempted_bandwidth_bc1{YType::uint64, "softly-preempted-bandwidth-bc1"},
    soft_preempted_fr_rrewrite_bandwidth_bc0{YType::uint64, "soft-preempted-fr-rrewrite-bandwidth-bc0"},
    soft_preempted_fr_rrewrite_bandwidth_bc1{YType::uint64, "soft-preempted-fr-rrewrite-bandwidth-bc1"},
    hard_preempted_bandwidth_bc0{YType::uint64, "hard-preempted-bandwidth-bc0"},
    hard_preempted_bandwidth_bc1{YType::uint64, "hard-preempted-bandwidth-bc1"},
    tunnels{YType::uint16, "tunnels"},
    soft_preempted_tunnels{YType::uint16, "soft-preempted-tunnels"},
    soft_preempted_tunnels_fr_rrewrite{YType::uint16, "soft-preempted-tunnels-fr-rrewrite"},
    hard_preempted_tunnels{YType::uint16, "hard-preempted-tunnels"}
{

    yang_name = "preemption-event"; yang_parent_name = "preemption-events"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::PreemptionEvents::PreemptionEvent::~PreemptionEvent()
{
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    return event_index.is_set
	|| tunnel_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| bandwidth_type.is_set
	|| old_bandwidth_bc0.is_set
	|| old_bandwidth_bc1.is_set
	|| new_bandwidth_bc0.is_set
	|| new_bandwidth_bc1.is_set
	|| bandwidth_overshoot0.is_set
	|| bandwidth_overshoot1.is_set
	|| interface_name.is_set
	|| event_time.is_set
	|| ls_ps.is_set
	|| soft_preempted_ls_ps.is_set
	|| soft_preempted_ls_ps_fr_rrewrite.is_set
	|| hard_preempted_ls_ps.is_set
	|| total_preempted_bandwidth_bc0.is_set
	|| total_preempted_bandwidth_bc1.is_set
	|| softly_preempted_bandwidth_bc0.is_set
	|| softly_preempted_bandwidth_bc1.is_set
	|| soft_preempted_fr_rrewrite_bandwidth_bc0.is_set
	|| soft_preempted_fr_rrewrite_bandwidth_bc1.is_set
	|| hard_preempted_bandwidth_bc0.is_set
	|| hard_preempted_bandwidth_bc1.is_set
	|| tunnels.is_set
	|| soft_preempted_tunnels.is_set
	|| soft_preempted_tunnels_fr_rrewrite.is_set
	|| hard_preempted_tunnels.is_set;
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_index.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(old_bandwidth_bc0.yfilter)
	|| ydk::is_set(old_bandwidth_bc1.yfilter)
	|| ydk::is_set(new_bandwidth_bc0.yfilter)
	|| ydk::is_set(new_bandwidth_bc1.yfilter)
	|| ydk::is_set(bandwidth_overshoot0.yfilter)
	|| ydk::is_set(bandwidth_overshoot1.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(event_time.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(soft_preempted_ls_ps_fr_rrewrite.yfilter)
	|| ydk::is_set(hard_preempted_ls_ps.yfilter)
	|| ydk::is_set(total_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(total_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(softly_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(softly_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite_bandwidth_bc0.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite_bandwidth_bc1.yfilter)
	|| ydk::is_set(hard_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(hard_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(tunnels.yfilter)
	|| ydk::is_set(soft_preempted_tunnels.yfilter)
	|| ydk::is_set(soft_preempted_tunnels_fr_rrewrite.yfilter)
	|| ydk::is_set(hard_preempted_tunnels.yfilter);
}

std::string MplsLcac::PreemptionEvents::PreemptionEvent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/preemption-events/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::PreemptionEvents::PreemptionEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption-event" <<"[event-index='" <<event_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::PreemptionEvents::PreemptionEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_index.is_set || is_set(event_index.yfilter)) leaf_name_data.push_back(event_index.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (old_bandwidth_bc0.is_set || is_set(old_bandwidth_bc0.yfilter)) leaf_name_data.push_back(old_bandwidth_bc0.get_name_leafdata());
    if (old_bandwidth_bc1.is_set || is_set(old_bandwidth_bc1.yfilter)) leaf_name_data.push_back(old_bandwidth_bc1.get_name_leafdata());
    if (new_bandwidth_bc0.is_set || is_set(new_bandwidth_bc0.yfilter)) leaf_name_data.push_back(new_bandwidth_bc0.get_name_leafdata());
    if (new_bandwidth_bc1.is_set || is_set(new_bandwidth_bc1.yfilter)) leaf_name_data.push_back(new_bandwidth_bc1.get_name_leafdata());
    if (bandwidth_overshoot0.is_set || is_set(bandwidth_overshoot0.yfilter)) leaf_name_data.push_back(bandwidth_overshoot0.get_name_leafdata());
    if (bandwidth_overshoot1.is_set || is_set(bandwidth_overshoot1.yfilter)) leaf_name_data.push_back(bandwidth_overshoot1.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.yfilter)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (soft_preempted_ls_ps.is_set || is_set(soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(soft_preempted_ls_ps.get_name_leafdata());
    if (soft_preempted_ls_ps_fr_rrewrite.is_set || is_set(soft_preempted_ls_ps_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_ls_ps_fr_rrewrite.get_name_leafdata());
    if (hard_preempted_ls_ps.is_set || is_set(hard_preempted_ls_ps.yfilter)) leaf_name_data.push_back(hard_preempted_ls_ps.get_name_leafdata());
    if (total_preempted_bandwidth_bc0.is_set || is_set(total_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(total_preempted_bandwidth_bc0.get_name_leafdata());
    if (total_preempted_bandwidth_bc1.is_set || is_set(total_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(total_preempted_bandwidth_bc1.get_name_leafdata());
    if (softly_preempted_bandwidth_bc0.is_set || is_set(softly_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(softly_preempted_bandwidth_bc0.get_name_leafdata());
    if (softly_preempted_bandwidth_bc1.is_set || is_set(softly_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(softly_preempted_bandwidth_bc1.get_name_leafdata());
    if (soft_preempted_fr_rrewrite_bandwidth_bc0.is_set || is_set(soft_preempted_fr_rrewrite_bandwidth_bc0.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite_bandwidth_bc0.get_name_leafdata());
    if (soft_preempted_fr_rrewrite_bandwidth_bc1.is_set || is_set(soft_preempted_fr_rrewrite_bandwidth_bc1.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite_bandwidth_bc1.get_name_leafdata());
    if (hard_preempted_bandwidth_bc0.is_set || is_set(hard_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(hard_preempted_bandwidth_bc0.get_name_leafdata());
    if (hard_preempted_bandwidth_bc1.is_set || is_set(hard_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(hard_preempted_bandwidth_bc1.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());
    if (soft_preempted_tunnels.is_set || is_set(soft_preempted_tunnels.yfilter)) leaf_name_data.push_back(soft_preempted_tunnels.get_name_leafdata());
    if (soft_preempted_tunnels_fr_rrewrite.is_set || is_set(soft_preempted_tunnels_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_tunnels_fr_rrewrite.get_name_leafdata());
    if (hard_preempted_tunnels.is_set || is_set(hard_preempted_tunnels.yfilter)) leaf_name_data.push_back(hard_preempted_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::PreemptionEvents::PreemptionEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        auto c = std::make_shared<MplsLcac::PreemptionEvents::PreemptionEvent::Lsp>();
        c->parent = this;
        lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::PreemptionEvents::PreemptionEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::PreemptionEvents::PreemptionEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-index")
    {
        event_index = value;
        event_index.value_namespace = name_space;
        event_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-bandwidth-bc0")
    {
        old_bandwidth_bc0 = value;
        old_bandwidth_bc0.value_namespace = name_space;
        old_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-bandwidth-bc1")
    {
        old_bandwidth_bc1 = value;
        old_bandwidth_bc1.value_namespace = name_space;
        old_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-bandwidth-bc0")
    {
        new_bandwidth_bc0 = value;
        new_bandwidth_bc0.value_namespace = name_space;
        new_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-bandwidth-bc1")
    {
        new_bandwidth_bc1 = value;
        new_bandwidth_bc1.value_namespace = name_space;
        new_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-overshoot0")
    {
        bandwidth_overshoot0 = value;
        bandwidth_overshoot0.value_namespace = name_space;
        bandwidth_overshoot0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-overshoot1")
    {
        bandwidth_overshoot1 = value;
        bandwidth_overshoot1.value_namespace = name_space;
        bandwidth_overshoot1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-time")
    {
        event_time = value;
        event_time.value_namespace = name_space;
        event_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps = value;
        soft_preempted_ls_ps.value_namespace = name_space;
        soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-ls-ps-fr-rrewrite")
    {
        soft_preempted_ls_ps_fr_rrewrite = value;
        soft_preempted_ls_ps_fr_rrewrite.value_namespace = name_space;
        soft_preempted_ls_ps_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-ls-ps")
    {
        hard_preempted_ls_ps = value;
        hard_preempted_ls_ps.value_namespace = name_space;
        hard_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-preempted-bandwidth-bc0")
    {
        total_preempted_bandwidth_bc0 = value;
        total_preempted_bandwidth_bc0.value_namespace = name_space;
        total_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-preempted-bandwidth-bc1")
    {
        total_preempted_bandwidth_bc1 = value;
        total_preempted_bandwidth_bc1.value_namespace = name_space;
        total_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "softly-preempted-bandwidth-bc0")
    {
        softly_preempted_bandwidth_bc0 = value;
        softly_preempted_bandwidth_bc0.value_namespace = name_space;
        softly_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "softly-preempted-bandwidth-bc1")
    {
        softly_preempted_bandwidth_bc1 = value;
        softly_preempted_bandwidth_bc1.value_namespace = name_space;
        softly_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc0")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc0 = value;
        soft_preempted_fr_rrewrite_bandwidth_bc0.value_namespace = name_space;
        soft_preempted_fr_rrewrite_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc1")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc1 = value;
        soft_preempted_fr_rrewrite_bandwidth_bc1.value_namespace = name_space;
        soft_preempted_fr_rrewrite_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-bandwidth-bc0")
    {
        hard_preempted_bandwidth_bc0 = value;
        hard_preempted_bandwidth_bc0.value_namespace = name_space;
        hard_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-bandwidth-bc1")
    {
        hard_preempted_bandwidth_bc1 = value;
        hard_preempted_bandwidth_bc1.value_namespace = name_space;
        hard_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-tunnels")
    {
        soft_preempted_tunnels = value;
        soft_preempted_tunnels.value_namespace = name_space;
        soft_preempted_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-tunnels-fr-rrewrite")
    {
        soft_preempted_tunnels_fr_rrewrite = value;
        soft_preempted_tunnels_fr_rrewrite.value_namespace = name_space;
        soft_preempted_tunnels_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-tunnels")
    {
        hard_preempted_tunnels = value;
        hard_preempted_tunnels.value_namespace = name_space;
        hard_preempted_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::PreemptionEvents::PreemptionEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-index")
    {
        event_index.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "old-bandwidth-bc0")
    {
        old_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "old-bandwidth-bc1")
    {
        old_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "new-bandwidth-bc0")
    {
        new_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "new-bandwidth-bc1")
    {
        new_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "bandwidth-overshoot0")
    {
        bandwidth_overshoot0.yfilter = yfilter;
    }
    if(value_path == "bandwidth-overshoot1")
    {
        bandwidth_overshoot1.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "event-time")
    {
        event_time.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-ls-ps-fr-rrewrite")
    {
        soft_preempted_ls_ps_fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-ls-ps")
    {
        hard_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "total-preempted-bandwidth-bc0")
    {
        total_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "total-preempted-bandwidth-bc1")
    {
        total_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "softly-preempted-bandwidth-bc0")
    {
        softly_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "softly-preempted-bandwidth-bc1")
    {
        softly_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc0")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc1")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-bandwidth-bc0")
    {
        hard_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-bandwidth-bc1")
    {
        hard_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-tunnels")
    {
        soft_preempted_tunnels.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-tunnels-fr-rrewrite")
    {
        soft_preempted_tunnels_fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-tunnels")
    {
        hard_preempted_tunnels.yfilter = yfilter;
    }
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp" || name == "event-index" || name == "tunnel-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "requested-bandwidth" || name == "setup-priority" || name == "hold-priority" || name == "bandwidth-type" || name == "old-bandwidth-bc0" || name == "old-bandwidth-bc1" || name == "new-bandwidth-bc0" || name == "new-bandwidth-bc1" || name == "bandwidth-overshoot0" || name == "bandwidth-overshoot1" || name == "interface-name" || name == "event-time" || name == "ls-ps" || name == "soft-preempted-ls-ps" || name == "soft-preempted-ls-ps-fr-rrewrite" || name == "hard-preempted-ls-ps" || name == "total-preempted-bandwidth-bc0" || name == "total-preempted-bandwidth-bc1" || name == "softly-preempted-bandwidth-bc0" || name == "softly-preempted-bandwidth-bc1" || name == "soft-preempted-fr-rrewrite-bandwidth-bc0" || name == "soft-preempted-fr-rrewrite-bandwidth-bc1" || name == "hard-preempted-bandwidth-bc0" || name == "hard-preempted-bandwidth-bc1" || name == "tunnels" || name == "soft-preempted-tunnels" || name == "soft-preempted-tunnels-fr-rrewrite" || name == "hard-preempted-tunnels")
        return true;
    return false;
}

MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::Lsp()
    :
    tunnel_id{YType::uint16, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    soft_preempted{YType::boolean, "soft-preempted"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"},
    bandwidth_preempted{YType::boolean, "bandwidth-preempted"},
    soft_preempted_fr_rrewrite{YType::boolean, "soft-preempted-fr-rrewrite"}
{

    yang_name = "lsp"; yang_parent_name = "preemption-event"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::~Lsp()
{
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::has_data() const
{
    return tunnel_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| bandwidth_type.is_set
	|| soft_preempted.is_set
	|| soft_preemption_timeout.is_set
	|| bandwidth_preempted.is_set
	|| soft_preempted_fr_rrewrite.is_set;
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(soft_preempted.yfilter)
	|| ydk::is_set(soft_preemption_timeout.yfilter)
	|| ydk::is_set(bandwidth_preempted.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite.yfilter);
}

std::string MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (soft_preempted.is_set || is_set(soft_preempted.yfilter)) leaf_name_data.push_back(soft_preempted.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.yfilter)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());
    if (bandwidth_preempted.is_set || is_set(bandwidth_preempted.yfilter)) leaf_name_data.push_back(bandwidth_preempted.get_name_leafdata());
    if (soft_preempted_fr_rrewrite.is_set || is_set(soft_preempted_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted = value;
        soft_preempted.value_namespace = name_space;
        soft_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
        soft_preemption_timeout.value_namespace = name_space;
        soft_preemption_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted = value;
        bandwidth_preempted.value_namespace = name_space;
        bandwidth_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite = value;
        soft_preempted_fr_rrewrite.value_namespace = name_space;
        soft_preempted_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout.yfilter = yfilter;
    }
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite.yfilter = yfilter;
    }
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "requested-bandwidth" || name == "setup-priority" || name == "hold-priority" || name == "bandwidth-type" || name == "soft-preempted" || name == "soft-preemption-timeout" || name == "bandwidth-preempted" || name == "soft-preempted-fr-rrewrite")
        return true;
    return false;
}

MplsLcac::Advertisements::Advertisements()
    :
    flooding_status_message{YType::str, "flooding-status-message"},
    last_flooding_time{YType::uint32, "last-flooding-time"},
    last_flooding_trigger{YType::enumeration, "last-flooding-trigger"},
    next_flooding_time{YType::uint32, "next-flooding-time"},
    ds_te_mode{YType::enumeration, "ds-te-mode"}
{

    yang_name = "advertisements"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::~Advertisements()
{
}

bool MplsLcac::Advertisements::has_data() const
{
    for (std::size_t index=0; index<advertized_areas.size(); index++)
    {
        if(advertized_areas[index]->has_data())
            return true;
    }
    return flooding_status_message.is_set
	|| last_flooding_time.is_set
	|| last_flooding_trigger.is_set
	|| next_flooding_time.is_set
	|| ds_te_mode.is_set;
}

bool MplsLcac::Advertisements::has_operation() const
{
    for (std::size_t index=0; index<advertized_areas.size(); index++)
    {
        if(advertized_areas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flooding_status_message.yfilter)
	|| ydk::is_set(last_flooding_time.yfilter)
	|| ydk::is_set(last_flooding_trigger.yfilter)
	|| ydk::is_set(next_flooding_time.yfilter)
	|| ydk::is_set(ds_te_mode.yfilter);
}

std::string MplsLcac::Advertisements::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisements";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooding_status_message.is_set || is_set(flooding_status_message.yfilter)) leaf_name_data.push_back(flooding_status_message.get_name_leafdata());
    if (last_flooding_time.is_set || is_set(last_flooding_time.yfilter)) leaf_name_data.push_back(last_flooding_time.get_name_leafdata());
    if (last_flooding_trigger.is_set || is_set(last_flooding_trigger.yfilter)) leaf_name_data.push_back(last_flooding_trigger.get_name_leafdata());
    if (next_flooding_time.is_set || is_set(next_flooding_time.yfilter)) leaf_name_data.push_back(next_flooding_time.get_name_leafdata());
    if (ds_te_mode.is_set || is_set(ds_te_mode.yfilter)) leaf_name_data.push_back(ds_te_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertized-areas")
    {
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas>();
        c->parent = this;
        advertized_areas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : advertized_areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::Advertisements::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flooding-status-message")
    {
        flooding_status_message = value;
        flooding_status_message.value_namespace = name_space;
        flooding_status_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooding-time")
    {
        last_flooding_time = value;
        last_flooding_time.value_namespace = name_space;
        last_flooding_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooding-trigger")
    {
        last_flooding_trigger = value;
        last_flooding_trigger.value_namespace = name_space;
        last_flooding_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-flooding-time")
    {
        next_flooding_time = value;
        next_flooding_time.value_namespace = name_space;
        next_flooding_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds-te-mode")
    {
        ds_te_mode = value;
        ds_te_mode.value_namespace = name_space;
        ds_te_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flooding-status-message")
    {
        flooding_status_message.yfilter = yfilter;
    }
    if(value_path == "last-flooding-time")
    {
        last_flooding_time.yfilter = yfilter;
    }
    if(value_path == "last-flooding-trigger")
    {
        last_flooding_trigger.yfilter = yfilter;
    }
    if(value_path == "next-flooding-time")
    {
        next_flooding_time.yfilter = yfilter;
    }
    if(value_path == "ds-te-mode")
    {
        ds_te_mode.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertized-areas" || name == "flooding-status-message" || name == "last-flooding-time" || name == "last-flooding-trigger" || name == "next-flooding-time" || name == "ds-te-mode")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::AdvertizedAreas()
    :
    igp_area_id{YType::str, "igp-area-id"},
    protocol{YType::enumeration, "protocol"},
    system_id{YType::str, "system-id"},
    router_id{YType::str, "router-id"}
{

    yang_name = "advertized-areas"; yang_parent_name = "advertisements"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::~AdvertizedAreas()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::has_data() const
{
    for (std::size_t index=0; index<flooded_link.size(); index++)
    {
        if(flooded_link[index]->has_data())
            return true;
    }
    return igp_area_id.is_set
	|| protocol.is_set
	|| system_id.is_set
	|| router_id.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::has_operation() const
{
    for (std::size_t index=0; index<flooded_link.size(); index++)
    {
        if(flooded_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(igp_area_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertized-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooded-link")
    {
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink>();
        c->parent = this;
        flooded_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : flooded_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-link" || name == "igp-area-id" || name == "protocol" || name == "system-id" || name == "router-id")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::FloodedLink()
    :
    link_id{YType::uint16, "link-id"},
    interface_name{YType::str, "interface-name"},
    link_address{YType::str, "link-address"},
    subnet_type{YType::enumeration, "subnet-type"},
    outgoing_interface_id{YType::uint32, "outgoing-interface-id"},
    is_designated_router{YType::boolean, "is-designated-router"},
    designated_router_igp_id{YType::str, "designated-router-igp-id"},
    neighbor_igp_id{YType::str, "neighbor-igp-id"},
    igp_neighbor_address{YType::str, "igp-neighbor-address"},
    incoming_interface_id{YType::uint32, "incoming-interface-id"},
    te_metric{YType::uint32, "te-metric"},
    igp_metric{YType::uint32, "igp-metric"},
    uni_link_delay{YType::uint32, "uni-link-delay"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    physical_bandwidth{YType::uint32, "physical-bandwidth"},
    bcm_id{YType::uint16, "bcm-id"},
    link_maximum_reservable_bandwidth{YType::uint32, "link-maximum-reservable-bandwidth"},
    reservable_pool0_bandwidth{YType::uint32, "reservable-pool0-bandwidth"},
    reservable_pool1_bandwidth{YType::uint32, "reservable-pool1-bandwidth"},
    is_receiving_reservable_bandwidth_enabled{YType::boolean, "is-receiving-reservable-bandwidth-enabled"},
    receiving_direction{YType::enumeration, "receiving-direction"},
    is_transmitting_reservable_bandwidth_enabled{YType::boolean, "is-transmitting-reservable-bandwidth-enabled"},
    transmitting_direction{YType::enumeration, "transmitting-direction"},
    affinity_attribute_flags{YType::uint32, "affinity-attribute-flags"}
    	,
    odu_link_capabilities(std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities>())
{
    odu_link_capabilities->parent = this;

    yang_name = "flooded-link"; yang_parent_name = "advertized-areas"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::~FloodedLink()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::has_data() const
{
    for (std::size_t index=0; index<extended_affinity_attribute_flag.size(); index++)
    {
        if(extended_affinity_attribute_flag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<receiving_reservable_bandwidth.size(); index++)
    {
        if(receiving_reservable_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<transmitting_reservable_bandwidth.size(); index++)
    {
        if(transmitting_reservable_bandwidth[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| interface_name.is_set
	|| link_address.is_set
	|| subnet_type.is_set
	|| outgoing_interface_id.is_set
	|| is_designated_router.is_set
	|| designated_router_igp_id.is_set
	|| neighbor_igp_id.is_set
	|| igp_neighbor_address.is_set
	|| incoming_interface_id.is_set
	|| te_metric.is_set
	|| igp_metric.is_set
	|| uni_link_delay.is_set
	|| bandwidth_units.is_set
	|| physical_bandwidth.is_set
	|| bcm_id.is_set
	|| link_maximum_reservable_bandwidth.is_set
	|| reservable_pool0_bandwidth.is_set
	|| reservable_pool1_bandwidth.is_set
	|| is_receiving_reservable_bandwidth_enabled.is_set
	|| receiving_direction.is_set
	|| is_transmitting_reservable_bandwidth_enabled.is_set
	|| transmitting_direction.is_set
	|| affinity_attribute_flags.is_set
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_data());
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::has_operation() const
{
    for (std::size_t index=0; index<extended_affinity_attribute_flag.size(); index++)
    {
        if(extended_affinity_attribute_flag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<receiving_reservable_bandwidth.size(); index++)
    {
        if(receiving_reservable_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<transmitting_reservable_bandwidth.size(); index++)
    {
        if(transmitting_reservable_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(subnet_type.yfilter)
	|| ydk::is_set(outgoing_interface_id.yfilter)
	|| ydk::is_set(is_designated_router.yfilter)
	|| ydk::is_set(designated_router_igp_id.yfilter)
	|| ydk::is_set(neighbor_igp_id.yfilter)
	|| ydk::is_set(igp_neighbor_address.yfilter)
	|| ydk::is_set(incoming_interface_id.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(uni_link_delay.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(physical_bandwidth.yfilter)
	|| ydk::is_set(bcm_id.yfilter)
	|| ydk::is_set(link_maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(reservable_pool0_bandwidth.yfilter)
	|| ydk::is_set(reservable_pool1_bandwidth.yfilter)
	|| ydk::is_set(is_receiving_reservable_bandwidth_enabled.yfilter)
	|| ydk::is_set(receiving_direction.yfilter)
	|| ydk::is_set(is_transmitting_reservable_bandwidth_enabled.yfilter)
	|| ydk::is_set(transmitting_direction.yfilter)
	|| ydk::is_set(affinity_attribute_flags.yfilter)
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_operation());
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (subnet_type.is_set || is_set(subnet_type.yfilter)) leaf_name_data.push_back(subnet_type.get_name_leafdata());
    if (outgoing_interface_id.is_set || is_set(outgoing_interface_id.yfilter)) leaf_name_data.push_back(outgoing_interface_id.get_name_leafdata());
    if (is_designated_router.is_set || is_set(is_designated_router.yfilter)) leaf_name_data.push_back(is_designated_router.get_name_leafdata());
    if (designated_router_igp_id.is_set || is_set(designated_router_igp_id.yfilter)) leaf_name_data.push_back(designated_router_igp_id.get_name_leafdata());
    if (neighbor_igp_id.is_set || is_set(neighbor_igp_id.yfilter)) leaf_name_data.push_back(neighbor_igp_id.get_name_leafdata());
    if (igp_neighbor_address.is_set || is_set(igp_neighbor_address.yfilter)) leaf_name_data.push_back(igp_neighbor_address.get_name_leafdata());
    if (incoming_interface_id.is_set || is_set(incoming_interface_id.yfilter)) leaf_name_data.push_back(incoming_interface_id.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (uni_link_delay.is_set || is_set(uni_link_delay.yfilter)) leaf_name_data.push_back(uni_link_delay.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.yfilter)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.yfilter)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (link_maximum_reservable_bandwidth.is_set || is_set(link_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(link_maximum_reservable_bandwidth.get_name_leafdata());
    if (reservable_pool0_bandwidth.is_set || is_set(reservable_pool0_bandwidth.yfilter)) leaf_name_data.push_back(reservable_pool0_bandwidth.get_name_leafdata());
    if (reservable_pool1_bandwidth.is_set || is_set(reservable_pool1_bandwidth.yfilter)) leaf_name_data.push_back(reservable_pool1_bandwidth.get_name_leafdata());
    if (is_receiving_reservable_bandwidth_enabled.is_set || is_set(is_receiving_reservable_bandwidth_enabled.yfilter)) leaf_name_data.push_back(is_receiving_reservable_bandwidth_enabled.get_name_leafdata());
    if (receiving_direction.is_set || is_set(receiving_direction.yfilter)) leaf_name_data.push_back(receiving_direction.get_name_leafdata());
    if (is_transmitting_reservable_bandwidth_enabled.is_set || is_set(is_transmitting_reservable_bandwidth_enabled.yfilter)) leaf_name_data.push_back(is_transmitting_reservable_bandwidth_enabled.get_name_leafdata());
    if (transmitting_direction.is_set || is_set(transmitting_direction.yfilter)) leaf_name_data.push_back(transmitting_direction.get_name_leafdata());
    if (affinity_attribute_flags.is_set || is_set(affinity_attribute_flags.yfilter)) leaf_name_data.push_back(affinity_attribute_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-link-capabilities")
    {
        if(odu_link_capabilities == nullptr)
        {
            odu_link_capabilities = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities>();
        }
        return odu_link_capabilities;
    }

    if(child_yang_name == "extended-affinity-attribute-flag")
    {
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag>();
        c->parent = this;
        extended_affinity_attribute_flag.push_back(c);
        return c;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "receiving-reservable-bandwidth")
    {
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth>();
        c->parent = this;
        receiving_reservable_bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "transmitting-reservable-bandwidth")
    {
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth>();
        c->parent = this;
        transmitting_reservable_bandwidth.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(odu_link_capabilities != nullptr)
    {
        children["odu-link-capabilities"] = odu_link_capabilities;
    }

    count = 0;
    for (auto const & c : extended_affinity_attribute_flag)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : receiving_reservable_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : transmitting_reservable_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet-type")
    {
        subnet_type = value;
        subnet_type.value_namespace = name_space;
        subnet_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface-id")
    {
        outgoing_interface_id = value;
        outgoing_interface_id.value_namespace = name_space;
        outgoing_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-designated-router")
    {
        is_designated_router = value;
        is_designated_router.value_namespace = name_space;
        is_designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-igp-id")
    {
        designated_router_igp_id = value;
        designated_router_igp_id.value_namespace = name_space;
        designated_router_igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-igp-id")
    {
        neighbor_igp_id = value;
        neighbor_igp_id.value_namespace = name_space;
        neighbor_igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbor-address")
    {
        igp_neighbor_address = value;
        igp_neighbor_address.value_namespace = name_space;
        igp_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-interface-id")
    {
        incoming_interface_id = value;
        incoming_interface_id.value_namespace = name_space;
        incoming_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uni-link-delay")
    {
        uni_link_delay = value;
        uni_link_delay.value_namespace = name_space;
        uni_link_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
        physical_bandwidth.value_namespace = name_space;
        physical_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
        bcm_id.value_namespace = name_space;
        bcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-maximum-reservable-bandwidth")
    {
        link_maximum_reservable_bandwidth = value;
        link_maximum_reservable_bandwidth.value_namespace = name_space;
        link_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool0-bandwidth")
    {
        reservable_pool0_bandwidth = value;
        reservable_pool0_bandwidth.value_namespace = name_space;
        reservable_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool1-bandwidth")
    {
        reservable_pool1_bandwidth = value;
        reservable_pool1_bandwidth.value_namespace = name_space;
        reservable_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-receiving-reservable-bandwidth-enabled")
    {
        is_receiving_reservable_bandwidth_enabled = value;
        is_receiving_reservable_bandwidth_enabled.value_namespace = name_space;
        is_receiving_reservable_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receiving-direction")
    {
        receiving_direction = value;
        receiving_direction.value_namespace = name_space;
        receiving_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-transmitting-reservable-bandwidth-enabled")
    {
        is_transmitting_reservable_bandwidth_enabled = value;
        is_transmitting_reservable_bandwidth_enabled.value_namespace = name_space;
        is_transmitting_reservable_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitting-direction")
    {
        transmitting_direction = value;
        transmitting_direction.value_namespace = name_space;
        transmitting_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-attribute-flags")
    {
        affinity_attribute_flags = value;
        affinity_attribute_flags.value_namespace = name_space;
        affinity_attribute_flags.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "subnet-type")
    {
        subnet_type.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface-id")
    {
        outgoing_interface_id.yfilter = yfilter;
    }
    if(value_path == "is-designated-router")
    {
        is_designated_router.yfilter = yfilter;
    }
    if(value_path == "designated-router-igp-id")
    {
        designated_router_igp_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-igp-id")
    {
        neighbor_igp_id.yfilter = yfilter;
    }
    if(value_path == "igp-neighbor-address")
    {
        igp_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "incoming-interface-id")
    {
        incoming_interface_id.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "uni-link-delay")
    {
        uni_link_delay.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bcm-id")
    {
        bcm_id.yfilter = yfilter;
    }
    if(value_path == "link-maximum-reservable-bandwidth")
    {
        link_maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reservable-pool0-bandwidth")
    {
        reservable_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reservable-pool1-bandwidth")
    {
        reservable_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-receiving-reservable-bandwidth-enabled")
    {
        is_receiving_reservable_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "receiving-direction")
    {
        receiving_direction.yfilter = yfilter;
    }
    if(value_path == "is-transmitting-reservable-bandwidth-enabled")
    {
        is_transmitting_reservable_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "transmitting-direction")
    {
        transmitting_direction.yfilter = yfilter;
    }
    if(value_path == "affinity-attribute-flags")
    {
        affinity_attribute_flags.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-link-capabilities" || name == "extended-affinity-attribute-flag" || name == "shared-risk-link-group" || name == "receiving-reservable-bandwidth" || name == "transmitting-reservable-bandwidth" || name == "link-id" || name == "interface-name" || name == "link-address" || name == "subnet-type" || name == "outgoing-interface-id" || name == "is-designated-router" || name == "designated-router-igp-id" || name == "neighbor-igp-id" || name == "igp-neighbor-address" || name == "incoming-interface-id" || name == "te-metric" || name == "igp-metric" || name == "uni-link-delay" || name == "bandwidth-units" || name == "physical-bandwidth" || name == "bcm-id" || name == "link-maximum-reservable-bandwidth" || name == "reservable-pool0-bandwidth" || name == "reservable-pool1-bandwidth" || name == "is-receiving-reservable-bandwidth-enabled" || name == "receiving-direction" || name == "is-transmitting-reservable-bandwidth-enabled" || name == "transmitting-direction" || name == "affinity-attribute-flags")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduLinkCapabilities()
{

    yang_name = "odu-link-capabilities"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::~OduLinkCapabilities()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_data() const
{
    for (std::size_t index=0; index<max_lsp_bandwidth.size(); index++)
    {
        if(max_lsp_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_operation() const
{
    for (std::size_t index=0; index<max_lsp_bandwidth.size(); index++)
    {
        if(max_lsp_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-link-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-lsp-bandwidth")
    {
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth>();
        c->parent = this;
        max_lsp_bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "odu-capability")
    {
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability>();
        c->parent = this;
        odu_capability.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : max_lsp_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : odu_capability)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-lsp-bandwidth" || name == "odu-capability")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::MaxLspBandwidth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "max-lsp-bandwidth"; yang_parent_name = "odu-link-capabilities"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::~MaxLspBandwidth()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lsp-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::OduCapability()
    :
    signal_type{YType::enumeration, "signal-type"},
    stage1{YType::enumeration, "stage1"},
    stage2{YType::enumeration, "stage2"},
    stage3{YType::enumeration, "stage3"},
    stage4{YType::enumeration, "stage4"},
    terminable{YType::boolean, "terminable"},
    switchable{YType::boolean, "switchable"},
    tsg1p25{YType::boolean, "tsg1p25"},
    tsg2p5{YType::boolean, "tsg2p5"},
    vcat_capable{YType::boolean, "vcat-capable"},
    lcas_capable{YType::boolean, "lcas-capable"}
    	,
    bandwidth_info(std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo>())
{
    bandwidth_info->parent = this;

    yang_name = "odu-capability"; yang_parent_name = "odu-link-capabilities"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::~OduCapability()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_data() const
{
    return signal_type.is_set
	|| stage1.is_set
	|| stage2.is_set
	|| stage3.is_set
	|| stage4.is_set
	|| terminable.is_set
	|| switchable.is_set
	|| tsg1p25.is_set
	|| tsg2p5.is_set
	|| vcat_capable.is_set
	|| lcas_capable.is_set
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_data());
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage1.yfilter)
	|| ydk::is_set(stage2.yfilter)
	|| ydk::is_set(stage3.yfilter)
	|| ydk::is_set(stage4.yfilter)
	|| ydk::is_set(terminable.yfilter)
	|| ydk::is_set(switchable.yfilter)
	|| ydk::is_set(tsg1p25.yfilter)
	|| ydk::is_set(tsg2p5.yfilter)
	|| ydk::is_set(vcat_capable.yfilter)
	|| ydk::is_set(lcas_capable.yfilter)
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_operation());
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage1.is_set || is_set(stage1.yfilter)) leaf_name_data.push_back(stage1.get_name_leafdata());
    if (stage2.is_set || is_set(stage2.yfilter)) leaf_name_data.push_back(stage2.get_name_leafdata());
    if (stage3.is_set || is_set(stage3.yfilter)) leaf_name_data.push_back(stage3.get_name_leafdata());
    if (stage4.is_set || is_set(stage4.yfilter)) leaf_name_data.push_back(stage4.get_name_leafdata());
    if (terminable.is_set || is_set(terminable.yfilter)) leaf_name_data.push_back(terminable.get_name_leafdata());
    if (switchable.is_set || is_set(switchable.yfilter)) leaf_name_data.push_back(switchable.get_name_leafdata());
    if (tsg1p25.is_set || is_set(tsg1p25.yfilter)) leaf_name_data.push_back(tsg1p25.get_name_leafdata());
    if (tsg2p5.is_set || is_set(tsg2p5.yfilter)) leaf_name_data.push_back(tsg2p5.get_name_leafdata());
    if (vcat_capable.is_set || is_set(vcat_capable.yfilter)) leaf_name_data.push_back(vcat_capable.get_name_leafdata());
    if (lcas_capable.is_set || is_set(lcas_capable.yfilter)) leaf_name_data.push_back(lcas_capable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-info")
    {
        if(bandwidth_info == nullptr)
        {
            bandwidth_info = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo>();
        }
        return bandwidth_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth_info != nullptr)
    {
        children["bandwidth-info"] = bandwidth_info;
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage1")
    {
        stage1 = value;
        stage1.value_namespace = name_space;
        stage1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage2")
    {
        stage2 = value;
        stage2.value_namespace = name_space;
        stage2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage3")
    {
        stage3 = value;
        stage3.value_namespace = name_space;
        stage3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage4")
    {
        stage4 = value;
        stage4.value_namespace = name_space;
        stage4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminable")
    {
        terminable = value;
        terminable.value_namespace = name_space;
        terminable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchable")
    {
        switchable = value;
        switchable.value_namespace = name_space;
        switchable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25 = value;
        tsg1p25.value_namespace = name_space;
        tsg1p25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5 = value;
        tsg2p5.value_namespace = name_space;
        tsg2p5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable = value;
        vcat_capable.value_namespace = name_space;
        vcat_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lcas-capable")
    {
        lcas_capable = value;
        lcas_capable.value_namespace = name_space;
        lcas_capable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage1")
    {
        stage1.yfilter = yfilter;
    }
    if(value_path == "stage2")
    {
        stage2.yfilter = yfilter;
    }
    if(value_path == "stage3")
    {
        stage3.yfilter = yfilter;
    }
    if(value_path == "stage4")
    {
        stage4.yfilter = yfilter;
    }
    if(value_path == "terminable")
    {
        terminable.yfilter = yfilter;
    }
    if(value_path == "switchable")
    {
        switchable.yfilter = yfilter;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25.yfilter = yfilter;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5.yfilter = yfilter;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable.yfilter = yfilter;
    }
    if(value_path == "lcas-capable")
    {
        lcas_capable.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-info" || name == "signal-type" || name == "stage1" || name == "stage2" || name == "stage3" || name == "stage4" || name == "terminable" || name == "switchable" || name == "tsg1p25" || name == "tsg2p5" || name == "vcat-capable" || name == "lcas-capable")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::BandwidthInfo()
    :
    type{YType::enumeration, "type"}
    	,
    fixed(std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>())
	,flex(std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>())
{
    fixed->parent = this;
    flex->parent = this;

    yang_name = "bandwidth-info"; yang_parent_name = "odu-capability"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::~BandwidthInfo()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_data() const
{
    return type.is_set
	|| (fixed !=  nullptr && fixed->has_data())
	|| (flex !=  nullptr && flex->has_data());
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (fixed !=  nullptr && fixed->has_operation())
	|| (flex !=  nullptr && flex->has_operation());
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed")
    {
        if(fixed == nullptr)
        {
            fixed = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>();
        }
        return fixed;
    }

    if(child_yang_name == "flex")
    {
        if(flex == nullptr)
        {
            flex = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>();
        }
        return flex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fixed != nullptr)
    {
        children["fixed"] = fixed;
    }

    if(flex != nullptr)
    {
        children["flex"] = flex;
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed" || name == "flex" || name == "type")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::Fixed()
    :
    maximum_od_us{YType::uint8, "maximum-od-us"},
    unreserved_od_us{YType::uint8, "unreserved-od-us"}
{

    yang_name = "fixed"; yang_parent_name = "bandwidth-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::~Fixed()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_data() const
{
    return maximum_od_us.is_set
	|| unreserved_od_us.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_od_us.yfilter)
	|| ydk::is_set(unreserved_od_us.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/bandwidth-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_od_us.is_set || is_set(maximum_od_us.yfilter)) leaf_name_data.push_back(maximum_od_us.get_name_leafdata());
    if (unreserved_od_us.is_set || is_set(unreserved_od_us.yfilter)) leaf_name_data.push_back(unreserved_od_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us = value;
        maximum_od_us.value_namespace = name_space;
        maximum_od_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us = value;
        unreserved_od_us.value_namespace = name_space;
        unreserved_od_us.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us.yfilter = yfilter;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-od-us" || name == "unreserved-od-us")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::Flex()
    :
    max_bandwidth{YType::uint32, "max-bandwidth"},
    unreserved_bandwidth{YType::uint32, "unreserved-bandwidth"},
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"}
{

    yang_name = "flex"; yang_parent_name = "bandwidth-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::~Flex()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_data() const
{
    return max_bandwidth.is_set
	|| unreserved_bandwidth.is_set
	|| max_lsp_bandwidth.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter)
	|| ydk::is_set(max_lsp_bandwidth.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/bandwidth-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());
    if (max_lsp_bandwidth.is_set || is_set(max_lsp_bandwidth.yfilter)) leaf_name_data.push_back(max_lsp_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth = value;
        max_lsp_bandwidth.value_namespace = name_space;
        max_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-bandwidth" || name == "unreserved-bandwidth" || name == "max-lsp-bandwidth")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::ExtendedAffinityAttributeFlag()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-affinity-attribute-flag"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::~ExtendedAffinityAttributeFlag()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-affinity-attribute-flag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::ReceivingReservableBandwidth()
    :
    priority{YType::uint8, "priority"},
    pool0_bandwidth{YType::uint32, "pool0-bandwidth"},
    pool1_bandwidth{YType::uint32, "pool1-bandwidth"}
{

    yang_name = "receiving-reservable-bandwidth"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::~ReceivingReservableBandwidth()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_data() const
{
    return priority.is_set
	|| pool0_bandwidth.is_set
	|| pool1_bandwidth.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(pool0_bandwidth.yfilter)
	|| ydk::is_set(pool1_bandwidth.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiving-reservable-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pool0_bandwidth.is_set || is_set(pool0_bandwidth.yfilter)) leaf_name_data.push_back(pool0_bandwidth.get_name_leafdata());
    if (pool1_bandwidth.is_set || is_set(pool1_bandwidth.yfilter)) leaf_name_data.push_back(pool1_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth = value;
        pool0_bandwidth.value_namespace = name_space;
        pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth = value;
        pool1_bandwidth.value_namespace = name_space;
        pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "pool0-bandwidth" || name == "pool1-bandwidth")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::TransmittingReservableBandwidth()
    :
    priority{YType::uint8, "priority"},
    pool0_bandwidth{YType::uint32, "pool0-bandwidth"},
    pool1_bandwidth{YType::uint32, "pool1-bandwidth"}
{

    yang_name = "transmitting-reservable-bandwidth"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::~TransmittingReservableBandwidth()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_data() const
{
    return priority.is_set
	|| pool0_bandwidth.is_set
	|| pool1_bandwidth.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(pool0_bandwidth.yfilter)
	|| ydk::is_set(pool1_bandwidth.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitting-reservable-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pool0_bandwidth.is_set || is_set(pool0_bandwidth.yfilter)) leaf_name_data.push_back(pool0_bandwidth.get_name_leafdata());
    if (pool1_bandwidth.is_set || is_set(pool1_bandwidth.yfilter)) leaf_name_data.push_back(pool1_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth = value;
        pool0_bandwidth.value_namespace = name_space;
        pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth = value;
        pool1_bandwidth.value_namespace = name_space;
        pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "pool0-bandwidth" || name == "pool1-bandwidth")
        return true;
    return false;
}

MplsLcac::Statistics::Statistics()
    :
    summary(std::make_shared<MplsLcac::Statistics::Summary>())
	,statstics_links(std::make_shared<MplsLcac::Statistics::StatsticsLinks>())
{
    summary->parent = this;
    statstics_links->parent = this;

    yang_name = "statistics"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::~Statistics()
{
}

bool MplsLcac::Statistics::has_data() const
{
    return (summary !=  nullptr && summary->has_data())
	|| (statstics_links !=  nullptr && statstics_links->has_data());
}

bool MplsLcac::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (statstics_links !=  nullptr && statstics_links->has_operation());
}

std::string MplsLcac::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsLcac::Statistics::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "statstics-links")
    {
        if(statstics_links == nullptr)
        {
            statstics_links = std::make_shared<MplsLcac::Statistics::StatsticsLinks>();
        }
        return statstics_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(statstics_links != nullptr)
    {
        children["statstics-links"] = statstics_links;
    }

    return children;
}

void MplsLcac::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "statstics-links")
        return true;
    return false;
}

MplsLcac::Statistics::Summary::Summary()
    :
    is_role_standby{YType::boolean, "is-role-standby"}
    	,
    path_statistics(std::make_shared<MplsLcac::Statistics::Summary::PathStatistics>())
	,reservation_statistics(std::make_shared<MplsLcac::Statistics::Summary::ReservationStatistics>())
	,path_statistics32_bit(std::make_shared<MplsLcac::Statistics::Summary::PathStatistics32Bit>())
	,reservation_statistics32_bit(std::make_shared<MplsLcac::Statistics::Summary::ReservationStatistics32Bit>())
{
    path_statistics->parent = this;
    reservation_statistics->parent = this;
    path_statistics32_bit->parent = this;
    reservation_statistics32_bit->parent = this;

    yang_name = "summary"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::Summary::~Summary()
{
}

bool MplsLcac::Statistics::Summary::has_data() const
{
    return is_role_standby.is_set
	|| (path_statistics !=  nullptr && path_statistics->has_data())
	|| (reservation_statistics !=  nullptr && reservation_statistics->has_data())
	|| (path_statistics32_bit !=  nullptr && path_statistics32_bit->has_data())
	|| (reservation_statistics32_bit !=  nullptr && reservation_statistics32_bit->has_data());
}

bool MplsLcac::Statistics::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| (path_statistics !=  nullptr && path_statistics->has_operation())
	|| (reservation_statistics !=  nullptr && reservation_statistics->has_operation())
	|| (path_statistics32_bit !=  nullptr && path_statistics32_bit->has_operation())
	|| (reservation_statistics32_bit !=  nullptr && reservation_statistics32_bit->has_operation());
}

std::string MplsLcac::Statistics::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-statistics")
    {
        if(path_statistics == nullptr)
        {
            path_statistics = std::make_shared<MplsLcac::Statistics::Summary::PathStatistics>();
        }
        return path_statistics;
    }

    if(child_yang_name == "reservation-statistics")
    {
        if(reservation_statistics == nullptr)
        {
            reservation_statistics = std::make_shared<MplsLcac::Statistics::Summary::ReservationStatistics>();
        }
        return reservation_statistics;
    }

    if(child_yang_name == "path-statistics32-bit")
    {
        if(path_statistics32_bit == nullptr)
        {
            path_statistics32_bit = std::make_shared<MplsLcac::Statistics::Summary::PathStatistics32Bit>();
        }
        return path_statistics32_bit;
    }

    if(child_yang_name == "reservation-statistics32-bit")
    {
        if(reservation_statistics32_bit == nullptr)
        {
            reservation_statistics32_bit = std::make_shared<MplsLcac::Statistics::Summary::ReservationStatistics32Bit>();
        }
        return reservation_statistics32_bit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_statistics != nullptr)
    {
        children["path-statistics"] = path_statistics;
    }

    if(reservation_statistics != nullptr)
    {
        children["reservation-statistics"] = reservation_statistics;
    }

    if(path_statistics32_bit != nullptr)
    {
        children["path-statistics32-bit"] = path_statistics32_bit;
    }

    if(reservation_statistics32_bit != nullptr)
    {
        children["reservation-statistics32-bit"] = reservation_statistics32_bit;
    }

    return children;
}

void MplsLcac::Statistics::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-statistics" || name == "reservation-statistics" || name == "path-statistics32-bit" || name == "reservation-statistics32-bit" || name == "is-role-standby")
        return true;
    return false;
}

MplsLcac::Statistics::Summary::PathStatistics::PathStatistics()
    :
    setup_requests{YType::uint16, "setup-requests"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_admits{YType::uint16, "setup-admits"},
    setup_rejects{YType::uint16, "setup-rejects"},
    tear_requests{YType::uint16, "tear-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"}
{

    yang_name = "path-statistics"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::Summary::PathStatistics::~PathStatistics()
{
}

bool MplsLcac::Statistics::Summary::PathStatistics::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcac::Statistics::Summary::PathStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcac::Statistics::Summary::PathStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::Summary::PathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::Summary::PathStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::PathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::Summary::PathStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Statistics::Summary::PathStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::Summary::PathStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::Summary::PathStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcac::Statistics::Summary::ReservationStatistics::ReservationStatistics()
    :
    setup_requests{YType::uint16, "setup-requests"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_admits{YType::uint16, "setup-admits"},
    setup_rejects{YType::uint16, "setup-rejects"},
    tear_requests{YType::uint16, "tear-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"}
{

    yang_name = "reservation-statistics"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::Summary::ReservationStatistics::~ReservationStatistics()
{
}

bool MplsLcac::Statistics::Summary::ReservationStatistics::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcac::Statistics::Summary::ReservationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcac::Statistics::Summary::ReservationStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::Summary::ReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::Summary::ReservationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::ReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::Summary::ReservationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Statistics::Summary::ReservationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::Summary::ReservationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::Summary::ReservationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcac::Statistics::Summary::PathStatistics32Bit::PathStatistics32Bit()
    :
    setup_requests{YType::uint32, "setup-requests"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_admits{YType::uint32, "setup-admits"},
    setup_rejects{YType::uint32, "setup-rejects"},
    tear_requests{YType::uint32, "tear-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"}
{

    yang_name = "path-statistics32-bit"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::Summary::PathStatistics32Bit::~PathStatistics32Bit()
{
}

bool MplsLcac::Statistics::Summary::PathStatistics32Bit::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcac::Statistics::Summary::PathStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcac::Statistics::Summary::PathStatistics32Bit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::Summary::PathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::Summary::PathStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::PathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::Summary::PathStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Statistics::Summary::PathStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::Summary::PathStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::Summary::PathStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcac::Statistics::Summary::ReservationStatistics32Bit::ReservationStatistics32Bit()
    :
    setup_requests{YType::uint32, "setup-requests"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_admits{YType::uint32, "setup-admits"},
    setup_rejects{YType::uint32, "setup-rejects"},
    tear_requests{YType::uint32, "tear-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"}
{

    yang_name = "reservation-statistics32-bit"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::Summary::ReservationStatistics32Bit::~ReservationStatistics32Bit()
{
}

bool MplsLcac::Statistics::Summary::ReservationStatistics32Bit::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcac::Statistics::Summary::ReservationStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Statistics::Summary::ReservationStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::Summary::ReservationStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::Summary::ReservationStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLinks()
{

    yang_name = "statstics-links"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::StatsticsLinks::~StatsticsLinks()
{
}

bool MplsLcac::Statistics::StatsticsLinks::has_data() const
{
    for (std::size_t index=0; index<statstics_link.size(); index++)
    {
        if(statstics_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::Statistics::StatsticsLinks::has_operation() const
{
    for (std::size_t index=0; index<statstics_link.size(); index++)
    {
        if(statstics_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::StatsticsLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statstics-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statstics-link")
    {
        auto c = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink>();
        c->parent = this;
        statstics_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : statstics_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::Statistics::StatsticsLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Statistics::StatsticsLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Statistics::StatsticsLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statstics-link")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::StatsticsLink()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    link_address{YType::str, "link-address"}
    	,
    incoming_path_statistics(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics>())
	,incoming_reservation_statistics(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics>())
	,outgoing_path_statistics(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics>())
	,outgoing_reservation_statistics(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics>())
	,incoming_path_statistics32_bit(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit>())
	,incoming_reservation_statistics32_bit(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit>())
	,outgoing_path_statistics32_bit(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit>())
	,outgoing_reservation_statistics32_bit(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit>())
{
    incoming_path_statistics->parent = this;
    incoming_reservation_statistics->parent = this;
    outgoing_path_statistics->parent = this;
    outgoing_reservation_statistics->parent = this;
    incoming_path_statistics32_bit->parent = this;
    incoming_reservation_statistics32_bit->parent = this;
    outgoing_path_statistics32_bit->parent = this;
    outgoing_reservation_statistics32_bit->parent = this;

    yang_name = "statstics-link"; yang_parent_name = "statstics-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::~StatsticsLink()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| link_address.is_set
	|| (incoming_path_statistics !=  nullptr && incoming_path_statistics->has_data())
	|| (incoming_reservation_statistics !=  nullptr && incoming_reservation_statistics->has_data())
	|| (outgoing_path_statistics !=  nullptr && outgoing_path_statistics->has_data())
	|| (outgoing_reservation_statistics !=  nullptr && outgoing_reservation_statistics->has_data())
	|| (incoming_path_statistics32_bit !=  nullptr && incoming_path_statistics32_bit->has_data())
	|| (incoming_reservation_statistics32_bit !=  nullptr && incoming_reservation_statistics32_bit->has_data())
	|| (outgoing_path_statistics32_bit !=  nullptr && outgoing_path_statistics32_bit->has_data())
	|| (outgoing_reservation_statistics32_bit !=  nullptr && outgoing_reservation_statistics32_bit->has_data());
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| (incoming_path_statistics !=  nullptr && incoming_path_statistics->has_operation())
	|| (incoming_reservation_statistics !=  nullptr && incoming_reservation_statistics->has_operation())
	|| (outgoing_path_statistics !=  nullptr && outgoing_path_statistics->has_operation())
	|| (outgoing_reservation_statistics !=  nullptr && outgoing_reservation_statistics->has_operation())
	|| (incoming_path_statistics32_bit !=  nullptr && incoming_path_statistics32_bit->has_operation())
	|| (incoming_reservation_statistics32_bit !=  nullptr && incoming_reservation_statistics32_bit->has_operation())
	|| (outgoing_path_statistics32_bit !=  nullptr && outgoing_path_statistics32_bit->has_operation())
	|| (outgoing_reservation_statistics32_bit !=  nullptr && outgoing_reservation_statistics32_bit->has_operation());
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/statstics-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statstics-link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-path-statistics")
    {
        if(incoming_path_statistics == nullptr)
        {
            incoming_path_statistics = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics>();
        }
        return incoming_path_statistics;
    }

    if(child_yang_name == "incoming-reservation-statistics")
    {
        if(incoming_reservation_statistics == nullptr)
        {
            incoming_reservation_statistics = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics>();
        }
        return incoming_reservation_statistics;
    }

    if(child_yang_name == "outgoing-path-statistics")
    {
        if(outgoing_path_statistics == nullptr)
        {
            outgoing_path_statistics = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics>();
        }
        return outgoing_path_statistics;
    }

    if(child_yang_name == "outgoing-reservation-statistics")
    {
        if(outgoing_reservation_statistics == nullptr)
        {
            outgoing_reservation_statistics = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics>();
        }
        return outgoing_reservation_statistics;
    }

    if(child_yang_name == "incoming-path-statistics32-bit")
    {
        if(incoming_path_statistics32_bit == nullptr)
        {
            incoming_path_statistics32_bit = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit>();
        }
        return incoming_path_statistics32_bit;
    }

    if(child_yang_name == "incoming-reservation-statistics32-bit")
    {
        if(incoming_reservation_statistics32_bit == nullptr)
        {
            incoming_reservation_statistics32_bit = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit>();
        }
        return incoming_reservation_statistics32_bit;
    }

    if(child_yang_name == "outgoing-path-statistics32-bit")
    {
        if(outgoing_path_statistics32_bit == nullptr)
        {
            outgoing_path_statistics32_bit = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit>();
        }
        return outgoing_path_statistics32_bit;
    }

    if(child_yang_name == "outgoing-reservation-statistics32-bit")
    {
        if(outgoing_reservation_statistics32_bit == nullptr)
        {
            outgoing_reservation_statistics32_bit = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit>();
        }
        return outgoing_reservation_statistics32_bit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(incoming_path_statistics != nullptr)
    {
        children["incoming-path-statistics"] = incoming_path_statistics;
    }

    if(incoming_reservation_statistics != nullptr)
    {
        children["incoming-reservation-statistics"] = incoming_reservation_statistics;
    }

    if(outgoing_path_statistics != nullptr)
    {
        children["outgoing-path-statistics"] = outgoing_path_statistics;
    }

    if(outgoing_reservation_statistics != nullptr)
    {
        children["outgoing-reservation-statistics"] = outgoing_reservation_statistics;
    }

    if(incoming_path_statistics32_bit != nullptr)
    {
        children["incoming-path-statistics32-bit"] = incoming_path_statistics32_bit;
    }

    if(incoming_reservation_statistics32_bit != nullptr)
    {
        children["incoming-reservation-statistics32-bit"] = incoming_reservation_statistics32_bit;
    }

    if(outgoing_path_statistics32_bit != nullptr)
    {
        children["outgoing-path-statistics32-bit"] = outgoing_path_statistics32_bit;
    }

    if(outgoing_reservation_statistics32_bit != nullptr)
    {
        children["outgoing-reservation-statistics32-bit"] = outgoing_reservation_statistics32_bit;
    }

    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-path-statistics" || name == "incoming-reservation-statistics" || name == "outgoing-path-statistics" || name == "outgoing-reservation-statistics" || name == "incoming-path-statistics32-bit" || name == "incoming-reservation-statistics32-bit" || name == "outgoing-path-statistics32-bit" || name == "outgoing-reservation-statistics32-bit" || name == "interface-name" || name == "interface-name-xr" || name == "link-address")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::IncomingPathStatistics()
    :
    setup_requests{YType::uint16, "setup-requests"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_admits{YType::uint16, "setup-admits"},
    setup_rejects{YType::uint16, "setup-rejects"},
    tear_requests{YType::uint16, "tear-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"}
{

    yang_name = "incoming-path-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::~IncomingPathStatistics()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-path-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::IncomingReservationStatistics()
    :
    setup_requests{YType::uint16, "setup-requests"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_admits{YType::uint16, "setup-admits"},
    setup_rejects{YType::uint16, "setup-rejects"},
    tear_requests{YType::uint16, "tear-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"}
{

    yang_name = "incoming-reservation-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::~IncomingReservationStatistics()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-reservation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::OutgoingPathStatistics()
    :
    setup_requests{YType::uint16, "setup-requests"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_admits{YType::uint16, "setup-admits"},
    setup_rejects{YType::uint16, "setup-rejects"},
    tear_requests{YType::uint16, "tear-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"}
{

    yang_name = "outgoing-path-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::~OutgoingPathStatistics()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-path-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::OutgoingReservationStatistics()
    :
    setup_requests{YType::uint16, "setup-requests"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_admits{YType::uint16, "setup-admits"},
    setup_rejects{YType::uint16, "setup-rejects"},
    tear_requests{YType::uint16, "tear-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"}
{

    yang_name = "outgoing-reservation-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::~OutgoingReservationStatistics()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-reservation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::IncomingPathStatistics32Bit()
    :
    setup_requests{YType::uint32, "setup-requests"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_admits{YType::uint32, "setup-admits"},
    setup_rejects{YType::uint32, "setup-rejects"},
    tear_requests{YType::uint32, "tear-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"}
{

    yang_name = "incoming-path-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::~IncomingPathStatistics32Bit()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-path-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::IncomingReservationStatistics32Bit()
    :
    setup_requests{YType::uint32, "setup-requests"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_admits{YType::uint32, "setup-admits"},
    setup_rejects{YType::uint32, "setup-rejects"},
    tear_requests{YType::uint32, "tear-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"}
{

    yang_name = "incoming-reservation-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::~IncomingReservationStatistics32Bit()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-reservation-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::OutgoingPathStatistics32Bit()
    :
    setup_requests{YType::uint32, "setup-requests"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_admits{YType::uint32, "setup-admits"},
    setup_rejects{YType::uint32, "setup-rejects"},
    tear_requests{YType::uint32, "tear-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"}
{

    yang_name = "outgoing-path-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::~OutgoingPathStatistics32Bit()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-path-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::OutgoingReservationStatistics32Bit()
    :
    setup_requests{YType::uint32, "setup-requests"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_admits{YType::uint32, "setup-admits"},
    setup_rejects{YType::uint32, "setup-rejects"},
    tear_requests{YType::uint32, "tear-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"}
{

    yang_name = "outgoing-reservation-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::~OutgoingReservationStatistics32Bit()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-reservation-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocation()
    :
    global(std::make_shared<MplsLcac::BandwidthAllocation::Global>())
	,bandwidth_allocation_links(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks>())
{
    global->parent = this;
    bandwidth_allocation_links->parent = this;

    yang_name = "bandwidth-allocation"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAllocation::~BandwidthAllocation()
{
}

bool MplsLcac::BandwidthAllocation::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (bandwidth_allocation_links !=  nullptr && bandwidth_allocation_links->has_data());
}

bool MplsLcac::BandwidthAllocation::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (bandwidth_allocation_links !=  nullptr && bandwidth_allocation_links->has_operation());
}

std::string MplsLcac::BandwidthAllocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAllocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLcac::BandwidthAllocation::Global>();
        }
        return global;
    }

    if(child_yang_name == "bandwidth-allocation-links")
    {
        if(bandwidth_allocation_links == nullptr)
        {
            bandwidth_allocation_links = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks>();
        }
        return bandwidth_allocation_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(bandwidth_allocation_links != nullptr)
    {
        children["bandwidth-allocation-links"] = bandwidth_allocation_links;
    }

    return children;
}

void MplsLcac::BandwidthAllocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BandwidthAllocation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BandwidthAllocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "bandwidth-allocation-links")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::Global::Global()
    :
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    bandwidth_hold_time{YType::uint16, "bandwidth-hold-time"}
{

    yang_name = "global"; yang_parent_name = "bandwidth-allocation"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAllocation::Global::~Global()
{
}

bool MplsLcac::BandwidthAllocation::Global::has_data() const
{
    return is_role_standby.is_set
	|| links.is_set
	|| bandwidth_hold_time.is_set;
}

bool MplsLcac::BandwidthAllocation::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(bandwidth_hold_time.yfilter);
}

std::string MplsLcac::BandwidthAllocation::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-allocation/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAllocation::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (bandwidth_hold_time.is_set || is_set(bandwidth_hold_time.yfilter)) leaf_name_data.push_back(bandwidth_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAllocation::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-hold-time")
    {
        bandwidth_hold_time = value;
        bandwidth_hold_time.value_namespace = name_space;
        bandwidth_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "bandwidth-hold-time")
    {
        bandwidth_hold_time.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-role-standby" || name == "links" || name == "bandwidth-hold-time")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLinks()
{

    yang_name = "bandwidth-allocation-links"; yang_parent_name = "bandwidth-allocation"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::~BandwidthAllocationLinks()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::has_data() const
{
    for (std::size_t index=0; index<bandwidth_allocation_link.size(); index++)
    {
        if(bandwidth_allocation_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_allocation_link.size(); index++)
    {
        if(bandwidth_allocation_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-allocation/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-allocation-link")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink>();
        c->parent = this;
        bandwidth_allocation_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bandwidth_allocation_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-allocation-link")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::BandwidthAllocationLink()
    :
    interface_name{YType::str, "interface-name"},
    total_bandwidth_descriptors{YType::uint16, "total-bandwidth-descriptors"},
    bandwidth_descriptors{YType::uint16, "bandwidth-descriptors"},
    bandwidth_pool{YType::enumeration, "bandwidth-pool"},
    flooding_up_thresholds_are_default{YType::boolean, "flooding-up-thresholds-are-default"},
    flooding_down_thresholds_are_default{YType::boolean, "flooding-down-thresholds-are-default"},
    flooding_up_thresholds_are_global{YType::boolean, "flooding-up-thresholds-are-global"},
    flooding_down_thresholds_are_global{YType::boolean, "flooding-down-thresholds-are-global"}
    	,
    link_common(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon>())
	,upstream_bandwidth(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth>())
	,downstream_bandwidth(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth>())
{
    link_common->parent = this;
    upstream_bandwidth->parent = this;
    downstream_bandwidth->parent = this;

    yang_name = "bandwidth-allocation-link"; yang_parent_name = "bandwidth-allocation-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::~BandwidthAllocationLink()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_data() const
{
    for (std::size_t index=0; index<flooding_up_threshold.size(); index++)
    {
        if(flooding_up_threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<flooding_down_threshold.size(); index++)
    {
        if(flooding_down_threshold[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| total_bandwidth_descriptors.is_set
	|| bandwidth_descriptors.is_set
	|| bandwidth_pool.is_set
	|| flooding_up_thresholds_are_default.is_set
	|| flooding_down_thresholds_are_default.is_set
	|| flooding_up_thresholds_are_global.is_set
	|| flooding_down_thresholds_are_global.is_set
	|| (link_common !=  nullptr && link_common->has_data())
	|| (upstream_bandwidth !=  nullptr && upstream_bandwidth->has_data())
	|| (downstream_bandwidth !=  nullptr && downstream_bandwidth->has_data());
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_operation() const
{
    for (std::size_t index=0; index<flooding_up_threshold.size(); index++)
    {
        if(flooding_up_threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<flooding_down_threshold.size(); index++)
    {
        if(flooding_down_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(total_bandwidth_descriptors.yfilter)
	|| ydk::is_set(bandwidth_descriptors.yfilter)
	|| ydk::is_set(bandwidth_pool.yfilter)
	|| ydk::is_set(flooding_up_thresholds_are_default.yfilter)
	|| ydk::is_set(flooding_down_thresholds_are_default.yfilter)
	|| ydk::is_set(flooding_up_thresholds_are_global.yfilter)
	|| ydk::is_set(flooding_down_thresholds_are_global.yfilter)
	|| (link_common !=  nullptr && link_common->has_operation())
	|| (upstream_bandwidth !=  nullptr && upstream_bandwidth->has_operation())
	|| (downstream_bandwidth !=  nullptr && downstream_bandwidth->has_operation());
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-allocation/bandwidth-allocation-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation-link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (total_bandwidth_descriptors.is_set || is_set(total_bandwidth_descriptors.yfilter)) leaf_name_data.push_back(total_bandwidth_descriptors.get_name_leafdata());
    if (bandwidth_descriptors.is_set || is_set(bandwidth_descriptors.yfilter)) leaf_name_data.push_back(bandwidth_descriptors.get_name_leafdata());
    if (bandwidth_pool.is_set || is_set(bandwidth_pool.yfilter)) leaf_name_data.push_back(bandwidth_pool.get_name_leafdata());
    if (flooding_up_thresholds_are_default.is_set || is_set(flooding_up_thresholds_are_default.yfilter)) leaf_name_data.push_back(flooding_up_thresholds_are_default.get_name_leafdata());
    if (flooding_down_thresholds_are_default.is_set || is_set(flooding_down_thresholds_are_default.yfilter)) leaf_name_data.push_back(flooding_down_thresholds_are_default.get_name_leafdata());
    if (flooding_up_thresholds_are_global.is_set || is_set(flooding_up_thresholds_are_global.yfilter)) leaf_name_data.push_back(flooding_up_thresholds_are_global.get_name_leafdata());
    if (flooding_down_thresholds_are_global.is_set || is_set(flooding_down_thresholds_are_global.yfilter)) leaf_name_data.push_back(flooding_down_thresholds_are_global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-common")
    {
        if(link_common == nullptr)
        {
            link_common = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon>();
        }
        return link_common;
    }

    if(child_yang_name == "upstream-bandwidth")
    {
        if(upstream_bandwidth == nullptr)
        {
            upstream_bandwidth = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth>();
        }
        return upstream_bandwidth;
    }

    if(child_yang_name == "downstream-bandwidth")
    {
        if(downstream_bandwidth == nullptr)
        {
            downstream_bandwidth = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth>();
        }
        return downstream_bandwidth;
    }

    if(child_yang_name == "flooding-up-threshold")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold>();
        c->parent = this;
        flooding_up_threshold.push_back(c);
        return c;
    }

    if(child_yang_name == "flooding-down-threshold")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold>();
        c->parent = this;
        flooding_down_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_common != nullptr)
    {
        children["link-common"] = link_common;
    }

    if(upstream_bandwidth != nullptr)
    {
        children["upstream-bandwidth"] = upstream_bandwidth;
    }

    if(downstream_bandwidth != nullptr)
    {
        children["downstream-bandwidth"] = downstream_bandwidth;
    }

    count = 0;
    for (auto const & c : flooding_up_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : flooding_down_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bandwidth-descriptors")
    {
        total_bandwidth_descriptors = value;
        total_bandwidth_descriptors.value_namespace = name_space;
        total_bandwidth_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-descriptors")
    {
        bandwidth_descriptors = value;
        bandwidth_descriptors.value_namespace = name_space;
        bandwidth_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool = value;
        bandwidth_pool.value_namespace = name_space;
        bandwidth_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-up-thresholds-are-default")
    {
        flooding_up_thresholds_are_default = value;
        flooding_up_thresholds_are_default.value_namespace = name_space;
        flooding_up_thresholds_are_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-down-thresholds-are-default")
    {
        flooding_down_thresholds_are_default = value;
        flooding_down_thresholds_are_default.value_namespace = name_space;
        flooding_down_thresholds_are_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-up-thresholds-are-global")
    {
        flooding_up_thresholds_are_global = value;
        flooding_up_thresholds_are_global.value_namespace = name_space;
        flooding_up_thresholds_are_global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-down-thresholds-are-global")
    {
        flooding_down_thresholds_are_global = value;
        flooding_down_thresholds_are_global.value_namespace = name_space;
        flooding_down_thresholds_are_global.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "total-bandwidth-descriptors")
    {
        total_bandwidth_descriptors.yfilter = yfilter;
    }
    if(value_path == "bandwidth-descriptors")
    {
        bandwidth_descriptors.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool.yfilter = yfilter;
    }
    if(value_path == "flooding-up-thresholds-are-default")
    {
        flooding_up_thresholds_are_default.yfilter = yfilter;
    }
    if(value_path == "flooding-down-thresholds-are-default")
    {
        flooding_down_thresholds_are_default.yfilter = yfilter;
    }
    if(value_path == "flooding-up-thresholds-are-global")
    {
        flooding_up_thresholds_are_global.yfilter = yfilter;
    }
    if(value_path == "flooding-down-thresholds-are-global")
    {
        flooding_down_thresholds_are_global.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-common" || name == "upstream-bandwidth" || name == "downstream-bandwidth" || name == "flooding-up-threshold" || name == "flooding-down-threshold" || name == "interface-name" || name == "total-bandwidth-descriptors" || name == "bandwidth-descriptors" || name == "bandwidth-pool" || name == "flooding-up-thresholds-are-default" || name == "flooding-down-thresholds-are-default" || name == "flooding-up-thresholds-are-global" || name == "flooding-down-thresholds-are-global")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkCommon()
    :
    link_id{YType::str, "link-id"},
    link_address{YType::str, "link-address"},
    is_unnumbered{YType::boolean, "is-unnumbered"},
    has_protection{YType::boolean, "has-protection"},
    capability{YType::uint32, "capability"},
    working_priority{YType::uint32, "working-priority"},
    resource_provider{YType::enumeration, "resource-provider"},
    is_resource_provider_installed{YType::boolean, "is-resource-provider-installed"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    physical_bandwidth{YType::uint64, "physical-bandwidth"},
    bcm_id{YType::uint16, "bcm-id"},
    maximum_reservable_bandwidth{YType::uint64, "maximum-reservable-bandwidth"},
    last_flooded_effective_maximum_reservable_bandwidth{YType::uint64, "last-flooded-effective-maximum-reservable-bandwidth"},
    incoming_reservable_bandwidth_percentage{YType::uint8, "incoming-reservable-bandwidth-percentage"},
    outgoing_reservable_bandwidth_percentage{YType::uint8, "outgoing-reservable-bandwidth-percentage"},
    maximum_reservable_pool0_bandwidth{YType::uint64, "maximum-reservable-pool0-bandwidth"},
    incoming_reservable_pool0_bandwidth_percentage{YType::uint8, "incoming-reservable-pool0-bandwidth-percentage"},
    outgoing_reservable_pool0_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool0-bandwidth-percentage"},
    maximum_reservable_pool1_bandwidth{YType::uint64, "maximum-reservable-pool1-bandwidth"},
    incoming_reservable_pool1_bandwidth_percentage{YType::uint8, "incoming-reservable-pool1-bandwidth-percentage"},
    outgoing_reservable_pool1_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool1-bandwidth-percentage"},
    inbound_admission_method{YType::enumeration, "inbound-admission-method"},
    outbound_admission_method{YType::enumeration, "outbound-admission-method"},
    igp_neighbors{YType::uint16, "igp-neighbors"}
    	,
    link_flags(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags>())
{
    link_flags->parent = this;

    yang_name = "link-common"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::~LinkCommon()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_data() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_address.is_set
	|| is_unnumbered.is_set
	|| has_protection.is_set
	|| capability.is_set
	|| working_priority.is_set
	|| resource_provider.is_set
	|| is_resource_provider_installed.is_set
	|| bandwidth_units.is_set
	|| physical_bandwidth.is_set
	|| bcm_id.is_set
	|| maximum_reservable_bandwidth.is_set
	|| last_flooded_effective_maximum_reservable_bandwidth.is_set
	|| incoming_reservable_bandwidth_percentage.is_set
	|| outgoing_reservable_bandwidth_percentage.is_set
	|| maximum_reservable_pool0_bandwidth.is_set
	|| incoming_reservable_pool0_bandwidth_percentage.is_set
	|| outgoing_reservable_pool0_bandwidth_percentage.is_set
	|| maximum_reservable_pool1_bandwidth.is_set
	|| incoming_reservable_pool1_bandwidth_percentage.is_set
	|| outgoing_reservable_pool1_bandwidth_percentage.is_set
	|| inbound_admission_method.is_set
	|| outbound_admission_method.is_set
	|| igp_neighbors.is_set
	|| (link_flags !=  nullptr && link_flags->has_data());
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_operation() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(is_unnumbered.yfilter)
	|| ydk::is_set(has_protection.yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(working_priority.yfilter)
	|| ydk::is_set(resource_provider.yfilter)
	|| ydk::is_set(is_resource_provider_installed.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(physical_bandwidth.yfilter)
	|| ydk::is_set(bcm_id.yfilter)
	|| ydk::is_set(maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(incoming_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(maximum_reservable_pool0_bandwidth.yfilter)
	|| ydk::is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(maximum_reservable_pool1_bandwidth.yfilter)
	|| ydk::is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(inbound_admission_method.yfilter)
	|| ydk::is_set(outbound_admission_method.yfilter)
	|| ydk::is_set(igp_neighbors.yfilter)
	|| (link_flags !=  nullptr && link_flags->has_operation());
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (is_unnumbered.is_set || is_set(is_unnumbered.yfilter)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());
    if (has_protection.is_set || is_set(has_protection.yfilter)) leaf_name_data.push_back(has_protection.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (working_priority.is_set || is_set(working_priority.yfilter)) leaf_name_data.push_back(working_priority.get_name_leafdata());
    if (resource_provider.is_set || is_set(resource_provider.yfilter)) leaf_name_data.push_back(resource_provider.get_name_leafdata());
    if (is_resource_provider_installed.is_set || is_set(is_resource_provider_installed.yfilter)) leaf_name_data.push_back(is_resource_provider_installed.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.yfilter)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.yfilter)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (maximum_reservable_bandwidth.is_set || is_set(maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_bandwidth.get_name_leafdata());
    if (last_flooded_effective_maximum_reservable_bandwidth.is_set || is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(last_flooded_effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (incoming_reservable_bandwidth_percentage.is_set || is_set(incoming_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_bandwidth_percentage.is_set || is_set(outgoing_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_bandwidth_percentage.get_name_leafdata());
    if (maximum_reservable_pool0_bandwidth.is_set || is_set(maximum_reservable_pool0_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool0_bandwidth.get_name_leafdata());
    if (incoming_reservable_pool0_bandwidth_percentage.is_set || is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool0_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (maximum_reservable_pool1_bandwidth.is_set || is_set(maximum_reservable_pool1_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool1_bandwidth.get_name_leafdata());
    if (incoming_reservable_pool1_bandwidth_percentage.is_set || is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool1_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (inbound_admission_method.is_set || is_set(inbound_admission_method.yfilter)) leaf_name_data.push_back(inbound_admission_method.get_name_leafdata());
    if (outbound_admission_method.is_set || is_set(outbound_admission_method.yfilter)) leaf_name_data.push_back(outbound_admission_method.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.yfilter)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-flags")
    {
        if(link_flags == nullptr)
        {
            link_flags = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags>();
        }
        return link_flags;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-switching-capability-descriptor")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor>();
        c->parent = this;
        interface_switching_capability_descriptor.push_back(c);
        return c;
    }

    if(child_yang_name == "flooded-areas")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas>();
        c->parent = this;
        flooded_areas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_flags != nullptr)
    {
        children["link-flags"] = link_flags;
    }

    count = 0;
    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : interface_switching_capability_descriptor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : flooded_areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
        is_unnumbered.value_namespace = name_space;
        is_unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-protection")
    {
        has_protection = value;
        has_protection.value_namespace = name_space;
        has_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "working-priority")
    {
        working_priority = value;
        working_priority.value_namespace = name_space;
        working_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-provider")
    {
        resource_provider = value;
        resource_provider.value_namespace = name_space;
        resource_provider.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed = value;
        is_resource_provider_installed.value_namespace = name_space;
        is_resource_provider_installed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
        physical_bandwidth.value_namespace = name_space;
        physical_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
        bcm_id.value_namespace = name_space;
        bcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth = value;
        maximum_reservable_bandwidth.value_namespace = name_space;
        maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth = value;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace = name_space;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage = value;
        incoming_reservable_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage = value;
        outgoing_reservable_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth = value;
        maximum_reservable_pool0_bandwidth.value_namespace = name_space;
        maximum_reservable_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage = value;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage = value;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth = value;
        maximum_reservable_pool1_bandwidth.value_namespace = name_space;
        maximum_reservable_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage = value;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage = value;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method = value;
        inbound_admission_method.value_namespace = name_space;
        inbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method = value;
        outbound_admission_method.value_namespace = name_space;
        outbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
        igp_neighbors.value_namespace = name_space;
        igp_neighbors.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered.yfilter = yfilter;
    }
    if(value_path == "has-protection")
    {
        has_protection.yfilter = yfilter;
    }
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "working-priority")
    {
        working_priority.yfilter = yfilter;
    }
    if(value_path == "resource-provider")
    {
        resource_provider.yfilter = yfilter;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bcm-id")
    {
        bcm_id.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-flags" || name == "shared-risk-link-group" || name == "interface-switching-capability-descriptor" || name == "flooded-areas" || name == "link-id" || name == "link-address" || name == "is-unnumbered" || name == "has-protection" || name == "capability" || name == "working-priority" || name == "resource-provider" || name == "is-resource-provider-installed" || name == "bandwidth-units" || name == "physical-bandwidth" || name == "bcm-id" || name == "maximum-reservable-bandwidth" || name == "last-flooded-effective-maximum-reservable-bandwidth" || name == "incoming-reservable-bandwidth-percentage" || name == "outgoing-reservable-bandwidth-percentage" || name == "maximum-reservable-pool0-bandwidth" || name == "incoming-reservable-pool0-bandwidth-percentage" || name == "outgoing-reservable-pool0-bandwidth-percentage" || name == "maximum-reservable-pool1-bandwidth" || name == "incoming-reservable-pool1-bandwidth-percentage" || name == "outgoing-reservable-pool1-bandwidth-percentage" || name == "inbound-admission-method" || name == "outbound-admission-method" || name == "igp-neighbors")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::LinkFlags()
    :
    is_mpls_te_on{YType::boolean, "is-mpls-te-on"},
    signaling_agent{YType::enumeration, "signaling-agent"},
    is_admin_up{YType::boolean, "is-admin-up"}
{

    yang_name = "link-flags"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::~LinkFlags()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_data() const
{
    return is_mpls_te_on.is_set
	|| signaling_agent.is_set
	|| is_admin_up.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_mpls_te_on.yfilter)
	|| ydk::is_set(signaling_agent.yfilter)
	|| ydk::is_set(is_admin_up.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mpls_te_on.is_set || is_set(is_mpls_te_on.yfilter)) leaf_name_data.push_back(is_mpls_te_on.get_name_leafdata());
    if (signaling_agent.is_set || is_set(signaling_agent.yfilter)) leaf_name_data.push_back(signaling_agent.get_name_leafdata());
    if (is_admin_up.is_set || is_set(is_admin_up.yfilter)) leaf_name_data.push_back(is_admin_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on = value;
        is_mpls_te_on.value_namespace = name_space;
        is_mpls_te_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent = value;
        signaling_agent.value_namespace = name_space;
        signaling_agent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admin-up")
    {
        is_admin_up = value;
        is_admin_up.value_namespace = name_space;
        is_admin_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on.yfilter = yfilter;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent.yfilter = yfilter;
    }
    if(value_path == "is-admin-up")
    {
        is_admin_up.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-mpls-te-on" || name == "signaling-agent" || name == "is-admin-up")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::InterfaceSwitchingCapabilityDescriptor()
    :
    key{YType::uint8, "key"},
    switching_capability{YType::uint8, "switching-capability"},
    encoding{YType::uint8, "encoding"}
{

    yang_name = "interface-switching-capability-descriptor"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::~InterfaceSwitchingCapabilityDescriptor()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_data() const
{
    return key.is_set
	|| switching_capability.is_set
	|| encoding.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(switching_capability.yfilter)
	|| ydk::is_set(encoding.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-switching-capability-descriptor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (switching_capability.is_set || is_set(switching_capability.yfilter)) leaf_name_data.push_back(switching_capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-capability")
    {
        switching_capability = value;
        switching_capability.value_namespace = name_space;
        switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "switching-capability")
    {
        switching_capability.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "switching-capability" || name == "encoding")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::FloodedAreas()
    :
    flooded_area{YType::str, "flooded-area"}
{

    yang_name = "flooded-areas"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::~FloodedAreas()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_data() const
{
    return flooded_area.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flooded_area.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooded_area.is_set || is_set(flooded_area.yfilter)) leaf_name_data.push_back(flooded_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flooded-area")
    {
        flooded_area = value;
        flooded_area.value_namespace = name_space;
        flooded_area.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flooded-area")
    {
        flooded_area.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-area")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::UpstreamBandwidth()
    :
    bandwidth_direction{YType::enumeration, "bandwidth-direction"},
    is_admission_method_allocated_bandwidth{YType::boolean, "is-admission-method-allocated-bandwidth"},
    bandwidth_units{YType::enumeration, "bandwidth-units"}
{

    yang_name = "upstream-bandwidth"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::~UpstreamBandwidth()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_data() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_data())
            return true;
    }
    return bandwidth_direction.is_set
	|| is_admission_method_allocated_bandwidth.is_set
	|| bandwidth_units.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_direction.yfilter)
	|| ydk::is_set(is_admission_method_allocated_bandwidth.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upstream-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_direction.is_set || is_set(bandwidth_direction.yfilter)) leaf_name_data.push_back(bandwidth_direction.get_name_leafdata());
    if (is_admission_method_allocated_bandwidth.is_set || is_set(is_admission_method_allocated_bandwidth.yfilter)) leaf_name_data.push_back(is_admission_method_allocated_bandwidth.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-pool0")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0>();
        c->parent = this;
        bandwidth_pool0.push_back(c);
        return c;
    }

    if(child_yang_name == "bandwidth-pool1")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1>();
        c->parent = this;
        bandwidth_pool1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bandwidth_pool0)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : bandwidth_pool1)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction = value;
        bandwidth_direction.value_namespace = name_space;
        bandwidth_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth = value;
        is_admission_method_allocated_bandwidth.value_namespace = name_space;
        is_admission_method_allocated_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction.yfilter = yfilter;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-pool0" || name == "bandwidth-pool1" || name == "bandwidth-direction" || name == "is-admission-method-allocated-bandwidth" || name == "bandwidth-units")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::BandwidthPool0()
    :
    hold_priority{YType::uint8, "hold-priority"},
    held_amount{YType::uint32, "held-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    locked_amount{YType::uint32, "locked-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool0"; yang_parent_name = "upstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::~BandwidthPool0()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_data() const
{
    return hold_priority.is_set
	|| held_amount.is_set
	|| total_held_amount.is_set
	|| locked_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "held-amount" || name == "total-held-amount" || name == "locked-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::BandwidthPool1()
    :
    hold_priority{YType::uint8, "hold-priority"},
    held_amount{YType::uint32, "held-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    locked_amount{YType::uint32, "locked-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool1"; yang_parent_name = "upstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::~BandwidthPool1()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_data() const
{
    return hold_priority.is_set
	|| held_amount.is_set
	|| total_held_amount.is_set
	|| locked_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "held-amount" || name == "total-held-amount" || name == "locked-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::DownstreamBandwidth()
    :
    bandwidth_direction{YType::enumeration, "bandwidth-direction"},
    is_admission_method_allocated_bandwidth{YType::boolean, "is-admission-method-allocated-bandwidth"},
    bandwidth_units{YType::enumeration, "bandwidth-units"}
{

    yang_name = "downstream-bandwidth"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::~DownstreamBandwidth()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_data() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_data())
            return true;
    }
    return bandwidth_direction.is_set
	|| is_admission_method_allocated_bandwidth.is_set
	|| bandwidth_units.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_direction.yfilter)
	|| ydk::is_set(is_admission_method_allocated_bandwidth.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_direction.is_set || is_set(bandwidth_direction.yfilter)) leaf_name_data.push_back(bandwidth_direction.get_name_leafdata());
    if (is_admission_method_allocated_bandwidth.is_set || is_set(is_admission_method_allocated_bandwidth.yfilter)) leaf_name_data.push_back(is_admission_method_allocated_bandwidth.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-pool0")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0>();
        c->parent = this;
        bandwidth_pool0.push_back(c);
        return c;
    }

    if(child_yang_name == "bandwidth-pool1")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1>();
        c->parent = this;
        bandwidth_pool1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bandwidth_pool0)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : bandwidth_pool1)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction = value;
        bandwidth_direction.value_namespace = name_space;
        bandwidth_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth = value;
        is_admission_method_allocated_bandwidth.value_namespace = name_space;
        is_admission_method_allocated_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction.yfilter = yfilter;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-pool0" || name == "bandwidth-pool1" || name == "bandwidth-direction" || name == "is-admission-method-allocated-bandwidth" || name == "bandwidth-units")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::BandwidthPool0()
    :
    hold_priority{YType::uint8, "hold-priority"},
    held_amount{YType::uint32, "held-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    locked_amount{YType::uint32, "locked-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool0"; yang_parent_name = "downstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::~BandwidthPool0()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_data() const
{
    return hold_priority.is_set
	|| held_amount.is_set
	|| total_held_amount.is_set
	|| locked_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "held-amount" || name == "total-held-amount" || name == "locked-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::BandwidthPool1()
    :
    hold_priority{YType::uint8, "hold-priority"},
    held_amount{YType::uint32, "held-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    locked_amount{YType::uint32, "locked-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool1"; yang_parent_name = "downstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::~BandwidthPool1()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_data() const
{
    return hold_priority.is_set
	|| held_amount.is_set
	|| total_held_amount.is_set
	|| locked_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "held-amount" || name == "total-held-amount" || name == "locked-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::FloodingUpThreshold()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "flooding-up-threshold"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::~FloodingUpThreshold()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding-up-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::FloodingDownThreshold()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "flooding-down-threshold"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::~FloodingDownThreshold()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding-down-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::Gmpls::Gmpls()
    :
    nni(std::make_shared<MplsLcac::Gmpls::Nni>())
	,uni(std::make_shared<MplsLcac::Gmpls::Uni>())
{
    nni->parent = this;
    uni->parent = this;

    yang_name = "gmpls"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Gmpls::~Gmpls()
{
}

bool MplsLcac::Gmpls::has_data() const
{
    return (nni !=  nullptr && nni->has_data())
	|| (uni !=  nullptr && uni->has_data());
}

bool MplsLcac::Gmpls::has_operation() const
{
    return is_set(yfilter)
	|| (nni !=  nullptr && nni->has_operation())
	|| (uni !=  nullptr && uni->has_operation());
}

std::string MplsLcac::Gmpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Gmpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Gmpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Gmpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nni")
    {
        if(nni == nullptr)
        {
            nni = std::make_shared<MplsLcac::Gmpls::Nni>();
        }
        return nni;
    }

    if(child_yang_name == "uni")
    {
        if(uni == nullptr)
        {
            uni = std::make_shared<MplsLcac::Gmpls::Uni>();
        }
        return uni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Gmpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nni != nullptr)
    {
        children["nni"] = nni;
    }

    if(uni != nullptr)
    {
        children["uni"] = uni;
    }

    return children;
}

void MplsLcac::Gmpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Gmpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Gmpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nni" || name == "uni")
        return true;
    return false;
}

MplsLcac::Gmpls::Nni::Nni()
{

    yang_name = "nni"; yang_parent_name = "gmpls"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Gmpls::Nni::~Nni()
{
}

bool MplsLcac::Gmpls::Nni::has_data() const
{
    return false;
}

bool MplsLcac::Gmpls::Nni::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsLcac::Gmpls::Nni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/gmpls/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Gmpls::Nni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Gmpls::Nni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Gmpls::Nni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Gmpls::Nni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Gmpls::Nni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Gmpls::Nni::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Gmpls::Nni::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsLcac::Gmpls::Uni::Uni()
{

    yang_name = "uni"; yang_parent_name = "gmpls"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Gmpls::Uni::~Uni()
{
}

bool MplsLcac::Gmpls::Uni::has_data() const
{
    return false;
}

bool MplsLcac::Gmpls::Uni::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsLcac::Gmpls::Uni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/gmpls/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Gmpls::Uni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Gmpls::Uni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Gmpls::Uni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Gmpls::Uni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::Gmpls::Uni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Gmpls::Uni::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Gmpls::Uni::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsLcac::BfdNeighbors::BfdNeighbors()
{

    yang_name = "bfd-neighbors"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BfdNeighbors::~BfdNeighbors()
{
}

bool MplsLcac::BfdNeighbors::has_data() const
{
    for (std::size_t index=0; index<bfd_neighbor.size(); index++)
    {
        if(bfd_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::BfdNeighbors::has_operation() const
{
    for (std::size_t index=0; index<bfd_neighbor.size(); index++)
    {
        if(bfd_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::BfdNeighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BfdNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BfdNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BfdNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-neighbor")
    {
        auto c = std::make_shared<MplsLcac::BfdNeighbors::BfdNeighbor>();
        c->parent = this;
        bfd_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BfdNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bfd_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::BfdNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BfdNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BfdNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-neighbor")
        return true;
    return false;
}

MplsLcac::BfdNeighbors::BfdNeighbor::BfdNeighbor()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "bfd-neighbor"; yang_parent_name = "bfd-neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BfdNeighbors::BfdNeighbor::~BfdNeighbor()
{
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLcac::BfdNeighbors::BfdNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bfd-neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BfdNeighbors::BfdNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-neighbor" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BfdNeighbors::BfdNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BfdNeighbors::BfdNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BfdNeighbors::BfdNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::BfdNeighbors::BfdNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BfdNeighbors::BfdNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "interface-name")
        return true;
    return false;
}

MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    is_bfd_up{YType::boolean, "is-bfd-up"}
{

    yang_name = "neighbor"; yang_parent_name = "bfd-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::~Neighbor()
{
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| is_bfd_up.is_set;
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(is_bfd_up.yfilter);
}

std::string MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (is_bfd_up.is_set || is_set(is_bfd_up.yfilter)) leaf_name_data.push_back(is_bfd_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-up")
    {
        is_bfd_up = value;
        is_bfd_up.value_namespace = name_space;
        is_bfd_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "is-bfd-up")
    {
        is_bfd_up.yfilter = yfilter;
    }
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-bfd-up")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccount()
    :
    bandwidth_account_links(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks>())
{
    bandwidth_account_links->parent = this;

    yang_name = "bandwidth-account"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAccount::~BandwidthAccount()
{
}

bool MplsLcac::BandwidthAccount::has_data() const
{
    return (bandwidth_account_links !=  nullptr && bandwidth_account_links->has_data());
}

bool MplsLcac::BandwidthAccount::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth_account_links !=  nullptr && bandwidth_account_links->has_operation());
}

std::string MplsLcac::BandwidthAccount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAccount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-links")
    {
        if(bandwidth_account_links == nullptr)
        {
            bandwidth_account_links = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks>();
        }
        return bandwidth_account_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth_account_links != nullptr)
    {
        children["bandwidth-account-links"] = bandwidth_account_links;
    }

    return children;
}

void MplsLcac::BandwidthAccount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BandwidthAccount::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BandwidthAccount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-links")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLinks()
{

    yang_name = "bandwidth-account-links"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::~BandwidthAccountLinks()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::has_data() const
{
    for (std::size_t index=0; index<bandwidth_account_link.size(); index++)
    {
        if(bandwidth_account_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_account_link.size(); index++)
    {
        if(bandwidth_account_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-account/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-link")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink>();
        c->parent = this;
        bandwidth_account_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bandwidth_account_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-link")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::BandwidthAccountLink()
    :
    interface_name{YType::str, "interface-name"},
    link_id{YType::str, "link-id"}
    	,
    common_info(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo>())
	,rsvp_te_sample_history(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory>())
	,sr_sample_history(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory>())
{
    common_info->parent = this;
    rsvp_te_sample_history->parent = this;
    sr_sample_history->parent = this;

    yang_name = "bandwidth-account-link"; yang_parent_name = "bandwidth-account-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::~BandwidthAccountLink()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_data() const
{
    return interface_name.is_set
	|| link_id.is_set
	|| (common_info !=  nullptr && common_info->has_data())
	|| (rsvp_te_sample_history !=  nullptr && rsvp_te_sample_history->has_data())
	|| (sr_sample_history !=  nullptr && sr_sample_history->has_data());
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| (common_info !=  nullptr && common_info->has_operation())
	|| (rsvp_te_sample_history !=  nullptr && rsvp_te_sample_history->has_operation())
	|| (sr_sample_history !=  nullptr && sr_sample_history->has_operation());
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-account/bandwidth-account-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-info")
    {
        if(common_info == nullptr)
        {
            common_info = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo>();
        }
        return common_info;
    }

    if(child_yang_name == "rsvp-te-sample-history")
    {
        if(rsvp_te_sample_history == nullptr)
        {
            rsvp_te_sample_history = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory>();
        }
        return rsvp_te_sample_history;
    }

    if(child_yang_name == "sr-sample-history")
    {
        if(sr_sample_history == nullptr)
        {
            sr_sample_history = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory>();
        }
        return sr_sample_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(common_info != nullptr)
    {
        children["common-info"] = common_info;
    }

    if(rsvp_te_sample_history != nullptr)
    {
        children["rsvp-te-sample-history"] = rsvp_te_sample_history;
    }

    if(sr_sample_history != nullptr)
    {
        children["sr-sample-history"] = sr_sample_history;
    }

    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-info" || name == "rsvp-te-sample-history" || name == "sr-sample-history" || name == "interface-name" || name == "link-id")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::CommonInfo()
    :
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    application_enforced{YType::boolean, "application-enforced"},
    collection_type{YType::enumeration, "collection-type"},
    sample_time_remaining_timestamp_nanosec{YType::uint64, "sample-time-remaining-timestamp-nanosec"},
    last_sample_collection_timestamp_nanosec{YType::uint64, "last-sample-collection-timestamp-nanosec"},
    next_sample_collection_nanosec{YType::uint64, "next-sample-collection-nanosec"},
    application_time_remaining_nanosec{YType::uint64, "application-time-remaining-nanosec"},
    last_application_timestamp_nanosec{YType::uint64, "last-application-timestamp-nanosec"},
    next_application_timestamp_nanosec{YType::uint64, "next-application-timestamp-nanosec"},
    effective_maximum_reservable_bandwidth{YType::uint64, "effective-maximum-reservable-bandwidth"}
    	,
    rsvp_te_bandwidth_utilization(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization>())
	,sr_bandwidth_utilization(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization>())
{
    rsvp_te_bandwidth_utilization->parent = this;
    sr_bandwidth_utilization->parent = this;

    yang_name = "common-info"; yang_parent_name = "bandwidth-account-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::~CommonInfo()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_data() const
{
    return is_bandwidth_account_enabled.is_set
	|| application_enforced.is_set
	|| collection_type.is_set
	|| sample_time_remaining_timestamp_nanosec.is_set
	|| last_sample_collection_timestamp_nanosec.is_set
	|| next_sample_collection_nanosec.is_set
	|| application_time_remaining_nanosec.is_set
	|| last_application_timestamp_nanosec.is_set
	|| next_application_timestamp_nanosec.is_set
	|| effective_maximum_reservable_bandwidth.is_set
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_data())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_data());
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_account_enabled.yfilter)
	|| ydk::is_set(application_enforced.yfilter)
	|| ydk::is_set(collection_type.yfilter)
	|| ydk::is_set(sample_time_remaining_timestamp_nanosec.yfilter)
	|| ydk::is_set(last_sample_collection_timestamp_nanosec.yfilter)
	|| ydk::is_set(next_sample_collection_nanosec.yfilter)
	|| ydk::is_set(application_time_remaining_nanosec.yfilter)
	|| ydk::is_set(last_application_timestamp_nanosec.yfilter)
	|| ydk::is_set(next_application_timestamp_nanosec.yfilter)
	|| ydk::is_set(effective_maximum_reservable_bandwidth.yfilter)
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_operation())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_operation());
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.yfilter)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (application_enforced.is_set || is_set(application_enforced.yfilter)) leaf_name_data.push_back(application_enforced.get_name_leafdata());
    if (collection_type.is_set || is_set(collection_type.yfilter)) leaf_name_data.push_back(collection_type.get_name_leafdata());
    if (sample_time_remaining_timestamp_nanosec.is_set || is_set(sample_time_remaining_timestamp_nanosec.yfilter)) leaf_name_data.push_back(sample_time_remaining_timestamp_nanosec.get_name_leafdata());
    if (last_sample_collection_timestamp_nanosec.is_set || is_set(last_sample_collection_timestamp_nanosec.yfilter)) leaf_name_data.push_back(last_sample_collection_timestamp_nanosec.get_name_leafdata());
    if (next_sample_collection_nanosec.is_set || is_set(next_sample_collection_nanosec.yfilter)) leaf_name_data.push_back(next_sample_collection_nanosec.get_name_leafdata());
    if (application_time_remaining_nanosec.is_set || is_set(application_time_remaining_nanosec.yfilter)) leaf_name_data.push_back(application_time_remaining_nanosec.get_name_leafdata());
    if (last_application_timestamp_nanosec.is_set || is_set(last_application_timestamp_nanosec.yfilter)) leaf_name_data.push_back(last_application_timestamp_nanosec.get_name_leafdata());
    if (next_application_timestamp_nanosec.is_set || is_set(next_application_timestamp_nanosec.yfilter)) leaf_name_data.push_back(next_application_timestamp_nanosec.get_name_leafdata());
    if (effective_maximum_reservable_bandwidth.is_set || is_set(effective_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(effective_maximum_reservable_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-bandwidth-utilization")
    {
        if(rsvp_te_bandwidth_utilization == nullptr)
        {
            rsvp_te_bandwidth_utilization = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization>();
        }
        return rsvp_te_bandwidth_utilization;
    }

    if(child_yang_name == "sr-bandwidth-utilization")
    {
        if(sr_bandwidth_utilization == nullptr)
        {
            sr_bandwidth_utilization = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization>();
        }
        return sr_bandwidth_utilization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvp_te_bandwidth_utilization != nullptr)
    {
        children["rsvp-te-bandwidth-utilization"] = rsvp_te_bandwidth_utilization;
    }

    if(sr_bandwidth_utilization != nullptr)
    {
        children["sr-bandwidth-utilization"] = sr_bandwidth_utilization;
    }

    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
        is_bandwidth_account_enabled.value_namespace = name_space;
        is_bandwidth_account_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-enforced")
    {
        application_enforced = value;
        application_enforced.value_namespace = name_space;
        application_enforced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-type")
    {
        collection_type = value;
        collection_type.value_namespace = name_space;
        collection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-time-remaining-timestamp-nanosec")
    {
        sample_time_remaining_timestamp_nanosec = value;
        sample_time_remaining_timestamp_nanosec.value_namespace = name_space;
        sample_time_remaining_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sample-collection-timestamp-nanosec")
    {
        last_sample_collection_timestamp_nanosec = value;
        last_sample_collection_timestamp_nanosec.value_namespace = name_space;
        last_sample_collection_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-sample-collection-nanosec")
    {
        next_sample_collection_nanosec = value;
        next_sample_collection_nanosec.value_namespace = name_space;
        next_sample_collection_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-time-remaining-nanosec")
    {
        application_time_remaining_nanosec = value;
        application_time_remaining_nanosec.value_namespace = name_space;
        application_time_remaining_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-application-timestamp-nanosec")
    {
        last_application_timestamp_nanosec = value;
        last_application_timestamp_nanosec.value_namespace = name_space;
        last_application_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-application-timestamp-nanosec")
    {
        next_application_timestamp_nanosec = value;
        next_application_timestamp_nanosec.value_namespace = name_space;
        next_application_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-maximum-reservable-bandwidth")
    {
        effective_maximum_reservable_bandwidth = value;
        effective_maximum_reservable_bandwidth.value_namespace = name_space;
        effective_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled.yfilter = yfilter;
    }
    if(value_path == "application-enforced")
    {
        application_enforced.yfilter = yfilter;
    }
    if(value_path == "collection-type")
    {
        collection_type.yfilter = yfilter;
    }
    if(value_path == "sample-time-remaining-timestamp-nanosec")
    {
        sample_time_remaining_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "last-sample-collection-timestamp-nanosec")
    {
        last_sample_collection_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "next-sample-collection-nanosec")
    {
        next_sample_collection_nanosec.yfilter = yfilter;
    }
    if(value_path == "application-time-remaining-nanosec")
    {
        application_time_remaining_nanosec.yfilter = yfilter;
    }
    if(value_path == "last-application-timestamp-nanosec")
    {
        last_application_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "next-application-timestamp-nanosec")
    {
        next_application_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "effective-maximum-reservable-bandwidth")
    {
        effective_maximum_reservable_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-bandwidth-utilization" || name == "sr-bandwidth-utilization" || name == "is-bandwidth-account-enabled" || name == "application-enforced" || name == "collection-type" || name == "sample-time-remaining-timestamp-nanosec" || name == "last-sample-collection-timestamp-nanosec" || name == "next-sample-collection-nanosec" || name == "application-time-remaining-nanosec" || name == "last-application-timestamp-nanosec" || name == "next-application-timestamp-nanosec" || name == "effective-maximum-reservable-bandwidth")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::RsvpTeBandwidthUtilization()
    :
    total_link_bandwidth_utilization{YType::uint64, "total-link-bandwidth-utilization"},
    rsvp_te_bandwidth_utilization{YType::uint64, "rsvp-te-bandwidth-utilization"},
    non_rsvp_te_bandwidth_utilization{YType::uint64, "non-rsvp-te-bandwidth-utilization"},
    rsvp_te_adjusted_bandwidth_utilization{YType::uint64, "rsvp-te-adjusted-bandwidth-utilization"},
    rsvp_te_enforced_bandwidth_utilization{YType::uint64, "rsvp-te-enforced-bandwidth-utilization"}
{

    yang_name = "rsvp-te-bandwidth-utilization"; yang_parent_name = "common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::~RsvpTeBandwidthUtilization()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::has_data() const
{
    return total_link_bandwidth_utilization.is_set
	|| rsvp_te_bandwidth_utilization.is_set
	|| non_rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_adjusted_bandwidth_utilization.is_set
	|| rsvp_te_enforced_bandwidth_utilization.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_link_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(non_rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_enforced_bandwidth_utilization.yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_link_bandwidth_utilization.is_set || is_set(total_link_bandwidth_utilization.yfilter)) leaf_name_data.push_back(total_link_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_bandwidth_utilization.is_set || is_set(rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (non_rsvp_te_bandwidth_utilization.is_set || is_set(non_rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_adjusted_bandwidth_utilization.is_set || is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_adjusted_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_enforced_bandwidth_utilization.is_set || is_set(rsvp_te_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_enforced_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization = value;
        total_link_bandwidth_utilization.value_namespace = name_space;
        total_link_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization = value;
        rsvp_te_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization = value;
        non_rsvp_te_bandwidth_utilization.value_namespace = name_space;
        non_rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization = value;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization = value;
        rsvp_te_enforced_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_enforced_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-link-bandwidth-utilization" || name == "rsvp-te-bandwidth-utilization" || name == "non-rsvp-te-bandwidth-utilization" || name == "rsvp-te-adjusted-bandwidth-utilization" || name == "rsvp-te-enforced-bandwidth-utilization")
        return true;
    return false;
}


}
}

