
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_35.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_36.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::SrBandwidthUtilization()
    :
    sr_bandwidth_utilization{YType::uint64, "sr-bandwidth-utilization"},
    sr_adjusted_bandwidth_utilization{YType::uint64, "sr-adjusted-bandwidth-utilization"},
    sr_enforced_bandwidth_utilization{YType::uint64, "sr-enforced-bandwidth-utilization"}
{

    yang_name = "sr-bandwidth-utilization"; yang_parent_name = "common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::~SrBandwidthUtilization()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::has_data() const
{
    return sr_bandwidth_utilization.is_set
	|| sr_adjusted_bandwidth_utilization.is_set
	|| sr_enforced_bandwidth_utilization.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_enforced_bandwidth_utilization.yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_bandwidth_utilization.is_set || is_set(sr_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_bandwidth_utilization.get_name_leafdata());
    if (sr_adjusted_bandwidth_utilization.is_set || is_set(sr_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_adjusted_bandwidth_utilization.get_name_leafdata());
    if (sr_enforced_bandwidth_utilization.is_set || is_set(sr_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_enforced_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-bandwidth-utilization" || name == "sr-adjusted-bandwidth-utilization" || name == "sr-enforced-bandwidth-utilization")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeSampleHistory()
{

    yang_name = "rsvp-te-sample-history"; yang_parent_name = "bandwidth-account-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::~RsvpTeSampleHistory()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::has_data() const
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

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::has_operation() const
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

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-active-interval-sample")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample>();
        c->parent = this;
        rsvp_te_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "rsvp-te-previous-interval-sample")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample>();
        c->parent = this;
        rsvp_te_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_children() const
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

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-active-interval-sample" || name == "rsvp-te-previous-interval-sample")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::RsvpTeActiveIntervalSample()
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

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::~RsvpTeActiveIntervalSample()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::has_data() const
{
    return timestamp_nanosec.is_set
	|| total_rate.is_set
	|| total_packet_rate.is_set
	|| rsvp_te_rate.is_set
	|| rsvp_te_packet_rate.is_set
	|| non_rsvp_te_rate.is_set
	|| non_rsvp_te_packet_rate.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::has_operation() const
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

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp-nanosec" || name == "total-rate" || name == "total-packet-rate" || name == "rsvp-te-rate" || name == "rsvp-te-packet-rate" || name == "non-rsvp-te-rate" || name == "non-rsvp-te-packet-rate")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::RsvpTePreviousIntervalSample()
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

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::~RsvpTePreviousIntervalSample()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::has_data() const
{
    return timestamp_nanosec.is_set
	|| total_rate.is_set
	|| total_packet_rate.is_set
	|| rsvp_te_rate.is_set
	|| rsvp_te_packet_rate.is_set
	|| non_rsvp_te_rate.is_set
	|| non_rsvp_te_packet_rate.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::has_operation() const
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

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp-nanosec" || name == "total-rate" || name == "total-packet-rate" || name == "rsvp-te-rate" || name == "rsvp-te-packet-rate" || name == "non-rsvp-te-rate" || name == "non-rsvp-te-packet-rate")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrSampleHistory()
{

    yang_name = "sr-sample-history"; yang_parent_name = "bandwidth-account-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::~SrSampleHistory()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::has_data() const
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

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::has_operation() const
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

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-active-interval-sample")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample>();
        c->parent = this;
        sr_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-previous-interval-sample")
    {
        auto c = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample>();
        c->parent = this;
        sr_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_children() const
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

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-active-interval-sample" || name == "sr-previous-interval-sample")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::SrActiveIntervalSample()
    :
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"},
    sr_rate{YType::uint64, "sr-rate"},
    sr_packet_rate{YType::uint64, "sr-packet-rate"}
{

    yang_name = "sr-active-interval-sample"; yang_parent_name = "sr-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::~SrActiveIntervalSample()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::has_data() const
{
    return timestamp_nanosec.is_set
	|| sr_rate.is_set
	|| sr_packet_rate.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter)
	|| ydk::is_set(sr_rate.yfilter)
	|| ydk::is_set(sr_packet_rate.yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());
    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());
    if (sr_packet_rate.is_set || is_set(sr_packet_rate.yfilter)) leaf_name_data.push_back(sr_packet_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp-nanosec" || name == "sr-rate" || name == "sr-packet-rate")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::SrPreviousIntervalSample()
    :
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"},
    sr_rate{YType::uint64, "sr-rate"},
    sr_packet_rate{YType::uint64, "sr-packet-rate"}
{

    yang_name = "sr-previous-interval-sample"; yang_parent_name = "sr-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::~SrPreviousIntervalSample()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::has_data() const
{
    return timestamp_nanosec.is_set
	|| sr_rate.is_set
	|| sr_packet_rate.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter)
	|| ydk::is_set(sr_rate.yfilter)
	|| ydk::is_set(sr_packet_rate.yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());
    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());
    if (sr_packet_rate.is_set || is_set(sr_packet_rate.yfilter)) leaf_name_data.push_back(sr_packet_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp-nanosec" || name == "sr-rate" || name == "sr-packet-rate")
        return true;
    return false;
}

MplsLcac::LinkSummary::LinkSummary()
    :
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    maximum_links{YType::uint16, "maximum-links"},
    is_flooding_enabled{YType::boolean, "is-flooding-enabled"}
    	,
    bandwidth_account_summary(std::make_shared<MplsLcac::LinkSummary::BandwidthAccountSummary>())
{
    bandwidth_account_summary->parent = this;

    yang_name = "link-summary"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::LinkSummary::~LinkSummary()
{
}

bool MplsLcac::LinkSummary::has_data() const
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

bool MplsLcac::LinkSummary::has_operation() const
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

std::string MplsLcac::LinkSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (maximum_links.is_set || is_set(maximum_links.yfilter)) leaf_name_data.push_back(maximum_links.get_name_leafdata());
    if (is_flooding_enabled.is_set || is_set(is_flooding_enabled.yfilter)) leaf_name_data.push_back(is_flooding_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-summary")
    {
        if(bandwidth_account_summary == nullptr)
        {
            bandwidth_account_summary = std::make_shared<MplsLcac::LinkSummary::BandwidthAccountSummary>();
        }
        return bandwidth_account_summary;
    }

    if(child_yang_name == "areas-summary")
    {
        auto c = std::make_shared<MplsLcac::LinkSummary::AreasSummary>();
        c->parent = this;
        areas_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkSummary::get_children() const
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

void MplsLcac::LinkSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-summary" || name == "areas-summary" || name == "is-role-standby" || name == "links" || name == "maximum-links" || name == "is-flooding-enabled")
        return true;
    return false;
}

MplsLcac::LinkSummary::BandwidthAccountSummary::BandwidthAccountSummary()
    :
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_time_remaining{YType::uint32, "sample-time-remaining"},
    application_interval{YType::uint32, "application-interval"},
    application_time_remaining{YType::uint32, "application-time-remaining"}
{

    yang_name = "bandwidth-account-summary"; yang_parent_name = "link-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::LinkSummary::BandwidthAccountSummary::~BandwidthAccountSummary()
{
}

bool MplsLcac::LinkSummary::BandwidthAccountSummary::has_data() const
{
    return is_bandwidth_account_enabled.is_set
	|| sample_interval.is_set
	|| sample_time_remaining.is_set
	|| application_interval.is_set
	|| application_time_remaining.is_set;
}

bool MplsLcac::LinkSummary::BandwidthAccountSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bandwidth_account_enabled.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_time_remaining.yfilter)
	|| ydk::is_set(application_interval.yfilter)
	|| ydk::is_set(application_time_remaining.yfilter);
}

std::string MplsLcac::LinkSummary::BandwidthAccountSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkSummary::BandwidthAccountSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkSummary::BandwidthAccountSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.yfilter)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_time_remaining.is_set || is_set(sample_time_remaining.yfilter)) leaf_name_data.push_back(sample_time_remaining.get_name_leafdata());
    if (application_interval.is_set || is_set(application_interval.yfilter)) leaf_name_data.push_back(application_interval.get_name_leafdata());
    if (application_time_remaining.is_set || is_set(application_time_remaining.yfilter)) leaf_name_data.push_back(application_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkSummary::BandwidthAccountSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkSummary::BandwidthAccountSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkSummary::BandwidthAccountSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkSummary::BandwidthAccountSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkSummary::BandwidthAccountSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bandwidth-account-enabled" || name == "sample-interval" || name == "sample-time-remaining" || name == "application-interval" || name == "application-time-remaining")
        return true;
    return false;
}

MplsLcac::LinkSummary::AreasSummary::AreasSummary()
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

MplsLcac::LinkSummary::AreasSummary::~AreasSummary()
{
}

bool MplsLcac::LinkSummary::AreasSummary::has_data() const
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

bool MplsLcac::LinkSummary::AreasSummary::has_operation() const
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

std::string MplsLcac::LinkSummary::AreasSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkSummary::AreasSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkSummary::AreasSummary::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLcac::LinkSummary::AreasSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkSummary::AreasSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkSummary::AreasSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkSummary::AreasSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkSummary::AreasSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "protocol" || name == "is-flooded" || name == "is-periodic-flooding-on" || name == "periodic-flooding-interval" || name == "links-flooded" || name == "system-id" || name == "local-node-router-id" || name == "igp-neighbors")
        return true;
    return false;
}

MplsLcac::LinkInformation::LinkInformation()
    :
    global(std::make_shared<MplsLcac::LinkInformation::Global>())
	,links(std::make_shared<MplsLcac::LinkInformation::Links>())
{
    global->parent = this;
    links->parent = this;

    yang_name = "link-information"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::LinkInformation::~LinkInformation()
{
}

bool MplsLcac::LinkInformation::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (links !=  nullptr && links->has_data());
}

bool MplsLcac::LinkInformation::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (links !=  nullptr && links->has_operation());
}

std::string MplsLcac::LinkInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLcac::LinkInformation::Global>();
        }
        return global;
    }

    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<MplsLcac::LinkInformation::Links>();
        }
        return links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::get_children() const
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

void MplsLcac::LinkInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::LinkInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::LinkInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "links")
        return true;
    return false;
}

MplsLcac::LinkInformation::Global::Global()
    :
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    maximum_links{YType::uint16, "maximum-links"}
{

    yang_name = "global"; yang_parent_name = "link-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::LinkInformation::Global::~Global()
{
}

bool MplsLcac::LinkInformation::Global::has_data() const
{
    return is_role_standby.is_set
	|| links.is_set
	|| maximum_links.is_set;
}

bool MplsLcac::LinkInformation::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(maximum_links.yfilter);
}

std::string MplsLcac::LinkInformation::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkInformation::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (maximum_links.is_set || is_set(maximum_links.yfilter)) leaf_name_data.push_back(maximum_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Global::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-role-standby" || name == "links" || name == "maximum-links")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Links()
{

    yang_name = "links"; yang_parent_name = "link-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::LinkInformation::Links::~Links()
{
}

bool MplsLcac::LinkInformation::Links::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::LinkInformation::Links::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::LinkInformation::Links::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkInformation::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::get_children() const
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

void MplsLcac::LinkInformation::Links::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::LinkInformation::Links::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::LinkInformation::Links::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::Link()
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
    link_common(std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon>())
	,bandwidth_account(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount>())
	,hw_oor(std::make_shared<MplsLcac::LinkInformation::Links::Link::HwOor>())
{
    link_common->parent = this;
    bandwidth_account->parent = this;
    hw_oor->parent = this;

    yang_name = "link"; yang_parent_name = "links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::LinkInformation::Links::Link::~Link()
{
}

bool MplsLcac::LinkInformation::Links::Link::has_data() const
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

bool MplsLcac::LinkInformation::Links::Link::has_operation() const
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

std::string MplsLcac::LinkInformation::Links::Link::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-information/links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkInformation::Links::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-common")
    {
        if(link_common == nullptr)
        {
            link_common = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon>();
        }
        return link_common;
    }

    if(child_yang_name == "bandwidth-account")
    {
        if(bandwidth_account == nullptr)
        {
            bandwidth_account = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount>();
        }
        return bandwidth_account;
    }

    if(child_yang_name == "hw-oor")
    {
        if(hw_oor == nullptr)
        {
            hw_oor = std::make_shared<MplsLcac::LinkInformation::Links::Link::HwOor>();
        }
        return hw_oor;
    }

    if(child_yang_name == "link-extended-attribute")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute>();
        c->parent = this;
        link_extended_attribute.push_back(c);
        return c;
    }

    if(child_yang_name == "link-forwad-ref-value")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue>();
        c->parent = this;
        link_forwad_ref_value.push_back(c);
        return c;
    }

    if(child_yang_name == "affinity-map")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::AffinityMap>();
        c->parent = this;
        affinity_map.push_back(c);
        return c;
    }

    if(child_yang_name == "areas")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::Areas>();
        c->parent = this;
        areas.push_back(c);
        return c;
    }

    if(child_yang_name == "lockout")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::Lockout>();
        c->parent = this;
        lockout.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::get_children() const
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

void MplsLcac::LinkInformation::Links::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-common" || name == "bandwidth-account" || name == "hw-oor" || name == "link-extended-attribute" || name == "link-forwad-ref-value" || name == "affinity-map" || name == "areas" || name == "lockout" || name == "interface-name" || name == "reason-not-flooded" || name == "maximum-reservation-bandwidth-rdm" || name == "reservable-pool0-bandwidth-rdm" || name == "reservable-pool1-bandwidth-rdm" || name == "maximum-reservation-bandwidth-mam" || name == "reservable-pool0-bandwidth-mam" || name == "reservable-pool1-bandwidth-mam" || name == "link-attributes" || name == "is-attribute-incomplete" || name == "is-name-based-attribute" || name == "te-metric" || name == "is-te-metric-valid")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkCommon()
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
    link_flags(std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags>())
{
    link_flags->parent = this;

    yang_name = "link-common"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::~LinkCommon()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::has_data() const
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

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::has_operation() const
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

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkCommon::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-flags")
    {
        if(link_flags == nullptr)
        {
            link_flags = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags>();
        }
        return link_flags;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-switching-capability-descriptor")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor>();
        c->parent = this;
        interface_switching_capability_descriptor.push_back(c);
        return c;
    }

    if(child_yang_name == "flooded-areas")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas>();
        c->parent = this;
        flooded_areas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkCommon::get_children() const
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

void MplsLcac::LinkInformation::Links::Link::LinkCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::LinkCommon::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-flags" || name == "shared-risk-link-group" || name == "interface-switching-capability-descriptor" || name == "flooded-areas" || name == "link-id" || name == "link-address" || name == "is-unnumbered" || name == "has-protection" || name == "capability" || name == "working-priority" || name == "resource-provider" || name == "is-resource-provider-installed" || name == "bandwidth-units" || name == "physical-bandwidth" || name == "bcm-id" || name == "maximum-reservable-bandwidth" || name == "last-flooded-effective-maximum-reservable-bandwidth" || name == "incoming-reservable-bandwidth-percentage" || name == "outgoing-reservable-bandwidth-percentage" || name == "maximum-reservable-pool0-bandwidth" || name == "incoming-reservable-pool0-bandwidth-percentage" || name == "outgoing-reservable-pool0-bandwidth-percentage" || name == "maximum-reservable-pool1-bandwidth" || name == "incoming-reservable-pool1-bandwidth-percentage" || name == "outgoing-reservable-pool1-bandwidth-percentage" || name == "inbound-admission-method" || name == "outbound-admission-method" || name == "igp-neighbors")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::LinkFlags()
    :
    is_mpls_te_on{YType::boolean, "is-mpls-te-on"},
    signaling_agent{YType::enumeration, "signaling-agent"},
    is_admin_up{YType::boolean, "is-admin-up"}
{

    yang_name = "link-flags"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::~LinkFlags()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_data() const
{
    return is_mpls_te_on.is_set
	|| signaling_agent.is_set
	|| is_admin_up.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_mpls_te_on.yfilter)
	|| ydk::is_set(signaling_agent.yfilter)
	|| ydk::is_set(is_admin_up.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mpls_te_on.is_set || is_set(is_mpls_te_on.yfilter)) leaf_name_data.push_back(is_mpls_te_on.get_name_leafdata());
    if (signaling_agent.is_set || is_set(signaling_agent.yfilter)) leaf_name_data.push_back(signaling_agent.get_name_leafdata());
    if (is_admin_up.is_set || is_set(is_admin_up.yfilter)) leaf_name_data.push_back(is_admin_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-mpls-te-on" || name == "signaling-agent" || name == "is-admin-up")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::InterfaceSwitchingCapabilityDescriptor()
    :
    key{YType::uint8, "key"},
    switching_capability{YType::uint8, "switching-capability"},
    encoding{YType::uint8, "encoding"}
{

    yang_name = "interface-switching-capability-descriptor"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::~InterfaceSwitchingCapabilityDescriptor()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_data() const
{
    return key.is_set
	|| switching_capability.is_set
	|| encoding.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(switching_capability.yfilter)
	|| ydk::is_set(encoding.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-switching-capability-descriptor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (switching_capability.is_set || is_set(switching_capability.yfilter)) leaf_name_data.push_back(switching_capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "switching-capability" || name == "encoding")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::FloodedAreas()
    :
    flooded_area{YType::str, "flooded-area"}
{

    yang_name = "flooded-areas"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::~FloodedAreas()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_data() const
{
    return flooded_area.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flooded_area.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooded_area.is_set || is_set(flooded_area.yfilter)) leaf_name_data.push_back(flooded_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flooded-area")
    {
        flooded_area = value;
        flooded_area.value_namespace = name_space;
        flooded_area.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flooded-area")
    {
        flooded_area.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-area")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccount()
    :
    bandwidth_account_common_info(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo>())
	,rsvp_te_bandwidth_sample_history(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory>())
	,sr_bandwidth_sample_history(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory>())
{
    bandwidth_account_common_info->parent = this;
    rsvp_te_bandwidth_sample_history->parent = this;
    sr_bandwidth_sample_history->parent = this;

    yang_name = "bandwidth-account"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::~BandwidthAccount()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::has_data() const
{
    return (bandwidth_account_common_info !=  nullptr && bandwidth_account_common_info->has_data())
	|| (rsvp_te_bandwidth_sample_history !=  nullptr && rsvp_te_bandwidth_sample_history->has_data())
	|| (sr_bandwidth_sample_history !=  nullptr && sr_bandwidth_sample_history->has_data());
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth_account_common_info !=  nullptr && bandwidth_account_common_info->has_operation())
	|| (rsvp_te_bandwidth_sample_history !=  nullptr && rsvp_te_bandwidth_sample_history->has_operation())
	|| (sr_bandwidth_sample_history !=  nullptr && sr_bandwidth_sample_history->has_operation());
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-common-info")
    {
        if(bandwidth_account_common_info == nullptr)
        {
            bandwidth_account_common_info = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo>();
        }
        return bandwidth_account_common_info;
    }

    if(child_yang_name == "rsvp-te-bandwidth-sample-history")
    {
        if(rsvp_te_bandwidth_sample_history == nullptr)
        {
            rsvp_te_bandwidth_sample_history = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory>();
        }
        return rsvp_te_bandwidth_sample_history;
    }

    if(child_yang_name == "sr-bandwidth-sample-history")
    {
        if(sr_bandwidth_sample_history == nullptr)
        {
            sr_bandwidth_sample_history = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory>();
        }
        return sr_bandwidth_sample_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::get_children() const
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

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-common-info" || name == "rsvp-te-bandwidth-sample-history" || name == "sr-bandwidth-sample-history")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthAccountCommonInfo()
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
    rsvp_te_bandwidth_utilization(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization>())
	,sr_bandwidth_utilization(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization>())
{
    rsvp_te_bandwidth_utilization->parent = this;
    sr_bandwidth_utilization->parent = this;

    yang_name = "bandwidth-account-common-info"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::~BandwidthAccountCommonInfo()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_data() const
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

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_operation() const
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

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-common-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-bandwidth-utilization")
    {
        if(rsvp_te_bandwidth_utilization == nullptr)
        {
            rsvp_te_bandwidth_utilization = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization>();
        }
        return rsvp_te_bandwidth_utilization;
    }

    if(child_yang_name == "sr-bandwidth-utilization")
    {
        if(sr_bandwidth_utilization == nullptr)
        {
            sr_bandwidth_utilization = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization>();
        }
        return sr_bandwidth_utilization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_children() const
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

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-bandwidth-utilization" || name == "sr-bandwidth-utilization" || name == "is-bandwidth-account-enabled" || name == "application-enforced" || name == "collection-type" || name == "sample-interval" || name == "sample-time-remaining" || name == "last-sample-collection-timestamp" || name == "next-sample-collection" || name == "application-interval" || name == "application-time-remaining" || name == "last-application-timestamp" || name == "next-application" || name == "adjustment-factor" || name == "max-reservable-bandwidth-threshold-are-default" || name == "up-threshold-max-reservable-bandwidth" || name == "down-threshold-max-reservable-bandwidth")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::RsvpTeBandwidthUtilization()
    :
    total_link_bandwidth_utilization{YType::uint64, "total-link-bandwidth-utilization"},
    rsvp_te_bandwidth_utilization{YType::uint64, "rsvp-te-bandwidth-utilization"},
    non_rsvp_te_bandwidth_utilization{YType::uint64, "non-rsvp-te-bandwidth-utilization"},
    rsvp_te_adjusted_bandwidth_utilization{YType::uint64, "rsvp-te-adjusted-bandwidth-utilization"},
    rsvp_te_enforced_bandwidth_utilization{YType::uint64, "rsvp-te-enforced-bandwidth-utilization"}
{

    yang_name = "rsvp-te-bandwidth-utilization"; yang_parent_name = "bandwidth-account-common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::~RsvpTeBandwidthUtilization()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::has_data() const
{
    return total_link_bandwidth_utilization.is_set
	|| rsvp_te_bandwidth_utilization.is_set
	|| non_rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_adjusted_bandwidth_utilization.is_set
	|| rsvp_te_enforced_bandwidth_utilization.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_link_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(non_rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_enforced_bandwidth_utilization.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_link_bandwidth_utilization.is_set || is_set(total_link_bandwidth_utilization.yfilter)) leaf_name_data.push_back(total_link_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_bandwidth_utilization.is_set || is_set(rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (non_rsvp_te_bandwidth_utilization.is_set || is_set(non_rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_adjusted_bandwidth_utilization.is_set || is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_adjusted_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_enforced_bandwidth_utilization.is_set || is_set(rsvp_te_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_enforced_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-link-bandwidth-utilization" || name == "rsvp-te-bandwidth-utilization" || name == "non-rsvp-te-bandwidth-utilization" || name == "rsvp-te-adjusted-bandwidth-utilization" || name == "rsvp-te-enforced-bandwidth-utilization")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::SrBandwidthUtilization()
    :
    sr_bandwidth_utilization{YType::uint64, "sr-bandwidth-utilization"},
    sr_adjusted_bandwidth_utilization{YType::uint64, "sr-adjusted-bandwidth-utilization"},
    sr_enforced_bandwidth_utilization{YType::uint64, "sr-enforced-bandwidth-utilization"}
{

    yang_name = "sr-bandwidth-utilization"; yang_parent_name = "bandwidth-account-common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::~SrBandwidthUtilization()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::has_data() const
{
    return sr_bandwidth_utilization.is_set
	|| sr_adjusted_bandwidth_utilization.is_set
	|| sr_enforced_bandwidth_utilization.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_enforced_bandwidth_utilization.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_bandwidth_utilization.is_set || is_set(sr_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_bandwidth_utilization.get_name_leafdata());
    if (sr_adjusted_bandwidth_utilization.is_set || is_set(sr_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_adjusted_bandwidth_utilization.get_name_leafdata());
    if (sr_enforced_bandwidth_utilization.is_set || is_set(sr_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_enforced_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-bandwidth-utilization" || name == "sr-adjusted-bandwidth-utilization" || name == "sr-enforced-bandwidth-utilization")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeBandwidthSampleHistory()
{

    yang_name = "rsvp-te-bandwidth-sample-history"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::~RsvpTeBandwidthSampleHistory()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::has_data() const
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

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::has_operation() const
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

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-bandwidth-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-active-interval-sample")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample>();
        c->parent = this;
        rsvp_te_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "rsvp-te-previous-interval-sample")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample>();
        c->parent = this;
        rsvp_te_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_children() const
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

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-active-interval-sample" || name == "rsvp-te-previous-interval-sample")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::RsvpTeActiveIntervalSample()
    :
    timestamp{YType::uint32, "timestamp"},
    total_rate{YType::uint64, "total-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"}
{

    yang_name = "rsvp-te-active-interval-sample"; yang_parent_name = "rsvp-te-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::~RsvpTeActiveIntervalSample()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::has_data() const
{
    return timestamp.is_set
	|| total_rate.is_set
	|| rsvp_te_rate.is_set
	|| non_rsvp_te_rate.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(total_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "total-rate" || name == "rsvp-te-rate" || name == "non-rsvp-te-rate")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::RsvpTePreviousIntervalSample()
    :
    timestamp{YType::uint32, "timestamp"},
    total_rate{YType::uint64, "total-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"}
{

    yang_name = "rsvp-te-previous-interval-sample"; yang_parent_name = "rsvp-te-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::~RsvpTePreviousIntervalSample()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::has_data() const
{
    return timestamp.is_set
	|| total_rate.is_set
	|| rsvp_te_rate.is_set
	|| non_rsvp_te_rate.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(total_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "total-rate" || name == "rsvp-te-rate" || name == "non-rsvp-te-rate")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrBandwidthSampleHistory()
{

    yang_name = "sr-bandwidth-sample-history"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::~SrBandwidthSampleHistory()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::has_data() const
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

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::has_operation() const
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

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-bandwidth-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-active-interval-sample")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample>();
        c->parent = this;
        sr_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-previous-interval-sample")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample>();
        c->parent = this;
        sr_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_children() const
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

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-active-interval-sample" || name == "sr-previous-interval-sample")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::SrActiveIntervalSample()
    :
    timestamp{YType::uint32, "timestamp"},
    sr_rate{YType::uint64, "sr-rate"}
{

    yang_name = "sr-active-interval-sample"; yang_parent_name = "sr-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::~SrActiveIntervalSample()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::has_data() const
{
    return timestamp.is_set
	|| sr_rate.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(sr_rate.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "sr-rate")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::SrPreviousIntervalSample()
    :
    timestamp{YType::uint32, "timestamp"},
    sr_rate{YType::uint64, "sr-rate"}
{

    yang_name = "sr-previous-interval-sample"; yang_parent_name = "sr-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::~SrPreviousIntervalSample()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::has_data() const
{
    return timestamp.is_set
	|| sr_rate.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(sr_rate.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "sr-rate")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::HwOor::HwOor()
    :
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    hw_oor_timestamp{YType::uint32, "hw-oor-timestamp"},
    hw_o_or_green_recovery_time{YType::uint32, "hw-o-or-green-recovery-time"}
{

    yang_name = "hw-oor"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::HwOor::~HwOor()
{
}

bool MplsLcac::LinkInformation::Links::Link::HwOor::has_data() const
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

bool MplsLcac::LinkInformation::Links::Link::HwOor::has_operation() const
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

std::string MplsLcac::LinkInformation::Links::Link::HwOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::HwOor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_oor_state.is_set || is_set(hw_oor_state.yfilter)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (hw_oor_timestamp.is_set || is_set(hw_oor_timestamp.yfilter)) leaf_name_data.push_back(hw_oor_timestamp.get_name_leafdata());
    if (hw_o_or_green_recovery_time.is_set || is_set(hw_o_or_green_recovery_time.yfilter)) leaf_name_data.push_back(hw_o_or_green_recovery_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::HwOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-o-or-link-statistic")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic>();
        c->parent = this;
        hw_o_or_link_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::HwOor::get_children() const
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

void MplsLcac::LinkInformation::Links::Link::HwOor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::HwOor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::HwOor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-o-or-link-statistic" || name == "hw-oor-state" || name == "hw-oor-timestamp" || name == "hw-o-or-green-recovery-time")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::HwOOrLinkStatistic()
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

MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::~HwOOrLinkStatistic()
{
}

bool MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_data() const
{
    return hw_oor_state.is_set
	|| transitions.is_set
	|| node_protection_disable_number.is_set
	|| rejected_ls_ps_number.is_set
	|| accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_operation() const
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

std::string MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-o-or-link-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-oor-state" || name == "transitions" || name == "node-protection-disable-number" || name == "rejected-ls-ps-number" || name == "accepted-ls-ps-number" || name == "accepted-reopt-ls-ps-number" || name == "rejected-reopt-ls-ps-number")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::LinkExtendedAttribute()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "link-extended-attribute"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::~LinkExtendedAttribute()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-extended-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::LinkForwadRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "link-forwad-ref-value"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::~LinkForwadRefValue()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-forwad-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityMap()
    :
    affinity_name{YType::str, "affinity-name"},
    affinity_value{YType::uint32, "affinity-value"},
    affinity_bit_position{YType::uint8, "affinity-bit-position"},
    affinity_table_id{YType::enumeration, "affinity-table-id"}
{

    yang_name = "affinity-map"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::AffinityMap::~AffinityMap()
{
}

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::has_data() const
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

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::has_operation() const
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

std::string MplsLcac::LinkInformation::Links::Link::AffinityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::AffinityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_name.is_set || is_set(affinity_name.yfilter)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (affinity_value.is_set || is_set(affinity_value.yfilter)) leaf_name_data.push_back(affinity_value.get_name_leafdata());
    if (affinity_bit_position.is_set || is_set(affinity_bit_position.yfilter)) leaf_name_data.push_back(affinity_bit_position.get_name_leafdata());
    if (affinity_table_id.is_set || is_set(affinity_table_id.yfilter)) leaf_name_data.push_back(affinity_table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::AffinityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-extended-value")
    {
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue>();
        c->parent = this;
        affinity_extended_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::AffinityMap::get_children() const
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

void MplsLcac::LinkInformation::Links::Link::AffinityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::AffinityMap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-extended-value" || name == "affinity-name" || name == "affinity-value" || name == "affinity-bit-position" || name == "affinity-table-id")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::AffinityExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "affinity-extended-value"; yang_parent_name = "affinity-map"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::~AffinityExtendedValue()
{
}

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::Areas::Areas()
    :
    area_id{YType::str, "area-id"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_address{YType::str, "neighbor-address"},
    is_neighbor_up{YType::boolean, "is-neighbor-up"},
    igp_metric{YType::uint32, "igp-metric"}
{

    yang_name = "areas"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::Areas::~Areas()
{
}

bool MplsLcac::LinkInformation::Links::Link::Areas::has_data() const
{
    return area_id.is_set
	|| neighbor_id.is_set
	|| neighbor_address.is_set
	|| is_neighbor_up.is_set
	|| igp_metric.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::Areas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(is_neighbor_up.yfilter)
	|| ydk::is_set(igp_metric.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::Areas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (is_neighbor_up.is_set || is_set(is_neighbor_up.yfilter)) leaf_name_data.push_back(is_neighbor_up.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::Areas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::Areas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::Areas::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::Areas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "neighbor-id" || name == "neighbor-address" || name == "is-neighbor-up" || name == "igp-metric")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::Lockout::Lockout()
    :
    is_lockout{YType::boolean, "is-lockout"},
    lockout_on_timestamp{YType::uint32, "lockout-on-timestamp"},
    lockout_off_timestamp{YType::uint32, "lockout-off-timestamp"}
{

    yang_name = "lockout"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::Lockout::~Lockout()
{
}

bool MplsLcac::LinkInformation::Links::Link::Lockout::has_data() const
{
    return is_lockout.is_set
	|| lockout_on_timestamp.is_set
	|| lockout_off_timestamp.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::Lockout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_lockout.yfilter)
	|| ydk::is_set(lockout_on_timestamp.yfilter)
	|| ydk::is_set(lockout_off_timestamp.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::Lockout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::Lockout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_lockout.is_set || is_set(is_lockout.yfilter)) leaf_name_data.push_back(is_lockout.get_name_leafdata());
    if (lockout_on_timestamp.is_set || is_set(lockout_on_timestamp.yfilter)) leaf_name_data.push_back(lockout_on_timestamp.get_name_leafdata());
    if (lockout_off_timestamp.is_set || is_set(lockout_off_timestamp.yfilter)) leaf_name_data.push_back(lockout_off_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::Lockout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::Lockout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::LinkInformation::Links::Link::Lockout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::LinkInformation::Links::Link::Lockout::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::LinkInformation::Links::Link::Lockout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-lockout" || name == "lockout-on-timestamp" || name == "lockout-off-timestamp")
        return true;
    return false;
}

MplsLcac::AdmissionControl::AdmissionControl()
    :
    global(std::make_shared<MplsLcac::AdmissionControl::Global>())
	,admitted_tunnels(std::make_shared<MplsLcac::AdmissionControl::AdmittedTunnels>())
	,link_interfaces(std::make_shared<MplsLcac::AdmissionControl::LinkInterfaces>())
{
    global->parent = this;
    admitted_tunnels->parent = this;
    link_interfaces->parent = this;

    yang_name = "admission-control"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::AdmissionControl::~AdmissionControl()
{
}

bool MplsLcac::AdmissionControl::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (admitted_tunnels !=  nullptr && admitted_tunnels->has_data())
	|| (link_interfaces !=  nullptr && link_interfaces->has_data());
}

bool MplsLcac::AdmissionControl::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (admitted_tunnels !=  nullptr && admitted_tunnels->has_operation())
	|| (link_interfaces !=  nullptr && link_interfaces->has_operation());
}

std::string MplsLcac::AdmissionControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::AdmissionControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::AdmissionControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLcac::AdmissionControl::Global>();
        }
        return global;
    }

    if(child_yang_name == "admitted-tunnels")
    {
        if(admitted_tunnels == nullptr)
        {
            admitted_tunnels = std::make_shared<MplsLcac::AdmissionControl::AdmittedTunnels>();
        }
        return admitted_tunnels;
    }

    if(child_yang_name == "link-interfaces")
    {
        if(link_interfaces == nullptr)
        {
            link_interfaces = std::make_shared<MplsLcac::AdmissionControl::LinkInterfaces>();
        }
        return link_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::AdmissionControl::get_children() const
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

void MplsLcac::AdmissionControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::AdmissionControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::AdmissionControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "admitted-tunnels" || name == "link-interfaces")
        return true;
    return false;
}

MplsLcac::AdmissionControl::Global::Global()
    :
    is_role_standby{YType::boolean, "is-role-standby"},
    total_tunnels{YType::uint32, "total-tunnels"},
    total_p2mp_tunnels{YType::uint32, "total-p2mp-tunnels"},
    selected_tunnels{YType::uint32, "selected-tunnels"},
    bandwidth_units{YType::enumeration, "bandwidth-units"}
{

    yang_name = "global"; yang_parent_name = "admission-control"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::AdmissionControl::Global::~Global()
{
}

bool MplsLcac::AdmissionControl::Global::has_data() const
{
    return is_role_standby.is_set
	|| total_tunnels.is_set
	|| total_p2mp_tunnels.is_set
	|| selected_tunnels.is_set
	|| bandwidth_units.is_set;
}

bool MplsLcac::AdmissionControl::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(total_p2mp_tunnels.yfilter)
	|| ydk::is_set(selected_tunnels.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter);
}

std::string MplsLcac::AdmissionControl::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::AdmissionControl::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::AdmissionControl::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (total_p2mp_tunnels.is_set || is_set(total_p2mp_tunnels.yfilter)) leaf_name_data.push_back(total_p2mp_tunnels.get_name_leafdata());
    if (selected_tunnels.is_set || is_set(selected_tunnels.yfilter)) leaf_name_data.push_back(selected_tunnels.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::AdmissionControl::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::AdmissionControl::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::AdmissionControl::Global::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::AdmissionControl::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-role-standby" || name == "total-tunnels" || name == "total-p2mp-tunnels" || name == "selected-tunnels" || name == "bandwidth-units")
        return true;
    return false;
}

MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnels()
{

    yang_name = "admitted-tunnels"; yang_parent_name = "admission-control"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::AdmissionControl::AdmittedTunnels::~AdmittedTunnels()
{
}

bool MplsLcac::AdmissionControl::AdmittedTunnels::has_data() const
{
    for (std::size_t index=0; index<admitted_tunnel.size(); index++)
    {
        if(admitted_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::AdmissionControl::AdmittedTunnels::has_operation() const
{
    for (std::size_t index=0; index<admitted_tunnel.size(); index++)
    {
        if(admitted_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::AdmissionControl::AdmittedTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::AdmissionControl::AdmittedTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admitted-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::AdmissionControl::AdmittedTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::AdmittedTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admitted-tunnel")
    {
        auto c = std::make_shared<MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel>();
        c->parent = this;
        admitted_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::AdmissionControl::AdmittedTunnels::get_children() const
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

void MplsLcac::AdmissionControl::AdmittedTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::AdmissionControl::AdmittedTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::AdmissionControl::AdmittedTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admitted-tunnel")
        return true;
    return false;
}

MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::AdmittedTunnel()
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

MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::~AdmittedTunnel()
{
}

bool MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_data() const
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

bool MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_operation() const
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

std::string MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/admitted-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admitted-tunnel" <<"[source-address='" <<source_address <<"']" <<"[destination-port='" <<destination_port <<"']" <<"[source-port='" <<source_port <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[ctype='" <<ctype <<"']" <<"[p2mp-id='" <<p2mp_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-port" || name == "source-port" || name == "destination-address" || name == "extended-tunnel-id" || name == "next-hop-address" || name == "ctype" || name == "p2mp-id" || name == "tunnel-name" || name == "bandwidth-state" || name == "bandwidth-pool" || name == "setup-priority" || name == "hold-priority" || name == "up-link-name" || name == "down-link-name" || name == "tunnel-state" || name == "bandwidth" || name == "local-label" || name == "outgoing-label" || name == "backup-interface" || name == "is-rerouted")
        return true;
    return false;
}

MplsLcac::AdmissionControl::LinkInterfaces::LinkInterfaces()
{

    yang_name = "link-interfaces"; yang_parent_name = "admission-control"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::AdmissionControl::LinkInterfaces::~LinkInterfaces()
{
}

bool MplsLcac::AdmissionControl::LinkInterfaces::has_data() const
{
    for (std::size_t index=0; index<link_interface.size(); index++)
    {
        if(link_interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::AdmissionControl::LinkInterfaces::has_operation() const
{
    for (std::size_t index=0; index<link_interface.size(); index++)
    {
        if(link_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::AdmissionControl::LinkInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::AdmissionControl::LinkInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::AdmissionControl::LinkInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::LinkInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-interface")
    {
        auto c = std::make_shared<MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface>();
        c->parent = this;
        link_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::AdmissionControl::LinkInterfaces::get_children() const
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

void MplsLcac::AdmissionControl::LinkInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::AdmissionControl::LinkInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::AdmissionControl::LinkInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-interface")
        return true;
    return false;
}

MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::LinkInterface()
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

MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::~LinkInterface()
{
}

bool MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::has_data() const
{
    return interface_name.is_set
	|| is_role_standby.is_set
	|| total_tunnels.is_set
	|| total_p2mp_tunnels.is_set
	|| selected_tunnels.is_set
	|| bandwidth_units.is_set;
}

bool MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(total_p2mp_tunnels.yfilter)
	|| ydk::is_set(selected_tunnels.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter);
}

std::string MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/link-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "is-role-standby" || name == "total-tunnels" || name == "total-p2mp-tunnels" || name == "selected-tunnels" || name == "bandwidth-units")
        return true;
    return false;
}

MplsLcac::SoftPreemptionGlobalInfo::SoftPreemptionGlobalInfo()
    :
    is_configured{YType::boolean, "is-configured"},
    is_timeout_interval_configured{YType::boolean, "is-timeout-interval-configured"},
    timeout_interval{YType::uint32, "timeout-interval"}
{

    yang_name = "soft-preemption-global-info"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::SoftPreemptionGlobalInfo::~SoftPreemptionGlobalInfo()
{
}

bool MplsLcac::SoftPreemptionGlobalInfo::has_data() const
{
    return is_configured.is_set
	|| is_timeout_interval_configured.is_set
	|| timeout_interval.is_set;
}

bool MplsLcac::SoftPreemptionGlobalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(is_timeout_interval_configured.yfilter)
	|| ydk::is_set(timeout_interval.yfilter);
}

std::string MplsLcac::SoftPreemptionGlobalInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::SoftPreemptionGlobalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-global-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::SoftPreemptionGlobalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (is_timeout_interval_configured.is_set || is_set(is_timeout_interval_configured.yfilter)) leaf_name_data.push_back(is_timeout_interval_configured.get_name_leafdata());
    if (timeout_interval.is_set || is_set(timeout_interval.yfilter)) leaf_name_data.push_back(timeout_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::SoftPreemptionGlobalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::SoftPreemptionGlobalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::SoftPreemptionGlobalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::SoftPreemptionGlobalInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::SoftPreemptionGlobalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-configured" || name == "is-timeout-interval-configured" || name == "timeout-interval")
        return true;
    return false;
}

MplsLcac::SoftPreemptions::SoftPreemptions()
{

    yang_name = "soft-preemptions"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::SoftPreemptions::~SoftPreemptions()
{
}

bool MplsLcac::SoftPreemptions::has_data() const
{
    for (std::size_t index=0; index<soft_preemption.size(); index++)
    {
        if(soft_preemption[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::SoftPreemptions::has_operation() const
{
    for (std::size_t index=0; index<soft_preemption.size(); index++)
    {
        if(soft_preemption[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::SoftPreemptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::SoftPreemptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemptions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::SoftPreemptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::SoftPreemptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "soft-preemption")
    {
        auto c = std::make_shared<MplsLcac::SoftPreemptions::SoftPreemption>();
        c->parent = this;
        soft_preemption.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::SoftPreemptions::get_children() const
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

void MplsLcac::SoftPreemptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::SoftPreemptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::SoftPreemptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "soft-preemption")
        return true;
    return false;
}

MplsLcac::SoftPreemptions::SoftPreemption::SoftPreemption()
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

MplsLcac::SoftPreemptions::SoftPreemption::~SoftPreemption()
{
}

bool MplsLcac::SoftPreemptions::SoftPreemption::has_data() const
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

bool MplsLcac::SoftPreemptions::SoftPreemption::has_operation() const
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

std::string MplsLcac::SoftPreemptions::SoftPreemption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/soft-preemptions/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::SoftPreemptions::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::SoftPreemptions::SoftPreemption::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLcac::SoftPreemptions::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-soft-preemption-lsp")
    {
        auto c = std::make_shared<MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp>();
        c->parent = this;
        current_soft_preemption_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::SoftPreemptions::SoftPreemption::get_children() const
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

void MplsLcac::SoftPreemptions::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::SoftPreemptions::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::SoftPreemptions::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-soft-preemption-lsp" || name == "interface-name" || name == "link-address" || name == "total-soft-preempted-bandwidth-bc0" || name == "total-soft-preempted-bandwidth-bc1" || name == "current-soft-preempted-bandwidth-bc0" || name == "current-soft-preempted-bandwidth-bc1" || name == "release-soft-preempted-bandwidth-bc0" || name == "release-soft-preempted-bandwidth-bc1" || name == "current-over-subscribed-bandwidth-bc0" || name == "current-over-subscribed-bandwidth-bc1")
        return true;
    return false;
}

MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::CurrentSoftPreemptionLsp()
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

MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::~CurrentSoftPreemptionLsp()
{
}

bool MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_data() const
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

bool MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_operation() const
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

std::string MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-soft-preemption-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "requested-bandwidth" || name == "setup-priority" || name == "hold-priority" || name == "bandwidth-type" || name == "soft-preempted" || name == "soft-preemption-timeout" || name == "bandwidth-preempted" || name == "soft-preempted-fr-rrewrite")
        return true;
    return false;
}

MplsPce::MplsPce()
    :
    lsps(std::make_shared<MplsPce::Lsps>())
	,statistics(std::make_shared<MplsPce::Statistics>())
	,peers(std::make_shared<MplsPce::Peers>())
	,topology(std::make_shared<MplsPce::Topology>())
	,tunnels(std::make_shared<MplsPce::Tunnels>())
{
    lsps->parent = this;
    statistics->parent = this;
    peers->parent = this;
    topology->parent = this;
    tunnels->parent = this;

    yang_name = "mpls-pce"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsPce::~MplsPce()
{
}

bool MplsPce::has_data() const
{
    return (lsps !=  nullptr && lsps->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool MplsPce::has_operation() const
{
    return is_set(yfilter)
	|| (lsps !=  nullptr && lsps->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string MplsPce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsps")
    {
        if(lsps == nullptr)
        {
            lsps = std::make_shared<MplsPce::Lsps>();
        }
        return lsps;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsPce::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<MplsPce::Peers>();
        }
        return peers;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<MplsPce::Topology>();
        }
        return topology;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<MplsPce::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsps != nullptr)
    {
        children["lsps"] = lsps;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    return children;
}

void MplsPce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsPce::clone_ptr() const
{
    return std::make_shared<MplsPce>();
}

std::string MplsPce::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsPce::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsPce::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsPce::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsPce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsps" || name == "statistics" || name == "peers" || name == "topology" || name == "tunnels")
        return true;
    return false;
}

MplsPce::Lsps::Lsps()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    symbolic_name_xr{YType::str, "symbolic-name-xr"},
    session_internal_lsp_id{YType::uint32, "session-internal-lsp-id"},
    stateful_request_parameter_id{YType::uint32, "stateful-request-parameter-id"},
    request_queue_size{YType::uint8, "request-queue-size"},
    delegatable{YType::boolean, "delegatable"},
    operational{YType::enumeration, "operational"},
    administrative{YType::boolean, "administrative"},
    cleanup_timer_exp{YType::int32, "cleanup-timer-exp"},
    delegation_timer_exp{YType::int32, "delegation-timer-exp"},
    create{YType::boolean, "create"},
    state_timer_exp{YType::int32, "state-timer-exp"},
    lspo_is_used{YType::boolean, "lspo-is-used"},
    forward_class_id{YType::uint32, "forward-class-id"},
    load_share{YType::uint32, "load-share"},
    path_setup_type{YType::uint8, "path-setup-type"},
    binding_sid{YType::uint32, "binding-sid"},
    backup_path{YType::str, "backup-path"}
    	,
    creator(std::make_shared<MplsPce::Lsps::Creator>())
	,delegated(std::make_shared<MplsPce::Lsps::Delegated>())
	,identifiers(std::make_shared<MplsPce::Lsps::Identifiers>())
	,autoroute(std::make_shared<MplsPce::Lsps::Autoroute>())
{
    creator->parent = this;
    delegated->parent = this;
    identifiers->parent = this;
    autoroute->parent = this;

    yang_name = "lsps"; yang_parent_name = "mpls-pce"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::~Lsps()
{
}

bool MplsPce::Lsps::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_address.is_set
	|| destination_address.is_set
	|| symbolic_name_xr.is_set
	|| session_internal_lsp_id.is_set
	|| stateful_request_parameter_id.is_set
	|| request_queue_size.is_set
	|| delegatable.is_set
	|| operational.is_set
	|| administrative.is_set
	|| cleanup_timer_exp.is_set
	|| delegation_timer_exp.is_set
	|| create.is_set
	|| state_timer_exp.is_set
	|| lspo_is_used.is_set
	|| forward_class_id.is_set
	|| load_share.is_set
	|| path_setup_type.is_set
	|| binding_sid.is_set
	|| (creator !=  nullptr && creator->has_data())
	|| (delegated !=  nullptr && delegated->has_data())
	|| (identifiers !=  nullptr && identifiers->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data());
}

bool MplsPce::Lsps::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(symbolic_name_xr.yfilter)
	|| ydk::is_set(session_internal_lsp_id.yfilter)
	|| ydk::is_set(stateful_request_parameter_id.yfilter)
	|| ydk::is_set(request_queue_size.yfilter)
	|| ydk::is_set(delegatable.yfilter)
	|| ydk::is_set(operational.yfilter)
	|| ydk::is_set(administrative.yfilter)
	|| ydk::is_set(cleanup_timer_exp.yfilter)
	|| ydk::is_set(delegation_timer_exp.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(state_timer_exp.yfilter)
	|| ydk::is_set(lspo_is_used.yfilter)
	|| ydk::is_set(forward_class_id.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(path_setup_type.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| (creator !=  nullptr && creator->has_operation())
	|| (delegated !=  nullptr && delegated->has_operation())
	|| (identifiers !=  nullptr && identifiers->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation());
}

std::string MplsPce::Lsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (symbolic_name_xr.is_set || is_set(symbolic_name_xr.yfilter)) leaf_name_data.push_back(symbolic_name_xr.get_name_leafdata());
    if (session_internal_lsp_id.is_set || is_set(session_internal_lsp_id.yfilter)) leaf_name_data.push_back(session_internal_lsp_id.get_name_leafdata());
    if (stateful_request_parameter_id.is_set || is_set(stateful_request_parameter_id.yfilter)) leaf_name_data.push_back(stateful_request_parameter_id.get_name_leafdata());
    if (request_queue_size.is_set || is_set(request_queue_size.yfilter)) leaf_name_data.push_back(request_queue_size.get_name_leafdata());
    if (delegatable.is_set || is_set(delegatable.yfilter)) leaf_name_data.push_back(delegatable.get_name_leafdata());
    if (operational.is_set || is_set(operational.yfilter)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (administrative.is_set || is_set(administrative.yfilter)) leaf_name_data.push_back(administrative.get_name_leafdata());
    if (cleanup_timer_exp.is_set || is_set(cleanup_timer_exp.yfilter)) leaf_name_data.push_back(cleanup_timer_exp.get_name_leafdata());
    if (delegation_timer_exp.is_set || is_set(delegation_timer_exp.yfilter)) leaf_name_data.push_back(delegation_timer_exp.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (state_timer_exp.is_set || is_set(state_timer_exp.yfilter)) leaf_name_data.push_back(state_timer_exp.get_name_leafdata());
    if (lspo_is_used.is_set || is_set(lspo_is_used.yfilter)) leaf_name_data.push_back(lspo_is_used.get_name_leafdata());
    if (forward_class_id.is_set || is_set(forward_class_id.yfilter)) leaf_name_data.push_back(forward_class_id.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (path_setup_type.is_set || is_set(path_setup_type.yfilter)) leaf_name_data.push_back(path_setup_type.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());

    auto backup_path_name_datas = backup_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_path_name_datas.begin(), backup_path_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        auto c = std::make_shared<MplsPce::Lsps::Lsp>();
        c->parent = this;
        lsp.push_back(c);
        return c;
    }

    if(child_yang_name == "creator")
    {
        if(creator == nullptr)
        {
            creator = std::make_shared<MplsPce::Lsps::Creator>();
        }
        return creator;
    }

    if(child_yang_name == "delegated")
    {
        if(delegated == nullptr)
        {
            delegated = std::make_shared<MplsPce::Lsps::Delegated>();
        }
        return delegated;
    }

    if(child_yang_name == "identifiers")
    {
        if(identifiers == nullptr)
        {
            identifiers = std::make_shared<MplsPce::Lsps::Identifiers>();
        }
        return identifiers;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<MplsPce::Lsps::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "paths")
    {
        auto c = std::make_shared<MplsPce::Lsps::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::get_children() const
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

    if(creator != nullptr)
    {
        children["creator"] = creator;
    }

    if(delegated != nullptr)
    {
        children["delegated"] = delegated;
    }

    if(identifiers != nullptr)
    {
        children["identifiers"] = identifiers;
    }

    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    count = 0;
    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPce::Lsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr = value;
        symbolic_name_xr.value_namespace = name_space;
        symbolic_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id = value;
        session_internal_lsp_id.value_namespace = name_space;
        session_internal_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id = value;
        stateful_request_parameter_id.value_namespace = name_space;
        stateful_request_parameter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size = value;
        request_queue_size.value_namespace = name_space;
        request_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegatable")
    {
        delegatable = value;
        delegatable.value_namespace = name_space;
        delegatable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational")
    {
        operational = value;
        operational.value_namespace = name_space;
        operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative")
    {
        administrative = value;
        administrative.value_namespace = name_space;
        administrative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp = value;
        cleanup_timer_exp.value_namespace = name_space;
        cleanup_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp = value;
        delegation_timer_exp.value_namespace = name_space;
        delegation_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp = value;
        state_timer_exp.value_namespace = name_space;
        state_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used = value;
        lspo_is_used.value_namespace = name_space;
        lspo_is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id = value;
        forward_class_id.value_namespace = name_space;
        forward_class_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type = value;
        path_setup_type.value_namespace = name_space;
        path_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path.append(value);
    }
}

void MplsPce::Lsps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr.yfilter = yfilter;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id.yfilter = yfilter;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id.yfilter = yfilter;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size.yfilter = yfilter;
    }
    if(value_path == "delegatable")
    {
        delegatable.yfilter = yfilter;
    }
    if(value_path == "operational")
    {
        operational.yfilter = yfilter;
    }
    if(value_path == "administrative")
    {
        administrative.yfilter = yfilter;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp.yfilter = yfilter;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp.yfilter = yfilter;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used.yfilter = yfilter;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp" || name == "creator" || name == "delegated" || name == "identifiers" || name == "autoroute" || name == "paths" || name == "source-address" || name == "destination-address" || name == "symbolic-name-xr" || name == "session-internal-lsp-id" || name == "stateful-request-parameter-id" || name == "request-queue-size" || name == "delegatable" || name == "operational" || name == "administrative" || name == "cleanup-timer-exp" || name == "delegation-timer-exp" || name == "create" || name == "state-timer-exp" || name == "lspo-is-used" || name == "forward-class-id" || name == "load-share" || name == "path-setup-type" || name == "binding-sid" || name == "backup-path")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Lsp()
    :
    symbolic_name{YType::str, "symbolic-name"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    symbolic_name_xr{YType::str, "symbolic-name-xr"},
    session_internal_lsp_id{YType::uint32, "session-internal-lsp-id"},
    stateful_request_parameter_id{YType::uint32, "stateful-request-parameter-id"},
    request_queue_size{YType::uint8, "request-queue-size"},
    delegatable{YType::boolean, "delegatable"},
    operational{YType::enumeration, "operational"},
    administrative{YType::boolean, "administrative"},
    cleanup_timer_exp{YType::int32, "cleanup-timer-exp"},
    delegation_timer_exp{YType::int32, "delegation-timer-exp"},
    create{YType::boolean, "create"},
    state_timer_exp{YType::int32, "state-timer-exp"},
    lspo_is_used{YType::boolean, "lspo-is-used"},
    forward_class_id{YType::uint32, "forward-class-id"},
    load_share{YType::uint32, "load-share"},
    path_setup_type{YType::uint8, "path-setup-type"},
    binding_sid{YType::uint32, "binding-sid"},
    backup_path{YType::str, "backup-path"}
    	,
    creator(std::make_shared<MplsPce::Lsps::Lsp::Creator>())
	,delegated(std::make_shared<MplsPce::Lsps::Lsp::Delegated>())
	,identifiers(std::make_shared<MplsPce::Lsps::Lsp::Identifiers>())
	,autoroute(std::make_shared<MplsPce::Lsps::Lsp::Autoroute>())
{
    creator->parent = this;
    delegated->parent = this;
    identifiers->parent = this;
    autoroute->parent = this;

    yang_name = "lsp"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Lsp::~Lsp()
{
}

bool MplsPce::Lsps::Lsp::has_data() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return symbolic_name.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| symbolic_name_xr.is_set
	|| session_internal_lsp_id.is_set
	|| stateful_request_parameter_id.is_set
	|| request_queue_size.is_set
	|| delegatable.is_set
	|| operational.is_set
	|| administrative.is_set
	|| cleanup_timer_exp.is_set
	|| delegation_timer_exp.is_set
	|| create.is_set
	|| state_timer_exp.is_set
	|| lspo_is_used.is_set
	|| forward_class_id.is_set
	|| load_share.is_set
	|| path_setup_type.is_set
	|| binding_sid.is_set
	|| (creator !=  nullptr && creator->has_data())
	|| (delegated !=  nullptr && delegated->has_data())
	|| (identifiers !=  nullptr && identifiers->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data());
}

bool MplsPce::Lsps::Lsp::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(symbolic_name.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(symbolic_name_xr.yfilter)
	|| ydk::is_set(session_internal_lsp_id.yfilter)
	|| ydk::is_set(stateful_request_parameter_id.yfilter)
	|| ydk::is_set(request_queue_size.yfilter)
	|| ydk::is_set(delegatable.yfilter)
	|| ydk::is_set(operational.yfilter)
	|| ydk::is_set(administrative.yfilter)
	|| ydk::is_set(cleanup_timer_exp.yfilter)
	|| ydk::is_set(delegation_timer_exp.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(state_timer_exp.yfilter)
	|| ydk::is_set(lspo_is_used.yfilter)
	|| ydk::is_set(forward_class_id.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(path_setup_type.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| (creator !=  nullptr && creator->has_operation())
	|| (delegated !=  nullptr && delegated->has_operation())
	|| (identifiers !=  nullptr && identifiers->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation());
}

std::string MplsPce::Lsps::Lsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp" <<"[symbolic-name='" <<symbolic_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (symbolic_name.is_set || is_set(symbolic_name.yfilter)) leaf_name_data.push_back(symbolic_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (symbolic_name_xr.is_set || is_set(symbolic_name_xr.yfilter)) leaf_name_data.push_back(symbolic_name_xr.get_name_leafdata());
    if (session_internal_lsp_id.is_set || is_set(session_internal_lsp_id.yfilter)) leaf_name_data.push_back(session_internal_lsp_id.get_name_leafdata());
    if (stateful_request_parameter_id.is_set || is_set(stateful_request_parameter_id.yfilter)) leaf_name_data.push_back(stateful_request_parameter_id.get_name_leafdata());
    if (request_queue_size.is_set || is_set(request_queue_size.yfilter)) leaf_name_data.push_back(request_queue_size.get_name_leafdata());
    if (delegatable.is_set || is_set(delegatable.yfilter)) leaf_name_data.push_back(delegatable.get_name_leafdata());
    if (operational.is_set || is_set(operational.yfilter)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (administrative.is_set || is_set(administrative.yfilter)) leaf_name_data.push_back(administrative.get_name_leafdata());
    if (cleanup_timer_exp.is_set || is_set(cleanup_timer_exp.yfilter)) leaf_name_data.push_back(cleanup_timer_exp.get_name_leafdata());
    if (delegation_timer_exp.is_set || is_set(delegation_timer_exp.yfilter)) leaf_name_data.push_back(delegation_timer_exp.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (state_timer_exp.is_set || is_set(state_timer_exp.yfilter)) leaf_name_data.push_back(state_timer_exp.get_name_leafdata());
    if (lspo_is_used.is_set || is_set(lspo_is_used.yfilter)) leaf_name_data.push_back(lspo_is_used.get_name_leafdata());
    if (forward_class_id.is_set || is_set(forward_class_id.yfilter)) leaf_name_data.push_back(forward_class_id.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (path_setup_type.is_set || is_set(path_setup_type.yfilter)) leaf_name_data.push_back(path_setup_type.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());

    auto backup_path_name_datas = backup_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_path_name_datas.begin(), backup_path_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "creator")
    {
        if(creator == nullptr)
        {
            creator = std::make_shared<MplsPce::Lsps::Lsp::Creator>();
        }
        return creator;
    }

    if(child_yang_name == "delegated")
    {
        if(delegated == nullptr)
        {
            delegated = std::make_shared<MplsPce::Lsps::Lsp::Delegated>();
        }
        return delegated;
    }

    if(child_yang_name == "identifiers")
    {
        if(identifiers == nullptr)
        {
            identifiers = std::make_shared<MplsPce::Lsps::Lsp::Identifiers>();
        }
        return identifiers;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<MplsPce::Lsps::Lsp::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "paths")
    {
        auto c = std::make_shared<MplsPce::Lsps::Lsp::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(creator != nullptr)
    {
        children["creator"] = creator;
    }

    if(delegated != nullptr)
    {
        children["delegated"] = delegated;
    }

    if(identifiers != nullptr)
    {
        children["identifiers"] = identifiers;
    }

    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    count = 0;
    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPce::Lsps::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "symbolic-name")
    {
        symbolic_name = value;
        symbolic_name.value_namespace = name_space;
        symbolic_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr = value;
        symbolic_name_xr.value_namespace = name_space;
        symbolic_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id = value;
        session_internal_lsp_id.value_namespace = name_space;
        session_internal_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id = value;
        stateful_request_parameter_id.value_namespace = name_space;
        stateful_request_parameter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size = value;
        request_queue_size.value_namespace = name_space;
        request_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegatable")
    {
        delegatable = value;
        delegatable.value_namespace = name_space;
        delegatable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational")
    {
        operational = value;
        operational.value_namespace = name_space;
        operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative")
    {
        administrative = value;
        administrative.value_namespace = name_space;
        administrative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp = value;
        cleanup_timer_exp.value_namespace = name_space;
        cleanup_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp = value;
        delegation_timer_exp.value_namespace = name_space;
        delegation_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp = value;
        state_timer_exp.value_namespace = name_space;
        state_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used = value;
        lspo_is_used.value_namespace = name_space;
        lspo_is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id = value;
        forward_class_id.value_namespace = name_space;
        forward_class_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type = value;
        path_setup_type.value_namespace = name_space;
        path_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path.append(value);
    }
}

void MplsPce::Lsps::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "symbolic-name")
    {
        symbolic_name.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr.yfilter = yfilter;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id.yfilter = yfilter;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id.yfilter = yfilter;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size.yfilter = yfilter;
    }
    if(value_path == "delegatable")
    {
        delegatable.yfilter = yfilter;
    }
    if(value_path == "operational")
    {
        operational.yfilter = yfilter;
    }
    if(value_path == "administrative")
    {
        administrative.yfilter = yfilter;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp.yfilter = yfilter;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp.yfilter = yfilter;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used.yfilter = yfilter;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creator" || name == "delegated" || name == "identifiers" || name == "autoroute" || name == "paths" || name == "symbolic-name" || name == "source-address" || name == "destination-address" || name == "symbolic-name-xr" || name == "session-internal-lsp-id" || name == "stateful-request-parameter-id" || name == "request-queue-size" || name == "delegatable" || name == "operational" || name == "administrative" || name == "cleanup-timer-exp" || name == "delegation-timer-exp" || name == "create" || name == "state-timer-exp" || name == "lspo-is-used" || name == "forward-class-id" || name == "load-share" || name == "path-setup-type" || name == "binding-sid" || name == "backup-path")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Creator::Creator()
    :
    node_identifier{YType::str, "node-identifier"},
    address{YType::str, "address"}
{

    yang_name = "creator"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Creator::~Creator()
{
}

bool MplsPce::Lsps::Lsp::Creator::has_data() const
{
    return node_identifier.is_set
	|| address.is_set;
}

bool MplsPce::Lsps::Lsp::Creator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPce::Lsps::Lsp::Creator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Creator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Creator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Creator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Lsp::Creator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Creator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Creator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-identifier" || name == "address")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Delegated::Delegated()
    :
    node_identifier{YType::str, "node-identifier"},
    address{YType::str, "address"}
{

    yang_name = "delegated"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Delegated::~Delegated()
{
}

bool MplsPce::Lsps::Lsp::Delegated::has_data() const
{
    return node_identifier.is_set
	|| address.is_set;
}

bool MplsPce::Lsps::Lsp::Delegated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPce::Lsps::Lsp::Delegated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Delegated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Delegated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Delegated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Lsp::Delegated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Delegated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Delegated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-identifier" || name == "address")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Identifiers::Identifiers()
    :
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"}
{

    yang_name = "identifiers"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Identifiers::~Identifiers()
{
}

bool MplsPce::Lsps::Lsp::Identifiers::has_data() const
{
    return is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set
	|| ext_tunnel_id.is_set;
}

bool MplsPce::Lsps::Lsp::Identifiers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(te_lsp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(ext_tunnel_id.yfilter);
}

std::string MplsPce::Lsps::Lsp::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Identifiers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.yfilter)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.yfilter)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Identifiers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Lsp::Identifiers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
        te_lsp_id.value_namespace = name_space;
        te_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
        ext_tunnel_id.value_namespace = name_space;
        ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Identifiers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Identifiers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "sender" || name == "te-lsp-id" || name == "tunnel-id" || name == "ext-tunnel-id")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Autoroute::Autoroute()
    :
    is_used{YType::boolean, "is-used"},
    announced{YType::boolean, "announced"},
    metric_type{YType::enumeration, "metric-type"},
    metric{YType::uint32, "metric"},
    destination{YType::str, "destination"}
{

    yang_name = "autoroute"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Autoroute::~Autoroute()
{
}

bool MplsPce::Lsps::Lsp::Autoroute::has_data() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_used.is_set
	|| announced.is_set
	|| metric_type.is_set
	|| metric.is_set;
}

bool MplsPce::Lsps::Lsp::Autoroute::has_operation() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(announced.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string MplsPce::Lsps::Lsp::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (announced.is_set || is_set(announced.yfilter)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Lsp::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announced")
    {
        announced = value;
        announced.value_namespace = name_space;
        announced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
}

void MplsPce::Lsps::Lsp::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "announced")
    {
        announced.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "announced" || name == "metric-type" || name == "metric" || name == "destination")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Paths()
    :
    bw{YType::uint32, "bw"},
    is_bw_used{YType::boolean, "is-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    applied_bw{YType::uint32, "applied-bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"}
    	,
    ero(std::make_shared<MplsPce::Lsps::Lsp::Paths::Ero>())
	,lspa(std::make_shared<MplsPce::Lsps::Lsp::Paths::Lspa>())
	,rro(std::make_shared<MplsPce::Lsps::Lsp::Paths::Rro>())
{
    ero->parent = this;
    lspa->parent = this;
    rro->parent = this;

    yang_name = "paths"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::~Paths()
{
}

bool MplsPce::Lsps::Lsp::Paths::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return bw.is_set
	|| is_bw_used.is_set
	|| reopt_bw.is_set
	|| is_reopt_bw_used.is_set
	|| applied_bw.is_set
	|| is_applied_bw_used.is_set
	|| (ero !=  nullptr && ero->has_data())
	|| (lspa !=  nullptr && lspa->has_data())
	|| (rro !=  nullptr && rro->has_data());
}

bool MplsPce::Lsps::Lsp::Paths::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(is_bw_used.yfilter)
	|| ydk::is_set(reopt_bw.yfilter)
	|| ydk::is_set(is_reopt_bw_used.yfilter)
	|| ydk::is_set(applied_bw.yfilter)
	|| ydk::is_set(is_applied_bw_used.yfilter)
	|| (ero !=  nullptr && ero->has_operation())
	|| (lspa !=  nullptr && lspa->has_operation())
	|| (rro !=  nullptr && rro->has_operation());
}

std::string MplsPce::Lsps::Lsp::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.yfilter)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.yfilter)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.yfilter)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (applied_bw.is_set || is_set(applied_bw.yfilter)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.yfilter)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ero")
    {
        if(ero == nullptr)
        {
            ero = std::make_shared<MplsPce::Lsps::Lsp::Paths::Ero>();
        }
        return ero;
    }

    if(child_yang_name == "lspa")
    {
        if(lspa == nullptr)
        {
            lspa = std::make_shared<MplsPce::Lsps::Lsp::Paths::Lspa>();
        }
        return lspa;
    }

    if(child_yang_name == "rro")
    {
        if(rro == nullptr)
        {
            rro = std::make_shared<MplsPce::Lsps::Lsp::Paths::Rro>();
        }
        return rro;
    }

    if(child_yang_name == "metric")
    {
        auto c = std::make_shared<MplsPce::Lsps::Lsp::Paths::Metric>();
        c->parent = this;
        metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ero != nullptr)
    {
        children["ero"] = ero;
    }

    if(lspa != nullptr)
    {
        children["lspa"] = lspa;
    }

    if(rro != nullptr)
    {
        children["rro"] = rro;
    }

    count = 0;
    for (auto const & c : metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPce::Lsps::Lsp::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
        is_bw_used.value_namespace = name_space;
        is_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
        reopt_bw.value_namespace = name_space;
        reopt_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
        is_reopt_bw_used.value_namespace = name_space;
        is_reopt_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applied-bw")
    {
        applied_bw = value;
        applied_bw.value_namespace = name_space;
        applied_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
        is_applied_bw_used.value_namespace = name_space;
        is_applied_bw_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used.yfilter = yfilter;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw.yfilter = yfilter;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used.yfilter = yfilter;
    }
    if(value_path == "applied-bw")
    {
        applied_bw.yfilter = yfilter;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero" || name == "lspa" || name == "rro" || name == "metric" || name == "bw" || name == "is-bw-used" || name == "reopt-bw" || name == "is-reopt-bw-used" || name == "applied-bw" || name == "is-applied-bw-used")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Ero::Ero()
    :
    is_used{YType::boolean, "is-used"},
    cost{YType::uint32, "cost"},
    address{YType::str, "address"}
{

    yang_name = "ero"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::Ero::~Ero()
{
}

bool MplsPce::Lsps::Lsp::Paths::Ero::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_used.is_set
	|| cost.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Ero::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPce::Lsps::Lsp::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        auto c = std::make_shared<MplsPce::Lsps::Lsp::Paths::Ero::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPce::Lsps::Lsp::Paths::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

void MplsPce::Lsps::Lsp::Paths::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "is-used" || name == "cost" || name == "address")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Ero::Subobject::Subobject()
    :
    subobj_type{YType::uint8, "subobj-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    strict{YType::boolean, "strict"},
    global{YType::boolean, "global"},
    mpls_label{YType::uint32, "mpls-label"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_value{YType::uint32, "segment-id-value"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "subobject"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPce::Lsps::Lsp::Paths::Ero::Subobject::has_data() const
{
    return subobj_type.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| strict.is_set
	|| global.is_set
	|| mpls_label.is_set
	|| segment_id_type.is_set
	|| only_valid_mpls_label.is_set
	|| complete_mpls_label_entry.is_set
	|| missing_segment_id.is_set
	|| missing_node_adjcency_id.is_set
	|| segment_id_exists.is_set
	|| segment_id_value.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Ero::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subobj_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsPce::Lsps::Lsp::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::Ero::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::Ero::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Lsp::Paths::Ero::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Paths::Ero::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::Ero::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobj-type" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "strict" || name == "global" || name == "mpls-label" || name == "segment-id-type" || name == "only-valid-mpls-label" || name == "complete-mpls-label-entry" || name == "missing-segment-id" || name == "missing-node-adjcency-id" || name == "segment-id-exists" || name == "segment-id-value" || name == "node-adjacency-id-exists" || name == "node-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Lspa::Lspa()
    :
    is_used{YType::boolean, "is-used"},
    exlude_any{YType::uint32, "exlude-any"},
    include_any{YType::uint32, "include-any"},
    include_all{YType::uint32, "include-all"},
    setup{YType::uint8, "setup"},
    hold{YType::uint8, "hold"},
    lbit{YType::boolean, "lbit"}
{

    yang_name = "lspa"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::Lspa::~Lspa()
{
}

bool MplsPce::Lsps::Lsp::Paths::Lspa::has_data() const
{
    return is_used.is_set
	|| exlude_any.is_set
	|| include_any.is_set
	|| include_all.is_set
	|| setup.is_set
	|| hold.is_set
	|| lbit.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Lspa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(exlude_any.yfilter)
	|| ydk::is_set(include_any.yfilter)
	|| ydk::is_set(include_all.yfilter)
	|| ydk::is_set(setup.yfilter)
	|| ydk::is_set(hold.yfilter)
	|| ydk::is_set(lbit.yfilter);
}

std::string MplsPce::Lsps::Lsp::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::Lspa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (exlude_any.is_set || is_set(exlude_any.yfilter)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.yfilter)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.yfilter)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (setup.is_set || is_set(setup.yfilter)) leaf_name_data.push_back(setup.get_name_leafdata());
    if (hold.is_set || is_set(hold.yfilter)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::Lspa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Lsp::Paths::Lspa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exlude-any")
    {
        exlude_any = value;
        exlude_any.value_namespace = name_space;
        exlude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-any")
    {
        include_any = value;
        include_any.value_namespace = name_space;
        include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-all")
    {
        include_all = value;
        include_all.value_namespace = name_space;
        include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup")
    {
        setup = value;
        setup.value_namespace = name_space;
        setup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold")
    {
        hold = value;
        hold.value_namespace = name_space;
        hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Paths::Lspa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "exlude-any")
    {
        exlude_any.yfilter = yfilter;
    }
    if(value_path == "include-any")
    {
        include_any.yfilter = yfilter;
    }
    if(value_path == "include-all")
    {
        include_all.yfilter = yfilter;
    }
    if(value_path == "setup")
    {
        setup.yfilter = yfilter;
    }
    if(value_path == "hold")
    {
        hold.yfilter = yfilter;
    }
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::Lspa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "exlude-any" || name == "include-any" || name == "include-all" || name == "setup" || name == "hold" || name == "lbit")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Rro::Rro()
    :
    is_used{YType::boolean, "is-used"},
    cost{YType::uint32, "cost"},
    address{YType::str, "address"}
{

    yang_name = "rro"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::Rro::~Rro()
{
}

bool MplsPce::Lsps::Lsp::Paths::Rro::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_used.is_set
	|| cost.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Rro::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPce::Lsps::Lsp::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        auto c = std::make_shared<MplsPce::Lsps::Lsp::Paths::Rro::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPce::Lsps::Lsp::Paths::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

void MplsPce::Lsps::Lsp::Paths::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "is-used" || name == "cost" || name == "address")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Rro::Subobject::Subobject()
    :
    subobj_type{YType::uint8, "subobj-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    strict{YType::boolean, "strict"},
    global{YType::boolean, "global"},
    mpls_label{YType::uint32, "mpls-label"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_value{YType::uint32, "segment-id-value"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "subobject"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPce::Lsps::Lsp::Paths::Rro::Subobject::has_data() const
{
    return subobj_type.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| strict.is_set
	|| global.is_set
	|| mpls_label.is_set
	|| segment_id_type.is_set
	|| only_valid_mpls_label.is_set
	|| complete_mpls_label_entry.is_set
	|| missing_segment_id.is_set
	|| missing_node_adjcency_id.is_set
	|| segment_id_exists.is_set
	|| segment_id_value.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Rro::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subobj_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsPce::Lsps::Lsp::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::Rro::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::Rro::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Lsp::Paths::Rro::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Paths::Rro::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::Rro::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobj-type" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "strict" || name == "global" || name == "mpls-label" || name == "segment-id-type" || name == "only-valid-mpls-label" || name == "complete-mpls-label-entry" || name == "missing-segment-id" || name == "missing-node-adjcency-id" || name == "segment-id-exists" || name == "segment-id-value" || name == "node-adjacency-id-exists" || name == "node-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsPce::Lsps::Lsp::Paths::Metric::Metric()
    :
    type{YType::uint8, "type"},
    cost{YType::uint32, "cost"}
{

    yang_name = "metric"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Lsps::Lsp::Paths::Metric::~Metric()
{
}

bool MplsPce::Lsps::Lsp::Paths::Metric::has_data() const
{
    return type.is_set
	|| cost.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string MplsPce::Lsps::Lsp::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Lsp::Paths::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Lsp::Paths::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Lsp::Paths::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Lsp::Paths::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Lsp::Paths::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "cost")
        return true;
    return false;
}

MplsPce::Lsps::Creator::Creator()
    :
    node_identifier{YType::str, "node-identifier"},
    address{YType::str, "address"}
{

    yang_name = "creator"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Creator::~Creator()
{
}

bool MplsPce::Lsps::Creator::has_data() const
{
    return node_identifier.is_set
	|| address.is_set;
}

bool MplsPce::Lsps::Creator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPce::Lsps::Creator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Creator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Creator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Creator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Creator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Creator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Creator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Creator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-identifier" || name == "address")
        return true;
    return false;
}

MplsPce::Lsps::Delegated::Delegated()
    :
    node_identifier{YType::str, "node-identifier"},
    address{YType::str, "address"}
{

    yang_name = "delegated"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Delegated::~Delegated()
{
}

bool MplsPce::Lsps::Delegated::has_data() const
{
    return node_identifier.is_set
	|| address.is_set;
}

bool MplsPce::Lsps::Delegated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPce::Lsps::Delegated::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Delegated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Delegated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Delegated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Delegated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Delegated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Delegated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Delegated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-identifier" || name == "address")
        return true;
    return false;
}

MplsPce::Lsps::Identifiers::Identifiers()
    :
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"}
{

    yang_name = "identifiers"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Identifiers::~Identifiers()
{
}

bool MplsPce::Lsps::Identifiers::has_data() const
{
    return is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set
	|| ext_tunnel_id.is_set;
}

bool MplsPce::Lsps::Identifiers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(te_lsp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(ext_tunnel_id.yfilter);
}

std::string MplsPce::Lsps::Identifiers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Identifiers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.yfilter)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.yfilter)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Identifiers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Identifiers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
        te_lsp_id.value_namespace = name_space;
        te_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
        ext_tunnel_id.value_namespace = name_space;
        ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Identifiers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Identifiers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "sender" || name == "te-lsp-id" || name == "tunnel-id" || name == "ext-tunnel-id")
        return true;
    return false;
}

MplsPce::Lsps::Autoroute::Autoroute()
    :
    is_used{YType::boolean, "is-used"},
    announced{YType::boolean, "announced"},
    metric_type{YType::enumeration, "metric-type"},
    metric{YType::uint32, "metric"},
    destination{YType::str, "destination"}
{

    yang_name = "autoroute"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Autoroute::~Autoroute()
{
}

bool MplsPce::Lsps::Autoroute::has_data() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_used.is_set
	|| announced.is_set
	|| metric_type.is_set
	|| metric.is_set;
}

bool MplsPce::Lsps::Autoroute::has_operation() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(announced.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string MplsPce::Lsps::Autoroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (announced.is_set || is_set(announced.yfilter)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announced")
    {
        announced = value;
        announced.value_namespace = name_space;
        announced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
}

void MplsPce::Lsps::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "announced")
    {
        announced.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "announced" || name == "metric-type" || name == "metric" || name == "destination")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Paths()
    :
    bw{YType::uint32, "bw"},
    is_bw_used{YType::boolean, "is-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    applied_bw{YType::uint32, "applied-bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"}
    	,
    ero(std::make_shared<MplsPce::Lsps::Paths::Ero>())
	,lspa(std::make_shared<MplsPce::Lsps::Paths::Lspa>())
	,rro(std::make_shared<MplsPce::Lsps::Paths::Rro>())
{
    ero->parent = this;
    lspa->parent = this;
    rro->parent = this;

    yang_name = "paths"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::~Paths()
{
}

bool MplsPce::Lsps::Paths::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return bw.is_set
	|| is_bw_used.is_set
	|| reopt_bw.is_set
	|| is_reopt_bw_used.is_set
	|| applied_bw.is_set
	|| is_applied_bw_used.is_set
	|| (ero !=  nullptr && ero->has_data())
	|| (lspa !=  nullptr && lspa->has_data())
	|| (rro !=  nullptr && rro->has_data());
}

bool MplsPce::Lsps::Paths::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(is_bw_used.yfilter)
	|| ydk::is_set(reopt_bw.yfilter)
	|| ydk::is_set(is_reopt_bw_used.yfilter)
	|| ydk::is_set(applied_bw.yfilter)
	|| ydk::is_set(is_applied_bw_used.yfilter)
	|| (ero !=  nullptr && ero->has_operation())
	|| (lspa !=  nullptr && lspa->has_operation())
	|| (rro !=  nullptr && rro->has_operation());
}

std::string MplsPce::Lsps::Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.yfilter)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.yfilter)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.yfilter)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (applied_bw.is_set || is_set(applied_bw.yfilter)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.yfilter)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ero")
    {
        if(ero == nullptr)
        {
            ero = std::make_shared<MplsPce::Lsps::Paths::Ero>();
        }
        return ero;
    }

    if(child_yang_name == "lspa")
    {
        if(lspa == nullptr)
        {
            lspa = std::make_shared<MplsPce::Lsps::Paths::Lspa>();
        }
        return lspa;
    }

    if(child_yang_name == "rro")
    {
        if(rro == nullptr)
        {
            rro = std::make_shared<MplsPce::Lsps::Paths::Rro>();
        }
        return rro;
    }

    if(child_yang_name == "metric")
    {
        auto c = std::make_shared<MplsPce::Lsps::Paths::Metric>();
        c->parent = this;
        metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ero != nullptr)
    {
        children["ero"] = ero;
    }

    if(lspa != nullptr)
    {
        children["lspa"] = lspa;
    }

    if(rro != nullptr)
    {
        children["rro"] = rro;
    }

    count = 0;
    for (auto const & c : metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPce::Lsps::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
        is_bw_used.value_namespace = name_space;
        is_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
        reopt_bw.value_namespace = name_space;
        reopt_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
        is_reopt_bw_used.value_namespace = name_space;
        is_reopt_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applied-bw")
    {
        applied_bw = value;
        applied_bw.value_namespace = name_space;
        applied_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
        is_applied_bw_used.value_namespace = name_space;
        is_applied_bw_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used.yfilter = yfilter;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw.yfilter = yfilter;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used.yfilter = yfilter;
    }
    if(value_path == "applied-bw")
    {
        applied_bw.yfilter = yfilter;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero" || name == "lspa" || name == "rro" || name == "metric" || name == "bw" || name == "is-bw-used" || name == "reopt-bw" || name == "is-reopt-bw-used" || name == "applied-bw" || name == "is-applied-bw-used")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Ero::Ero()
    :
    is_used{YType::boolean, "is-used"},
    cost{YType::uint32, "cost"},
    address{YType::str, "address"}
{

    yang_name = "ero"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::Ero::~Ero()
{
}

bool MplsPce::Lsps::Paths::Ero::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_used.is_set
	|| cost.is_set;
}

bool MplsPce::Lsps::Paths::Ero::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPce::Lsps::Paths::Ero::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        auto c = std::make_shared<MplsPce::Lsps::Paths::Ero::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPce::Lsps::Paths::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

void MplsPce::Lsps::Paths::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "is-used" || name == "cost" || name == "address")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Ero::Subobject::Subobject()
    :
    subobj_type{YType::uint8, "subobj-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    strict{YType::boolean, "strict"},
    global{YType::boolean, "global"},
    mpls_label{YType::uint32, "mpls-label"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_value{YType::uint32, "segment-id-value"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "subobject"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPce::Lsps::Paths::Ero::Subobject::has_data() const
{
    return subobj_type.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| strict.is_set
	|| global.is_set
	|| mpls_label.is_set
	|| segment_id_type.is_set
	|| only_valid_mpls_label.is_set
	|| complete_mpls_label_entry.is_set
	|| missing_segment_id.is_set
	|| missing_node_adjcency_id.is_set
	|| segment_id_exists.is_set
	|| segment_id_value.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool MplsPce::Lsps::Paths::Ero::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subobj_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsPce::Lsps::Paths::Ero::Subobject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::Ero::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::Ero::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Paths::Ero::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Paths::Ero::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::Ero::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobj-type" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "strict" || name == "global" || name == "mpls-label" || name == "segment-id-type" || name == "only-valid-mpls-label" || name == "complete-mpls-label-entry" || name == "missing-segment-id" || name == "missing-node-adjcency-id" || name == "segment-id-exists" || name == "segment-id-value" || name == "node-adjacency-id-exists" || name == "node-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Lspa::Lspa()
    :
    is_used{YType::boolean, "is-used"},
    exlude_any{YType::uint32, "exlude-any"},
    include_any{YType::uint32, "include-any"},
    include_all{YType::uint32, "include-all"},
    setup{YType::uint8, "setup"},
    hold{YType::uint8, "hold"},
    lbit{YType::boolean, "lbit"}
{

    yang_name = "lspa"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::Lspa::~Lspa()
{
}

bool MplsPce::Lsps::Paths::Lspa::has_data() const
{
    return is_used.is_set
	|| exlude_any.is_set
	|| include_any.is_set
	|| include_all.is_set
	|| setup.is_set
	|| hold.is_set
	|| lbit.is_set;
}

bool MplsPce::Lsps::Paths::Lspa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(exlude_any.yfilter)
	|| ydk::is_set(include_any.yfilter)
	|| ydk::is_set(include_all.yfilter)
	|| ydk::is_set(setup.yfilter)
	|| ydk::is_set(hold.yfilter)
	|| ydk::is_set(lbit.yfilter);
}

std::string MplsPce::Lsps::Paths::Lspa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::Lspa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (exlude_any.is_set || is_set(exlude_any.yfilter)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.yfilter)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.yfilter)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (setup.is_set || is_set(setup.yfilter)) leaf_name_data.push_back(setup.get_name_leafdata());
    if (hold.is_set || is_set(hold.yfilter)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::Lspa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Paths::Lspa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exlude-any")
    {
        exlude_any = value;
        exlude_any.value_namespace = name_space;
        exlude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-any")
    {
        include_any = value;
        include_any.value_namespace = name_space;
        include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-all")
    {
        include_all = value;
        include_all.value_namespace = name_space;
        include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup")
    {
        setup = value;
        setup.value_namespace = name_space;
        setup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold")
    {
        hold = value;
        hold.value_namespace = name_space;
        hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Paths::Lspa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "exlude-any")
    {
        exlude_any.yfilter = yfilter;
    }
    if(value_path == "include-any")
    {
        include_any.yfilter = yfilter;
    }
    if(value_path == "include-all")
    {
        include_all.yfilter = yfilter;
    }
    if(value_path == "setup")
    {
        setup.yfilter = yfilter;
    }
    if(value_path == "hold")
    {
        hold.yfilter = yfilter;
    }
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::Lspa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "exlude-any" || name == "include-any" || name == "include-all" || name == "setup" || name == "hold" || name == "lbit")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Rro::Rro()
    :
    is_used{YType::boolean, "is-used"},
    cost{YType::uint32, "cost"},
    address{YType::str, "address"}
{

    yang_name = "rro"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::Rro::~Rro()
{
}

bool MplsPce::Lsps::Paths::Rro::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_used.is_set
	|| cost.is_set;
}

bool MplsPce::Lsps::Paths::Rro::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPce::Lsps::Paths::Rro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        auto c = std::make_shared<MplsPce::Lsps::Paths::Rro::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPce::Lsps::Paths::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

void MplsPce::Lsps::Paths::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "is-used" || name == "cost" || name == "address")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Rro::Subobject::Subobject()
    :
    subobj_type{YType::uint8, "subobj-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    strict{YType::boolean, "strict"},
    global{YType::boolean, "global"},
    mpls_label{YType::uint32, "mpls-label"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_value{YType::uint32, "segment-id-value"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "subobject"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPce::Lsps::Paths::Rro::Subobject::has_data() const
{
    return subobj_type.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| strict.is_set
	|| global.is_set
	|| mpls_label.is_set
	|| segment_id_type.is_set
	|| only_valid_mpls_label.is_set
	|| complete_mpls_label_entry.is_set
	|| missing_segment_id.is_set
	|| missing_node_adjcency_id.is_set
	|| segment_id_exists.is_set
	|| segment_id_value.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool MplsPce::Lsps::Paths::Rro::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subobj_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsPce::Lsps::Paths::Rro::Subobject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::Rro::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::Rro::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Paths::Rro::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Paths::Rro::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::Rro::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobj-type" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "strict" || name == "global" || name == "mpls-label" || name == "segment-id-type" || name == "only-valid-mpls-label" || name == "complete-mpls-label-entry" || name == "missing-segment-id" || name == "missing-node-adjcency-id" || name == "segment-id-exists" || name == "segment-id-value" || name == "node-adjacency-id-exists" || name == "node-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsPce::Lsps::Paths::Metric::Metric()
    :
    type{YType::uint8, "type"},
    cost{YType::uint32, "cost"}
{

    yang_name = "metric"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Lsps::Paths::Metric::~Metric()
{
}

bool MplsPce::Lsps::Paths::Metric::has_data() const
{
    return type.is_set
	|| cost.is_set;
}

bool MplsPce::Lsps::Paths::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string MplsPce::Lsps::Paths::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Lsps::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Lsps::Paths::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Lsps::Paths::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Lsps::Paths::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Lsps::Paths::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool MplsPce::Lsps::Paths::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "cost")
        return true;
    return false;
}

MplsPce::Statistics::Statistics()
    :
    neighbors{YType::uint32, "neighbors"},
    tunnels{YType::uint32, "tunnels"},
    pce_req_total{YType::uint32, "pce-req-total"},
    pce_req_pending{YType::uint32, "pce-req-pending"},
    pce_req_timed_out{YType::uint32, "pce-req-timed-out"},
    max_file_descriptors{YType::uint32, "max-file-descriptors"},
    current_file_descriptors{YType::uint32, "current-file-descriptors"},
    current_pceq_length{YType::uint32, "current-pceq-length"},
    current_teq_length{YType::uint32, "current-teq-length"},
    max_pceq_length{YType::uint32, "max-pceq-length"},
    max_teq_length{YType::uint32, "max-teq-length"},
    maximum_in_queue_depth{YType::uint32, "maximum-in-queue-depth"},
    average_in_queue_depth{YType::uint32, "average-in-queue-depth"}
    	,
    igp_statistics(std::make_shared<MplsPce::Statistics::IgpStatistics>())
{
    igp_statistics->parent = this;

    yang_name = "statistics"; yang_parent_name = "mpls-pce"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Statistics::~Statistics()
{
}

bool MplsPce::Statistics::has_data() const
{
    for (auto const & leaf : maximum_in_queue_depth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : average_in_queue_depth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return neighbors.is_set
	|| tunnels.is_set
	|| pce_req_total.is_set
	|| pce_req_pending.is_set
	|| pce_req_timed_out.is_set
	|| max_file_descriptors.is_set
	|| current_file_descriptors.is_set
	|| current_pceq_length.is_set
	|| current_teq_length.is_set
	|| max_pceq_length.is_set
	|| max_teq_length.is_set
	|| (igp_statistics !=  nullptr && igp_statistics->has_data());
}

bool MplsPce::Statistics::has_operation() const
{
    for (auto const & leaf : maximum_in_queue_depth.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : average_in_queue_depth.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbors.yfilter)
	|| ydk::is_set(tunnels.yfilter)
	|| ydk::is_set(pce_req_total.yfilter)
	|| ydk::is_set(pce_req_pending.yfilter)
	|| ydk::is_set(pce_req_timed_out.yfilter)
	|| ydk::is_set(max_file_descriptors.yfilter)
	|| ydk::is_set(current_file_descriptors.yfilter)
	|| ydk::is_set(current_pceq_length.yfilter)
	|| ydk::is_set(current_teq_length.yfilter)
	|| ydk::is_set(max_pceq_length.yfilter)
	|| ydk::is_set(max_teq_length.yfilter)
	|| ydk::is_set(maximum_in_queue_depth.yfilter)
	|| ydk::is_set(average_in_queue_depth.yfilter)
	|| (igp_statistics !=  nullptr && igp_statistics->has_operation());
}

std::string MplsPce::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbors.is_set || is_set(neighbors.yfilter)) leaf_name_data.push_back(neighbors.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());
    if (pce_req_total.is_set || is_set(pce_req_total.yfilter)) leaf_name_data.push_back(pce_req_total.get_name_leafdata());
    if (pce_req_pending.is_set || is_set(pce_req_pending.yfilter)) leaf_name_data.push_back(pce_req_pending.get_name_leafdata());
    if (pce_req_timed_out.is_set || is_set(pce_req_timed_out.yfilter)) leaf_name_data.push_back(pce_req_timed_out.get_name_leafdata());
    if (max_file_descriptors.is_set || is_set(max_file_descriptors.yfilter)) leaf_name_data.push_back(max_file_descriptors.get_name_leafdata());
    if (current_file_descriptors.is_set || is_set(current_file_descriptors.yfilter)) leaf_name_data.push_back(current_file_descriptors.get_name_leafdata());
    if (current_pceq_length.is_set || is_set(current_pceq_length.yfilter)) leaf_name_data.push_back(current_pceq_length.get_name_leafdata());
    if (current_teq_length.is_set || is_set(current_teq_length.yfilter)) leaf_name_data.push_back(current_teq_length.get_name_leafdata());
    if (max_pceq_length.is_set || is_set(max_pceq_length.yfilter)) leaf_name_data.push_back(max_pceq_length.get_name_leafdata());
    if (max_teq_length.is_set || is_set(max_teq_length.yfilter)) leaf_name_data.push_back(max_teq_length.get_name_leafdata());

    auto maximum_in_queue_depth_name_datas = maximum_in_queue_depth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_in_queue_depth_name_datas.begin(), maximum_in_queue_depth_name_datas.end());
    auto average_in_queue_depth_name_datas = average_in_queue_depth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), average_in_queue_depth_name_datas.begin(), average_in_queue_depth_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-statistics")
    {
        if(igp_statistics == nullptr)
        {
            igp_statistics = std::make_shared<MplsPce::Statistics::IgpStatistics>();
        }
        return igp_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp_statistics != nullptr)
    {
        children["igp-statistics"] = igp_statistics;
    }

    return children;
}

void MplsPce::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbors")
    {
        neighbors = value;
        neighbors.value_namespace = name_space;
        neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-total")
    {
        pce_req_total = value;
        pce_req_total.value_namespace = name_space;
        pce_req_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-pending")
    {
        pce_req_pending = value;
        pce_req_pending.value_namespace = name_space;
        pce_req_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-timed-out")
    {
        pce_req_timed_out = value;
        pce_req_timed_out.value_namespace = name_space;
        pce_req_timed_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-file-descriptors")
    {
        max_file_descriptors = value;
        max_file_descriptors.value_namespace = name_space;
        max_file_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-file-descriptors")
    {
        current_file_descriptors = value;
        current_file_descriptors.value_namespace = name_space;
        current_file_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-pceq-length")
    {
        current_pceq_length = value;
        current_pceq_length.value_namespace = name_space;
        current_pceq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-teq-length")
    {
        current_teq_length = value;
        current_teq_length.value_namespace = name_space;
        current_teq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pceq-length")
    {
        max_pceq_length = value;
        max_pceq_length.value_namespace = name_space;
        max_pceq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-teq-length")
    {
        max_teq_length = value;
        max_teq_length.value_namespace = name_space;
        max_teq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-in-queue-depth")
    {
        maximum_in_queue_depth.append(value);
    }
    if(value_path == "average-in-queue-depth")
    {
        average_in_queue_depth.append(value);
    }
}

void MplsPce::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbors")
    {
        neighbors.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
    if(value_path == "pce-req-total")
    {
        pce_req_total.yfilter = yfilter;
    }
    if(value_path == "pce-req-pending")
    {
        pce_req_pending.yfilter = yfilter;
    }
    if(value_path == "pce-req-timed-out")
    {
        pce_req_timed_out.yfilter = yfilter;
    }
    if(value_path == "max-file-descriptors")
    {
        max_file_descriptors.yfilter = yfilter;
    }
    if(value_path == "current-file-descriptors")
    {
        current_file_descriptors.yfilter = yfilter;
    }
    if(value_path == "current-pceq-length")
    {
        current_pceq_length.yfilter = yfilter;
    }
    if(value_path == "current-teq-length")
    {
        current_teq_length.yfilter = yfilter;
    }
    if(value_path == "max-pceq-length")
    {
        max_pceq_length.yfilter = yfilter;
    }
    if(value_path == "max-teq-length")
    {
        max_teq_length.yfilter = yfilter;
    }
    if(value_path == "maximum-in-queue-depth")
    {
        maximum_in_queue_depth.yfilter = yfilter;
    }
    if(value_path == "average-in-queue-depth")
    {
        average_in_queue_depth.yfilter = yfilter;
    }
}

bool MplsPce::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-statistics" || name == "neighbors" || name == "tunnels" || name == "pce-req-total" || name == "pce-req-pending" || name == "pce-req-timed-out" || name == "max-file-descriptors" || name == "current-file-descriptors" || name == "current-pceq-length" || name == "current-teq-length" || name == "max-pceq-length" || name == "max-teq-length" || name == "maximum-in-queue-depth" || name == "average-in-queue-depth")
        return true;
    return false;
}

MplsPce::Statistics::IgpStatistics::IgpStatistics()
    :
    abr_lookup_min{YType::uint64, "abr-lookup-min"},
    abr_lookup_max{YType::uint64, "abr-lookup-max"},
    abr_lookup_avg{YType::uint64, "abr-lookup-avg"},
    abr_lookup_timeout{YType::uint64, "abr-lookup-timeout"},
    abr_lookup_complete{YType::uint64, "abr-lookup-complete"}
{

    yang_name = "igp-statistics"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Statistics::IgpStatistics::~IgpStatistics()
{
}

bool MplsPce::Statistics::IgpStatistics::has_data() const
{
    return abr_lookup_min.is_set
	|| abr_lookup_max.is_set
	|| abr_lookup_avg.is_set
	|| abr_lookup_timeout.is_set
	|| abr_lookup_complete.is_set;
}

bool MplsPce::Statistics::IgpStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abr_lookup_min.yfilter)
	|| ydk::is_set(abr_lookup_max.yfilter)
	|| ydk::is_set(abr_lookup_avg.yfilter)
	|| ydk::is_set(abr_lookup_timeout.yfilter)
	|| ydk::is_set(abr_lookup_complete.yfilter);
}

std::string MplsPce::Statistics::IgpStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Statistics::IgpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Statistics::IgpStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_lookup_min.is_set || is_set(abr_lookup_min.yfilter)) leaf_name_data.push_back(abr_lookup_min.get_name_leafdata());
    if (abr_lookup_max.is_set || is_set(abr_lookup_max.yfilter)) leaf_name_data.push_back(abr_lookup_max.get_name_leafdata());
    if (abr_lookup_avg.is_set || is_set(abr_lookup_avg.yfilter)) leaf_name_data.push_back(abr_lookup_avg.get_name_leafdata());
    if (abr_lookup_timeout.is_set || is_set(abr_lookup_timeout.yfilter)) leaf_name_data.push_back(abr_lookup_timeout.get_name_leafdata());
    if (abr_lookup_complete.is_set || is_set(abr_lookup_complete.yfilter)) leaf_name_data.push_back(abr_lookup_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Statistics::IgpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Statistics::IgpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Statistics::IgpStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abr-lookup-min")
    {
        abr_lookup_min = value;
        abr_lookup_min.value_namespace = name_space;
        abr_lookup_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-max")
    {
        abr_lookup_max = value;
        abr_lookup_max.value_namespace = name_space;
        abr_lookup_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-avg")
    {
        abr_lookup_avg = value;
        abr_lookup_avg.value_namespace = name_space;
        abr_lookup_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-timeout")
    {
        abr_lookup_timeout = value;
        abr_lookup_timeout.value_namespace = name_space;
        abr_lookup_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-complete")
    {
        abr_lookup_complete = value;
        abr_lookup_complete.value_namespace = name_space;
        abr_lookup_complete.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Statistics::IgpStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abr-lookup-min")
    {
        abr_lookup_min.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-max")
    {
        abr_lookup_max.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-avg")
    {
        abr_lookup_avg.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-timeout")
    {
        abr_lookup_timeout.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-complete")
    {
        abr_lookup_complete.yfilter = yfilter;
    }
}

bool MplsPce::Statistics::IgpStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abr-lookup-min" || name == "abr-lookup-max" || name == "abr-lookup-avg" || name == "abr-lookup-timeout" || name == "abr-lookup-complete")
        return true;
    return false;
}

MplsPce::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "mpls-pce"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Peers::~Peers()
{
}

bool MplsPce::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsPce::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsPce::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto c = std::make_shared<MplsPce::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPce::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPce::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPce::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

MplsPce::Peers::Peer::Peer()
    :
    peer_address{YType::str, "peer-address"},
    error{YType::str, "error"},
    pce_state{YType::enumeration, "pce-state"},
    precedence{YType::uint32, "precedence"},
    stateful{YType::boolean, "stateful"},
    capability_update{YType::boolean, "capability-update"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    triggered_sync_capability{YType::boolean, "triggered-sync-capability"},
    capability_db_version{YType::boolean, "capability-db-version"},
    delta_sync_capability{YType::boolean, "delta-sync-capability"},
    pcep_up_time{YType::uint32, "pcep-up-time"},
    keepalives{YType::uint32, "keepalives"},
    candidate{YType::boolean, "candidate"},
    statically_configured{YType::boolean, "statically-configured"},
    md5_enabled{YType::boolean, "md5-enabled"},
    keychain_enabled{YType::boolean, "keychain-enabled"},
    negotiated_keepalive{YType::uint32, "negotiated-keepalive"},
    negotated_dead_time{YType::uint32, "negotated-dead-time"},
    pce_req_rx{YType::uint32, "pce-req-rx"},
    pce_req_tx{YType::uint32, "pce-req-tx"},
    pce_rep_rx{YType::uint32, "pce-rep-rx"},
    pce_rep_tx{YType::uint32, "pce-rep-tx"},
    pce_err_rx{YType::uint32, "pce-err-rx"},
    pce_err_tx{YType::uint32, "pce-err-tx"},
    pce_open_tx{YType::uint32, "pce-open-tx"},
    pce_open_rx{YType::uint32, "pce-open-rx"},
    pce_rpt_rx{YType::uint32, "pce-rpt-rx"},
    pce_rpt_tx{YType::uint32, "pce-rpt-tx"},
    pce_upd_rx{YType::uint32, "pce-upd-rx"},
    pce_upd_tx{YType::uint32, "pce-upd-tx"},
    pce_init_rx{YType::uint32, "pce-init-rx"},
    pce_init_tx{YType::uint32, "pce-init-tx"},
    pce_keepalive_tx{YType::uint64, "pce-keepalive-tx"},
    pce_keepalive_rx{YType::uint64, "pce-keepalive-rx"},
    req_reply_min{YType::uint64, "req-reply-min"},
    req_reply_max{YType::uint64, "req-reply-max"},
    req_reply_avg{YType::uint64, "req-reply-avg"},
    request_timeouts{YType::uint64, "request-timeouts"},
    local_sid{YType::uint8, "local-sid"},
    remote_sid{YType::uint8, "remote-sid"},
    min_keepalive_interval{YType::uint8, "min-keepalive-interval"},
    max_dead_interval{YType::uint8, "max-dead-interval"}
    	,
    last_tx_pce_err(std::make_shared<MplsPce::Peers::Peer::LastTxPceErr>())
	,last_rx_pce_err(std::make_shared<MplsPce::Peers::Peer::LastRxPceErr>())
{
    last_tx_pce_err->parent = this;
    last_rx_pce_err->parent = this;

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Peers::Peer::~Peer()
{
}

bool MplsPce::Peers::Peer::has_data() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| error.is_set
	|| pce_state.is_set
	|| precedence.is_set
	|| stateful.is_set
	|| capability_update.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| triggered_sync_capability.is_set
	|| capability_db_version.is_set
	|| delta_sync_capability.is_set
	|| pcep_up_time.is_set
	|| keepalives.is_set
	|| candidate.is_set
	|| statically_configured.is_set
	|| md5_enabled.is_set
	|| keychain_enabled.is_set
	|| negotiated_keepalive.is_set
	|| negotated_dead_time.is_set
	|| pce_req_rx.is_set
	|| pce_req_tx.is_set
	|| pce_rep_rx.is_set
	|| pce_rep_tx.is_set
	|| pce_err_rx.is_set
	|| pce_err_tx.is_set
	|| pce_open_tx.is_set
	|| pce_open_rx.is_set
	|| pce_rpt_rx.is_set
	|| pce_rpt_tx.is_set
	|| pce_upd_rx.is_set
	|| pce_upd_tx.is_set
	|| pce_init_rx.is_set
	|| pce_init_tx.is_set
	|| pce_keepalive_tx.is_set
	|| pce_keepalive_rx.is_set
	|| req_reply_min.is_set
	|| req_reply_max.is_set
	|| req_reply_avg.is_set
	|| request_timeouts.is_set
	|| local_sid.is_set
	|| remote_sid.is_set
	|| min_keepalive_interval.is_set
	|| max_dead_interval.is_set
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_data())
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_data());
}

bool MplsPce::Peers::Peer::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(pce_state.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(capability_update.yfilter)
	|| ydk::is_set(capability_instantiate.yfilter)
	|| ydk::is_set(capability_segment_routing.yfilter)
	|| ydk::is_set(triggered_sync_capability.yfilter)
	|| ydk::is_set(capability_db_version.yfilter)
	|| ydk::is_set(delta_sync_capability.yfilter)
	|| ydk::is_set(pcep_up_time.yfilter)
	|| ydk::is_set(keepalives.yfilter)
	|| ydk::is_set(candidate.yfilter)
	|| ydk::is_set(statically_configured.yfilter)
	|| ydk::is_set(md5_enabled.yfilter)
	|| ydk::is_set(keychain_enabled.yfilter)
	|| ydk::is_set(negotiated_keepalive.yfilter)
	|| ydk::is_set(negotated_dead_time.yfilter)
	|| ydk::is_set(pce_req_rx.yfilter)
	|| ydk::is_set(pce_req_tx.yfilter)
	|| ydk::is_set(pce_rep_rx.yfilter)
	|| ydk::is_set(pce_rep_tx.yfilter)
	|| ydk::is_set(pce_err_rx.yfilter)
	|| ydk::is_set(pce_err_tx.yfilter)
	|| ydk::is_set(pce_open_tx.yfilter)
	|| ydk::is_set(pce_open_rx.yfilter)
	|| ydk::is_set(pce_rpt_rx.yfilter)
	|| ydk::is_set(pce_rpt_tx.yfilter)
	|| ydk::is_set(pce_upd_rx.yfilter)
	|| ydk::is_set(pce_upd_tx.yfilter)
	|| ydk::is_set(pce_init_rx.yfilter)
	|| ydk::is_set(pce_init_tx.yfilter)
	|| ydk::is_set(pce_keepalive_tx.yfilter)
	|| ydk::is_set(pce_keepalive_rx.yfilter)
	|| ydk::is_set(req_reply_min.yfilter)
	|| ydk::is_set(req_reply_max.yfilter)
	|| ydk::is_set(req_reply_avg.yfilter)
	|| ydk::is_set(request_timeouts.yfilter)
	|| ydk::is_set(local_sid.yfilter)
	|| ydk::is_set(remote_sid.yfilter)
	|| ydk::is_set(min_keepalive_interval.yfilter)
	|| ydk::is_set(max_dead_interval.yfilter)
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_operation())
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_operation());
}

std::string MplsPce::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-address='" <<peer_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (pce_state.is_set || is_set(pce_state.yfilter)) leaf_name_data.push_back(pce_state.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.yfilter)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.yfilter)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.yfilter)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (triggered_sync_capability.is_set || is_set(triggered_sync_capability.yfilter)) leaf_name_data.push_back(triggered_sync_capability.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.yfilter)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (delta_sync_capability.is_set || is_set(delta_sync_capability.yfilter)) leaf_name_data.push_back(delta_sync_capability.get_name_leafdata());
    if (pcep_up_time.is_set || is_set(pcep_up_time.yfilter)) leaf_name_data.push_back(pcep_up_time.get_name_leafdata());
    if (keepalives.is_set || is_set(keepalives.yfilter)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (candidate.is_set || is_set(candidate.yfilter)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (statically_configured.is_set || is_set(statically_configured.yfilter)) leaf_name_data.push_back(statically_configured.get_name_leafdata());
    if (md5_enabled.is_set || is_set(md5_enabled.yfilter)) leaf_name_data.push_back(md5_enabled.get_name_leafdata());
    if (keychain_enabled.is_set || is_set(keychain_enabled.yfilter)) leaf_name_data.push_back(keychain_enabled.get_name_leafdata());
    if (negotiated_keepalive.is_set || is_set(negotiated_keepalive.yfilter)) leaf_name_data.push_back(negotiated_keepalive.get_name_leafdata());
    if (negotated_dead_time.is_set || is_set(negotated_dead_time.yfilter)) leaf_name_data.push_back(negotated_dead_time.get_name_leafdata());
    if (pce_req_rx.is_set || is_set(pce_req_rx.yfilter)) leaf_name_data.push_back(pce_req_rx.get_name_leafdata());
    if (pce_req_tx.is_set || is_set(pce_req_tx.yfilter)) leaf_name_data.push_back(pce_req_tx.get_name_leafdata());
    if (pce_rep_rx.is_set || is_set(pce_rep_rx.yfilter)) leaf_name_data.push_back(pce_rep_rx.get_name_leafdata());
    if (pce_rep_tx.is_set || is_set(pce_rep_tx.yfilter)) leaf_name_data.push_back(pce_rep_tx.get_name_leafdata());
    if (pce_err_rx.is_set || is_set(pce_err_rx.yfilter)) leaf_name_data.push_back(pce_err_rx.get_name_leafdata());
    if (pce_err_tx.is_set || is_set(pce_err_tx.yfilter)) leaf_name_data.push_back(pce_err_tx.get_name_leafdata());
    if (pce_open_tx.is_set || is_set(pce_open_tx.yfilter)) leaf_name_data.push_back(pce_open_tx.get_name_leafdata());
    if (pce_open_rx.is_set || is_set(pce_open_rx.yfilter)) leaf_name_data.push_back(pce_open_rx.get_name_leafdata());
    if (pce_rpt_rx.is_set || is_set(pce_rpt_rx.yfilter)) leaf_name_data.push_back(pce_rpt_rx.get_name_leafdata());
    if (pce_rpt_tx.is_set || is_set(pce_rpt_tx.yfilter)) leaf_name_data.push_back(pce_rpt_tx.get_name_leafdata());
    if (pce_upd_rx.is_set || is_set(pce_upd_rx.yfilter)) leaf_name_data.push_back(pce_upd_rx.get_name_leafdata());
    if (pce_upd_tx.is_set || is_set(pce_upd_tx.yfilter)) leaf_name_data.push_back(pce_upd_tx.get_name_leafdata());
    if (pce_init_rx.is_set || is_set(pce_init_rx.yfilter)) leaf_name_data.push_back(pce_init_rx.get_name_leafdata());
    if (pce_init_tx.is_set || is_set(pce_init_tx.yfilter)) leaf_name_data.push_back(pce_init_tx.get_name_leafdata());
    if (pce_keepalive_tx.is_set || is_set(pce_keepalive_tx.yfilter)) leaf_name_data.push_back(pce_keepalive_tx.get_name_leafdata());
    if (pce_keepalive_rx.is_set || is_set(pce_keepalive_rx.yfilter)) leaf_name_data.push_back(pce_keepalive_rx.get_name_leafdata());
    if (req_reply_min.is_set || is_set(req_reply_min.yfilter)) leaf_name_data.push_back(req_reply_min.get_name_leafdata());
    if (req_reply_max.is_set || is_set(req_reply_max.yfilter)) leaf_name_data.push_back(req_reply_max.get_name_leafdata());
    if (req_reply_avg.is_set || is_set(req_reply_avg.yfilter)) leaf_name_data.push_back(req_reply_avg.get_name_leafdata());
    if (request_timeouts.is_set || is_set(request_timeouts.yfilter)) leaf_name_data.push_back(request_timeouts.get_name_leafdata());
    if (local_sid.is_set || is_set(local_sid.yfilter)) leaf_name_data.push_back(local_sid.get_name_leafdata());
    if (remote_sid.is_set || is_set(remote_sid.yfilter)) leaf_name_data.push_back(remote_sid.get_name_leafdata());
    if (min_keepalive_interval.is_set || is_set(min_keepalive_interval.yfilter)) leaf_name_data.push_back(min_keepalive_interval.get_name_leafdata());
    if (max_dead_interval.is_set || is_set(max_dead_interval.yfilter)) leaf_name_data.push_back(max_dead_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-tx-pce-err")
    {
        if(last_tx_pce_err == nullptr)
        {
            last_tx_pce_err = std::make_shared<MplsPce::Peers::Peer::LastTxPceErr>();
        }
        return last_tx_pce_err;
    }

    if(child_yang_name == "last-rx-pce-err")
    {
        if(last_rx_pce_err == nullptr)
        {
            last_rx_pce_err = std::make_shared<MplsPce::Peers::Peer::LastRxPceErr>();
        }
        return last_rx_pce_err;
    }

    if(child_yang_name == "ig-ps")
    {
        auto c = std::make_shared<MplsPce::Peers::Peer::IgPs>();
        c->parent = this;
        ig_ps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_tx_pce_err != nullptr)
    {
        children["last-tx-pce-err"] = last_tx_pce_err;
    }

    if(last_rx_pce_err != nullptr)
    {
        children["last-rx-pce-err"] = last_rx_pce_err;
    }

    count = 0;
    for (auto const & c : ig_ps)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPce::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-state")
    {
        pce_state = value;
        pce_state.value_namespace = name_space;
        pce_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
        capability_update.value_namespace = name_space;
        capability_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
        capability_instantiate.value_namespace = name_space;
        capability_instantiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
        capability_segment_routing.value_namespace = name_space;
        capability_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-sync-capability")
    {
        triggered_sync_capability = value;
        triggered_sync_capability.value_namespace = name_space;
        triggered_sync_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
        capability_db_version.value_namespace = name_space;
        capability_db_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delta-sync-capability")
    {
        delta_sync_capability = value;
        delta_sync_capability.value_namespace = name_space;
        delta_sync_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time = value;
        pcep_up_time.value_namespace = name_space;
        pcep_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalives")
    {
        keepalives = value;
        keepalives.value_namespace = name_space;
        keepalives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate")
    {
        candidate = value;
        candidate.value_namespace = name_space;
        candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statically-configured")
    {
        statically_configured = value;
        statically_configured.value_namespace = name_space;
        statically_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled = value;
        md5_enabled.value_namespace = name_space;
        md5_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled = value;
        keychain_enabled.value_namespace = name_space;
        keychain_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-keepalive")
    {
        negotiated_keepalive = value;
        negotiated_keepalive.value_namespace = name_space;
        negotiated_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotated-dead-time")
    {
        negotated_dead_time = value;
        negotated_dead_time.value_namespace = name_space;
        negotated_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-rx")
    {
        pce_req_rx = value;
        pce_req_rx.value_namespace = name_space;
        pce_req_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-tx")
    {
        pce_req_tx = value;
        pce_req_tx.value_namespace = name_space;
        pce_req_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rep-rx")
    {
        pce_rep_rx = value;
        pce_rep_rx.value_namespace = name_space;
        pce_rep_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rep-tx")
    {
        pce_rep_tx = value;
        pce_rep_tx.value_namespace = name_space;
        pce_rep_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-rx")
    {
        pce_err_rx = value;
        pce_err_rx.value_namespace = name_space;
        pce_err_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-tx")
    {
        pce_err_tx = value;
        pce_err_tx.value_namespace = name_space;
        pce_err_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx = value;
        pce_open_tx.value_namespace = name_space;
        pce_open_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx = value;
        pce_open_rx.value_namespace = name_space;
        pce_open_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rpt-rx")
    {
        pce_rpt_rx = value;
        pce_rpt_rx.value_namespace = name_space;
        pce_rpt_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rpt-tx")
    {
        pce_rpt_tx = value;
        pce_rpt_tx.value_namespace = name_space;
        pce_rpt_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-upd-rx")
    {
        pce_upd_rx = value;
        pce_upd_rx.value_namespace = name_space;
        pce_upd_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-upd-tx")
    {
        pce_upd_tx = value;
        pce_upd_tx.value_namespace = name_space;
        pce_upd_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-init-rx")
    {
        pce_init_rx = value;
        pce_init_rx.value_namespace = name_space;
        pce_init_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-init-tx")
    {
        pce_init_tx = value;
        pce_init_tx.value_namespace = name_space;
        pce_init_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx = value;
        pce_keepalive_tx.value_namespace = name_space;
        pce_keepalive_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx = value;
        pce_keepalive_rx.value_namespace = name_space;
        pce_keepalive_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-min")
    {
        req_reply_min = value;
        req_reply_min.value_namespace = name_space;
        req_reply_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-max")
    {
        req_reply_max = value;
        req_reply_max.value_namespace = name_space;
        req_reply_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-avg")
    {
        req_reply_avg = value;
        req_reply_avg.value_namespace = name_space;
        req_reply_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-timeouts")
    {
        request_timeouts = value;
        request_timeouts.value_namespace = name_space;
        request_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-sid")
    {
        local_sid = value;
        local_sid.value_namespace = name_space;
        local_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-sid")
    {
        remote_sid = value;
        remote_sid.value_namespace = name_space;
        remote_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-keepalive-interval")
    {
        min_keepalive_interval = value;
        min_keepalive_interval.value_namespace = name_space;
        min_keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-dead-interval")
    {
        max_dead_interval = value;
        max_dead_interval.value_namespace = name_space;
        max_dead_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "pce-state")
    {
        pce_state.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "capability-update")
    {
        capability_update.yfilter = yfilter;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate.yfilter = yfilter;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing.yfilter = yfilter;
    }
    if(value_path == "triggered-sync-capability")
    {
        triggered_sync_capability.yfilter = yfilter;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version.yfilter = yfilter;
    }
    if(value_path == "delta-sync-capability")
    {
        delta_sync_capability.yfilter = yfilter;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time.yfilter = yfilter;
    }
    if(value_path == "keepalives")
    {
        keepalives.yfilter = yfilter;
    }
    if(value_path == "candidate")
    {
        candidate.yfilter = yfilter;
    }
    if(value_path == "statically-configured")
    {
        statically_configured.yfilter = yfilter;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled.yfilter = yfilter;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled.yfilter = yfilter;
    }
    if(value_path == "negotiated-keepalive")
    {
        negotiated_keepalive.yfilter = yfilter;
    }
    if(value_path == "negotated-dead-time")
    {
        negotated_dead_time.yfilter = yfilter;
    }
    if(value_path == "pce-req-rx")
    {
        pce_req_rx.yfilter = yfilter;
    }
    if(value_path == "pce-req-tx")
    {
        pce_req_tx.yfilter = yfilter;
    }
    if(value_path == "pce-rep-rx")
    {
        pce_rep_rx.yfilter = yfilter;
    }
    if(value_path == "pce-rep-tx")
    {
        pce_rep_tx.yfilter = yfilter;
    }
    if(value_path == "pce-err-rx")
    {
        pce_err_rx.yfilter = yfilter;
    }
    if(value_path == "pce-err-tx")
    {
        pce_err_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx.yfilter = yfilter;
    }
    if(value_path == "pce-rpt-rx")
    {
        pce_rpt_rx.yfilter = yfilter;
    }
    if(value_path == "pce-rpt-tx")
    {
        pce_rpt_tx.yfilter = yfilter;
    }
    if(value_path == "pce-upd-rx")
    {
        pce_upd_rx.yfilter = yfilter;
    }
    if(value_path == "pce-upd-tx")
    {
        pce_upd_tx.yfilter = yfilter;
    }
    if(value_path == "pce-init-rx")
    {
        pce_init_rx.yfilter = yfilter;
    }
    if(value_path == "pce-init-tx")
    {
        pce_init_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx.yfilter = yfilter;
    }
    if(value_path == "req-reply-min")
    {
        req_reply_min.yfilter = yfilter;
    }
    if(value_path == "req-reply-max")
    {
        req_reply_max.yfilter = yfilter;
    }
    if(value_path == "req-reply-avg")
    {
        req_reply_avg.yfilter = yfilter;
    }
    if(value_path == "request-timeouts")
    {
        request_timeouts.yfilter = yfilter;
    }
    if(value_path == "local-sid")
    {
        local_sid.yfilter = yfilter;
    }
    if(value_path == "remote-sid")
    {
        remote_sid.yfilter = yfilter;
    }
    if(value_path == "min-keepalive-interval")
    {
        min_keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "max-dead-interval")
    {
        max_dead_interval.yfilter = yfilter;
    }
}

bool MplsPce::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-tx-pce-err" || name == "last-rx-pce-err" || name == "ig-ps" || name == "peer-address" || name == "error" || name == "pce-state" || name == "precedence" || name == "stateful" || name == "capability-update" || name == "capability-instantiate" || name == "capability-segment-routing" || name == "triggered-sync-capability" || name == "capability-db-version" || name == "delta-sync-capability" || name == "pcep-up-time" || name == "keepalives" || name == "candidate" || name == "statically-configured" || name == "md5-enabled" || name == "keychain-enabled" || name == "negotiated-keepalive" || name == "negotated-dead-time" || name == "pce-req-rx" || name == "pce-req-tx" || name == "pce-rep-rx" || name == "pce-rep-tx" || name == "pce-err-rx" || name == "pce-err-tx" || name == "pce-open-tx" || name == "pce-open-rx" || name == "pce-rpt-rx" || name == "pce-rpt-tx" || name == "pce-upd-rx" || name == "pce-upd-tx" || name == "pce-init-rx" || name == "pce-init-tx" || name == "pce-keepalive-tx" || name == "pce-keepalive-rx" || name == "req-reply-min" || name == "req-reply-max" || name == "req-reply-avg" || name == "request-timeouts" || name == "local-sid" || name == "remote-sid" || name == "min-keepalive-interval" || name == "max-dead-interval")
        return true;
    return false;
}

MplsPce::Peers::Peer::LastTxPceErr::LastTxPceErr()
    :
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    has_open_object{YType::boolean, "has-open-object"},
    openversion{YType::uint32, "openversion"},
    open_keepalive{YType::uint32, "open-keepalive"},
    open_dead_time{YType::uint32, "open-dead-time"},
    has_rp_object{YType::boolean, "has-rp-object"},
    rp_request_id{YType::uint32, "rp-request-id"}
{

    yang_name = "last-tx-pce-err"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Peers::Peer::LastTxPceErr::~LastTxPceErr()
{
}

bool MplsPce::Peers::Peer::LastTxPceErr::has_data() const
{
    return pce_err_type.is_set
	|| pce_err_value.is_set
	|| has_open_object.is_set
	|| openversion.is_set
	|| open_keepalive.is_set
	|| open_dead_time.is_set
	|| has_rp_object.is_set
	|| rp_request_id.is_set;
}

bool MplsPce::Peers::Peer::LastTxPceErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_err_type.yfilter)
	|| ydk::is_set(pce_err_value.yfilter)
	|| ydk::is_set(has_open_object.yfilter)
	|| ydk::is_set(openversion.yfilter)
	|| ydk::is_set(open_keepalive.yfilter)
	|| ydk::is_set(open_dead_time.yfilter)
	|| ydk::is_set(has_rp_object.yfilter)
	|| ydk::is_set(rp_request_id.yfilter);
}

std::string MplsPce::Peers::Peer::LastTxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-tx-pce-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Peers::Peer::LastTxPceErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_err_type.is_set || is_set(pce_err_type.yfilter)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.yfilter)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (has_open_object.is_set || is_set(has_open_object.yfilter)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.yfilter)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.yfilter)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.yfilter)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.yfilter)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.yfilter)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Peers::Peer::LastTxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Peers::Peer::LastTxPceErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Peers::Peer::LastTxPceErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
        pce_err_type.value_namespace = name_space;
        pce_err_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
        pce_err_value.value_namespace = name_space;
        pce_err_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-open-object")
    {
        has_open_object = value;
        has_open_object.value_namespace = name_space;
        has_open_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openversion")
    {
        openversion = value;
        openversion.value_namespace = name_space;
        openversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
        open_keepalive.value_namespace = name_space;
        open_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
        open_dead_time.value_namespace = name_space;
        open_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
        has_rp_object.value_namespace = name_space;
        has_rp_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
        rp_request_id.value_namespace = name_space;
        rp_request_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Peers::Peer::LastTxPceErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-err-type")
    {
        pce_err_type.yfilter = yfilter;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value.yfilter = yfilter;
    }
    if(value_path == "has-open-object")
    {
        has_open_object.yfilter = yfilter;
    }
    if(value_path == "openversion")
    {
        openversion.yfilter = yfilter;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive.yfilter = yfilter;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time.yfilter = yfilter;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object.yfilter = yfilter;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id.yfilter = yfilter;
    }
}

bool MplsPce::Peers::Peer::LastTxPceErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-err-type" || name == "pce-err-value" || name == "has-open-object" || name == "openversion" || name == "open-keepalive" || name == "open-dead-time" || name == "has-rp-object" || name == "rp-request-id")
        return true;
    return false;
}

MplsPce::Peers::Peer::LastRxPceErr::LastRxPceErr()
    :
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    has_open_object{YType::boolean, "has-open-object"},
    openversion{YType::uint32, "openversion"},
    open_keepalive{YType::uint32, "open-keepalive"},
    open_dead_time{YType::uint32, "open-dead-time"},
    has_rp_object{YType::boolean, "has-rp-object"},
    rp_request_id{YType::uint32, "rp-request-id"}
{

    yang_name = "last-rx-pce-err"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Peers::Peer::LastRxPceErr::~LastRxPceErr()
{
}

bool MplsPce::Peers::Peer::LastRxPceErr::has_data() const
{
    return pce_err_type.is_set
	|| pce_err_value.is_set
	|| has_open_object.is_set
	|| openversion.is_set
	|| open_keepalive.is_set
	|| open_dead_time.is_set
	|| has_rp_object.is_set
	|| rp_request_id.is_set;
}

bool MplsPce::Peers::Peer::LastRxPceErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_err_type.yfilter)
	|| ydk::is_set(pce_err_value.yfilter)
	|| ydk::is_set(has_open_object.yfilter)
	|| ydk::is_set(openversion.yfilter)
	|| ydk::is_set(open_keepalive.yfilter)
	|| ydk::is_set(open_dead_time.yfilter)
	|| ydk::is_set(has_rp_object.yfilter)
	|| ydk::is_set(rp_request_id.yfilter);
}

std::string MplsPce::Peers::Peer::LastRxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rx-pce-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Peers::Peer::LastRxPceErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_err_type.is_set || is_set(pce_err_type.yfilter)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.yfilter)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (has_open_object.is_set || is_set(has_open_object.yfilter)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.yfilter)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.yfilter)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.yfilter)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.yfilter)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.yfilter)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Peers::Peer::LastRxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Peers::Peer::LastRxPceErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Peers::Peer::LastRxPceErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
        pce_err_type.value_namespace = name_space;
        pce_err_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
        pce_err_value.value_namespace = name_space;
        pce_err_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-open-object")
    {
        has_open_object = value;
        has_open_object.value_namespace = name_space;
        has_open_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openversion")
    {
        openversion = value;
        openversion.value_namespace = name_space;
        openversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
        open_keepalive.value_namespace = name_space;
        open_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
        open_dead_time.value_namespace = name_space;
        open_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
        has_rp_object.value_namespace = name_space;
        has_rp_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
        rp_request_id.value_namespace = name_space;
        rp_request_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Peers::Peer::LastRxPceErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-err-type")
    {
        pce_err_type.yfilter = yfilter;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value.yfilter = yfilter;
    }
    if(value_path == "has-open-object")
    {
        has_open_object.yfilter = yfilter;
    }
    if(value_path == "openversion")
    {
        openversion.yfilter = yfilter;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive.yfilter = yfilter;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time.yfilter = yfilter;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object.yfilter = yfilter;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id.yfilter = yfilter;
    }
}

bool MplsPce::Peers::Peer::LastRxPceErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-err-type" || name == "pce-err-value" || name == "has-open-object" || name == "openversion" || name == "open-keepalive" || name == "open-dead-time" || name == "has-rp-object" || name == "rp-request-id")
        return true;
    return false;
}

MplsPce::Peers::Peer::IgPs::IgPs()
    :
    igp_type{YType::enumeration, "igp-type"},
    igp_instance_id{YType::str, "igp-instance-id"}
{

    yang_name = "ig-ps"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPce::Peers::Peer::IgPs::~IgPs()
{
}

bool MplsPce::Peers::Peer::IgPs::has_data() const
{
    return igp_type.is_set
	|| igp_instance_id.is_set;
}

bool MplsPce::Peers::Peer::IgPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(igp_instance_id.yfilter);
}

std::string MplsPce::Peers::Peer::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Peers::Peer::IgPs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (igp_instance_id.is_set || is_set(igp_instance_id.yfilter)) leaf_name_data.push_back(igp_instance_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Peers::Peer::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Peers::Peer::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Peers::Peer::IgPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance-id")
    {
        igp_instance_id = value;
        igp_instance_id.value_namespace = name_space;
        igp_instance_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Peers::Peer::IgPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "igp-instance-id")
    {
        igp_instance_id.yfilter = yfilter;
    }
}

bool MplsPce::Peers::Peer::IgPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-type" || name == "igp-instance-id")
        return true;
    return false;
}

MplsPce::Topology::Topology()
    :
    global(std::make_shared<MplsPce::Topology::Global>())
{
    global->parent = this;

    yang_name = "topology"; yang_parent_name = "mpls-pce"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Topology::~Topology()
{
}

bool MplsPce::Topology::has_data() const
{
    return (global !=  nullptr && global->has_data());
}

bool MplsPce::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsPce::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsPce::Topology::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void MplsPce::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPce::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPce::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

MplsPce::Topology::Global::Global()
{

    yang_name = "global"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Topology::Global::~Global()
{
}

bool MplsPce::Topology::Global::has_data() const
{
    for (std::size_t index=0; index<nodes.size(); index++)
    {
        if(nodes[index]->has_data())
            return true;
    }
    return false;
}

bool MplsPce::Topology::Global::has_operation() const
{
    for (std::size_t index=0; index<nodes.size(); index++)
    {
        if(nodes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsPce::Topology::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Topology::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Topology::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Topology::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        auto c = std::make_shared<MplsPce::Topology::Global::Nodes>();
        c->parent = this;
        nodes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Topology::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nodes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPce::Topology::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPce::Topology::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPce::Topology::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

MplsPce::Topology::Global::Nodes::Nodes()
    :
    router_id{YType::str, "router-id"},
    igp_area_id{YType::uint32, "igp-area-id"},
    igp_area_format{YType::enumeration, "igp-area-format"},
    pce_cost{YType::uint32, "pce-cost"},
    node_id{YType::str, "node-id"},
    is_pce_border_node{YType::boolean, "is-pce-border-node"}
{

    yang_name = "nodes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Topology::Global::Nodes::~Nodes()
{
}

bool MplsPce::Topology::Global::Nodes::has_data() const
{
    return router_id.is_set
	|| igp_area_id.is_set
	|| igp_area_format.is_set
	|| pce_cost.is_set
	|| node_id.is_set
	|| is_pce_border_node.is_set;
}

bool MplsPce::Topology::Global::Nodes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(igp_area_id.yfilter)
	|| ydk::is_set(igp_area_format.yfilter)
	|| ydk::is_set(pce_cost.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(is_pce_border_node.yfilter);
}

std::string MplsPce::Topology::Global::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/topology/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Topology::Global::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Topology::Global::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.yfilter)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (pce_cost.is_set || is_set(pce_cost.yfilter)) leaf_name_data.push_back(pce_cost.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (is_pce_border_node.is_set || is_set(is_pce_border_node.yfilter)) leaf_name_data.push_back(is_pce_border_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Topology::Global::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Topology::Global::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Topology::Global::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
        igp_area_format.value_namespace = name_space;
        igp_area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-cost")
    {
        pce_cost = value;
        pce_cost.value_namespace = name_space;
        pce_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-border-node")
    {
        is_pce_border_node = value;
        is_pce_border_node.value_namespace = name_space;
        is_pce_border_node.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Topology::Global::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format.yfilter = yfilter;
    }
    if(value_path == "pce-cost")
    {
        pce_cost.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "is-pce-border-node")
    {
        is_pce_border_node.yfilter = yfilter;
    }
}

bool MplsPce::Topology::Global::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "igp-area-id" || name == "igp-area-format" || name == "pce-cost" || name == "node-id" || name == "is-pce-border-node")
        return true;
    return false;
}

MplsPce::Tunnels::Tunnels()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    configured_pce_address{YType::str, "configured-pce-address"},
    sender_pce_address{YType::str, "sender-pce-address"},
    path_state{YType::enumeration, "path-state"},
    tunnel_state{YType::enumeration, "tunnel-state"},
    admin_weight{YType::uint32, "admin-weight"},
    hop_count{YType::uint32, "hop-count"}
{

    yang_name = "tunnels"; yang_parent_name = "mpls-pce"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Tunnels::~Tunnels()
{
}

bool MplsPce::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return source_address.is_set
	|| destination_address.is_set
	|| is_curr_path_option_pce.is_set
	|| curr_path_option_index.is_set
	|| configured_pce_address.is_set
	|| sender_pce_address.is_set
	|| path_state.is_set
	|| tunnel_state.is_set
	|| admin_weight.is_set
	|| hop_count.is_set;
}

bool MplsPce::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(is_curr_path_option_pce.yfilter)
	|| ydk::is_set(curr_path_option_index.yfilter)
	|| ydk::is_set(configured_pce_address.yfilter)
	|| ydk::is_set(sender_pce_address.yfilter)
	|| ydk::is_set(path_state.yfilter)
	|| ydk::is_set(tunnel_state.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(hop_count.yfilter);
}

std::string MplsPce::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.yfilter)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.yfilter)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.yfilter)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.yfilter)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.yfilter)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<MplsPce::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPce::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
        is_curr_path_option_pce.value_namespace = name_space;
        is_curr_path_option_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
        curr_path_option_index.value_namespace = name_space;
        curr_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
        configured_pce_address.value_namespace = name_space;
        configured_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
        sender_pce_address.value_namespace = name_space;
        sender_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-state")
    {
        path_state = value;
        path_state.value_namespace = name_space;
        path_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce.yfilter = yfilter;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index.yfilter = yfilter;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address.yfilter = yfilter;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address.yfilter = yfilter;
    }
    if(value_path == "path-state")
    {
        path_state.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
}

bool MplsPce::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "source-address" || name == "destination-address" || name == "is-curr-path-option-pce" || name == "curr-path-option-index" || name == "configured-pce-address" || name == "sender-pce-address" || name == "path-state" || name == "tunnel-state" || name == "admin-weight" || name == "hop-count")
        return true;
    return false;
}

MplsPce::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    configured_pce_address{YType::str, "configured-pce-address"},
    sender_pce_address{YType::str, "sender-pce-address"},
    path_state{YType::enumeration, "path-state"},
    tunnel_state{YType::enumeration, "tunnel-state"},
    admin_weight{YType::uint32, "admin-weight"},
    hop_count{YType::uint32, "hop-count"}
{

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPce::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsPce::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| is_curr_path_option_pce.is_set
	|| curr_path_option_index.is_set
	|| configured_pce_address.is_set
	|| sender_pce_address.is_set
	|| path_state.is_set
	|| tunnel_state.is_set
	|| admin_weight.is_set
	|| hop_count.is_set;
}

bool MplsPce::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(is_curr_path_option_pce.yfilter)
	|| ydk::is_set(curr_path_option_index.yfilter)
	|| ydk::is_set(configured_pce_address.yfilter)
	|| ydk::is_set(sender_pce_address.yfilter)
	|| ydk::is_set(path_state.yfilter)
	|| ydk::is_set(tunnel_state.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(hop_count.yfilter);
}

std::string MplsPce::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPce::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPce::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.yfilter)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.yfilter)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.yfilter)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.yfilter)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.yfilter)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPce::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPce::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPce::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
        is_curr_path_option_pce.value_namespace = name_space;
        is_curr_path_option_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
        curr_path_option_index.value_namespace = name_space;
        curr_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
        configured_pce_address.value_namespace = name_space;
        configured_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
        sender_pce_address.value_namespace = name_space;
        sender_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-state")
    {
        path_state = value;
        path_state.value_namespace = name_space;
        path_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPce::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce.yfilter = yfilter;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index.yfilter = yfilter;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address.yfilter = yfilter;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address.yfilter = yfilter;
    }
    if(value_path == "path-state")
    {
        path_state.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
}

bool MplsPce::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name" || name == "source-address" || name == "destination-address" || name == "is-curr-path-option-pce" || name == "curr-path-option-index" || name == "configured-pce-address" || name == "sender-pce-address" || name == "path-state" || name == "tunnel-state" || name == "admin-weight" || name == "hop-count")
        return true;
    return false;
}

MplsPceStdby::MplsPceStdby()
    :
    lsps(std::make_shared<MplsPceStdby::Lsps>())
	,statistics(std::make_shared<MplsPceStdby::Statistics>())
	,peers(std::make_shared<MplsPceStdby::Peers>())
	,topology(std::make_shared<MplsPceStdby::Topology>())
	,tunnels(std::make_shared<MplsPceStdby::Tunnels>())
{
    lsps->parent = this;
    statistics->parent = this;
    peers->parent = this;
    topology->parent = this;
    tunnels->parent = this;

    yang_name = "mpls-pce-stdby"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsPceStdby::~MplsPceStdby()
{
}

bool MplsPceStdby::has_data() const
{
    return (lsps !=  nullptr && lsps->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool MplsPceStdby::has_operation() const
{
    return is_set(yfilter)
	|| (lsps !=  nullptr && lsps->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string MplsPceStdby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsps")
    {
        if(lsps == nullptr)
        {
            lsps = std::make_shared<MplsPceStdby::Lsps>();
        }
        return lsps;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsPceStdby::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<MplsPceStdby::Peers>();
        }
        return peers;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<MplsPceStdby::Topology>();
        }
        return topology;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<MplsPceStdby::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsps != nullptr)
    {
        children["lsps"] = lsps;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    return children;
}

void MplsPceStdby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPceStdby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsPceStdby::clone_ptr() const
{
    return std::make_shared<MplsPceStdby>();
}

std::string MplsPceStdby::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsPceStdby::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsPceStdby::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsPceStdby::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsPceStdby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsps" || name == "statistics" || name == "peers" || name == "topology" || name == "tunnels")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsps()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    symbolic_name_xr{YType::str, "symbolic-name-xr"},
    session_internal_lsp_id{YType::uint32, "session-internal-lsp-id"},
    stateful_request_parameter_id{YType::uint32, "stateful-request-parameter-id"},
    request_queue_size{YType::uint8, "request-queue-size"},
    delegatable{YType::boolean, "delegatable"},
    operational{YType::enumeration, "operational"},
    administrative{YType::boolean, "administrative"},
    cleanup_timer_exp{YType::int32, "cleanup-timer-exp"},
    delegation_timer_exp{YType::int32, "delegation-timer-exp"},
    create{YType::boolean, "create"},
    state_timer_exp{YType::int32, "state-timer-exp"},
    lspo_is_used{YType::boolean, "lspo-is-used"},
    forward_class_id{YType::uint32, "forward-class-id"},
    load_share{YType::uint32, "load-share"},
    path_setup_type{YType::uint8, "path-setup-type"},
    binding_sid{YType::uint32, "binding-sid"},
    backup_path{YType::str, "backup-path"}
    	,
    creator(std::make_shared<MplsPceStdby::Lsps::Creator>())
	,delegated(std::make_shared<MplsPceStdby::Lsps::Delegated>())
	,identifiers(std::make_shared<MplsPceStdby::Lsps::Identifiers>())
	,autoroute(std::make_shared<MplsPceStdby::Lsps::Autoroute>())
{
    creator->parent = this;
    delegated->parent = this;
    identifiers->parent = this;
    autoroute->parent = this;

    yang_name = "lsps"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::~Lsps()
{
}

bool MplsPceStdby::Lsps::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return source_address.is_set
	|| destination_address.is_set
	|| symbolic_name_xr.is_set
	|| session_internal_lsp_id.is_set
	|| stateful_request_parameter_id.is_set
	|| request_queue_size.is_set
	|| delegatable.is_set
	|| operational.is_set
	|| administrative.is_set
	|| cleanup_timer_exp.is_set
	|| delegation_timer_exp.is_set
	|| create.is_set
	|| state_timer_exp.is_set
	|| lspo_is_used.is_set
	|| forward_class_id.is_set
	|| load_share.is_set
	|| path_setup_type.is_set
	|| binding_sid.is_set
	|| (creator !=  nullptr && creator->has_data())
	|| (delegated !=  nullptr && delegated->has_data())
	|| (identifiers !=  nullptr && identifiers->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data());
}

bool MplsPceStdby::Lsps::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(symbolic_name_xr.yfilter)
	|| ydk::is_set(session_internal_lsp_id.yfilter)
	|| ydk::is_set(stateful_request_parameter_id.yfilter)
	|| ydk::is_set(request_queue_size.yfilter)
	|| ydk::is_set(delegatable.yfilter)
	|| ydk::is_set(operational.yfilter)
	|| ydk::is_set(administrative.yfilter)
	|| ydk::is_set(cleanup_timer_exp.yfilter)
	|| ydk::is_set(delegation_timer_exp.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(state_timer_exp.yfilter)
	|| ydk::is_set(lspo_is_used.yfilter)
	|| ydk::is_set(forward_class_id.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(path_setup_type.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| (creator !=  nullptr && creator->has_operation())
	|| (delegated !=  nullptr && delegated->has_operation())
	|| (identifiers !=  nullptr && identifiers->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation());
}

std::string MplsPceStdby::Lsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (symbolic_name_xr.is_set || is_set(symbolic_name_xr.yfilter)) leaf_name_data.push_back(symbolic_name_xr.get_name_leafdata());
    if (session_internal_lsp_id.is_set || is_set(session_internal_lsp_id.yfilter)) leaf_name_data.push_back(session_internal_lsp_id.get_name_leafdata());
    if (stateful_request_parameter_id.is_set || is_set(stateful_request_parameter_id.yfilter)) leaf_name_data.push_back(stateful_request_parameter_id.get_name_leafdata());
    if (request_queue_size.is_set || is_set(request_queue_size.yfilter)) leaf_name_data.push_back(request_queue_size.get_name_leafdata());
    if (delegatable.is_set || is_set(delegatable.yfilter)) leaf_name_data.push_back(delegatable.get_name_leafdata());
    if (operational.is_set || is_set(operational.yfilter)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (administrative.is_set || is_set(administrative.yfilter)) leaf_name_data.push_back(administrative.get_name_leafdata());
    if (cleanup_timer_exp.is_set || is_set(cleanup_timer_exp.yfilter)) leaf_name_data.push_back(cleanup_timer_exp.get_name_leafdata());
    if (delegation_timer_exp.is_set || is_set(delegation_timer_exp.yfilter)) leaf_name_data.push_back(delegation_timer_exp.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (state_timer_exp.is_set || is_set(state_timer_exp.yfilter)) leaf_name_data.push_back(state_timer_exp.get_name_leafdata());
    if (lspo_is_used.is_set || is_set(lspo_is_used.yfilter)) leaf_name_data.push_back(lspo_is_used.get_name_leafdata());
    if (forward_class_id.is_set || is_set(forward_class_id.yfilter)) leaf_name_data.push_back(forward_class_id.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (path_setup_type.is_set || is_set(path_setup_type.yfilter)) leaf_name_data.push_back(path_setup_type.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());

    auto backup_path_name_datas = backup_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_path_name_datas.begin(), backup_path_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp>();
        c->parent = this;
        lsp.push_back(c);
        return c;
    }

    if(child_yang_name == "creator")
    {
        if(creator == nullptr)
        {
            creator = std::make_shared<MplsPceStdby::Lsps::Creator>();
        }
        return creator;
    }

    if(child_yang_name == "delegated")
    {
        if(delegated == nullptr)
        {
            delegated = std::make_shared<MplsPceStdby::Lsps::Delegated>();
        }
        return delegated;
    }

    if(child_yang_name == "identifiers")
    {
        if(identifiers == nullptr)
        {
            identifiers = std::make_shared<MplsPceStdby::Lsps::Identifiers>();
        }
        return identifiers;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<MplsPceStdby::Lsps::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "paths")
    {
        auto c = std::make_shared<MplsPceStdby::Lsps::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::get_children() const
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

    if(creator != nullptr)
    {
        children["creator"] = creator;
    }

    if(delegated != nullptr)
    {
        children["delegated"] = delegated;
    }

    if(identifiers != nullptr)
    {
        children["identifiers"] = identifiers;
    }

    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    count = 0;
    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr = value;
        symbolic_name_xr.value_namespace = name_space;
        symbolic_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id = value;
        session_internal_lsp_id.value_namespace = name_space;
        session_internal_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id = value;
        stateful_request_parameter_id.value_namespace = name_space;
        stateful_request_parameter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size = value;
        request_queue_size.value_namespace = name_space;
        request_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegatable")
    {
        delegatable = value;
        delegatable.value_namespace = name_space;
        delegatable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational")
    {
        operational = value;
        operational.value_namespace = name_space;
        operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative")
    {
        administrative = value;
        administrative.value_namespace = name_space;
        administrative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp = value;
        cleanup_timer_exp.value_namespace = name_space;
        cleanup_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp = value;
        delegation_timer_exp.value_namespace = name_space;
        delegation_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp = value;
        state_timer_exp.value_namespace = name_space;
        state_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used = value;
        lspo_is_used.value_namespace = name_space;
        lspo_is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id = value;
        forward_class_id.value_namespace = name_space;
        forward_class_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type = value;
        path_setup_type.value_namespace = name_space;
        path_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path.append(value);
    }
}

void MplsPceStdby::Lsps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr.yfilter = yfilter;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id.yfilter = yfilter;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id.yfilter = yfilter;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size.yfilter = yfilter;
    }
    if(value_path == "delegatable")
    {
        delegatable.yfilter = yfilter;
    }
    if(value_path == "operational")
    {
        operational.yfilter = yfilter;
    }
    if(value_path == "administrative")
    {
        administrative.yfilter = yfilter;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp.yfilter = yfilter;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp.yfilter = yfilter;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used.yfilter = yfilter;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp" || name == "creator" || name == "delegated" || name == "identifiers" || name == "autoroute" || name == "paths" || name == "source-address" || name == "destination-address" || name == "symbolic-name-xr" || name == "session-internal-lsp-id" || name == "stateful-request-parameter-id" || name == "request-queue-size" || name == "delegatable" || name == "operational" || name == "administrative" || name == "cleanup-timer-exp" || name == "delegation-timer-exp" || name == "create" || name == "state-timer-exp" || name == "lspo-is-used" || name == "forward-class-id" || name == "load-share" || name == "path-setup-type" || name == "binding-sid" || name == "backup-path")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Lsp()
    :
    symbolic_name{YType::str, "symbolic-name"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    symbolic_name_xr{YType::str, "symbolic-name-xr"},
    session_internal_lsp_id{YType::uint32, "session-internal-lsp-id"},
    stateful_request_parameter_id{YType::uint32, "stateful-request-parameter-id"},
    request_queue_size{YType::uint8, "request-queue-size"},
    delegatable{YType::boolean, "delegatable"},
    operational{YType::enumeration, "operational"},
    administrative{YType::boolean, "administrative"},
    cleanup_timer_exp{YType::int32, "cleanup-timer-exp"},
    delegation_timer_exp{YType::int32, "delegation-timer-exp"},
    create{YType::boolean, "create"},
    state_timer_exp{YType::int32, "state-timer-exp"},
    lspo_is_used{YType::boolean, "lspo-is-used"},
    forward_class_id{YType::uint32, "forward-class-id"},
    load_share{YType::uint32, "load-share"},
    path_setup_type{YType::uint8, "path-setup-type"},
    binding_sid{YType::uint32, "binding-sid"},
    backup_path{YType::str, "backup-path"}
    	,
    creator(std::make_shared<MplsPceStdby::Lsps::Lsp::Creator>())
	,delegated(std::make_shared<MplsPceStdby::Lsps::Lsp::Delegated>())
	,identifiers(std::make_shared<MplsPceStdby::Lsps::Lsp::Identifiers>())
	,autoroute(std::make_shared<MplsPceStdby::Lsps::Lsp::Autoroute>())
{
    creator->parent = this;
    delegated->parent = this;
    identifiers->parent = this;
    autoroute->parent = this;

    yang_name = "lsp"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Lsp::~Lsp()
{
}

bool MplsPceStdby::Lsps::Lsp::has_data() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return symbolic_name.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| symbolic_name_xr.is_set
	|| session_internal_lsp_id.is_set
	|| stateful_request_parameter_id.is_set
	|| request_queue_size.is_set
	|| delegatable.is_set
	|| operational.is_set
	|| administrative.is_set
	|| cleanup_timer_exp.is_set
	|| delegation_timer_exp.is_set
	|| create.is_set
	|| state_timer_exp.is_set
	|| lspo_is_used.is_set
	|| forward_class_id.is_set
	|| load_share.is_set
	|| path_setup_type.is_set
	|| binding_sid.is_set
	|| (creator !=  nullptr && creator->has_data())
	|| (delegated !=  nullptr && delegated->has_data())
	|| (identifiers !=  nullptr && identifiers->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data());
}

bool MplsPceStdby::Lsps::Lsp::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    for (auto const & leaf : backup_path.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(symbolic_name.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(symbolic_name_xr.yfilter)
	|| ydk::is_set(session_internal_lsp_id.yfilter)
	|| ydk::is_set(stateful_request_parameter_id.yfilter)
	|| ydk::is_set(request_queue_size.yfilter)
	|| ydk::is_set(delegatable.yfilter)
	|| ydk::is_set(operational.yfilter)
	|| ydk::is_set(administrative.yfilter)
	|| ydk::is_set(cleanup_timer_exp.yfilter)
	|| ydk::is_set(delegation_timer_exp.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(state_timer_exp.yfilter)
	|| ydk::is_set(lspo_is_used.yfilter)
	|| ydk::is_set(forward_class_id.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(path_setup_type.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| (creator !=  nullptr && creator->has_operation())
	|| (delegated !=  nullptr && delegated->has_operation())
	|| (identifiers !=  nullptr && identifiers->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation());
}

std::string MplsPceStdby::Lsps::Lsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp" <<"[symbolic-name='" <<symbolic_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (symbolic_name.is_set || is_set(symbolic_name.yfilter)) leaf_name_data.push_back(symbolic_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (symbolic_name_xr.is_set || is_set(symbolic_name_xr.yfilter)) leaf_name_data.push_back(symbolic_name_xr.get_name_leafdata());
    if (session_internal_lsp_id.is_set || is_set(session_internal_lsp_id.yfilter)) leaf_name_data.push_back(session_internal_lsp_id.get_name_leafdata());
    if (stateful_request_parameter_id.is_set || is_set(stateful_request_parameter_id.yfilter)) leaf_name_data.push_back(stateful_request_parameter_id.get_name_leafdata());
    if (request_queue_size.is_set || is_set(request_queue_size.yfilter)) leaf_name_data.push_back(request_queue_size.get_name_leafdata());
    if (delegatable.is_set || is_set(delegatable.yfilter)) leaf_name_data.push_back(delegatable.get_name_leafdata());
    if (operational.is_set || is_set(operational.yfilter)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (administrative.is_set || is_set(administrative.yfilter)) leaf_name_data.push_back(administrative.get_name_leafdata());
    if (cleanup_timer_exp.is_set || is_set(cleanup_timer_exp.yfilter)) leaf_name_data.push_back(cleanup_timer_exp.get_name_leafdata());
    if (delegation_timer_exp.is_set || is_set(delegation_timer_exp.yfilter)) leaf_name_data.push_back(delegation_timer_exp.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (state_timer_exp.is_set || is_set(state_timer_exp.yfilter)) leaf_name_data.push_back(state_timer_exp.get_name_leafdata());
    if (lspo_is_used.is_set || is_set(lspo_is_used.yfilter)) leaf_name_data.push_back(lspo_is_used.get_name_leafdata());
    if (forward_class_id.is_set || is_set(forward_class_id.yfilter)) leaf_name_data.push_back(forward_class_id.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (path_setup_type.is_set || is_set(path_setup_type.yfilter)) leaf_name_data.push_back(path_setup_type.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());

    auto backup_path_name_datas = backup_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_path_name_datas.begin(), backup_path_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "creator")
    {
        if(creator == nullptr)
        {
            creator = std::make_shared<MplsPceStdby::Lsps::Lsp::Creator>();
        }
        return creator;
    }

    if(child_yang_name == "delegated")
    {
        if(delegated == nullptr)
        {
            delegated = std::make_shared<MplsPceStdby::Lsps::Lsp::Delegated>();
        }
        return delegated;
    }

    if(child_yang_name == "identifiers")
    {
        if(identifiers == nullptr)
        {
            identifiers = std::make_shared<MplsPceStdby::Lsps::Lsp::Identifiers>();
        }
        return identifiers;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<MplsPceStdby::Lsps::Lsp::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "paths")
    {
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(creator != nullptr)
    {
        children["creator"] = creator;
    }

    if(delegated != nullptr)
    {
        children["delegated"] = delegated;
    }

    if(identifiers != nullptr)
    {
        children["identifiers"] = identifiers;
    }

    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    count = 0;
    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "symbolic-name")
    {
        symbolic_name = value;
        symbolic_name.value_namespace = name_space;
        symbolic_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr = value;
        symbolic_name_xr.value_namespace = name_space;
        symbolic_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id = value;
        session_internal_lsp_id.value_namespace = name_space;
        session_internal_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id = value;
        stateful_request_parameter_id.value_namespace = name_space;
        stateful_request_parameter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size = value;
        request_queue_size.value_namespace = name_space;
        request_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegatable")
    {
        delegatable = value;
        delegatable.value_namespace = name_space;
        delegatable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational")
    {
        operational = value;
        operational.value_namespace = name_space;
        operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative")
    {
        administrative = value;
        administrative.value_namespace = name_space;
        administrative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp = value;
        cleanup_timer_exp.value_namespace = name_space;
        cleanup_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp = value;
        delegation_timer_exp.value_namespace = name_space;
        delegation_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp = value;
        state_timer_exp.value_namespace = name_space;
        state_timer_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used = value;
        lspo_is_used.value_namespace = name_space;
        lspo_is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id = value;
        forward_class_id.value_namespace = name_space;
        forward_class_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type = value;
        path_setup_type.value_namespace = name_space;
        path_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path.append(value);
    }
}

void MplsPceStdby::Lsps::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "symbolic-name")
    {
        symbolic_name.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr.yfilter = yfilter;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id.yfilter = yfilter;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id.yfilter = yfilter;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size.yfilter = yfilter;
    }
    if(value_path == "delegatable")
    {
        delegatable.yfilter = yfilter;
    }
    if(value_path == "operational")
    {
        operational.yfilter = yfilter;
    }
    if(value_path == "administrative")
    {
        administrative.yfilter = yfilter;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp.yfilter = yfilter;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp.yfilter = yfilter;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used.yfilter = yfilter;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creator" || name == "delegated" || name == "identifiers" || name == "autoroute" || name == "paths" || name == "symbolic-name" || name == "source-address" || name == "destination-address" || name == "symbolic-name-xr" || name == "session-internal-lsp-id" || name == "stateful-request-parameter-id" || name == "request-queue-size" || name == "delegatable" || name == "operational" || name == "administrative" || name == "cleanup-timer-exp" || name == "delegation-timer-exp" || name == "create" || name == "state-timer-exp" || name == "lspo-is-used" || name == "forward-class-id" || name == "load-share" || name == "path-setup-type" || name == "binding-sid" || name == "backup-path")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Creator::Creator()
    :
    node_identifier{YType::str, "node-identifier"},
    address{YType::str, "address"}
{

    yang_name = "creator"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Creator::~Creator()
{
}

bool MplsPceStdby::Lsps::Lsp::Creator::has_data() const
{
    return node_identifier.is_set
	|| address.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Creator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Creator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Creator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Creator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Creator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Lsp::Creator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Creator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Creator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-identifier" || name == "address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Delegated::Delegated()
    :
    node_identifier{YType::str, "node-identifier"},
    address{YType::str, "address"}
{

    yang_name = "delegated"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Delegated::~Delegated()
{
}

bool MplsPceStdby::Lsps::Lsp::Delegated::has_data() const
{
    return node_identifier.is_set
	|| address.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Delegated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Delegated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Delegated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Delegated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Delegated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Lsp::Delegated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Delegated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Delegated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-identifier" || name == "address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Identifiers::Identifiers()
    :
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"}
{

    yang_name = "identifiers"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Identifiers::~Identifiers()
{
}

bool MplsPceStdby::Lsps::Lsp::Identifiers::has_data() const
{
    return is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set
	|| ext_tunnel_id.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Identifiers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(te_lsp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(ext_tunnel_id.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Identifiers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.yfilter)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.yfilter)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Identifiers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Lsp::Identifiers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
        te_lsp_id.value_namespace = name_space;
        te_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
        ext_tunnel_id.value_namespace = name_space;
        ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Identifiers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Identifiers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "sender" || name == "te-lsp-id" || name == "tunnel-id" || name == "ext-tunnel-id")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Autoroute::Autoroute()
    :
    is_used{YType::boolean, "is-used"},
    announced{YType::boolean, "announced"},
    metric_type{YType::enumeration, "metric-type"},
    metric{YType::uint32, "metric"},
    destination{YType::str, "destination"}
{

    yang_name = "autoroute"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Autoroute::~Autoroute()
{
}

bool MplsPceStdby::Lsps::Lsp::Autoroute::has_data() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_used.is_set
	|| announced.is_set
	|| metric_type.is_set
	|| metric.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Autoroute::has_operation() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(announced.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (announced.is_set || is_set(announced.yfilter)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Lsp::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announced")
    {
        announced = value;
        announced.value_namespace = name_space;
        announced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
}

void MplsPceStdby::Lsps::Lsp::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "announced")
    {
        announced.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "announced" || name == "metric-type" || name == "metric" || name == "destination")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Paths()
    :
    bw{YType::uint32, "bw"},
    is_bw_used{YType::boolean, "is-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    applied_bw{YType::uint32, "applied-bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"}
    	,
    ero(std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Ero>())
	,lspa(std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Lspa>())
	,rro(std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Rro>())
{
    ero->parent = this;
    lspa->parent = this;
    rro->parent = this;

    yang_name = "paths"; yang_parent_name = "lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::~Paths()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return bw.is_set
	|| is_bw_used.is_set
	|| reopt_bw.is_set
	|| is_reopt_bw_used.is_set
	|| applied_bw.is_set
	|| is_applied_bw_used.is_set
	|| (ero !=  nullptr && ero->has_data())
	|| (lspa !=  nullptr && lspa->has_data())
	|| (rro !=  nullptr && rro->has_data());
}

bool MplsPceStdby::Lsps::Lsp::Paths::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(is_bw_used.yfilter)
	|| ydk::is_set(reopt_bw.yfilter)
	|| ydk::is_set(is_reopt_bw_used.yfilter)
	|| ydk::is_set(applied_bw.yfilter)
	|| ydk::is_set(is_applied_bw_used.yfilter)
	|| (ero !=  nullptr && ero->has_operation())
	|| (lspa !=  nullptr && lspa->has_operation())
	|| (rro !=  nullptr && rro->has_operation());
}

std::string MplsPceStdby::Lsps::Lsp::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.yfilter)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.yfilter)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.yfilter)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (applied_bw.is_set || is_set(applied_bw.yfilter)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.yfilter)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ero")
    {
        if(ero == nullptr)
        {
            ero = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Ero>();
        }
        return ero;
    }

    if(child_yang_name == "lspa")
    {
        if(lspa == nullptr)
        {
            lspa = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Lspa>();
        }
        return lspa;
    }

    if(child_yang_name == "rro")
    {
        if(rro == nullptr)
        {
            rro = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Rro>();
        }
        return rro;
    }

    if(child_yang_name == "metric")
    {
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Metric>();
        c->parent = this;
        metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ero != nullptr)
    {
        children["ero"] = ero;
    }

    if(lspa != nullptr)
    {
        children["lspa"] = lspa;
    }

    if(rro != nullptr)
    {
        children["rro"] = rro;
    }

    count = 0;
    for (auto const & c : metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
        is_bw_used.value_namespace = name_space;
        is_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
        reopt_bw.value_namespace = name_space;
        reopt_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
        is_reopt_bw_used.value_namespace = name_space;
        is_reopt_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applied-bw")
    {
        applied_bw = value;
        applied_bw.value_namespace = name_space;
        applied_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
        is_applied_bw_used.value_namespace = name_space;
        is_applied_bw_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used.yfilter = yfilter;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw.yfilter = yfilter;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used.yfilter = yfilter;
    }
    if(value_path == "applied-bw")
    {
        applied_bw.yfilter = yfilter;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero" || name == "lspa" || name == "rro" || name == "metric" || name == "bw" || name == "is-bw-used" || name == "reopt-bw" || name == "is-reopt-bw-used" || name == "applied-bw" || name == "is-applied-bw-used")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Ero()
    :
    is_used{YType::boolean, "is-used"},
    cost{YType::uint32, "cost"},
    address{YType::str, "address"}
{

    yang_name = "ero"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::~Ero()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_used.is_set
	|| cost.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "is-used" || name == "cost" || name == "address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::Subobject()
    :
    subobj_type{YType::uint8, "subobj-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    strict{YType::boolean, "strict"},
    global{YType::boolean, "global"},
    mpls_label{YType::uint32, "mpls-label"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_value{YType::uint32, "segment-id-value"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "subobject"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::has_data() const
{
    return subobj_type.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| strict.is_set
	|| global.is_set
	|| mpls_label.is_set
	|| segment_id_type.is_set
	|| only_valid_mpls_label.is_set
	|| complete_mpls_label_entry.is_set
	|| missing_segment_id.is_set
	|| missing_node_adjcency_id.is_set
	|| segment_id_exists.is_set
	|| segment_id_value.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subobj_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobj-type" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "strict" || name == "global" || name == "mpls-label" || name == "segment-id-type" || name == "only-valid-mpls-label" || name == "complete-mpls-label-entry" || name == "missing-segment-id" || name == "missing-node-adjcency-id" || name == "segment-id-exists" || name == "segment-id-value" || name == "node-adjacency-id-exists" || name == "node-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Lspa::Lspa()
    :
    is_used{YType::boolean, "is-used"},
    exlude_any{YType::uint32, "exlude-any"},
    include_any{YType::uint32, "include-any"},
    include_all{YType::uint32, "include-all"},
    setup{YType::uint8, "setup"},
    hold{YType::uint8, "hold"},
    lbit{YType::boolean, "lbit"}
{

    yang_name = "lspa"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::Lspa::~Lspa()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Lspa::has_data() const
{
    return is_used.is_set
	|| exlude_any.is_set
	|| include_any.is_set
	|| include_all.is_set
	|| setup.is_set
	|| hold.is_set
	|| lbit.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Lspa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(exlude_any.yfilter)
	|| ydk::is_set(include_any.yfilter)
	|| ydk::is_set(include_all.yfilter)
	|| ydk::is_set(setup.yfilter)
	|| ydk::is_set(hold.yfilter)
	|| ydk::is_set(lbit.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (exlude_any.is_set || is_set(exlude_any.yfilter)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.yfilter)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.yfilter)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (setup.is_set || is_set(setup.yfilter)) leaf_name_data.push_back(setup.get_name_leafdata());
    if (hold.is_set || is_set(hold.yfilter)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Lspa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exlude-any")
    {
        exlude_any = value;
        exlude_any.value_namespace = name_space;
        exlude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-any")
    {
        include_any = value;
        include_any.value_namespace = name_space;
        include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-all")
    {
        include_all = value;
        include_all.value_namespace = name_space;
        include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup")
    {
        setup = value;
        setup.value_namespace = name_space;
        setup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold")
    {
        hold = value;
        hold.value_namespace = name_space;
        hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Lspa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "exlude-any")
    {
        exlude_any.yfilter = yfilter;
    }
    if(value_path == "include-any")
    {
        include_any.yfilter = yfilter;
    }
    if(value_path == "include-all")
    {
        include_all.yfilter = yfilter;
    }
    if(value_path == "setup")
    {
        setup.yfilter = yfilter;
    }
    if(value_path == "hold")
    {
        hold.yfilter = yfilter;
    }
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Lspa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "exlude-any" || name == "include-any" || name == "include-all" || name == "setup" || name == "hold" || name == "lbit")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Rro()
    :
    is_used{YType::boolean, "is-used"},
    cost{YType::uint32, "cost"},
    address{YType::str, "address"}
{

    yang_name = "rro"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::~Rro()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_used.is_set
	|| cost.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "is-used" || name == "cost" || name == "address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::Subobject()
    :
    subobj_type{YType::uint8, "subobj-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    strict{YType::boolean, "strict"},
    global{YType::boolean, "global"},
    mpls_label{YType::uint32, "mpls-label"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_value{YType::uint32, "segment-id-value"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "subobject"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::has_data() const
{
    return subobj_type.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| strict.is_set
	|| global.is_set
	|| mpls_label.is_set
	|| segment_id_type.is_set
	|| only_valid_mpls_label.is_set
	|| complete_mpls_label_entry.is_set
	|| missing_segment_id.is_set
	|| missing_node_adjcency_id.is_set
	|| segment_id_exists.is_set
	|| segment_id_value.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subobj_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobj-type" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "strict" || name == "global" || name == "mpls-label" || name == "segment-id-type" || name == "only-valid-mpls-label" || name == "complete-mpls-label-entry" || name == "missing-segment-id" || name == "missing-node-adjcency-id" || name == "segment-id-exists" || name == "segment-id-value" || name == "node-adjacency-id-exists" || name == "node-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Lsp::Paths::Metric::Metric()
    :
    type{YType::uint8, "type"},
    cost{YType::uint32, "cost"}
{

    yang_name = "metric"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Lsps::Lsp::Paths::Metric::~Metric()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Metric::has_data() const
{
    return type.is_set
	|| cost.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Lsp::Paths::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Lsp::Paths::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Lsp::Paths::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Lsp::Paths::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "cost")
        return true;
    return false;
}

MplsPceStdby::Lsps::Creator::Creator()
    :
    node_identifier{YType::str, "node-identifier"},
    address{YType::str, "address"}
{

    yang_name = "creator"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Creator::~Creator()
{
}

bool MplsPceStdby::Lsps::Creator::has_data() const
{
    return node_identifier.is_set
	|| address.is_set;
}

bool MplsPceStdby::Lsps::Creator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPceStdby::Lsps::Creator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Creator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Creator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Creator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Creator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Creator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Creator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Creator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-identifier" || name == "address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Delegated::Delegated()
    :
    node_identifier{YType::str, "node-identifier"},
    address{YType::str, "address"}
{

    yang_name = "delegated"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Delegated::~Delegated()
{
}

bool MplsPceStdby::Lsps::Delegated::has_data() const
{
    return node_identifier.is_set
	|| address.is_set;
}

bool MplsPceStdby::Lsps::Delegated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPceStdby::Lsps::Delegated::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Delegated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Delegated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Delegated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Delegated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Delegated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Delegated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Delegated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-identifier" || name == "address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Identifiers::Identifiers()
    :
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"}
{

    yang_name = "identifiers"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Identifiers::~Identifiers()
{
}

bool MplsPceStdby::Lsps::Identifiers::has_data() const
{
    return is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set
	|| ext_tunnel_id.is_set;
}

bool MplsPceStdby::Lsps::Identifiers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(te_lsp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(ext_tunnel_id.yfilter);
}

std::string MplsPceStdby::Lsps::Identifiers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Identifiers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.yfilter)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.yfilter)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Identifiers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Identifiers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
        te_lsp_id.value_namespace = name_space;
        te_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
        ext_tunnel_id.value_namespace = name_space;
        ext_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Identifiers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Identifiers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "sender" || name == "te-lsp-id" || name == "tunnel-id" || name == "ext-tunnel-id")
        return true;
    return false;
}

MplsPceStdby::Lsps::Autoroute::Autoroute()
    :
    is_used{YType::boolean, "is-used"},
    announced{YType::boolean, "announced"},
    metric_type{YType::enumeration, "metric-type"},
    metric{YType::uint32, "metric"},
    destination{YType::str, "destination"}
{

    yang_name = "autoroute"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Autoroute::~Autoroute()
{
}

bool MplsPceStdby::Lsps::Autoroute::has_data() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_used.is_set
	|| announced.is_set
	|| metric_type.is_set
	|| metric.is_set;
}

bool MplsPceStdby::Lsps::Autoroute::has_operation() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(announced.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string MplsPceStdby::Lsps::Autoroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (announced.is_set || is_set(announced.yfilter)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announced")
    {
        announced = value;
        announced.value_namespace = name_space;
        announced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
}

void MplsPceStdby::Lsps::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "announced")
    {
        announced.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "announced" || name == "metric-type" || name == "metric" || name == "destination")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Paths()
    :
    bw{YType::uint32, "bw"},
    is_bw_used{YType::boolean, "is-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    applied_bw{YType::uint32, "applied-bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"}
    	,
    ero(std::make_shared<MplsPceStdby::Lsps::Paths::Ero>())
	,lspa(std::make_shared<MplsPceStdby::Lsps::Paths::Lspa>())
	,rro(std::make_shared<MplsPceStdby::Lsps::Paths::Rro>())
{
    ero->parent = this;
    lspa->parent = this;
    rro->parent = this;

    yang_name = "paths"; yang_parent_name = "lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::~Paths()
{
}

bool MplsPceStdby::Lsps::Paths::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return bw.is_set
	|| is_bw_used.is_set
	|| reopt_bw.is_set
	|| is_reopt_bw_used.is_set
	|| applied_bw.is_set
	|| is_applied_bw_used.is_set
	|| (ero !=  nullptr && ero->has_data())
	|| (lspa !=  nullptr && lspa->has_data())
	|| (rro !=  nullptr && rro->has_data());
}

bool MplsPceStdby::Lsps::Paths::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(is_bw_used.yfilter)
	|| ydk::is_set(reopt_bw.yfilter)
	|| ydk::is_set(is_reopt_bw_used.yfilter)
	|| ydk::is_set(applied_bw.yfilter)
	|| ydk::is_set(is_applied_bw_used.yfilter)
	|| (ero !=  nullptr && ero->has_operation())
	|| (lspa !=  nullptr && lspa->has_operation())
	|| (rro !=  nullptr && rro->has_operation());
}

std::string MplsPceStdby::Lsps::Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.yfilter)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.yfilter)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.yfilter)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (applied_bw.is_set || is_set(applied_bw.yfilter)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.yfilter)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ero")
    {
        if(ero == nullptr)
        {
            ero = std::make_shared<MplsPceStdby::Lsps::Paths::Ero>();
        }
        return ero;
    }

    if(child_yang_name == "lspa")
    {
        if(lspa == nullptr)
        {
            lspa = std::make_shared<MplsPceStdby::Lsps::Paths::Lspa>();
        }
        return lspa;
    }

    if(child_yang_name == "rro")
    {
        if(rro == nullptr)
        {
            rro = std::make_shared<MplsPceStdby::Lsps::Paths::Rro>();
        }
        return rro;
    }

    if(child_yang_name == "metric")
    {
        auto c = std::make_shared<MplsPceStdby::Lsps::Paths::Metric>();
        c->parent = this;
        metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ero != nullptr)
    {
        children["ero"] = ero;
    }

    if(lspa != nullptr)
    {
        children["lspa"] = lspa;
    }

    if(rro != nullptr)
    {
        children["rro"] = rro;
    }

    count = 0;
    for (auto const & c : metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
        is_bw_used.value_namespace = name_space;
        is_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
        reopt_bw.value_namespace = name_space;
        reopt_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
        is_reopt_bw_used.value_namespace = name_space;
        is_reopt_bw_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applied-bw")
    {
        applied_bw = value;
        applied_bw.value_namespace = name_space;
        applied_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
        is_applied_bw_used.value_namespace = name_space;
        is_applied_bw_used.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used.yfilter = yfilter;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw.yfilter = yfilter;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used.yfilter = yfilter;
    }
    if(value_path == "applied-bw")
    {
        applied_bw.yfilter = yfilter;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ero" || name == "lspa" || name == "rro" || name == "metric" || name == "bw" || name == "is-bw-used" || name == "reopt-bw" || name == "is-reopt-bw-used" || name == "applied-bw" || name == "is-applied-bw-used")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Ero::Ero()
    :
    is_used{YType::boolean, "is-used"},
    cost{YType::uint32, "cost"},
    address{YType::str, "address"}
{

    yang_name = "ero"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::Ero::~Ero()
{
}

bool MplsPceStdby::Lsps::Paths::Ero::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_used.is_set
	|| cost.is_set;
}

bool MplsPceStdby::Lsps::Paths::Ero::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Ero::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Ero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        auto c = std::make_shared<MplsPceStdby::Lsps::Paths::Ero::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::Ero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::Paths::Ero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

void MplsPceStdby::Lsps::Paths::Ero::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Ero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "is-used" || name == "cost" || name == "address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Ero::Subobject::Subobject()
    :
    subobj_type{YType::uint8, "subobj-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    strict{YType::boolean, "strict"},
    global{YType::boolean, "global"},
    mpls_label{YType::uint32, "mpls-label"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_value{YType::uint32, "segment-id-value"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "subobject"; yang_parent_name = "ero"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Paths::Ero::Subobject::has_data() const
{
    return subobj_type.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| strict.is_set
	|| global.is_set
	|| mpls_label.is_set
	|| segment_id_type.is_set
	|| only_valid_mpls_label.is_set
	|| complete_mpls_label_entry.is_set
	|| missing_segment_id.is_set
	|| missing_node_adjcency_id.is_set
	|| segment_id_exists.is_set
	|| segment_id_value.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool MplsPceStdby::Lsps::Paths::Ero::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subobj_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Ero::Subobject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/ero/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Ero::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::Ero::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Paths::Ero::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Ero::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Ero::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobj-type" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "strict" || name == "global" || name == "mpls-label" || name == "segment-id-type" || name == "only-valid-mpls-label" || name == "complete-mpls-label-entry" || name == "missing-segment-id" || name == "missing-node-adjcency-id" || name == "segment-id-exists" || name == "segment-id-value" || name == "node-adjacency-id-exists" || name == "node-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Lspa::Lspa()
    :
    is_used{YType::boolean, "is-used"},
    exlude_any{YType::uint32, "exlude-any"},
    include_any{YType::uint32, "include-any"},
    include_all{YType::uint32, "include-all"},
    setup{YType::uint8, "setup"},
    hold{YType::uint8, "hold"},
    lbit{YType::boolean, "lbit"}
{

    yang_name = "lspa"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::Lspa::~Lspa()
{
}

bool MplsPceStdby::Lsps::Paths::Lspa::has_data() const
{
    return is_used.is_set
	|| exlude_any.is_set
	|| include_any.is_set
	|| include_all.is_set
	|| setup.is_set
	|| hold.is_set
	|| lbit.is_set;
}

bool MplsPceStdby::Lsps::Paths::Lspa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(exlude_any.yfilter)
	|| ydk::is_set(include_any.yfilter)
	|| ydk::is_set(include_all.yfilter)
	|| ydk::is_set(setup.yfilter)
	|| ydk::is_set(hold.yfilter)
	|| ydk::is_set(lbit.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Lspa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Lspa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (exlude_any.is_set || is_set(exlude_any.yfilter)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.yfilter)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.yfilter)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (setup.is_set || is_set(setup.yfilter)) leaf_name_data.push_back(setup.get_name_leafdata());
    if (hold.is_set || is_set(hold.yfilter)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::Lspa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Paths::Lspa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exlude-any")
    {
        exlude_any = value;
        exlude_any.value_namespace = name_space;
        exlude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-any")
    {
        include_any = value;
        include_any.value_namespace = name_space;
        include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-all")
    {
        include_all = value;
        include_all.value_namespace = name_space;
        include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup")
    {
        setup = value;
        setup.value_namespace = name_space;
        setup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold")
    {
        hold = value;
        hold.value_namespace = name_space;
        hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Lspa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "exlude-any")
    {
        exlude_any.yfilter = yfilter;
    }
    if(value_path == "include-any")
    {
        include_any.yfilter = yfilter;
    }
    if(value_path == "include-all")
    {
        include_all.yfilter = yfilter;
    }
    if(value_path == "setup")
    {
        setup.yfilter = yfilter;
    }
    if(value_path == "hold")
    {
        hold.yfilter = yfilter;
    }
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Lspa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-used" || name == "exlude-any" || name == "include-any" || name == "include-all" || name == "setup" || name == "hold" || name == "lbit")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Rro::Rro()
    :
    is_used{YType::boolean, "is-used"},
    cost{YType::uint32, "cost"},
    address{YType::str, "address"}
{

    yang_name = "rro"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::Rro::~Rro()
{
}

bool MplsPceStdby::Lsps::Paths::Rro::has_data() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_data())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_used.is_set
	|| cost.is_set;
}

bool MplsPceStdby::Lsps::Paths::Rro::has_operation() const
{
    for (std::size_t index=0; index<subobject.size(); index++)
    {
        if(subobject[index]->has_operation())
            return true;
    }
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Rro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subobject")
    {
        auto c = std::make_shared<MplsPceStdby::Lsps::Paths::Rro::Subobject>();
        c->parent = this;
        subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPceStdby::Lsps::Paths::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

void MplsPceStdby::Lsps::Paths::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobject" || name == "is-used" || name == "cost" || name == "address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Rro::Subobject::Subobject()
    :
    subobj_type{YType::uint8, "subobj-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    strict{YType::boolean, "strict"},
    global{YType::boolean, "global"},
    mpls_label{YType::uint32, "mpls-label"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_value{YType::uint32, "segment-id-value"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "subobject"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Paths::Rro::Subobject::has_data() const
{
    return subobj_type.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| strict.is_set
	|| global.is_set
	|| mpls_label.is_set
	|| segment_id_type.is_set
	|| only_valid_mpls_label.is_set
	|| complete_mpls_label_entry.is_set
	|| missing_segment_id.is_set
	|| missing_node_adjcency_id.is_set
	|| segment_id_exists.is_set
	|| segment_id_value.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| local_address.is_set
	|| remote_address.is_set;
}

bool MplsPceStdby::Lsps::Paths::Rro::Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subobj_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_prefix_len.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(only_valid_mpls_label.yfilter)
	|| ydk::is_set(complete_mpls_label_entry.yfilter)
	|| ydk::is_set(missing_segment_id.yfilter)
	|| ydk::is_set(missing_node_adjcency_id.yfilter)
	|| ydk::is_set(segment_id_exists.yfilter)
	|| ydk::is_set(segment_id_value.yfilter)
	|| ydk::is_set(node_adjacency_id_exists.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Rro::Subobject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/rro/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Rro::Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subobj_type.is_set || is_set(subobj_type.yfilter)) leaf_name_data.push_back(subobj_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.yfilter)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.yfilter)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.yfilter)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.yfilter)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.yfilter)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.yfilter)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.yfilter)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::Rro::Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Paths::Rro::Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subobj-type")
    {
        subobj_type = value;
        subobj_type.value_namespace = name_space;
        subobj_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
        ipv4_prefix_len.value_namespace = name_space;
        ipv4_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
        only_valid_mpls_label.value_namespace = name_space;
        only_valid_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
        complete_mpls_label_entry.value_namespace = name_space;
        complete_mpls_label_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
        missing_segment_id.value_namespace = name_space;
        missing_segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
        missing_node_adjcency_id.value_namespace = name_space;
        missing_node_adjcency_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
        segment_id_exists.value_namespace = name_space;
        segment_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
        segment_id_value.value_namespace = name_space;
        segment_id_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
        node_adjacency_id_exists.value_namespace = name_space;
        node_adjacency_id_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Rro::Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subobj-type")
    {
        subobj_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label.yfilter = yfilter;
    }
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry.yfilter = yfilter;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id.yfilter = yfilter;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists.yfilter = yfilter;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value.yfilter = yfilter;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Rro::Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subobj-type" || name == "ipv4-address" || name == "ipv4-prefix-len" || name == "strict" || name == "global" || name == "mpls-label" || name == "segment-id-type" || name == "only-valid-mpls-label" || name == "complete-mpls-label-entry" || name == "missing-segment-id" || name == "missing-node-adjcency-id" || name == "segment-id-exists" || name == "segment-id-value" || name == "node-adjacency-id-exists" || name == "node-id" || name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsPceStdby::Lsps::Paths::Metric::Metric()
    :
    type{YType::uint8, "type"},
    cost{YType::uint32, "cost"}
{

    yang_name = "metric"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Lsps::Paths::Metric::~Metric()
{
}

bool MplsPceStdby::Lsps::Paths::Metric::has_data() const
{
    return type.is_set
	|| cost.is_set;
}

bool MplsPceStdby::Lsps::Paths::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string MplsPceStdby::Lsps::Paths::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Lsps::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Lsps::Paths::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Lsps::Paths::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Lsps::Paths::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Lsps::Paths::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool MplsPceStdby::Lsps::Paths::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "cost")
        return true;
    return false;
}

MplsPceStdby::Statistics::Statistics()
    :
    neighbors{YType::uint32, "neighbors"},
    tunnels{YType::uint32, "tunnels"},
    pce_req_total{YType::uint32, "pce-req-total"},
    pce_req_pending{YType::uint32, "pce-req-pending"},
    pce_req_timed_out{YType::uint32, "pce-req-timed-out"},
    max_file_descriptors{YType::uint32, "max-file-descriptors"},
    current_file_descriptors{YType::uint32, "current-file-descriptors"},
    current_pceq_length{YType::uint32, "current-pceq-length"},
    current_teq_length{YType::uint32, "current-teq-length"},
    max_pceq_length{YType::uint32, "max-pceq-length"},
    max_teq_length{YType::uint32, "max-teq-length"},
    maximum_in_queue_depth{YType::uint32, "maximum-in-queue-depth"},
    average_in_queue_depth{YType::uint32, "average-in-queue-depth"}
    	,
    igp_statistics(std::make_shared<MplsPceStdby::Statistics::IgpStatistics>())
{
    igp_statistics->parent = this;

    yang_name = "statistics"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Statistics::~Statistics()
{
}

bool MplsPceStdby::Statistics::has_data() const
{
    for (auto const & leaf : maximum_in_queue_depth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : average_in_queue_depth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return neighbors.is_set
	|| tunnels.is_set
	|| pce_req_total.is_set
	|| pce_req_pending.is_set
	|| pce_req_timed_out.is_set
	|| max_file_descriptors.is_set
	|| current_file_descriptors.is_set
	|| current_pceq_length.is_set
	|| current_teq_length.is_set
	|| max_pceq_length.is_set
	|| max_teq_length.is_set
	|| (igp_statistics !=  nullptr && igp_statistics->has_data());
}

bool MplsPceStdby::Statistics::has_operation() const
{
    for (auto const & leaf : maximum_in_queue_depth.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : average_in_queue_depth.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbors.yfilter)
	|| ydk::is_set(tunnels.yfilter)
	|| ydk::is_set(pce_req_total.yfilter)
	|| ydk::is_set(pce_req_pending.yfilter)
	|| ydk::is_set(pce_req_timed_out.yfilter)
	|| ydk::is_set(max_file_descriptors.yfilter)
	|| ydk::is_set(current_file_descriptors.yfilter)
	|| ydk::is_set(current_pceq_length.yfilter)
	|| ydk::is_set(current_teq_length.yfilter)
	|| ydk::is_set(max_pceq_length.yfilter)
	|| ydk::is_set(max_teq_length.yfilter)
	|| ydk::is_set(maximum_in_queue_depth.yfilter)
	|| ydk::is_set(average_in_queue_depth.yfilter)
	|| (igp_statistics !=  nullptr && igp_statistics->has_operation());
}

std::string MplsPceStdby::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbors.is_set || is_set(neighbors.yfilter)) leaf_name_data.push_back(neighbors.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());
    if (pce_req_total.is_set || is_set(pce_req_total.yfilter)) leaf_name_data.push_back(pce_req_total.get_name_leafdata());
    if (pce_req_pending.is_set || is_set(pce_req_pending.yfilter)) leaf_name_data.push_back(pce_req_pending.get_name_leafdata());
    if (pce_req_timed_out.is_set || is_set(pce_req_timed_out.yfilter)) leaf_name_data.push_back(pce_req_timed_out.get_name_leafdata());
    if (max_file_descriptors.is_set || is_set(max_file_descriptors.yfilter)) leaf_name_data.push_back(max_file_descriptors.get_name_leafdata());
    if (current_file_descriptors.is_set || is_set(current_file_descriptors.yfilter)) leaf_name_data.push_back(current_file_descriptors.get_name_leafdata());
    if (current_pceq_length.is_set || is_set(current_pceq_length.yfilter)) leaf_name_data.push_back(current_pceq_length.get_name_leafdata());
    if (current_teq_length.is_set || is_set(current_teq_length.yfilter)) leaf_name_data.push_back(current_teq_length.get_name_leafdata());
    if (max_pceq_length.is_set || is_set(max_pceq_length.yfilter)) leaf_name_data.push_back(max_pceq_length.get_name_leafdata());
    if (max_teq_length.is_set || is_set(max_teq_length.yfilter)) leaf_name_data.push_back(max_teq_length.get_name_leafdata());

    auto maximum_in_queue_depth_name_datas = maximum_in_queue_depth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_in_queue_depth_name_datas.begin(), maximum_in_queue_depth_name_datas.end());
    auto average_in_queue_depth_name_datas = average_in_queue_depth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), average_in_queue_depth_name_datas.begin(), average_in_queue_depth_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-statistics")
    {
        if(igp_statistics == nullptr)
        {
            igp_statistics = std::make_shared<MplsPceStdby::Statistics::IgpStatistics>();
        }
        return igp_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp_statistics != nullptr)
    {
        children["igp-statistics"] = igp_statistics;
    }

    return children;
}

void MplsPceStdby::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbors")
    {
        neighbors = value;
        neighbors.value_namespace = name_space;
        neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-total")
    {
        pce_req_total = value;
        pce_req_total.value_namespace = name_space;
        pce_req_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-pending")
    {
        pce_req_pending = value;
        pce_req_pending.value_namespace = name_space;
        pce_req_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-timed-out")
    {
        pce_req_timed_out = value;
        pce_req_timed_out.value_namespace = name_space;
        pce_req_timed_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-file-descriptors")
    {
        max_file_descriptors = value;
        max_file_descriptors.value_namespace = name_space;
        max_file_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-file-descriptors")
    {
        current_file_descriptors = value;
        current_file_descriptors.value_namespace = name_space;
        current_file_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-pceq-length")
    {
        current_pceq_length = value;
        current_pceq_length.value_namespace = name_space;
        current_pceq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-teq-length")
    {
        current_teq_length = value;
        current_teq_length.value_namespace = name_space;
        current_teq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pceq-length")
    {
        max_pceq_length = value;
        max_pceq_length.value_namespace = name_space;
        max_pceq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-teq-length")
    {
        max_teq_length = value;
        max_teq_length.value_namespace = name_space;
        max_teq_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-in-queue-depth")
    {
        maximum_in_queue_depth.append(value);
    }
    if(value_path == "average-in-queue-depth")
    {
        average_in_queue_depth.append(value);
    }
}

void MplsPceStdby::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbors")
    {
        neighbors.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
    if(value_path == "pce-req-total")
    {
        pce_req_total.yfilter = yfilter;
    }
    if(value_path == "pce-req-pending")
    {
        pce_req_pending.yfilter = yfilter;
    }
    if(value_path == "pce-req-timed-out")
    {
        pce_req_timed_out.yfilter = yfilter;
    }
    if(value_path == "max-file-descriptors")
    {
        max_file_descriptors.yfilter = yfilter;
    }
    if(value_path == "current-file-descriptors")
    {
        current_file_descriptors.yfilter = yfilter;
    }
    if(value_path == "current-pceq-length")
    {
        current_pceq_length.yfilter = yfilter;
    }
    if(value_path == "current-teq-length")
    {
        current_teq_length.yfilter = yfilter;
    }
    if(value_path == "max-pceq-length")
    {
        max_pceq_length.yfilter = yfilter;
    }
    if(value_path == "max-teq-length")
    {
        max_teq_length.yfilter = yfilter;
    }
    if(value_path == "maximum-in-queue-depth")
    {
        maximum_in_queue_depth.yfilter = yfilter;
    }
    if(value_path == "average-in-queue-depth")
    {
        average_in_queue_depth.yfilter = yfilter;
    }
}

bool MplsPceStdby::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-statistics" || name == "neighbors" || name == "tunnels" || name == "pce-req-total" || name == "pce-req-pending" || name == "pce-req-timed-out" || name == "max-file-descriptors" || name == "current-file-descriptors" || name == "current-pceq-length" || name == "current-teq-length" || name == "max-pceq-length" || name == "max-teq-length" || name == "maximum-in-queue-depth" || name == "average-in-queue-depth")
        return true;
    return false;
}

MplsPceStdby::Statistics::IgpStatistics::IgpStatistics()
    :
    abr_lookup_min{YType::uint64, "abr-lookup-min"},
    abr_lookup_max{YType::uint64, "abr-lookup-max"},
    abr_lookup_avg{YType::uint64, "abr-lookup-avg"},
    abr_lookup_timeout{YType::uint64, "abr-lookup-timeout"},
    abr_lookup_complete{YType::uint64, "abr-lookup-complete"}
{

    yang_name = "igp-statistics"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Statistics::IgpStatistics::~IgpStatistics()
{
}

bool MplsPceStdby::Statistics::IgpStatistics::has_data() const
{
    return abr_lookup_min.is_set
	|| abr_lookup_max.is_set
	|| abr_lookup_avg.is_set
	|| abr_lookup_timeout.is_set
	|| abr_lookup_complete.is_set;
}

bool MplsPceStdby::Statistics::IgpStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abr_lookup_min.yfilter)
	|| ydk::is_set(abr_lookup_max.yfilter)
	|| ydk::is_set(abr_lookup_avg.yfilter)
	|| ydk::is_set(abr_lookup_timeout.yfilter)
	|| ydk::is_set(abr_lookup_complete.yfilter);
}

std::string MplsPceStdby::Statistics::IgpStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Statistics::IgpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Statistics::IgpStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_lookup_min.is_set || is_set(abr_lookup_min.yfilter)) leaf_name_data.push_back(abr_lookup_min.get_name_leafdata());
    if (abr_lookup_max.is_set || is_set(abr_lookup_max.yfilter)) leaf_name_data.push_back(abr_lookup_max.get_name_leafdata());
    if (abr_lookup_avg.is_set || is_set(abr_lookup_avg.yfilter)) leaf_name_data.push_back(abr_lookup_avg.get_name_leafdata());
    if (abr_lookup_timeout.is_set || is_set(abr_lookup_timeout.yfilter)) leaf_name_data.push_back(abr_lookup_timeout.get_name_leafdata());
    if (abr_lookup_complete.is_set || is_set(abr_lookup_complete.yfilter)) leaf_name_data.push_back(abr_lookup_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Statistics::IgpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Statistics::IgpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Statistics::IgpStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abr-lookup-min")
    {
        abr_lookup_min = value;
        abr_lookup_min.value_namespace = name_space;
        abr_lookup_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-max")
    {
        abr_lookup_max = value;
        abr_lookup_max.value_namespace = name_space;
        abr_lookup_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-avg")
    {
        abr_lookup_avg = value;
        abr_lookup_avg.value_namespace = name_space;
        abr_lookup_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-timeout")
    {
        abr_lookup_timeout = value;
        abr_lookup_timeout.value_namespace = name_space;
        abr_lookup_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-lookup-complete")
    {
        abr_lookup_complete = value;
        abr_lookup_complete.value_namespace = name_space;
        abr_lookup_complete.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Statistics::IgpStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abr-lookup-min")
    {
        abr_lookup_min.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-max")
    {
        abr_lookup_max.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-avg")
    {
        abr_lookup_avg.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-timeout")
    {
        abr_lookup_timeout.yfilter = yfilter;
    }
    if(value_path == "abr-lookup-complete")
    {
        abr_lookup_complete.yfilter = yfilter;
    }
}

bool MplsPceStdby::Statistics::IgpStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abr-lookup-min" || name == "abr-lookup-max" || name == "abr-lookup-avg" || name == "abr-lookup-timeout" || name == "abr-lookup-complete")
        return true;
    return false;
}

MplsPceStdby::Peers::Peers()
{

    yang_name = "peers"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Peers::~Peers()
{
}

bool MplsPceStdby::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsPceStdby::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsPceStdby::Peers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto c = std::make_shared<MplsPceStdby::Peers::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPceStdby::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPceStdby::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPceStdby::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

MplsPceStdby::Peers::Peer::Peer()
    :
    peer_address{YType::str, "peer-address"},
    error{YType::str, "error"},
    pce_state{YType::enumeration, "pce-state"},
    precedence{YType::uint32, "precedence"},
    stateful{YType::boolean, "stateful"},
    capability_update{YType::boolean, "capability-update"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    triggered_sync_capability{YType::boolean, "triggered-sync-capability"},
    capability_db_version{YType::boolean, "capability-db-version"},
    delta_sync_capability{YType::boolean, "delta-sync-capability"},
    pcep_up_time{YType::uint32, "pcep-up-time"},
    keepalives{YType::uint32, "keepalives"},
    candidate{YType::boolean, "candidate"},
    statically_configured{YType::boolean, "statically-configured"},
    md5_enabled{YType::boolean, "md5-enabled"},
    keychain_enabled{YType::boolean, "keychain-enabled"},
    negotiated_keepalive{YType::uint32, "negotiated-keepalive"},
    negotated_dead_time{YType::uint32, "negotated-dead-time"},
    pce_req_rx{YType::uint32, "pce-req-rx"},
    pce_req_tx{YType::uint32, "pce-req-tx"},
    pce_rep_rx{YType::uint32, "pce-rep-rx"},
    pce_rep_tx{YType::uint32, "pce-rep-tx"},
    pce_err_rx{YType::uint32, "pce-err-rx"},
    pce_err_tx{YType::uint32, "pce-err-tx"},
    pce_open_tx{YType::uint32, "pce-open-tx"},
    pce_open_rx{YType::uint32, "pce-open-rx"},
    pce_rpt_rx{YType::uint32, "pce-rpt-rx"},
    pce_rpt_tx{YType::uint32, "pce-rpt-tx"},
    pce_upd_rx{YType::uint32, "pce-upd-rx"},
    pce_upd_tx{YType::uint32, "pce-upd-tx"},
    pce_init_rx{YType::uint32, "pce-init-rx"},
    pce_init_tx{YType::uint32, "pce-init-tx"},
    pce_keepalive_tx{YType::uint64, "pce-keepalive-tx"},
    pce_keepalive_rx{YType::uint64, "pce-keepalive-rx"},
    req_reply_min{YType::uint64, "req-reply-min"},
    req_reply_max{YType::uint64, "req-reply-max"},
    req_reply_avg{YType::uint64, "req-reply-avg"},
    request_timeouts{YType::uint64, "request-timeouts"},
    local_sid{YType::uint8, "local-sid"},
    remote_sid{YType::uint8, "remote-sid"},
    min_keepalive_interval{YType::uint8, "min-keepalive-interval"},
    max_dead_interval{YType::uint8, "max-dead-interval"}
    	,
    last_tx_pce_err(std::make_shared<MplsPceStdby::Peers::Peer::LastTxPceErr>())
	,last_rx_pce_err(std::make_shared<MplsPceStdby::Peers::Peer::LastRxPceErr>())
{
    last_tx_pce_err->parent = this;
    last_rx_pce_err->parent = this;

    yang_name = "peer"; yang_parent_name = "peers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Peers::Peer::~Peer()
{
}

bool MplsPceStdby::Peers::Peer::has_data() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| error.is_set
	|| pce_state.is_set
	|| precedence.is_set
	|| stateful.is_set
	|| capability_update.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| triggered_sync_capability.is_set
	|| capability_db_version.is_set
	|| delta_sync_capability.is_set
	|| pcep_up_time.is_set
	|| keepalives.is_set
	|| candidate.is_set
	|| statically_configured.is_set
	|| md5_enabled.is_set
	|| keychain_enabled.is_set
	|| negotiated_keepalive.is_set
	|| negotated_dead_time.is_set
	|| pce_req_rx.is_set
	|| pce_req_tx.is_set
	|| pce_rep_rx.is_set
	|| pce_rep_tx.is_set
	|| pce_err_rx.is_set
	|| pce_err_tx.is_set
	|| pce_open_tx.is_set
	|| pce_open_rx.is_set
	|| pce_rpt_rx.is_set
	|| pce_rpt_tx.is_set
	|| pce_upd_rx.is_set
	|| pce_upd_tx.is_set
	|| pce_init_rx.is_set
	|| pce_init_tx.is_set
	|| pce_keepalive_tx.is_set
	|| pce_keepalive_rx.is_set
	|| req_reply_min.is_set
	|| req_reply_max.is_set
	|| req_reply_avg.is_set
	|| request_timeouts.is_set
	|| local_sid.is_set
	|| remote_sid.is_set
	|| min_keepalive_interval.is_set
	|| max_dead_interval.is_set
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_data())
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_data());
}

bool MplsPceStdby::Peers::Peer::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(pce_state.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(capability_update.yfilter)
	|| ydk::is_set(capability_instantiate.yfilter)
	|| ydk::is_set(capability_segment_routing.yfilter)
	|| ydk::is_set(triggered_sync_capability.yfilter)
	|| ydk::is_set(capability_db_version.yfilter)
	|| ydk::is_set(delta_sync_capability.yfilter)
	|| ydk::is_set(pcep_up_time.yfilter)
	|| ydk::is_set(keepalives.yfilter)
	|| ydk::is_set(candidate.yfilter)
	|| ydk::is_set(statically_configured.yfilter)
	|| ydk::is_set(md5_enabled.yfilter)
	|| ydk::is_set(keychain_enabled.yfilter)
	|| ydk::is_set(negotiated_keepalive.yfilter)
	|| ydk::is_set(negotated_dead_time.yfilter)
	|| ydk::is_set(pce_req_rx.yfilter)
	|| ydk::is_set(pce_req_tx.yfilter)
	|| ydk::is_set(pce_rep_rx.yfilter)
	|| ydk::is_set(pce_rep_tx.yfilter)
	|| ydk::is_set(pce_err_rx.yfilter)
	|| ydk::is_set(pce_err_tx.yfilter)
	|| ydk::is_set(pce_open_tx.yfilter)
	|| ydk::is_set(pce_open_rx.yfilter)
	|| ydk::is_set(pce_rpt_rx.yfilter)
	|| ydk::is_set(pce_rpt_tx.yfilter)
	|| ydk::is_set(pce_upd_rx.yfilter)
	|| ydk::is_set(pce_upd_tx.yfilter)
	|| ydk::is_set(pce_init_rx.yfilter)
	|| ydk::is_set(pce_init_tx.yfilter)
	|| ydk::is_set(pce_keepalive_tx.yfilter)
	|| ydk::is_set(pce_keepalive_rx.yfilter)
	|| ydk::is_set(req_reply_min.yfilter)
	|| ydk::is_set(req_reply_max.yfilter)
	|| ydk::is_set(req_reply_avg.yfilter)
	|| ydk::is_set(request_timeouts.yfilter)
	|| ydk::is_set(local_sid.yfilter)
	|| ydk::is_set(remote_sid.yfilter)
	|| ydk::is_set(min_keepalive_interval.yfilter)
	|| ydk::is_set(max_dead_interval.yfilter)
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_operation())
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_operation());
}

std::string MplsPceStdby::Peers::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/peers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-address='" <<peer_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (pce_state.is_set || is_set(pce_state.yfilter)) leaf_name_data.push_back(pce_state.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.yfilter)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.yfilter)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.yfilter)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (triggered_sync_capability.is_set || is_set(triggered_sync_capability.yfilter)) leaf_name_data.push_back(triggered_sync_capability.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.yfilter)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (delta_sync_capability.is_set || is_set(delta_sync_capability.yfilter)) leaf_name_data.push_back(delta_sync_capability.get_name_leafdata());
    if (pcep_up_time.is_set || is_set(pcep_up_time.yfilter)) leaf_name_data.push_back(pcep_up_time.get_name_leafdata());
    if (keepalives.is_set || is_set(keepalives.yfilter)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (candidate.is_set || is_set(candidate.yfilter)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (statically_configured.is_set || is_set(statically_configured.yfilter)) leaf_name_data.push_back(statically_configured.get_name_leafdata());
    if (md5_enabled.is_set || is_set(md5_enabled.yfilter)) leaf_name_data.push_back(md5_enabled.get_name_leafdata());
    if (keychain_enabled.is_set || is_set(keychain_enabled.yfilter)) leaf_name_data.push_back(keychain_enabled.get_name_leafdata());
    if (negotiated_keepalive.is_set || is_set(negotiated_keepalive.yfilter)) leaf_name_data.push_back(negotiated_keepalive.get_name_leafdata());
    if (negotated_dead_time.is_set || is_set(negotated_dead_time.yfilter)) leaf_name_data.push_back(negotated_dead_time.get_name_leafdata());
    if (pce_req_rx.is_set || is_set(pce_req_rx.yfilter)) leaf_name_data.push_back(pce_req_rx.get_name_leafdata());
    if (pce_req_tx.is_set || is_set(pce_req_tx.yfilter)) leaf_name_data.push_back(pce_req_tx.get_name_leafdata());
    if (pce_rep_rx.is_set || is_set(pce_rep_rx.yfilter)) leaf_name_data.push_back(pce_rep_rx.get_name_leafdata());
    if (pce_rep_tx.is_set || is_set(pce_rep_tx.yfilter)) leaf_name_data.push_back(pce_rep_tx.get_name_leafdata());
    if (pce_err_rx.is_set || is_set(pce_err_rx.yfilter)) leaf_name_data.push_back(pce_err_rx.get_name_leafdata());
    if (pce_err_tx.is_set || is_set(pce_err_tx.yfilter)) leaf_name_data.push_back(pce_err_tx.get_name_leafdata());
    if (pce_open_tx.is_set || is_set(pce_open_tx.yfilter)) leaf_name_data.push_back(pce_open_tx.get_name_leafdata());
    if (pce_open_rx.is_set || is_set(pce_open_rx.yfilter)) leaf_name_data.push_back(pce_open_rx.get_name_leafdata());
    if (pce_rpt_rx.is_set || is_set(pce_rpt_rx.yfilter)) leaf_name_data.push_back(pce_rpt_rx.get_name_leafdata());
    if (pce_rpt_tx.is_set || is_set(pce_rpt_tx.yfilter)) leaf_name_data.push_back(pce_rpt_tx.get_name_leafdata());
    if (pce_upd_rx.is_set || is_set(pce_upd_rx.yfilter)) leaf_name_data.push_back(pce_upd_rx.get_name_leafdata());
    if (pce_upd_tx.is_set || is_set(pce_upd_tx.yfilter)) leaf_name_data.push_back(pce_upd_tx.get_name_leafdata());
    if (pce_init_rx.is_set || is_set(pce_init_rx.yfilter)) leaf_name_data.push_back(pce_init_rx.get_name_leafdata());
    if (pce_init_tx.is_set || is_set(pce_init_tx.yfilter)) leaf_name_data.push_back(pce_init_tx.get_name_leafdata());
    if (pce_keepalive_tx.is_set || is_set(pce_keepalive_tx.yfilter)) leaf_name_data.push_back(pce_keepalive_tx.get_name_leafdata());
    if (pce_keepalive_rx.is_set || is_set(pce_keepalive_rx.yfilter)) leaf_name_data.push_back(pce_keepalive_rx.get_name_leafdata());
    if (req_reply_min.is_set || is_set(req_reply_min.yfilter)) leaf_name_data.push_back(req_reply_min.get_name_leafdata());
    if (req_reply_max.is_set || is_set(req_reply_max.yfilter)) leaf_name_data.push_back(req_reply_max.get_name_leafdata());
    if (req_reply_avg.is_set || is_set(req_reply_avg.yfilter)) leaf_name_data.push_back(req_reply_avg.get_name_leafdata());
    if (request_timeouts.is_set || is_set(request_timeouts.yfilter)) leaf_name_data.push_back(request_timeouts.get_name_leafdata());
    if (local_sid.is_set || is_set(local_sid.yfilter)) leaf_name_data.push_back(local_sid.get_name_leafdata());
    if (remote_sid.is_set || is_set(remote_sid.yfilter)) leaf_name_data.push_back(remote_sid.get_name_leafdata());
    if (min_keepalive_interval.is_set || is_set(min_keepalive_interval.yfilter)) leaf_name_data.push_back(min_keepalive_interval.get_name_leafdata());
    if (max_dead_interval.is_set || is_set(max_dead_interval.yfilter)) leaf_name_data.push_back(max_dead_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-tx-pce-err")
    {
        if(last_tx_pce_err == nullptr)
        {
            last_tx_pce_err = std::make_shared<MplsPceStdby::Peers::Peer::LastTxPceErr>();
        }
        return last_tx_pce_err;
    }

    if(child_yang_name == "last-rx-pce-err")
    {
        if(last_rx_pce_err == nullptr)
        {
            last_rx_pce_err = std::make_shared<MplsPceStdby::Peers::Peer::LastRxPceErr>();
        }
        return last_rx_pce_err;
    }

    if(child_yang_name == "ig-ps")
    {
        auto c = std::make_shared<MplsPceStdby::Peers::Peer::IgPs>();
        c->parent = this;
        ig_ps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Peers::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_tx_pce_err != nullptr)
    {
        children["last-tx-pce-err"] = last_tx_pce_err;
    }

    if(last_rx_pce_err != nullptr)
    {
        children["last-rx-pce-err"] = last_rx_pce_err;
    }

    count = 0;
    for (auto const & c : ig_ps)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPceStdby::Peers::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-state")
    {
        pce_state = value;
        pce_state.value_namespace = name_space;
        pce_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
        capability_update.value_namespace = name_space;
        capability_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
        capability_instantiate.value_namespace = name_space;
        capability_instantiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
        capability_segment_routing.value_namespace = name_space;
        capability_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-sync-capability")
    {
        triggered_sync_capability = value;
        triggered_sync_capability.value_namespace = name_space;
        triggered_sync_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
        capability_db_version.value_namespace = name_space;
        capability_db_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delta-sync-capability")
    {
        delta_sync_capability = value;
        delta_sync_capability.value_namespace = name_space;
        delta_sync_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time = value;
        pcep_up_time.value_namespace = name_space;
        pcep_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalives")
    {
        keepalives = value;
        keepalives.value_namespace = name_space;
        keepalives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate")
    {
        candidate = value;
        candidate.value_namespace = name_space;
        candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statically-configured")
    {
        statically_configured = value;
        statically_configured.value_namespace = name_space;
        statically_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled = value;
        md5_enabled.value_namespace = name_space;
        md5_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled = value;
        keychain_enabled.value_namespace = name_space;
        keychain_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-keepalive")
    {
        negotiated_keepalive = value;
        negotiated_keepalive.value_namespace = name_space;
        negotiated_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotated-dead-time")
    {
        negotated_dead_time = value;
        negotated_dead_time.value_namespace = name_space;
        negotated_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-rx")
    {
        pce_req_rx = value;
        pce_req_rx.value_namespace = name_space;
        pce_req_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-req-tx")
    {
        pce_req_tx = value;
        pce_req_tx.value_namespace = name_space;
        pce_req_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rep-rx")
    {
        pce_rep_rx = value;
        pce_rep_rx.value_namespace = name_space;
        pce_rep_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rep-tx")
    {
        pce_rep_tx = value;
        pce_rep_tx.value_namespace = name_space;
        pce_rep_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-rx")
    {
        pce_err_rx = value;
        pce_err_rx.value_namespace = name_space;
        pce_err_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-tx")
    {
        pce_err_tx = value;
        pce_err_tx.value_namespace = name_space;
        pce_err_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx = value;
        pce_open_tx.value_namespace = name_space;
        pce_open_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx = value;
        pce_open_rx.value_namespace = name_space;
        pce_open_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rpt-rx")
    {
        pce_rpt_rx = value;
        pce_rpt_rx.value_namespace = name_space;
        pce_rpt_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-rpt-tx")
    {
        pce_rpt_tx = value;
        pce_rpt_tx.value_namespace = name_space;
        pce_rpt_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-upd-rx")
    {
        pce_upd_rx = value;
        pce_upd_rx.value_namespace = name_space;
        pce_upd_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-upd-tx")
    {
        pce_upd_tx = value;
        pce_upd_tx.value_namespace = name_space;
        pce_upd_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-init-rx")
    {
        pce_init_rx = value;
        pce_init_rx.value_namespace = name_space;
        pce_init_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-init-tx")
    {
        pce_init_tx = value;
        pce_init_tx.value_namespace = name_space;
        pce_init_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx = value;
        pce_keepalive_tx.value_namespace = name_space;
        pce_keepalive_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx = value;
        pce_keepalive_rx.value_namespace = name_space;
        pce_keepalive_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-min")
    {
        req_reply_min = value;
        req_reply_min.value_namespace = name_space;
        req_reply_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-max")
    {
        req_reply_max = value;
        req_reply_max.value_namespace = name_space;
        req_reply_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-reply-avg")
    {
        req_reply_avg = value;
        req_reply_avg.value_namespace = name_space;
        req_reply_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-timeouts")
    {
        request_timeouts = value;
        request_timeouts.value_namespace = name_space;
        request_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-sid")
    {
        local_sid = value;
        local_sid.value_namespace = name_space;
        local_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-sid")
    {
        remote_sid = value;
        remote_sid.value_namespace = name_space;
        remote_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-keepalive-interval")
    {
        min_keepalive_interval = value;
        min_keepalive_interval.value_namespace = name_space;
        min_keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-dead-interval")
    {
        max_dead_interval = value;
        max_dead_interval.value_namespace = name_space;
        max_dead_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Peers::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "pce-state")
    {
        pce_state.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "capability-update")
    {
        capability_update.yfilter = yfilter;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate.yfilter = yfilter;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing.yfilter = yfilter;
    }
    if(value_path == "triggered-sync-capability")
    {
        triggered_sync_capability.yfilter = yfilter;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version.yfilter = yfilter;
    }
    if(value_path == "delta-sync-capability")
    {
        delta_sync_capability.yfilter = yfilter;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time.yfilter = yfilter;
    }
    if(value_path == "keepalives")
    {
        keepalives.yfilter = yfilter;
    }
    if(value_path == "candidate")
    {
        candidate.yfilter = yfilter;
    }
    if(value_path == "statically-configured")
    {
        statically_configured.yfilter = yfilter;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled.yfilter = yfilter;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled.yfilter = yfilter;
    }
    if(value_path == "negotiated-keepalive")
    {
        negotiated_keepalive.yfilter = yfilter;
    }
    if(value_path == "negotated-dead-time")
    {
        negotated_dead_time.yfilter = yfilter;
    }
    if(value_path == "pce-req-rx")
    {
        pce_req_rx.yfilter = yfilter;
    }
    if(value_path == "pce-req-tx")
    {
        pce_req_tx.yfilter = yfilter;
    }
    if(value_path == "pce-rep-rx")
    {
        pce_rep_rx.yfilter = yfilter;
    }
    if(value_path == "pce-rep-tx")
    {
        pce_rep_tx.yfilter = yfilter;
    }
    if(value_path == "pce-err-rx")
    {
        pce_err_rx.yfilter = yfilter;
    }
    if(value_path == "pce-err-tx")
    {
        pce_err_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx.yfilter = yfilter;
    }
    if(value_path == "pce-rpt-rx")
    {
        pce_rpt_rx.yfilter = yfilter;
    }
    if(value_path == "pce-rpt-tx")
    {
        pce_rpt_tx.yfilter = yfilter;
    }
    if(value_path == "pce-upd-rx")
    {
        pce_upd_rx.yfilter = yfilter;
    }
    if(value_path == "pce-upd-tx")
    {
        pce_upd_tx.yfilter = yfilter;
    }
    if(value_path == "pce-init-rx")
    {
        pce_init_rx.yfilter = yfilter;
    }
    if(value_path == "pce-init-tx")
    {
        pce_init_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx.yfilter = yfilter;
    }
    if(value_path == "req-reply-min")
    {
        req_reply_min.yfilter = yfilter;
    }
    if(value_path == "req-reply-max")
    {
        req_reply_max.yfilter = yfilter;
    }
    if(value_path == "req-reply-avg")
    {
        req_reply_avg.yfilter = yfilter;
    }
    if(value_path == "request-timeouts")
    {
        request_timeouts.yfilter = yfilter;
    }
    if(value_path == "local-sid")
    {
        local_sid.yfilter = yfilter;
    }
    if(value_path == "remote-sid")
    {
        remote_sid.yfilter = yfilter;
    }
    if(value_path == "min-keepalive-interval")
    {
        min_keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "max-dead-interval")
    {
        max_dead_interval.yfilter = yfilter;
    }
}

bool MplsPceStdby::Peers::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-tx-pce-err" || name == "last-rx-pce-err" || name == "ig-ps" || name == "peer-address" || name == "error" || name == "pce-state" || name == "precedence" || name == "stateful" || name == "capability-update" || name == "capability-instantiate" || name == "capability-segment-routing" || name == "triggered-sync-capability" || name == "capability-db-version" || name == "delta-sync-capability" || name == "pcep-up-time" || name == "keepalives" || name == "candidate" || name == "statically-configured" || name == "md5-enabled" || name == "keychain-enabled" || name == "negotiated-keepalive" || name == "negotated-dead-time" || name == "pce-req-rx" || name == "pce-req-tx" || name == "pce-rep-rx" || name == "pce-rep-tx" || name == "pce-err-rx" || name == "pce-err-tx" || name == "pce-open-tx" || name == "pce-open-rx" || name == "pce-rpt-rx" || name == "pce-rpt-tx" || name == "pce-upd-rx" || name == "pce-upd-tx" || name == "pce-init-rx" || name == "pce-init-tx" || name == "pce-keepalive-tx" || name == "pce-keepalive-rx" || name == "req-reply-min" || name == "req-reply-max" || name == "req-reply-avg" || name == "request-timeouts" || name == "local-sid" || name == "remote-sid" || name == "min-keepalive-interval" || name == "max-dead-interval")
        return true;
    return false;
}

MplsPceStdby::Peers::Peer::LastTxPceErr::LastTxPceErr()
    :
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    has_open_object{YType::boolean, "has-open-object"},
    openversion{YType::uint32, "openversion"},
    open_keepalive{YType::uint32, "open-keepalive"},
    open_dead_time{YType::uint32, "open-dead-time"},
    has_rp_object{YType::boolean, "has-rp-object"},
    rp_request_id{YType::uint32, "rp-request-id"}
{

    yang_name = "last-tx-pce-err"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Peers::Peer::LastTxPceErr::~LastTxPceErr()
{
}

bool MplsPceStdby::Peers::Peer::LastTxPceErr::has_data() const
{
    return pce_err_type.is_set
	|| pce_err_value.is_set
	|| has_open_object.is_set
	|| openversion.is_set
	|| open_keepalive.is_set
	|| open_dead_time.is_set
	|| has_rp_object.is_set
	|| rp_request_id.is_set;
}

bool MplsPceStdby::Peers::Peer::LastTxPceErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_err_type.yfilter)
	|| ydk::is_set(pce_err_value.yfilter)
	|| ydk::is_set(has_open_object.yfilter)
	|| ydk::is_set(openversion.yfilter)
	|| ydk::is_set(open_keepalive.yfilter)
	|| ydk::is_set(open_dead_time.yfilter)
	|| ydk::is_set(has_rp_object.yfilter)
	|| ydk::is_set(rp_request_id.yfilter);
}

std::string MplsPceStdby::Peers::Peer::LastTxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-tx-pce-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::Peer::LastTxPceErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_err_type.is_set || is_set(pce_err_type.yfilter)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.yfilter)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (has_open_object.is_set || is_set(has_open_object.yfilter)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.yfilter)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.yfilter)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.yfilter)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.yfilter)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.yfilter)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::Peer::LastTxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Peers::Peer::LastTxPceErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Peers::Peer::LastTxPceErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
        pce_err_type.value_namespace = name_space;
        pce_err_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
        pce_err_value.value_namespace = name_space;
        pce_err_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-open-object")
    {
        has_open_object = value;
        has_open_object.value_namespace = name_space;
        has_open_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openversion")
    {
        openversion = value;
        openversion.value_namespace = name_space;
        openversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
        open_keepalive.value_namespace = name_space;
        open_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
        open_dead_time.value_namespace = name_space;
        open_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
        has_rp_object.value_namespace = name_space;
        has_rp_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
        rp_request_id.value_namespace = name_space;
        rp_request_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Peers::Peer::LastTxPceErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-err-type")
    {
        pce_err_type.yfilter = yfilter;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value.yfilter = yfilter;
    }
    if(value_path == "has-open-object")
    {
        has_open_object.yfilter = yfilter;
    }
    if(value_path == "openversion")
    {
        openversion.yfilter = yfilter;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive.yfilter = yfilter;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time.yfilter = yfilter;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object.yfilter = yfilter;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Peers::Peer::LastTxPceErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-err-type" || name == "pce-err-value" || name == "has-open-object" || name == "openversion" || name == "open-keepalive" || name == "open-dead-time" || name == "has-rp-object" || name == "rp-request-id")
        return true;
    return false;
}

MplsPceStdby::Peers::Peer::LastRxPceErr::LastRxPceErr()
    :
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    has_open_object{YType::boolean, "has-open-object"},
    openversion{YType::uint32, "openversion"},
    open_keepalive{YType::uint32, "open-keepalive"},
    open_dead_time{YType::uint32, "open-dead-time"},
    has_rp_object{YType::boolean, "has-rp-object"},
    rp_request_id{YType::uint32, "rp-request-id"}
{

    yang_name = "last-rx-pce-err"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Peers::Peer::LastRxPceErr::~LastRxPceErr()
{
}

bool MplsPceStdby::Peers::Peer::LastRxPceErr::has_data() const
{
    return pce_err_type.is_set
	|| pce_err_value.is_set
	|| has_open_object.is_set
	|| openversion.is_set
	|| open_keepalive.is_set
	|| open_dead_time.is_set
	|| has_rp_object.is_set
	|| rp_request_id.is_set;
}

bool MplsPceStdby::Peers::Peer::LastRxPceErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_err_type.yfilter)
	|| ydk::is_set(pce_err_value.yfilter)
	|| ydk::is_set(has_open_object.yfilter)
	|| ydk::is_set(openversion.yfilter)
	|| ydk::is_set(open_keepalive.yfilter)
	|| ydk::is_set(open_dead_time.yfilter)
	|| ydk::is_set(has_rp_object.yfilter)
	|| ydk::is_set(rp_request_id.yfilter);
}

std::string MplsPceStdby::Peers::Peer::LastRxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rx-pce-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::Peer::LastRxPceErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_err_type.is_set || is_set(pce_err_type.yfilter)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.yfilter)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (has_open_object.is_set || is_set(has_open_object.yfilter)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.yfilter)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.yfilter)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.yfilter)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.yfilter)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.yfilter)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::Peer::LastRxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Peers::Peer::LastRxPceErr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Peers::Peer::LastRxPceErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
        pce_err_type.value_namespace = name_space;
        pce_err_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
        pce_err_value.value_namespace = name_space;
        pce_err_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-open-object")
    {
        has_open_object = value;
        has_open_object.value_namespace = name_space;
        has_open_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "openversion")
    {
        openversion = value;
        openversion.value_namespace = name_space;
        openversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
        open_keepalive.value_namespace = name_space;
        open_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
        open_dead_time.value_namespace = name_space;
        open_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
        has_rp_object.value_namespace = name_space;
        has_rp_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
        rp_request_id.value_namespace = name_space;
        rp_request_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Peers::Peer::LastRxPceErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-err-type")
    {
        pce_err_type.yfilter = yfilter;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value.yfilter = yfilter;
    }
    if(value_path == "has-open-object")
    {
        has_open_object.yfilter = yfilter;
    }
    if(value_path == "openversion")
    {
        openversion.yfilter = yfilter;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive.yfilter = yfilter;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time.yfilter = yfilter;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object.yfilter = yfilter;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Peers::Peer::LastRxPceErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-err-type" || name == "pce-err-value" || name == "has-open-object" || name == "openversion" || name == "open-keepalive" || name == "open-dead-time" || name == "has-rp-object" || name == "rp-request-id")
        return true;
    return false;
}

MplsPceStdby::Peers::Peer::IgPs::IgPs()
    :
    igp_type{YType::enumeration, "igp-type"},
    igp_instance_id{YType::str, "igp-instance-id"}
{

    yang_name = "ig-ps"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

MplsPceStdby::Peers::Peer::IgPs::~IgPs()
{
}

bool MplsPceStdby::Peers::Peer::IgPs::has_data() const
{
    return igp_type.is_set
	|| igp_instance_id.is_set;
}

bool MplsPceStdby::Peers::Peer::IgPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(igp_instance_id.yfilter);
}

std::string MplsPceStdby::Peers::Peer::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Peers::Peer::IgPs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (igp_instance_id.is_set || is_set(igp_instance_id.yfilter)) leaf_name_data.push_back(igp_instance_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::Peer::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Peers::Peer::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Peers::Peer::IgPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance-id")
    {
        igp_instance_id = value;
        igp_instance_id.value_namespace = name_space;
        igp_instance_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Peers::Peer::IgPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "igp-instance-id")
    {
        igp_instance_id.yfilter = yfilter;
    }
}

bool MplsPceStdby::Peers::Peer::IgPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-type" || name == "igp-instance-id")
        return true;
    return false;
}

MplsPceStdby::Topology::Topology()
    :
    global(std::make_shared<MplsPceStdby::Topology::Global>())
{
    global->parent = this;

    yang_name = "topology"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Topology::~Topology()
{
}

bool MplsPceStdby::Topology::has_data() const
{
    return (global !=  nullptr && global->has_data());
}

bool MplsPceStdby::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsPceStdby::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsPceStdby::Topology::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void MplsPceStdby::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPceStdby::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPceStdby::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

MplsPceStdby::Topology::Global::Global()
{

    yang_name = "global"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Topology::Global::~Global()
{
}

bool MplsPceStdby::Topology::Global::has_data() const
{
    for (std::size_t index=0; index<nodes.size(); index++)
    {
        if(nodes[index]->has_data())
            return true;
    }
    return false;
}

bool MplsPceStdby::Topology::Global::has_operation() const
{
    for (std::size_t index=0; index<nodes.size(); index++)
    {
        if(nodes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsPceStdby::Topology::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Topology::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Topology::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Topology::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        auto c = std::make_shared<MplsPceStdby::Topology::Global::Nodes>();
        c->parent = this;
        nodes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Topology::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nodes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPceStdby::Topology::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsPceStdby::Topology::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsPceStdby::Topology::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

MplsPceStdby::Topology::Global::Nodes::Nodes()
    :
    router_id{YType::str, "router-id"},
    igp_area_id{YType::uint32, "igp-area-id"},
    igp_area_format{YType::enumeration, "igp-area-format"},
    pce_cost{YType::uint32, "pce-cost"},
    node_id{YType::str, "node-id"},
    is_pce_border_node{YType::boolean, "is-pce-border-node"}
{

    yang_name = "nodes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Topology::Global::Nodes::~Nodes()
{
}

bool MplsPceStdby::Topology::Global::Nodes::has_data() const
{
    return router_id.is_set
	|| igp_area_id.is_set
	|| igp_area_format.is_set
	|| pce_cost.is_set
	|| node_id.is_set
	|| is_pce_border_node.is_set;
}

bool MplsPceStdby::Topology::Global::Nodes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(igp_area_id.yfilter)
	|| ydk::is_set(igp_area_format.yfilter)
	|| ydk::is_set(pce_cost.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(is_pce_border_node.yfilter);
}

std::string MplsPceStdby::Topology::Global::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/topology/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Topology::Global::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Topology::Global::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.yfilter)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (pce_cost.is_set || is_set(pce_cost.yfilter)) leaf_name_data.push_back(pce_cost.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (is_pce_border_node.is_set || is_set(is_pce_border_node.yfilter)) leaf_name_data.push_back(is_pce_border_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Topology::Global::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Topology::Global::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Topology::Global::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
        igp_area_format.value_namespace = name_space;
        igp_area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-cost")
    {
        pce_cost = value;
        pce_cost.value_namespace = name_space;
        pce_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-border-node")
    {
        is_pce_border_node = value;
        is_pce_border_node.value_namespace = name_space;
        is_pce_border_node.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Topology::Global::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format.yfilter = yfilter;
    }
    if(value_path == "pce-cost")
    {
        pce_cost.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "is-pce-border-node")
    {
        is_pce_border_node.yfilter = yfilter;
    }
}

bool MplsPceStdby::Topology::Global::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "igp-area-id" || name == "igp-area-format" || name == "pce-cost" || name == "node-id" || name == "is-pce-border-node")
        return true;
    return false;
}

MplsPceStdby::Tunnels::Tunnels()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    configured_pce_address{YType::str, "configured-pce-address"},
    sender_pce_address{YType::str, "sender-pce-address"},
    path_state{YType::enumeration, "path-state"},
    tunnel_state{YType::enumeration, "tunnel-state"},
    admin_weight{YType::uint32, "admin-weight"},
    hop_count{YType::uint32, "hop-count"}
{

    yang_name = "tunnels"; yang_parent_name = "mpls-pce-stdby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Tunnels::~Tunnels()
{
}

bool MplsPceStdby::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return source_address.is_set
	|| destination_address.is_set
	|| is_curr_path_option_pce.is_set
	|| curr_path_option_index.is_set
	|| configured_pce_address.is_set
	|| sender_pce_address.is_set
	|| path_state.is_set
	|| tunnel_state.is_set
	|| admin_weight.is_set
	|| hop_count.is_set;
}

bool MplsPceStdby::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(is_curr_path_option_pce.yfilter)
	|| ydk::is_set(curr_path_option_index.yfilter)
	|| ydk::is_set(configured_pce_address.yfilter)
	|| ydk::is_set(sender_pce_address.yfilter)
	|| ydk::is_set(path_state.yfilter)
	|| ydk::is_set(tunnel_state.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(hop_count.yfilter);
}

std::string MplsPceStdby::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.yfilter)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.yfilter)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.yfilter)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.yfilter)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.yfilter)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<MplsPceStdby::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsPceStdby::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
        is_curr_path_option_pce.value_namespace = name_space;
        is_curr_path_option_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
        curr_path_option_index.value_namespace = name_space;
        curr_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
        configured_pce_address.value_namespace = name_space;
        configured_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
        sender_pce_address.value_namespace = name_space;
        sender_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-state")
    {
        path_state = value;
        path_state.value_namespace = name_space;
        path_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce.yfilter = yfilter;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index.yfilter = yfilter;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address.yfilter = yfilter;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address.yfilter = yfilter;
    }
    if(value_path == "path-state")
    {
        path_state.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
}

bool MplsPceStdby::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "source-address" || name == "destination-address" || name == "is-curr-path-option-pce" || name == "curr-path-option-index" || name == "configured-pce-address" || name == "sender-pce-address" || name == "path-state" || name == "tunnel-state" || name == "admin-weight" || name == "hop-count")
        return true;
    return false;
}

MplsPceStdby::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    configured_pce_address{YType::str, "configured-pce-address"},
    sender_pce_address{YType::str, "sender-pce-address"},
    path_state{YType::enumeration, "path-state"},
    tunnel_state{YType::enumeration, "tunnel-state"},
    admin_weight{YType::uint32, "admin-weight"},
    hop_count{YType::uint32, "hop-count"}
{

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsPceStdby::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsPceStdby::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| is_curr_path_option_pce.is_set
	|| curr_path_option_index.is_set
	|| configured_pce_address.is_set
	|| sender_pce_address.is_set
	|| path_state.is_set
	|| tunnel_state.is_set
	|| admin_weight.is_set
	|| hop_count.is_set;
}

bool MplsPceStdby::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(is_curr_path_option_pce.yfilter)
	|| ydk::is_set(curr_path_option_index.yfilter)
	|| ydk::is_set(configured_pce_address.yfilter)
	|| ydk::is_set(sender_pce_address.yfilter)
	|| ydk::is_set(path_state.yfilter)
	|| ydk::is_set(tunnel_state.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(hop_count.yfilter);
}

std::string MplsPceStdby::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsPceStdby::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsPceStdby::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.yfilter)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.yfilter)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.yfilter)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.yfilter)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.yfilter)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsPceStdby::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsPceStdby::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsPceStdby::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
        is_curr_path_option_pce.value_namespace = name_space;
        is_curr_path_option_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
        curr_path_option_index.value_namespace = name_space;
        curr_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
        configured_pce_address.value_namespace = name_space;
        configured_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
        sender_pce_address.value_namespace = name_space;
        sender_pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-state")
    {
        path_state = value;
        path_state.value_namespace = name_space;
        path_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsPceStdby::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce.yfilter = yfilter;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index.yfilter = yfilter;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address.yfilter = yfilter;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address.yfilter = yfilter;
    }
    if(value_path == "path-state")
    {
        path_state.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
}

bool MplsPceStdby::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name" || name == "source-address" || name == "destination-address" || name == "is-curr-path-option-pce" || name == "curr-path-option-index" || name == "configured-pce-address" || name == "sender-pce-address" || name == "path-state" || name == "tunnel-state" || name == "admin-weight" || name == "hop-count")
        return true;
    return false;
}

MplsTp::MplsTp()
    :
    tp_links(std::make_shared<MplsTp::TpLinks>())
	,tp_tunnels(std::make_shared<MplsTp::TpTunnels>())
	,tp_midpoints(std::make_shared<MplsTp::TpMidpoints>())
	,tp_global_parameters(std::make_shared<MplsTp::TpGlobalParameters>())
{
    tp_links->parent = this;
    tp_tunnels->parent = this;
    tp_midpoints->parent = this;
    tp_global_parameters->parent = this;

    yang_name = "mpls-tp"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsTp::~MplsTp()
{
}

bool MplsTp::has_data() const
{
    return (tp_links !=  nullptr && tp_links->has_data())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_data())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_data())
	|| (tp_global_parameters !=  nullptr && tp_global_parameters->has_data());
}

bool MplsTp::has_operation() const
{
    return is_set(yfilter)
	|| (tp_links !=  nullptr && tp_links->has_operation())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_operation())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_operation())
	|| (tp_global_parameters !=  nullptr && tp_global_parameters->has_operation());
}

std::string MplsTp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-links")
    {
        if(tp_links == nullptr)
        {
            tp_links = std::make_shared<MplsTp::TpLinks>();
        }
        return tp_links;
    }

    if(child_yang_name == "tp-tunnels")
    {
        if(tp_tunnels == nullptr)
        {
            tp_tunnels = std::make_shared<MplsTp::TpTunnels>();
        }
        return tp_tunnels;
    }

    if(child_yang_name == "tp-midpoints")
    {
        if(tp_midpoints == nullptr)
        {
            tp_midpoints = std::make_shared<MplsTp::TpMidpoints>();
        }
        return tp_midpoints;
    }

    if(child_yang_name == "tp-global-parameters")
    {
        if(tp_global_parameters == nullptr)
        {
            tp_global_parameters = std::make_shared<MplsTp::TpGlobalParameters>();
        }
        return tp_global_parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tp_links != nullptr)
    {
        children["tp-links"] = tp_links;
    }

    if(tp_tunnels != nullptr)
    {
        children["tp-tunnels"] = tp_tunnels;
    }

    if(tp_midpoints != nullptr)
    {
        children["tp-midpoints"] = tp_midpoints;
    }

    if(tp_global_parameters != nullptr)
    {
        children["tp-global-parameters"] = tp_global_parameters;
    }

    return children;
}

void MplsTp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsTp::clone_ptr() const
{
    return std::make_shared<MplsTp>();
}

std::string MplsTp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsTp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsTp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsTp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsTp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-links" || name == "tp-tunnels" || name == "tp-midpoints" || name == "tp-global-parameters")
        return true;
    return false;
}

MplsTp::TpLinks::TpLinks()
    :
    tp_detail_links(std::make_shared<MplsTp::TpLinks::TpDetailLinks>())
	,tp_link_summary(std::make_shared<MplsTp::TpLinks::TpLinkSummary>())
	,tp_links(std::make_shared<MplsTp::TpLinks::TpLinks_>())
{
    tp_detail_links->parent = this;
    tp_link_summary->parent = this;
    tp_links->parent = this;

    yang_name = "tp-links"; yang_parent_name = "mpls-tp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpLinks::~TpLinks()
{
}

bool MplsTp::TpLinks::has_data() const
{
    return (tp_detail_links !=  nullptr && tp_detail_links->has_data())
	|| (tp_link_summary !=  nullptr && tp_link_summary->has_data())
	|| (tp_links !=  nullptr && tp_links->has_data());
}

bool MplsTp::TpLinks::has_operation() const
{
    return is_set(yfilter)
	|| (tp_detail_links !=  nullptr && tp_detail_links->has_operation())
	|| (tp_link_summary !=  nullptr && tp_link_summary->has_operation())
	|| (tp_links !=  nullptr && tp_links->has_operation());
}

std::string MplsTp::TpLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-links")
    {
        if(tp_detail_links == nullptr)
        {
            tp_detail_links = std::make_shared<MplsTp::TpLinks::TpDetailLinks>();
        }
        return tp_detail_links;
    }

    if(child_yang_name == "tp-link-summary")
    {
        if(tp_link_summary == nullptr)
        {
            tp_link_summary = std::make_shared<MplsTp::TpLinks::TpLinkSummary>();
        }
        return tp_link_summary;
    }

    if(child_yang_name == "tp-links")
    {
        if(tp_links == nullptr)
        {
            tp_links = std::make_shared<MplsTp::TpLinks::TpLinks_>();
        }
        return tp_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tp_detail_links != nullptr)
    {
        children["tp-detail-links"] = tp_detail_links;
    }

    if(tp_link_summary != nullptr)
    {
        children["tp-link-summary"] = tp_link_summary;
    }

    if(tp_links != nullptr)
    {
        children["tp-links"] = tp_links;
    }

    return children;
}

void MplsTp::TpLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-links" || name == "tp-link-summary" || name == "tp-links")
        return true;
    return false;
}

MplsTp::TpLinks::TpDetailLinks::TpDetailLinks()
{

    yang_name = "tp-detail-links"; yang_parent_name = "tp-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpLinks::TpDetailLinks::~TpDetailLinks()
{
}

bool MplsTp::TpLinks::TpDetailLinks::has_data() const
{
    for (std::size_t index=0; index<tp_detail_link.size(); index++)
    {
        if(tp_detail_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpLinks::TpDetailLinks::has_operation() const
{
    for (std::size_t index=0; index<tp_detail_link.size(); index++)
    {
        if(tp_detail_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpLinks::TpDetailLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpDetailLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpDetailLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpDetailLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-link")
    {
        auto c = std::make_shared<MplsTp::TpLinks::TpDetailLinks::TpDetailLink>();
        c->parent = this;
        tp_detail_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpLinks::TpDetailLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tp_detail_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTp::TpLinks::TpDetailLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpLinks::TpDetailLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpLinks::TpDetailLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-link")
        return true;
    return false;
}

MplsTp::TpLinks::TpDetailLinks::TpDetailLink::TpDetailLink()
    :
    tp_link_id{YType::int32, "tp-link-id"},
    link_id{YType::uint32, "link-id"},
    interface{YType::str, "interface"},
    next_hop_address{YType::str, "next-hop-address"},
    link_state{YType::enumeration, "link-state"},
    ls_ps{YType::uint32, "ls-ps"},
    reserved_bandwidth{YType::uint64, "reserved-bandwidth"},
    available_bandwidth{YType::uint64, "available-bandwidth"},
    unsupported_linecard{YType::boolean, "unsupported-linecard"}
{

    yang_name = "tp-detail-link"; yang_parent_name = "tp-detail-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpLinks::TpDetailLinks::TpDetailLink::~TpDetailLink()
{
}

bool MplsTp::TpLinks::TpDetailLinks::TpDetailLink::has_data() const
{
    return tp_link_id.is_set
	|| link_id.is_set
	|| interface.is_set
	|| next_hop_address.is_set
	|| link_state.is_set
	|| ls_ps.is_set
	|| reserved_bandwidth.is_set
	|| available_bandwidth.is_set
	|| unsupported_linecard.is_set;
}

bool MplsTp::TpLinks::TpDetailLinks::TpDetailLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_link_id.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(link_state.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(unsupported_linecard.yfilter);
}

std::string MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/tp-detail-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-link" <<"[tp-link-id='" <<tp_link_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_link_id.is_set || is_set(tp_link_id.yfilter)) leaf_name_data.push_back(tp_link_id.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (link_state.is_set || is_set(link_state.yfilter)) leaf_name_data.push_back(link_state.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (unsupported_linecard.is_set || is_set(unsupported_linecard.yfilter)) leaf_name_data.push_back(unsupported_linecard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpLinks::TpDetailLinks::TpDetailLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id = value;
        tp_link_id.value_namespace = name_space;
        tp_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-state")
    {
        link_state = value;
        link_state.value_namespace = name_space;
        link_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsupported-linecard")
    {
        unsupported_linecard = value;
        unsupported_linecard.value_namespace = name_space;
        unsupported_linecard.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpLinks::TpDetailLinks::TpDetailLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "link-state")
    {
        link_state.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unsupported-linecard")
    {
        unsupported_linecard.yfilter = yfilter;
    }
}

bool MplsTp::TpLinks::TpDetailLinks::TpDetailLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-link-id" || name == "link-id" || name == "interface" || name == "next-hop-address" || name == "link-state" || name == "ls-ps" || name == "reserved-bandwidth" || name == "available-bandwidth" || name == "unsupported-linecard")
        return true;
    return false;
}

MplsTp::TpLinks::TpLinkSummary::TpLinkSummary()
    :
    links{YType::uint32, "links"}
{

    yang_name = "tp-link-summary"; yang_parent_name = "tp-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpLinks::TpLinkSummary::~TpLinkSummary()
{
}

bool MplsTp::TpLinks::TpLinkSummary::has_data() const
{
    return links.is_set;
}

bool MplsTp::TpLinks::TpLinkSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(links.yfilter);
}

std::string MplsTp::TpLinks::TpLinkSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpLinkSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-link-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpLinkSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpLinkSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpLinks::TpLinkSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpLinks::TpLinkSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpLinks::TpLinkSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
}

bool MplsTp::TpLinks::TpLinkSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "links")
        return true;
    return false;
}

MplsTp::TpLinks::TpLinks_::TpLinks_()
{

    yang_name = "tp-links"; yang_parent_name = "tp-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpLinks::TpLinks_::~TpLinks_()
{
}

bool MplsTp::TpLinks::TpLinks_::has_data() const
{
    for (std::size_t index=0; index<tp_link.size(); index++)
    {
        if(tp_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpLinks::TpLinks_::has_operation() const
{
    for (std::size_t index=0; index<tp_link.size(); index++)
    {
        if(tp_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpLinks::TpLinks_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpLinks_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpLinks_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpLinks_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-link")
    {
        auto c = std::make_shared<MplsTp::TpLinks::TpLinks_::TpLink>();
        c->parent = this;
        tp_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpLinks::TpLinks_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tp_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTp::TpLinks::TpLinks_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpLinks::TpLinks_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpLinks::TpLinks_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-link")
        return true;
    return false;
}

MplsTp::TpLinks::TpLinks_::TpLink::TpLink()
    :
    tp_link_id{YType::int32, "tp-link-id"},
    link_id{YType::uint32, "link-id"},
    interface{YType::str, "interface"},
    next_hop_address{YType::str, "next-hop-address"},
    link_state{YType::enumeration, "link-state"},
    available_bandwidth{YType::uint64, "available-bandwidth"}
{

    yang_name = "tp-link"; yang_parent_name = "tp-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpLinks::TpLinks_::TpLink::~TpLink()
{
}

bool MplsTp::TpLinks::TpLinks_::TpLink::has_data() const
{
    return tp_link_id.is_set
	|| link_id.is_set
	|| interface.is_set
	|| next_hop_address.is_set
	|| link_state.is_set
	|| available_bandwidth.is_set;
}

bool MplsTp::TpLinks::TpLinks_::TpLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_link_id.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(link_state.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter);
}

std::string MplsTp::TpLinks::TpLinks_::TpLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/tp-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpLinks::TpLinks_::TpLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-link" <<"[tp-link-id='" <<tp_link_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpLinks::TpLinks_::TpLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_link_id.is_set || is_set(tp_link_id.yfilter)) leaf_name_data.push_back(tp_link_id.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (link_state.is_set || is_set(link_state.yfilter)) leaf_name_data.push_back(link_state.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpLinks_::TpLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpLinks::TpLinks_::TpLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpLinks::TpLinks_::TpLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id = value;
        tp_link_id.value_namespace = name_space;
        tp_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-state")
    {
        link_state = value;
        link_state.value_namespace = name_space;
        link_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpLinks::TpLinks_::TpLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "link-state")
    {
        link_state.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
}

bool MplsTp::TpLinks::TpLinks_::TpLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-link-id" || name == "link-id" || name == "interface" || name == "next-hop-address" || name == "link-state" || name == "available-bandwidth")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels()
    :
    tp_tunnel_summary(std::make_shared<MplsTp::TpTunnels::TpTunnelSummary>())
	,tp_detail_tunnels(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels>())
	,tp_tunnels(std::make_shared<MplsTp::TpTunnels::TpTunnels_>())
{
    tp_tunnel_summary->parent = this;
    tp_detail_tunnels->parent = this;
    tp_tunnels->parent = this;

    yang_name = "tp-tunnels"; yang_parent_name = "mpls-tp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpTunnels::~TpTunnels()
{
}

bool MplsTp::TpTunnels::has_data() const
{
    return (tp_tunnel_summary !=  nullptr && tp_tunnel_summary->has_data())
	|| (tp_detail_tunnels !=  nullptr && tp_detail_tunnels->has_data())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_data());
}

bool MplsTp::TpTunnels::has_operation() const
{
    return is_set(yfilter)
	|| (tp_tunnel_summary !=  nullptr && tp_tunnel_summary->has_operation())
	|| (tp_detail_tunnels !=  nullptr && tp_detail_tunnels->has_operation())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_operation());
}

std::string MplsTp::TpTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-tunnel-summary")
    {
        if(tp_tunnel_summary == nullptr)
        {
            tp_tunnel_summary = std::make_shared<MplsTp::TpTunnels::TpTunnelSummary>();
        }
        return tp_tunnel_summary;
    }

    if(child_yang_name == "tp-detail-tunnels")
    {
        if(tp_detail_tunnels == nullptr)
        {
            tp_detail_tunnels = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels>();
        }
        return tp_detail_tunnels;
    }

    if(child_yang_name == "tp-tunnels")
    {
        if(tp_tunnels == nullptr)
        {
            tp_tunnels = std::make_shared<MplsTp::TpTunnels::TpTunnels_>();
        }
        return tp_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tp_tunnel_summary != nullptr)
    {
        children["tp-tunnel-summary"] = tp_tunnel_summary;
    }

    if(tp_detail_tunnels != nullptr)
    {
        children["tp-detail-tunnels"] = tp_detail_tunnels;
    }

    if(tp_tunnels != nullptr)
    {
        children["tp-tunnels"] = tp_tunnels;
    }

    return children;
}

void MplsTp::TpTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-tunnel-summary" || name == "tp-detail-tunnels" || name == "tp-tunnels")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnelSummary::TpTunnelSummary()
    :
    up_working_ls_ps{YType::uint32, "up-working-ls-ps"},
    active_working_ls_ps{YType::uint32, "active-working-ls-ps"},
    down_working_ls_ps{YType::uint32, "down-working-ls-ps"},
    locked_working_ls_ps{YType::uint32, "locked-working-ls-ps"},
    up_protect_ls_ps{YType::uint32, "up-protect-ls-ps"},
    active_protect_ls_ps{YType::uint32, "active-protect-ls-ps"},
    down_protect_ls_ps{YType::uint32, "down-protect-ls-ps"},
    locked_protect_ls_ps{YType::uint32, "locked-protect-ls-ps"},
    up_tunnels{YType::uint32, "up-tunnels"},
    down_tunnels{YType::uint32, "down-tunnels"},
    admin_down_tunnels{YType::uint32, "admin-down-tunnels"},
    complete_fec_working_ls_ps{YType::uint32, "complete-fec-working-ls-ps"},
    complete_fec_protect_ls_ps{YType::uint32, "complete-fec-protect-ls-ps"},
    bfd_session_working_ls_ps{YType::uint32, "bfd-session-working-ls-ps"},
    bfd_session_protect_ls_ps{YType::uint32, "bfd-session-protect-ls-ps"}
{

    yang_name = "tp-tunnel-summary"; yang_parent_name = "tp-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpTunnels::TpTunnelSummary::~TpTunnelSummary()
{
}

bool MplsTp::TpTunnels::TpTunnelSummary::has_data() const
{
    return up_working_ls_ps.is_set
	|| active_working_ls_ps.is_set
	|| down_working_ls_ps.is_set
	|| locked_working_ls_ps.is_set
	|| up_protect_ls_ps.is_set
	|| active_protect_ls_ps.is_set
	|| down_protect_ls_ps.is_set
	|| locked_protect_ls_ps.is_set
	|| up_tunnels.is_set
	|| down_tunnels.is_set
	|| admin_down_tunnels.is_set
	|| complete_fec_working_ls_ps.is_set
	|| complete_fec_protect_ls_ps.is_set
	|| bfd_session_working_ls_ps.is_set
	|| bfd_session_protect_ls_ps.is_set;
}

bool MplsTp::TpTunnels::TpTunnelSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_working_ls_ps.yfilter)
	|| ydk::is_set(active_working_ls_ps.yfilter)
	|| ydk::is_set(down_working_ls_ps.yfilter)
	|| ydk::is_set(locked_working_ls_ps.yfilter)
	|| ydk::is_set(up_protect_ls_ps.yfilter)
	|| ydk::is_set(active_protect_ls_ps.yfilter)
	|| ydk::is_set(down_protect_ls_ps.yfilter)
	|| ydk::is_set(locked_protect_ls_ps.yfilter)
	|| ydk::is_set(up_tunnels.yfilter)
	|| ydk::is_set(down_tunnels.yfilter)
	|| ydk::is_set(admin_down_tunnels.yfilter)
	|| ydk::is_set(complete_fec_working_ls_ps.yfilter)
	|| ydk::is_set(complete_fec_protect_ls_ps.yfilter)
	|| ydk::is_set(bfd_session_working_ls_ps.yfilter)
	|| ydk::is_set(bfd_session_protect_ls_ps.yfilter);
}

std::string MplsTp::TpTunnels::TpTunnelSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpTunnelSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnel-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnelSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_working_ls_ps.is_set || is_set(up_working_ls_ps.yfilter)) leaf_name_data.push_back(up_working_ls_ps.get_name_leafdata());
    if (active_working_ls_ps.is_set || is_set(active_working_ls_ps.yfilter)) leaf_name_data.push_back(active_working_ls_ps.get_name_leafdata());
    if (down_working_ls_ps.is_set || is_set(down_working_ls_ps.yfilter)) leaf_name_data.push_back(down_working_ls_ps.get_name_leafdata());
    if (locked_working_ls_ps.is_set || is_set(locked_working_ls_ps.yfilter)) leaf_name_data.push_back(locked_working_ls_ps.get_name_leafdata());
    if (up_protect_ls_ps.is_set || is_set(up_protect_ls_ps.yfilter)) leaf_name_data.push_back(up_protect_ls_ps.get_name_leafdata());
    if (active_protect_ls_ps.is_set || is_set(active_protect_ls_ps.yfilter)) leaf_name_data.push_back(active_protect_ls_ps.get_name_leafdata());
    if (down_protect_ls_ps.is_set || is_set(down_protect_ls_ps.yfilter)) leaf_name_data.push_back(down_protect_ls_ps.get_name_leafdata());
    if (locked_protect_ls_ps.is_set || is_set(locked_protect_ls_ps.yfilter)) leaf_name_data.push_back(locked_protect_ls_ps.get_name_leafdata());
    if (up_tunnels.is_set || is_set(up_tunnels.yfilter)) leaf_name_data.push_back(up_tunnels.get_name_leafdata());
    if (down_tunnels.is_set || is_set(down_tunnels.yfilter)) leaf_name_data.push_back(down_tunnels.get_name_leafdata());
    if (admin_down_tunnels.is_set || is_set(admin_down_tunnels.yfilter)) leaf_name_data.push_back(admin_down_tunnels.get_name_leafdata());
    if (complete_fec_working_ls_ps.is_set || is_set(complete_fec_working_ls_ps.yfilter)) leaf_name_data.push_back(complete_fec_working_ls_ps.get_name_leafdata());
    if (complete_fec_protect_ls_ps.is_set || is_set(complete_fec_protect_ls_ps.yfilter)) leaf_name_data.push_back(complete_fec_protect_ls_ps.get_name_leafdata());
    if (bfd_session_working_ls_ps.is_set || is_set(bfd_session_working_ls_ps.yfilter)) leaf_name_data.push_back(bfd_session_working_ls_ps.get_name_leafdata());
    if (bfd_session_protect_ls_ps.is_set || is_set(bfd_session_protect_ls_ps.yfilter)) leaf_name_data.push_back(bfd_session_protect_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnelSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpTunnelSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpTunnels::TpTunnelSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-working-ls-ps")
    {
        up_working_ls_ps = value;
        up_working_ls_ps.value_namespace = name_space;
        up_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-working-ls-ps")
    {
        active_working_ls_ps = value;
        active_working_ls_ps.value_namespace = name_space;
        active_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-working-ls-ps")
    {
        down_working_ls_ps = value;
        down_working_ls_ps.value_namespace = name_space;
        down_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-working-ls-ps")
    {
        locked_working_ls_ps = value;
        locked_working_ls_ps.value_namespace = name_space;
        locked_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-protect-ls-ps")
    {
        up_protect_ls_ps = value;
        up_protect_ls_ps.value_namespace = name_space;
        up_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-protect-ls-ps")
    {
        active_protect_ls_ps = value;
        active_protect_ls_ps.value_namespace = name_space;
        active_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-protect-ls-ps")
    {
        down_protect_ls_ps = value;
        down_protect_ls_ps.value_namespace = name_space;
        down_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-protect-ls-ps")
    {
        locked_protect_ls_ps = value;
        locked_protect_ls_ps.value_namespace = name_space;
        locked_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-tunnels")
    {
        up_tunnels = value;
        up_tunnels.value_namespace = name_space;
        up_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-tunnels")
    {
        down_tunnels = value;
        down_tunnels.value_namespace = name_space;
        down_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-down-tunnels")
    {
        admin_down_tunnels = value;
        admin_down_tunnels.value_namespace = name_space;
        admin_down_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-fec-working-ls-ps")
    {
        complete_fec_working_ls_ps = value;
        complete_fec_working_ls_ps.value_namespace = name_space;
        complete_fec_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "complete-fec-protect-ls-ps")
    {
        complete_fec_protect_ls_ps = value;
        complete_fec_protect_ls_ps.value_namespace = name_space;
        complete_fec_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-working-ls-ps")
    {
        bfd_session_working_ls_ps = value;
        bfd_session_working_ls_ps.value_namespace = name_space;
        bfd_session_working_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-protect-ls-ps")
    {
        bfd_session_protect_ls_ps = value;
        bfd_session_protect_ls_ps.value_namespace = name_space;
        bfd_session_protect_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpTunnelSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-working-ls-ps")
    {
        up_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "active-working-ls-ps")
    {
        active_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "down-working-ls-ps")
    {
        down_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "locked-working-ls-ps")
    {
        locked_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-protect-ls-ps")
    {
        up_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "active-protect-ls-ps")
    {
        active_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "down-protect-ls-ps")
    {
        down_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "locked-protect-ls-ps")
    {
        locked_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-tunnels")
    {
        up_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-tunnels")
    {
        down_tunnels.yfilter = yfilter;
    }
    if(value_path == "admin-down-tunnels")
    {
        admin_down_tunnels.yfilter = yfilter;
    }
    if(value_path == "complete-fec-working-ls-ps")
    {
        complete_fec_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "complete-fec-protect-ls-ps")
    {
        complete_fec_protect_ls_ps.yfilter = yfilter;
    }
    if(value_path == "bfd-session-working-ls-ps")
    {
        bfd_session_working_ls_ps.yfilter = yfilter;
    }
    if(value_path == "bfd-session-protect-ls-ps")
    {
        bfd_session_protect_ls_ps.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpTunnelSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-working-ls-ps" || name == "active-working-ls-ps" || name == "down-working-ls-ps" || name == "locked-working-ls-ps" || name == "up-protect-ls-ps" || name == "active-protect-ls-ps" || name == "down-protect-ls-ps" || name == "locked-protect-ls-ps" || name == "up-tunnels" || name == "down-tunnels" || name == "admin-down-tunnels" || name == "complete-fec-working-ls-ps" || name == "complete-fec-protect-ls-ps" || name == "bfd-session-working-ls-ps" || name == "bfd-session-protect-ls-ps")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnels()
{

    yang_name = "tp-detail-tunnels"; yang_parent_name = "tp-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpTunnels::TpDetailTunnels::~TpDetailTunnels()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::has_data() const
{
    for (std::size_t index=0; index<tp_detail_tunnel.size(); index++)
    {
        if(tp_detail_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpTunnels::TpDetailTunnels::has_operation() const
{
    for (std::size_t index=0; index<tp_detail_tunnel.size(); index++)
    {
        if(tp_detail_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpDetailTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-tunnel")
    {
        auto c = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel>();
        c->parent = this;
        tp_detail_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tp_detail_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpTunnels::TpDetailTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-tunnel")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::TpDetailTunnel()
    :
    tp_tunnel_name{YType::str, "tp-tunnel-name"},
    req_bandwidth{YType::uint32, "req-bandwidth"},
    oam_interval{YType::uint32, "oam-interval"},
    bfd_interval_active{YType::uint32, "bfd-interval-active"},
    bfd_interval_active_in_micro_sec{YType::boolean, "bfd-interval-active-in-micro-sec"},
    bfd_multiplier_active{YType::uint32, "bfd-multiplier-active"},
    bfd_interval_standby{YType::uint32, "bfd-interval-standby"},
    bfd_interval_standby_in_micro_sec{YType::boolean, "bfd-interval-standby-in-micro-sec"},
    bfd_multiplier_standby{YType::uint32, "bfd-multiplier-standby"},
    tunnel_up_time{YType::uint32, "tunnel-up-time"},
    switchover_trig{YType::enumeration, "switchover-trig"},
    switch_over_time{YType::uint32, "switch-over-time"}
    	,
    tunnel(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel>())
	,working_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp>())
	,protect_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp>())
	,oam_protection_triggers(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers>())
{
    tunnel->parent = this;
    working_lsp->parent = this;
    protect_lsp->parent = this;
    oam_protection_triggers->parent = this;

    yang_name = "tp-detail-tunnel"; yang_parent_name = "tp-detail-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::~TpDetailTunnel()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::has_data() const
{
    return tp_tunnel_name.is_set
	|| req_bandwidth.is_set
	|| oam_interval.is_set
	|| bfd_interval_active.is_set
	|| bfd_interval_active_in_micro_sec.is_set
	|| bfd_multiplier_active.is_set
	|| bfd_interval_standby.is_set
	|| bfd_interval_standby_in_micro_sec.is_set
	|| bfd_multiplier_standby.is_set
	|| tunnel_up_time.is_set
	|| switchover_trig.is_set
	|| switch_over_time.is_set
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data())
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_tunnel_name.yfilter)
	|| ydk::is_set(req_bandwidth.yfilter)
	|| ydk::is_set(oam_interval.yfilter)
	|| ydk::is_set(bfd_interval_active.yfilter)
	|| ydk::is_set(bfd_interval_active_in_micro_sec.yfilter)
	|| ydk::is_set(bfd_multiplier_active.yfilter)
	|| ydk::is_set(bfd_interval_standby.yfilter)
	|| ydk::is_set(bfd_interval_standby_in_micro_sec.yfilter)
	|| ydk::is_set(bfd_multiplier_standby.yfilter)
	|| ydk::is_set(tunnel_up_time.yfilter)
	|| ydk::is_set(switchover_trig.yfilter)
	|| ydk::is_set(switch_over_time.yfilter)
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation())
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/tp-detail-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-tunnel" <<"[tp-tunnel-name='" <<tp_tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_tunnel_name.is_set || is_set(tp_tunnel_name.yfilter)) leaf_name_data.push_back(tp_tunnel_name.get_name_leafdata());
    if (req_bandwidth.is_set || is_set(req_bandwidth.yfilter)) leaf_name_data.push_back(req_bandwidth.get_name_leafdata());
    if (oam_interval.is_set || is_set(oam_interval.yfilter)) leaf_name_data.push_back(oam_interval.get_name_leafdata());
    if (bfd_interval_active.is_set || is_set(bfd_interval_active.yfilter)) leaf_name_data.push_back(bfd_interval_active.get_name_leafdata());
    if (bfd_interval_active_in_micro_sec.is_set || is_set(bfd_interval_active_in_micro_sec.yfilter)) leaf_name_data.push_back(bfd_interval_active_in_micro_sec.get_name_leafdata());
    if (bfd_multiplier_active.is_set || is_set(bfd_multiplier_active.yfilter)) leaf_name_data.push_back(bfd_multiplier_active.get_name_leafdata());
    if (bfd_interval_standby.is_set || is_set(bfd_interval_standby.yfilter)) leaf_name_data.push_back(bfd_interval_standby.get_name_leafdata());
    if (bfd_interval_standby_in_micro_sec.is_set || is_set(bfd_interval_standby_in_micro_sec.yfilter)) leaf_name_data.push_back(bfd_interval_standby_in_micro_sec.get_name_leafdata());
    if (bfd_multiplier_standby.is_set || is_set(bfd_multiplier_standby.yfilter)) leaf_name_data.push_back(bfd_multiplier_standby.get_name_leafdata());
    if (tunnel_up_time.is_set || is_set(tunnel_up_time.yfilter)) leaf_name_data.push_back(tunnel_up_time.get_name_leafdata());
    if (switchover_trig.is_set || is_set(switchover_trig.yfilter)) leaf_name_data.push_back(switchover_trig.get_name_leafdata());
    if (switch_over_time.is_set || is_set(switch_over_time.yfilter)) leaf_name_data.push_back(switch_over_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp>();
        }
        return working_lsp;
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp>();
        }
        return protect_lsp;
    }

    if(child_yang_name == "oam-protection-triggers")
    {
        if(oam_protection_triggers == nullptr)
        {
            oam_protection_triggers = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers>();
        }
        return oam_protection_triggers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    if(working_lsp != nullptr)
    {
        children["working-lsp"] = working_lsp;
    }

    if(protect_lsp != nullptr)
    {
        children["protect-lsp"] = protect_lsp;
    }

    if(oam_protection_triggers != nullptr)
    {
        children["oam-protection-triggers"] = oam_protection_triggers;
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name = value;
        tp_tunnel_name.value_namespace = name_space;
        tp_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req-bandwidth")
    {
        req_bandwidth = value;
        req_bandwidth.value_namespace = name_space;
        req_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-interval")
    {
        oam_interval = value;
        oam_interval.value_namespace = name_space;
        oam_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-active")
    {
        bfd_interval_active = value;
        bfd_interval_active.value_namespace = name_space;
        bfd_interval_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-active-in-micro-sec")
    {
        bfd_interval_active_in_micro_sec = value;
        bfd_interval_active_in_micro_sec.value_namespace = name_space;
        bfd_interval_active_in_micro_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier-active")
    {
        bfd_multiplier_active = value;
        bfd_multiplier_active.value_namespace = name_space;
        bfd_multiplier_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-standby")
    {
        bfd_interval_standby = value;
        bfd_interval_standby.value_namespace = name_space;
        bfd_interval_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval-standby-in-micro-sec")
    {
        bfd_interval_standby_in_micro_sec = value;
        bfd_interval_standby_in_micro_sec.value_namespace = name_space;
        bfd_interval_standby_in_micro_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier-standby")
    {
        bfd_multiplier_standby = value;
        bfd_multiplier_standby.value_namespace = name_space;
        bfd_multiplier_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-up-time")
    {
        tunnel_up_time = value;
        tunnel_up_time.value_namespace = name_space;
        tunnel_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-trig")
    {
        switchover_trig = value;
        switchover_trig.value_namespace = name_space;
        switchover_trig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-over-time")
    {
        switch_over_time = value;
        switch_over_time.value_namespace = name_space;
        switch_over_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "req-bandwidth")
    {
        req_bandwidth.yfilter = yfilter;
    }
    if(value_path == "oam-interval")
    {
        oam_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-active")
    {
        bfd_interval_active.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-active-in-micro-sec")
    {
        bfd_interval_active_in_micro_sec.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier-active")
    {
        bfd_multiplier_active.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-standby")
    {
        bfd_interval_standby.yfilter = yfilter;
    }
    if(value_path == "bfd-interval-standby-in-micro-sec")
    {
        bfd_interval_standby_in_micro_sec.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier-standby")
    {
        bfd_multiplier_standby.yfilter = yfilter;
    }
    if(value_path == "tunnel-up-time")
    {
        tunnel_up_time.yfilter = yfilter;
    }
    if(value_path == "switchover-trig")
    {
        switchover_trig.yfilter = yfilter;
    }
    if(value_path == "switch-over-time")
    {
        switch_over_time.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "working-lsp" || name == "protect-lsp" || name == "oam-protection-triggers" || name == "tp-tunnel-name" || name == "req-bandwidth" || name == "oam-interval" || name == "bfd-interval-active" || name == "bfd-interval-active-in-micro-sec" || name == "bfd-multiplier-active" || name == "bfd-interval-standby" || name == "bfd-interval-standby-in-micro-sec" || name == "bfd-multiplier-standby" || name == "tunnel-up-time" || name == "switchover-trig" || name == "switch-over-time")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    source_node_id{YType::str, "source-node-id"},
    source_global_id{YType::uint32, "source-global-id"},
    destination_node_id{YType::str, "destination-node-id"},
    destination_global_id{YType::uint32, "destination-global-id"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    admin_status{YType::enumeration, "admin-status"},
    operation_status{YType::enumeration, "operation-status"},
    active_lsp{YType::enumeration, "active-lsp"}
    	,
    working_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp>())
	,protect_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp>())
{
    working_lsp->parent = this;
    protect_lsp->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tp-detail-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::~Tunnel()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| source_tunnel_id.is_set
	|| source_node_id.is_set
	|| source_global_id.is_set
	|| destination_node_id.is_set
	|| destination_global_id.is_set
	|| remote_tunnel_id.is_set
	|| admin_status.is_set
	|| operation_status.is_set
	|| active_lsp.is_set
	|| (working_lsp !=  nullptr && working_lsp->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(destination_node_id.yfilter)
	|| ydk::is_set(destination_global_id.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(operation_status.yfilter)
	|| ydk::is_set(active_lsp.yfilter)
	|| (working_lsp !=  nullptr && working_lsp->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.yfilter)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (destination_global_id.is_set || is_set(destination_global_id.yfilter)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (operation_status.is_set || is_set(operation_status.yfilter)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (active_lsp.is_set || is_set(active_lsp.yfilter)) leaf_name_data.push_back(active_lsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp>();
        }
        return working_lsp;
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp>();
        }
        return protect_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(working_lsp != nullptr)
    {
        children["working-lsp"] = working_lsp;
    }

    if(protect_lsp != nullptr)
    {
        children["protect-lsp"] = protect_lsp;
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
        source_node_id.value_namespace = name_space;
        source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
        source_global_id.value_namespace = name_space;
        source_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
        destination_node_id.value_namespace = name_space;
        destination_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
        destination_global_id.value_namespace = name_space;
        destination_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-status")
    {
        operation_status = value;
        operation_status.value_namespace = name_space;
        operation_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-lsp")
    {
        active_lsp = value;
        active_lsp.value_namespace = name_space;
        active_lsp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id.yfilter = yfilter;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "operation-status")
    {
        operation_status.yfilter = yfilter;
    }
    if(value_path == "active-lsp")
    {
        active_lsp.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "working-lsp" || name == "protect-lsp" || name == "tunnel-name" || name == "source-tunnel-id" || name == "source-node-id" || name == "source-global-id" || name == "destination-node-id" || name == "destination-global-id" || name == "remote-tunnel-id" || name == "admin-status" || name == "operation-status" || name == "active-lsp")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::WorkingLsp()
    :
    lsp_id{YType::uint32, "lsp-id"},
    state{YType::enumeration, "state"},
    lock_out{YType::boolean, "lock-out"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"},
    bfd_state{YType::enumeration, "bfd-state"}
{

    yang_name = "working-lsp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::~WorkingLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::has_data() const
{
    return lsp_id.is_set
	|| state.is_set
	|| lock_out.is_set
	|| rx_oam_state.is_set
	|| tx_oam_state.is_set
	|| bfd_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter)
	|| ydk::is_set(bfd_state.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());
    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "state" || name == "lock-out" || name == "rx-oam-state" || name == "tx-oam-state" || name == "bfd-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::ProtectLsp()
    :
    lsp_id{YType::uint32, "lsp-id"},
    state{YType::enumeration, "state"},
    lock_out{YType::boolean, "lock-out"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"},
    bfd_state{YType::enumeration, "bfd-state"}
{

    yang_name = "protect-lsp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::~ProtectLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::has_data() const
{
    return lsp_id.is_set
	|| state.is_set
	|| lock_out.is_set
	|| rx_oam_state.is_set
	|| tx_oam_state.is_set
	|| bfd_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter)
	|| ydk::is_set(bfd_state.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());
    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "state" || name == "lock-out" || name == "rx-oam-state" || name == "tx-oam-state" || name == "bfd-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::WorkingLsp()
    :
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    tp_out_label{YType::uint32, "tp-out-label"},
    link_id{YType::uint32, "link-id"},
    out_interface_name{YType::str, "out-interface-name"},
    out_next_hop{YType::str, "out-next-hop"},
    in_label{YType::uint32, "in-label"},
    reserved_bandwidth{YType::uint32, "reserved-bandwidth"}
    	,
    brief_information(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation>())
{
    brief_information->parent = this;

    yang_name = "working-lsp"; yang_parent_name = "tp-detail-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::~WorkingLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::has_data() const
{
    return oam_refresh_interval.is_set
	|| tp_out_label.is_set
	|| link_id.is_set
	|| out_interface_name.is_set
	|| out_next_hop.is_set
	|| in_label.is_set
	|| reserved_bandwidth.is_set
	|| (brief_information !=  nullptr && brief_information->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oam_refresh_interval.yfilter)
	|| ydk::is_set(tp_out_label.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(out_interface_name.yfilter)
	|| ydk::is_set(out_next_hop.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter)
	|| (brief_information !=  nullptr && brief_information->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.yfilter)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (tp_out_label.is_set || is_set(tp_out_label.yfilter)) leaf_name_data.push_back(tp_out_label.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.yfilter)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());
    if (out_next_hop.is_set || is_set(out_next_hop.yfilter)) leaf_name_data.push_back(out_next_hop.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-information")
    {
        if(brief_information == nullptr)
        {
            brief_information = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation>();
        }
        return brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(brief_information != nullptr)
    {
        children["brief-information"] = brief_information;
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
        oam_refresh_interval.value_namespace = name_space;
        oam_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label = value;
        tp_out_label.value_namespace = name_space;
        tp_out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
        out_interface_name.value_namespace = name_space;
        out_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop = value;
        out_next_hop.value_namespace = name_space;
        out_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name.yfilter = yfilter;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-information" || name == "oam-refresh-interval" || name == "tp-out-label" || name == "link-id" || name == "out-interface-name" || name == "out-next-hop" || name == "in-label" || name == "reserved-bandwidth")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::BriefInformation()
    :
    lsp_id{YType::uint32, "lsp-id"},
    state{YType::enumeration, "state"},
    lock_out{YType::boolean, "lock-out"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"},
    bfd_state{YType::enumeration, "bfd-state"}
{

    yang_name = "brief-information"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::~BriefInformation()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::has_data() const
{
    return lsp_id.is_set
	|| state.is_set
	|| lock_out.is_set
	|| rx_oam_state.is_set
	|| tx_oam_state.is_set
	|| bfd_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter)
	|| ydk::is_set(bfd_state.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());
    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "state" || name == "lock-out" || name == "rx-oam-state" || name == "tx-oam-state" || name == "bfd-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::ProtectLsp()
    :
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    tp_out_label{YType::uint32, "tp-out-label"},
    link_id{YType::uint32, "link-id"},
    out_interface_name{YType::str, "out-interface-name"},
    out_next_hop{YType::str, "out-next-hop"},
    in_label{YType::uint32, "in-label"},
    reserved_bandwidth{YType::uint32, "reserved-bandwidth"}
    	,
    brief_information(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation>())
{
    brief_information->parent = this;

    yang_name = "protect-lsp"; yang_parent_name = "tp-detail-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::~ProtectLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::has_data() const
{
    return oam_refresh_interval.is_set
	|| tp_out_label.is_set
	|| link_id.is_set
	|| out_interface_name.is_set
	|| out_next_hop.is_set
	|| in_label.is_set
	|| reserved_bandwidth.is_set
	|| (brief_information !=  nullptr && brief_information->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oam_refresh_interval.yfilter)
	|| ydk::is_set(tp_out_label.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(out_interface_name.yfilter)
	|| ydk::is_set(out_next_hop.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter)
	|| (brief_information !=  nullptr && brief_information->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.yfilter)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (tp_out_label.is_set || is_set(tp_out_label.yfilter)) leaf_name_data.push_back(tp_out_label.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.yfilter)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());
    if (out_next_hop.is_set || is_set(out_next_hop.yfilter)) leaf_name_data.push_back(out_next_hop.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-information")
    {
        if(brief_information == nullptr)
        {
            brief_information = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation>();
        }
        return brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(brief_information != nullptr)
    {
        children["brief-information"] = brief_information;
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
        oam_refresh_interval.value_namespace = name_space;
        oam_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label = value;
        tp_out_label.value_namespace = name_space;
        tp_out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
        out_interface_name.value_namespace = name_space;
        out_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop = value;
        out_next_hop.value_namespace = name_space;
        out_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name.yfilter = yfilter;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-information" || name == "oam-refresh-interval" || name == "tp-out-label" || name == "link-id" || name == "out-interface-name" || name == "out-next-hop" || name == "in-label" || name == "reserved-bandwidth")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::BriefInformation()
    :
    lsp_id{YType::uint32, "lsp-id"},
    state{YType::enumeration, "state"},
    lock_out{YType::boolean, "lock-out"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"},
    bfd_state{YType::enumeration, "bfd-state"}
{

    yang_name = "brief-information"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::~BriefInformation()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::has_data() const
{
    return lsp_id.is_set
	|| state.is_set
	|| lock_out.is_set
	|| rx_oam_state.is_set
	|| tx_oam_state.is_set
	|| bfd_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter)
	|| ydk::is_set(bfd_state.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());
    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "state" || name == "lock-out" || name == "rx-oam-state" || name == "tx-oam-state" || name == "bfd-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::OamProtectionTriggers()
    :
    ais{YType::boolean, "ais"},
    ldi{YType::boolean, "ldi"},
    lkr{YType::boolean, "lkr"}
{

    yang_name = "oam-protection-triggers"; yang_parent_name = "tp-detail-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::~OamProtectionTriggers()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::has_data() const
{
    return ais.is_set
	|| ldi.is_set
	|| lkr.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ais.yfilter)
	|| ydk::is_set(ldi.yfilter)
	|| ydk::is_set(lkr.yfilter);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-protection-triggers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.yfilter)) leaf_name_data.push_back(ais.get_name_leafdata());
    if (ldi.is_set || is_set(ldi.yfilter)) leaf_name_data.push_back(ldi.get_name_leafdata());
    if (lkr.is_set || is_set(lkr.yfilter)) leaf_name_data.push_back(lkr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ais")
    {
        ais = value;
        ais.value_namespace = name_space;
        ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldi")
    {
        ldi = value;
        ldi.value_namespace = name_space;
        ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lkr")
    {
        lkr = value;
        lkr.value_namespace = name_space;
        lkr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ais")
    {
        ais.yfilter = yfilter;
    }
    if(value_path == "ldi")
    {
        ldi.yfilter = yfilter;
    }
    if(value_path == "lkr")
    {
        lkr.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ais" || name == "ldi" || name == "lkr")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnels_()
{

    yang_name = "tp-tunnels"; yang_parent_name = "tp-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpTunnels::TpTunnels_::~TpTunnels_()
{
}

bool MplsTp::TpTunnels::TpTunnels_::has_data() const
{
    for (std::size_t index=0; index<tp_tunnel.size(); index++)
    {
        if(tp_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpTunnels::TpTunnels_::has_operation() const
{
    for (std::size_t index=0; index<tp_tunnel.size(); index++)
    {
        if(tp_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpTunnels::TpTunnels_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpTunnels_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnels_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnels_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-tunnel")
    {
        auto c = std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel>();
        c->parent = this;
        tp_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpTunnels_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tp_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTp::TpTunnels::TpTunnels_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpTunnels::TpTunnels_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpTunnels::TpTunnels_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-tunnel")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::TpTunnel()
    :
    tp_tunnel_name{YType::str, "tp-tunnel-name"},
    tunnel_name{YType::str, "tunnel-name"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    source_node_id{YType::str, "source-node-id"},
    source_global_id{YType::uint32, "source-global-id"},
    destination_node_id{YType::str, "destination-node-id"},
    destination_global_id{YType::uint32, "destination-global-id"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    admin_status{YType::enumeration, "admin-status"},
    operation_status{YType::enumeration, "operation-status"},
    active_lsp{YType::enumeration, "active-lsp"}
    	,
    working_lsp(std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp>())
	,protect_lsp(std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp>())
{
    working_lsp->parent = this;
    protect_lsp->parent = this;

    yang_name = "tp-tunnel"; yang_parent_name = "tp-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::~TpTunnel()
{
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::has_data() const
{
    return tp_tunnel_name.is_set
	|| tunnel_name.is_set
	|| source_tunnel_id.is_set
	|| source_node_id.is_set
	|| source_global_id.is_set
	|| destination_node_id.is_set
	|| destination_global_id.is_set
	|| remote_tunnel_id.is_set
	|| admin_status.is_set
	|| operation_status.is_set
	|| active_lsp.is_set
	|| (working_lsp !=  nullptr && working_lsp->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data());
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_tunnel_name.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(destination_node_id.yfilter)
	|| ydk::is_set(destination_global_id.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(operation_status.yfilter)
	|| ydk::is_set(active_lsp.yfilter)
	|| (working_lsp !=  nullptr && working_lsp->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation());
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/tp-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnel" <<"[tp-tunnel-name='" <<tp_tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_tunnel_name.is_set || is_set(tp_tunnel_name.yfilter)) leaf_name_data.push_back(tp_tunnel_name.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.yfilter)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (destination_global_id.is_set || is_set(destination_global_id.yfilter)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (operation_status.is_set || is_set(operation_status.yfilter)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (active_lsp.is_set || is_set(active_lsp.yfilter)) leaf_name_data.push_back(active_lsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp>();
        }
        return working_lsp;
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp>();
        }
        return protect_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(working_lsp != nullptr)
    {
        children["working-lsp"] = working_lsp;
    }

    if(protect_lsp != nullptr)
    {
        children["protect-lsp"] = protect_lsp;
    }

    return children;
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name = value;
        tp_tunnel_name.value_namespace = name_space;
        tp_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
        source_node_id.value_namespace = name_space;
        source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
        source_global_id.value_namespace = name_space;
        source_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
        destination_node_id.value_namespace = name_space;
        destination_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
        destination_global_id.value_namespace = name_space;
        destination_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-status")
    {
        operation_status = value;
        operation_status.value_namespace = name_space;
        operation_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-lsp")
    {
        active_lsp = value;
        active_lsp.value_namespace = name_space;
        active_lsp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id.yfilter = yfilter;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "operation-status")
    {
        operation_status.yfilter = yfilter;
    }
    if(value_path == "active-lsp")
    {
        active_lsp.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "working-lsp" || name == "protect-lsp" || name == "tp-tunnel-name" || name == "tunnel-name" || name == "source-tunnel-id" || name == "source-node-id" || name == "source-global-id" || name == "destination-node-id" || name == "destination-global-id" || name == "remote-tunnel-id" || name == "admin-status" || name == "operation-status" || name == "active-lsp")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::WorkingLsp()
    :
    lsp_id{YType::uint32, "lsp-id"},
    state{YType::enumeration, "state"},
    lock_out{YType::boolean, "lock-out"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"},
    bfd_state{YType::enumeration, "bfd-state"}
{

    yang_name = "working-lsp"; yang_parent_name = "tp-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::~WorkingLsp()
{
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::has_data() const
{
    return lsp_id.is_set
	|| state.is_set
	|| lock_out.is_set
	|| rx_oam_state.is_set
	|| tx_oam_state.is_set
	|| bfd_state.is_set;
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter)
	|| ydk::is_set(bfd_state.yfilter);
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());
    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "state" || name == "lock-out" || name == "rx-oam-state" || name == "tx-oam-state" || name == "bfd-state")
        return true;
    return false;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::ProtectLsp()
    :
    lsp_id{YType::uint32, "lsp-id"},
    state{YType::enumeration, "state"},
    lock_out{YType::boolean, "lock-out"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"},
    bfd_state{YType::enumeration, "bfd-state"}
{

    yang_name = "protect-lsp"; yang_parent_name = "tp-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::~ProtectLsp()
{
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::has_data() const
{
    return lsp_id.is_set
	|| state.is_set
	|| lock_out.is_set
	|| rx_oam_state.is_set
	|| tx_oam_state.is_set
	|| bfd_state.is_set;
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(lock_out.yfilter)
	|| ydk::is_set(rx_oam_state.yfilter)
	|| ydk::is_set(tx_oam_state.yfilter)
	|| ydk::is_set(bfd_state.yfilter);
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.yfilter)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.yfilter)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.yfilter)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());
    if (bfd_state.is_set || is_set(bfd_state.yfilter)) leaf_name_data.push_back(bfd_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
        lock_out.value_namespace = name_space;
        lock_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
        rx_oam_state.value_namespace = name_space;
        rx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
        tx_oam_state.value_namespace = name_space;
        tx_oam_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state")
    {
        bfd_state = value;
        bfd_state.value_namespace = name_space;
        bfd_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "lock-out")
    {
        lock_out.yfilter = yfilter;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state.yfilter = yfilter;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state.yfilter = yfilter;
    }
    if(value_path == "bfd-state")
    {
        bfd_state.yfilter = yfilter;
    }
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "state" || name == "lock-out" || name == "rx-oam-state" || name == "tx-oam-state" || name == "bfd-state")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpMidpoints()
    :
    tp_detail_midpoints(std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints>())
	,tp_midpoint_summary(std::make_shared<MplsTp::TpMidpoints::TpMidpointSummary>())
	,tp_midpoints(std::make_shared<MplsTp::TpMidpoints::TpMidpoints_>())
{
    tp_detail_midpoints->parent = this;
    tp_midpoint_summary->parent = this;
    tp_midpoints->parent = this;

    yang_name = "tp-midpoints"; yang_parent_name = "mpls-tp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpMidpoints::~TpMidpoints()
{
}

bool MplsTp::TpMidpoints::has_data() const
{
    return (tp_detail_midpoints !=  nullptr && tp_detail_midpoints->has_data())
	|| (tp_midpoint_summary !=  nullptr && tp_midpoint_summary->has_data())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_data());
}

bool MplsTp::TpMidpoints::has_operation() const
{
    return is_set(yfilter)
	|| (tp_detail_midpoints !=  nullptr && tp_detail_midpoints->has_operation())
	|| (tp_midpoint_summary !=  nullptr && tp_midpoint_summary->has_operation())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_operation());
}

std::string MplsTp::TpMidpoints::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-midpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-midpoints")
    {
        if(tp_detail_midpoints == nullptr)
        {
            tp_detail_midpoints = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints>();
        }
        return tp_detail_midpoints;
    }

    if(child_yang_name == "tp-midpoint-summary")
    {
        if(tp_midpoint_summary == nullptr)
        {
            tp_midpoint_summary = std::make_shared<MplsTp::TpMidpoints::TpMidpointSummary>();
        }
        return tp_midpoint_summary;
    }

    if(child_yang_name == "tp-midpoints")
    {
        if(tp_midpoints == nullptr)
        {
            tp_midpoints = std::make_shared<MplsTp::TpMidpoints::TpMidpoints_>();
        }
        return tp_midpoints;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tp_detail_midpoints != nullptr)
    {
        children["tp-detail-midpoints"] = tp_detail_midpoints;
    }

    if(tp_midpoint_summary != nullptr)
    {
        children["tp-midpoint-summary"] = tp_midpoint_summary;
    }

    if(tp_midpoints != nullptr)
    {
        children["tp-midpoints"] = tp_midpoints;
    }

    return children;
}

void MplsTp::TpMidpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpMidpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpMidpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-midpoints" || name == "tp-midpoint-summary" || name == "tp-midpoints")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoints()
{

    yang_name = "tp-detail-midpoints"; yang_parent_name = "tp-midpoints"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::~TpDetailMidpoints()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::has_data() const
{
    for (std::size_t index=0; index<tp_detail_midpoint.size(); index++)
    {
        if(tp_detail_midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::has_operation() const
{
    for (std::size_t index=0; index<tp_detail_midpoint.size(); index++)
    {
        if(tp_detail_midpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-midpoints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tp-detail-midpoint")
    {
        auto c = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint>();
        c->parent = this;
        tp_detail_midpoint.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tp_detail_midpoint)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTp::TpMidpoints::TpDetailMidpoints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tp-detail-midpoint")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::TpDetailMidpoint()
    :
    tp_midpoint_name{YType::str, "tp-midpoint-name"},
    forward_lsp_reserved_bandwidth{YType::uint32, "forward-lsp-reserved-bandwidth"},
    reverse_lsp_reserved_bandwidth{YType::uint32, "reverse-lsp-reserved-bandwidth"}
    	,
    brief_lsp_information(std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation>())
	,forward_lsp(std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp>())
	,reverse_lsp(std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp>())
{
    brief_lsp_information->parent = this;
    forward_lsp->parent = this;
    reverse_lsp->parent = this;

    yang_name = "tp-detail-midpoint"; yang_parent_name = "tp-detail-midpoints"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::~TpDetailMidpoint()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::has_data() const
{
    return tp_midpoint_name.is_set
	|| forward_lsp_reserved_bandwidth.is_set
	|| reverse_lsp_reserved_bandwidth.is_set
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_data())
	|| (forward_lsp !=  nullptr && forward_lsp->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data());
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tp_midpoint_name.yfilter)
	|| ydk::is_set(forward_lsp_reserved_bandwidth.yfilter)
	|| ydk::is_set(reverse_lsp_reserved_bandwidth.yfilter)
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_operation())
	|| (forward_lsp !=  nullptr && forward_lsp->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation());
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/tp-detail-midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-midpoint" <<"[tp-midpoint-name='" <<tp_midpoint_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_midpoint_name.is_set || is_set(tp_midpoint_name.yfilter)) leaf_name_data.push_back(tp_midpoint_name.get_name_leafdata());
    if (forward_lsp_reserved_bandwidth.is_set || is_set(forward_lsp_reserved_bandwidth.yfilter)) leaf_name_data.push_back(forward_lsp_reserved_bandwidth.get_name_leafdata());
    if (reverse_lsp_reserved_bandwidth.is_set || is_set(reverse_lsp_reserved_bandwidth.yfilter)) leaf_name_data.push_back(reverse_lsp_reserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-lsp-information")
    {
        if(brief_lsp_information == nullptr)
        {
            brief_lsp_information = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation>();
        }
        return brief_lsp_information;
    }

    if(child_yang_name == "forward-lsp")
    {
        if(forward_lsp == nullptr)
        {
            forward_lsp = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp>();
        }
        return forward_lsp;
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp == nullptr)
        {
            reverse_lsp = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp>();
        }
        return reverse_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(brief_lsp_information != nullptr)
    {
        children["brief-lsp-information"] = brief_lsp_information;
    }

    if(forward_lsp != nullptr)
    {
        children["forward-lsp"] = forward_lsp;
    }

    if(reverse_lsp != nullptr)
    {
        children["reverse-lsp"] = reverse_lsp;
    }

    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tp-midpoint-name")
    {
        tp_midpoint_name = value;
        tp_midpoint_name.value_namespace = name_space;
        tp_midpoint_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-lsp-reserved-bandwidth")
    {
        forward_lsp_reserved_bandwidth = value;
        forward_lsp_reserved_bandwidth.value_namespace = name_space;
        forward_lsp_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-reserved-bandwidth")
    {
        reverse_lsp_reserved_bandwidth = value;
        reverse_lsp_reserved_bandwidth.value_namespace = name_space;
        reverse_lsp_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tp-midpoint-name")
    {
        tp_midpoint_name.yfilter = yfilter;
    }
    if(value_path == "forward-lsp-reserved-bandwidth")
    {
        forward_lsp_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-reserved-bandwidth")
    {
        reverse_lsp_reserved_bandwidth.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-lsp-information" || name == "forward-lsp" || name == "reverse-lsp" || name == "tp-midpoint-name" || name == "forward-lsp-reserved-bandwidth" || name == "reverse-lsp-reserved-bandwidth")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::BriefLspInformation()
    :
    midpoint_name{YType::str, "midpoint-name"},
    tunnel_name{YType::str, "tunnel-name"},
    source_node_id{YType::str, "source-node-id"},
    source_global_id{YType::uint32, "source-global-id"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    destination_node_id{YType::str, "destination-node-id"},
    destination_global_id{YType::uint32, "destination-global-id"},
    destination_tunnel_id{YType::uint32, "destination-tunnel-id"},
    forward_lsp_state{YType::enumeration, "forward-lsp-state"},
    reverse_lsp_state{YType::enumeration, "reverse-lsp-state"}
{

    yang_name = "brief-lsp-information"; yang_parent_name = "tp-detail-midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::~BriefLspInformation()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::has_data() const
{
    return midpoint_name.is_set
	|| tunnel_name.is_set
	|| source_node_id.is_set
	|| source_global_id.is_set
	|| source_tunnel_id.is_set
	|| lsp_id.is_set
	|| destination_node_id.is_set
	|| destination_global_id.is_set
	|| destination_tunnel_id.is_set
	|| forward_lsp_state.is_set
	|| reverse_lsp_state.is_set;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(midpoint_name.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(source_node_id.yfilter)
	|| ydk::is_set(source_global_id.yfilter)
	|| ydk::is_set(source_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(destination_node_id.yfilter)
	|| ydk::is_set(destination_global_id.yfilter)
	|| ydk::is_set(destination_tunnel_id.yfilter)
	|| ydk::is_set(forward_lsp_state.yfilter)
	|| ydk::is_set(reverse_lsp_state.yfilter);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-lsp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (midpoint_name.is_set || is_set(midpoint_name.yfilter)) leaf_name_data.push_back(midpoint_name.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.yfilter)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.yfilter)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.yfilter)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.yfilter)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (destination_global_id.is_set || is_set(destination_global_id.yfilter)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (destination_tunnel_id.is_set || is_set(destination_tunnel_id.yfilter)) leaf_name_data.push_back(destination_tunnel_id.get_name_leafdata());
    if (forward_lsp_state.is_set || is_set(forward_lsp_state.yfilter)) leaf_name_data.push_back(forward_lsp_state.get_name_leafdata());
    if (reverse_lsp_state.is_set || is_set(reverse_lsp_state.yfilter)) leaf_name_data.push_back(reverse_lsp_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "midpoint-name")
    {
        midpoint_name = value;
        midpoint_name.value_namespace = name_space;
        midpoint_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
        source_node_id.value_namespace = name_space;
        source_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
        source_global_id.value_namespace = name_space;
        source_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
        source_tunnel_id.value_namespace = name_space;
        source_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
        destination_node_id.value_namespace = name_space;
        destination_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
        destination_global_id.value_namespace = name_space;
        destination_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-tunnel-id")
    {
        destination_tunnel_id = value;
        destination_tunnel_id.value_namespace = name_space;
        destination_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-lsp-state")
    {
        forward_lsp_state = value;
        forward_lsp_state.value_namespace = name_space;
        forward_lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-state")
    {
        reverse_lsp_state = value;
        reverse_lsp_state.value_namespace = name_space;
        reverse_lsp_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "midpoint-name")
    {
        midpoint_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "source-node-id")
    {
        source_node_id.yfilter = yfilter;
    }
    if(value_path == "source-global-id")
    {
        source_global_id.yfilter = yfilter;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id.yfilter = yfilter;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id.yfilter = yfilter;
    }
    if(value_path == "destination-tunnel-id")
    {
        destination_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "forward-lsp-state")
    {
        forward_lsp_state.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-state")
    {
        reverse_lsp_state.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "midpoint-name" || name == "tunnel-name" || name == "source-node-id" || name == "source-global-id" || name == "source-tunnel-id" || name == "lsp-id" || name == "destination-node-id" || name == "destination-global-id" || name == "destination-tunnel-id" || name == "forward-lsp-state" || name == "reverse-lsp-state")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::ForwardLsp()
    :
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"},
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    outgoing_interface{YType::str, "outgoing-interface"},
    next_hop_address{YType::str, "next-hop-address"},
    in_label{YType::uint32, "in-label"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "forward-lsp"; yang_parent_name = "tp-detail-midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::~ForwardLsp()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::has_data() const
{
    return out_label.is_set
	|| out_link.is_set
	|| oam_refresh_interval.is_set
	|| outgoing_interface.is_set
	|| next_hop_address.is_set
	|| in_label.is_set
	|| bandwidth.is_set;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_link.yfilter)
	|| ydk::is_set(oam_refresh_interval.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.yfilter)) leaf_name_data.push_back(out_link.get_name_leafdata());
    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.yfilter)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-link")
    {
        out_link = value;
        out_link.value_namespace = name_space;
        out_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
        oam_refresh_interval.value_namespace = name_space;
        oam_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-link")
    {
        out_link.yfilter = yfilter;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-label" || name == "out-link" || name == "oam-refresh-interval" || name == "outgoing-interface" || name == "next-hop-address" || name == "in-label" || name == "bandwidth")
        return true;
    return false;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::ReverseLsp()
    :
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"},
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    outgoing_interface{YType::str, "outgoing-interface"},
    next_hop_address{YType::str, "next-hop-address"},
    in_label{YType::uint32, "in-label"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "reverse-lsp"; yang_parent_name = "tp-detail-midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::~ReverseLsp()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::has_data() const
{
    return out_label.is_set
	|| out_link.is_set
	|| oam_refresh_interval.is_set
	|| outgoing_interface.is_set
	|| next_hop_address.is_set
	|| in_label.is_set
	|| bandwidth.is_set;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_link.yfilter)
	|| ydk::is_set(oam_refresh_interval.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.yfilter)) leaf_name_data.push_back(out_link.get_name_leafdata());
    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.yfilter)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-link")
    {
        out_link = value;
        out_link.value_namespace = name_space;
        out_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
        oam_refresh_interval.value_namespace = name_space;
        oam_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-link")
    {
        out_link.yfilter = yfilter;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-label" || name == "out-link" || name == "oam-refresh-interval" || name == "outgoing-interface" || name == "next-hop-address" || name == "in-label" || name == "bandwidth")
        return true;
    return false;
}


}
}

