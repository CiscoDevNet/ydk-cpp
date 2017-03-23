
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_28.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_54.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_52.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_29.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_53.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_55.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::CommonInfo()
    :
    application_enabled{YType::boolean, "application-enabled"},
    application_time_remaining_nano_sec{YType::uint64, "application-time-remaining-nano-sec"},
    collection_type{YType::enumeration, "collection-type"},
    effective_maximum_reservable_bandwidth{YType::uint64, "effective-maximum-reservable-bandwidth"},
    last_application_timestamp_nano_sec{YType::uint64, "last-application-timestamp-nano-sec"},
    last_sample_collection_timestamp_nano_sec{YType::uint64, "last-sample-collection-timestamp-nano-sec"},
    next_application_timestamp_nano_sec{YType::uint64, "next-application-timestamp-nano-sec"},
    next_sample_collection_nano_sec{YType::uint64, "next-sample-collection-nano-sec"},
    sample_time_remaining_timestamp_nano_sec{YType::uint64, "sample-time-remaining-timestamp-nano-sec"}
    	,
    bandwidth_utilization(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization>())
{
    bandwidth_utilization->parent = this;
    children["bandwidth-utilization"] = bandwidth_utilization;

    yang_name = "common-info"; yang_parent_name = "bandwidth-account-link";
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::~CommonInfo()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_data() const
{
    return application_enabled.is_set
	|| application_time_remaining_nano_sec.is_set
	|| collection_type.is_set
	|| effective_maximum_reservable_bandwidth.is_set
	|| last_application_timestamp_nano_sec.is_set
	|| last_sample_collection_timestamp_nano_sec.is_set
	|| next_application_timestamp_nano_sec.is_set
	|| next_sample_collection_nano_sec.is_set
	|| sample_time_remaining_timestamp_nano_sec.is_set
	|| (bandwidth_utilization !=  nullptr && bandwidth_utilization->has_data());
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(application_enabled.operation)
	|| is_set(application_time_remaining_nano_sec.operation)
	|| is_set(collection_type.operation)
	|| is_set(effective_maximum_reservable_bandwidth.operation)
	|| is_set(last_application_timestamp_nano_sec.operation)
	|| is_set(last_sample_collection_timestamp_nano_sec.operation)
	|| is_set(next_application_timestamp_nano_sec.operation)
	|| is_set(next_sample_collection_nano_sec.operation)
	|| is_set(sample_time_remaining_timestamp_nano_sec.operation)
	|| (bandwidth_utilization !=  nullptr && bandwidth_utilization->has_operation());
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-info";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommonInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_enabled.is_set || is_set(application_enabled.operation)) leaf_name_data.push_back(application_enabled.get_name_leafdata());
    if (application_time_remaining_nano_sec.is_set || is_set(application_time_remaining_nano_sec.operation)) leaf_name_data.push_back(application_time_remaining_nano_sec.get_name_leafdata());
    if (collection_type.is_set || is_set(collection_type.operation)) leaf_name_data.push_back(collection_type.get_name_leafdata());
    if (effective_maximum_reservable_bandwidth.is_set || is_set(effective_maximum_reservable_bandwidth.operation)) leaf_name_data.push_back(effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (last_application_timestamp_nano_sec.is_set || is_set(last_application_timestamp_nano_sec.operation)) leaf_name_data.push_back(last_application_timestamp_nano_sec.get_name_leafdata());
    if (last_sample_collection_timestamp_nano_sec.is_set || is_set(last_sample_collection_timestamp_nano_sec.operation)) leaf_name_data.push_back(last_sample_collection_timestamp_nano_sec.get_name_leafdata());
    if (next_application_timestamp_nano_sec.is_set || is_set(next_application_timestamp_nano_sec.operation)) leaf_name_data.push_back(next_application_timestamp_nano_sec.get_name_leafdata());
    if (next_sample_collection_nano_sec.is_set || is_set(next_sample_collection_nano_sec.operation)) leaf_name_data.push_back(next_sample_collection_nano_sec.get_name_leafdata());
    if (sample_time_remaining_timestamp_nano_sec.is_set || is_set(sample_time_remaining_timestamp_nano_sec.operation)) leaf_name_data.push_back(sample_time_remaining_timestamp_nano_sec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-utilization")
    {
        if(bandwidth_utilization != nullptr)
        {
            children["bandwidth-utilization"] = bandwidth_utilization;
        }
        else
        {
            bandwidth_utilization = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization>();
            bandwidth_utilization->parent = this;
            children["bandwidth-utilization"] = bandwidth_utilization;
        }
        return children.at("bandwidth-utilization");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_children()
{
    if(children.find("bandwidth-utilization") == children.end())
    {
        if(bandwidth_utilization != nullptr)
        {
            children["bandwidth-utilization"] = bandwidth_utilization;
        }
    }

    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-enabled")
    {
        application_enabled = value;
    }
    if(value_path == "application-time-remaining-nano-sec")
    {
        application_time_remaining_nano_sec = value;
    }
    if(value_path == "collection-type")
    {
        collection_type = value;
    }
    if(value_path == "effective-maximum-reservable-bandwidth")
    {
        effective_maximum_reservable_bandwidth = value;
    }
    if(value_path == "last-application-timestamp-nano-sec")
    {
        last_application_timestamp_nano_sec = value;
    }
    if(value_path == "last-sample-collection-timestamp-nano-sec")
    {
        last_sample_collection_timestamp_nano_sec = value;
    }
    if(value_path == "next-application-timestamp-nano-sec")
    {
        next_application_timestamp_nano_sec = value;
    }
    if(value_path == "next-sample-collection-nano-sec")
    {
        next_sample_collection_nano_sec = value;
    }
    if(value_path == "sample-time-remaining-timestamp-nano-sec")
    {
        sample_time_remaining_timestamp_nano_sec = value;
    }
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::BandwidthUtilization()
    :
    applied_non_rsvp_te_bandwidth_utilization{YType::uint64, "applied-non-rsvp-te-bandwidth-utilization"},
    non_rsvp_te_bandwidth_utilization{YType::uint64, "non-rsvp-te-bandwidth-utilization"},
    rsvp_te_bandwidth_utilization{YType::uint64, "rsvp-te-bandwidth-utilization"},
    total_link_bandwidth_utilization{YType::uint64, "total-link-bandwidth-utilization"}
{
    yang_name = "bandwidth-utilization"; yang_parent_name = "common-info";
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::~BandwidthUtilization()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::has_data() const
{
    return applied_non_rsvp_te_bandwidth_utilization.is_set
	|| non_rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_bandwidth_utilization.is_set
	|| total_link_bandwidth_utilization.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::has_operation() const
{
    return is_set(operation)
	|| is_set(applied_non_rsvp_te_bandwidth_utilization.operation)
	|| is_set(non_rsvp_te_bandwidth_utilization.operation)
	|| is_set(rsvp_te_bandwidth_utilization.operation)
	|| is_set(total_link_bandwidth_utilization.operation);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-utilization";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthUtilization' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applied_non_rsvp_te_bandwidth_utilization.is_set || is_set(applied_non_rsvp_te_bandwidth_utilization.operation)) leaf_name_data.push_back(applied_non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (non_rsvp_te_bandwidth_utilization.is_set || is_set(non_rsvp_te_bandwidth_utilization.operation)) leaf_name_data.push_back(non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_bandwidth_utilization.is_set || is_set(rsvp_te_bandwidth_utilization.operation)) leaf_name_data.push_back(rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (total_link_bandwidth_utilization.is_set || is_set(total_link_bandwidth_utilization.operation)) leaf_name_data.push_back(total_link_bandwidth_utilization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::get_children()
{
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applied-non-rsvp-te-bandwidth-utilization")
    {
        applied_non_rsvp_te_bandwidth_utilization = value;
    }
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization = value;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization = value;
    }
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization = value;
    }
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::SampleHistory()
    :
    total_applications{YType::uint32, "total-applications"},
    total_samples{YType::uint32, "total-samples"}
{
    yang_name = "sample-history"; yang_parent_name = "bandwidth-account-link";
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::~SampleHistory()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::has_data() const
{
    for (std::size_t index=0; index<active_interval_sample.size(); index++)
    {
        if(active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<previous_interval_sample.size(); index++)
    {
        if(previous_interval_sample[index]->has_data())
            return true;
    }
    return total_applications.is_set
	|| total_samples.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::has_operation() const
{
    for (std::size_t index=0; index<active_interval_sample.size(); index++)
    {
        if(active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<previous_interval_sample.size(); index++)
    {
        if(previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(total_applications.operation)
	|| is_set(total_samples.operation);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample-history";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SampleHistory' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_applications.is_set || is_set(total_applications.operation)) leaf_name_data.push_back(total_applications.get_name_leafdata());
    if (total_samples.is_set || is_set(total_samples.operation)) leaf_name_data.push_back(total_samples.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-interval-sample")
    {
        for(auto const & c : active_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample>();
        c->parent = this;
        active_interval_sample.push_back(std::move(c));
        children[segment_path] = active_interval_sample.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "previous-interval-sample")
    {
        for(auto const & c : previous_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample>();
        c->parent = this;
        previous_interval_sample.push_back(std::move(c));
        children[segment_path] = previous_interval_sample.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::get_children()
{
    for (auto const & c : active_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : previous_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-applications")
    {
        total_applications = value;
    }
    if(value_path == "total-samples")
    {
        total_samples = value;
    }
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::ActiveIntervalSample()
    :
    non_rsvp_te_packet_rate{YType::uint64, "non-rsvp-te-packet-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_packet_rate{YType::uint64, "rsvp-te-packet-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp_nano_sec{YType::uint64, "timestamp-nano-sec"},
    total_packet_rate{YType::uint64, "total-packet-rate"},
    total_rate{YType::uint64, "total-rate"}
{
    yang_name = "active-interval-sample"; yang_parent_name = "sample-history";
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::~ActiveIntervalSample()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::has_data() const
{
    return non_rsvp_te_packet_rate.is_set
	|| non_rsvp_te_rate.is_set
	|| rsvp_te_packet_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp_nano_sec.is_set
	|| total_packet_rate.is_set
	|| total_rate.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::has_operation() const
{
    return is_set(operation)
	|| is_set(non_rsvp_te_packet_rate.operation)
	|| is_set(non_rsvp_te_rate.operation)
	|| is_set(rsvp_te_packet_rate.operation)
	|| is_set(rsvp_te_rate.operation)
	|| is_set(timestamp_nano_sec.operation)
	|| is_set(total_packet_rate.operation)
	|| is_set(total_rate.operation);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-interval-sample";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveIntervalSample' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_packet_rate.is_set || is_set(non_rsvp_te_packet_rate.operation)) leaf_name_data.push_back(non_rsvp_te_packet_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.operation)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_packet_rate.is_set || is_set(rsvp_te_packet_rate.operation)) leaf_name_data.push_back(rsvp_te_packet_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.operation)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp_nano_sec.is_set || is_set(timestamp_nano_sec.operation)) leaf_name_data.push_back(timestamp_nano_sec.get_name_leafdata());
    if (total_packet_rate.is_set || is_set(total_packet_rate.operation)) leaf_name_data.push_back(total_packet_rate.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.operation)) leaf_name_data.push_back(total_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::get_children()
{
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate = value;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate = value;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
    }
    if(value_path == "timestamp-nano-sec")
    {
        timestamp_nano_sec = value;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate = value;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
    }
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::PreviousIntervalSample()
    :
    non_rsvp_te_packet_rate{YType::uint64, "non-rsvp-te-packet-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_packet_rate{YType::uint64, "rsvp-te-packet-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp_nano_sec{YType::uint64, "timestamp-nano-sec"},
    total_packet_rate{YType::uint64, "total-packet-rate"},
    total_rate{YType::uint64, "total-rate"}
{
    yang_name = "previous-interval-sample"; yang_parent_name = "sample-history";
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::~PreviousIntervalSample()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::has_data() const
{
    return non_rsvp_te_packet_rate.is_set
	|| non_rsvp_te_rate.is_set
	|| rsvp_te_packet_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp_nano_sec.is_set
	|| total_packet_rate.is_set
	|| total_rate.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::has_operation() const
{
    return is_set(operation)
	|| is_set(non_rsvp_te_packet_rate.operation)
	|| is_set(non_rsvp_te_rate.operation)
	|| is_set(rsvp_te_packet_rate.operation)
	|| is_set(rsvp_te_rate.operation)
	|| is_set(timestamp_nano_sec.operation)
	|| is_set(total_packet_rate.operation)
	|| is_set(total_rate.operation);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-interval-sample";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreviousIntervalSample' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_packet_rate.is_set || is_set(non_rsvp_te_packet_rate.operation)) leaf_name_data.push_back(non_rsvp_te_packet_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.operation)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_packet_rate.is_set || is_set(rsvp_te_packet_rate.operation)) leaf_name_data.push_back(rsvp_te_packet_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.operation)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp_nano_sec.is_set || is_set(timestamp_nano_sec.operation)) leaf_name_data.push_back(timestamp_nano_sec.get_name_leafdata());
    if (total_packet_rate.is_set || is_set(total_packet_rate.operation)) leaf_name_data.push_back(total_packet_rate.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.operation)) leaf_name_data.push_back(total_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::get_children()
{
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate = value;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate = value;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
    }
    if(value_path == "timestamp-nano-sec")
    {
        timestamp_nano_sec = value;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate = value;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
    }
}

MplsLcac::LinkSummary::LinkSummary()
    :
    is_flooding_enabled{YType::boolean, "is-flooding-enabled"},
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    maximum_links{YType::uint16, "maximum-links"}
    	,
    bandwidth_account_summary(std::make_shared<MplsLcac::LinkSummary::BandwidthAccountSummary>())
{
    bandwidth_account_summary->parent = this;
    children["bandwidth-account-summary"] = bandwidth_account_summary;

    yang_name = "link-summary"; yang_parent_name = "mpls-lcac";
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
    return is_flooding_enabled.is_set
	|| is_role_standby.is_set
	|| links.is_set
	|| maximum_links.is_set
	|| (bandwidth_account_summary !=  nullptr && bandwidth_account_summary->has_data());
}

bool MplsLcac::LinkSummary::has_operation() const
{
    for (std::size_t index=0; index<areas_summary.size(); index++)
    {
        if(areas_summary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_flooding_enabled.operation)
	|| is_set(is_role_standby.operation)
	|| is_set(links.operation)
	|| is_set(maximum_links.operation)
	|| (bandwidth_account_summary !=  nullptr && bandwidth_account_summary->has_operation());
}

std::string MplsLcac::LinkSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-summary";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_flooding_enabled.is_set || is_set(is_flooding_enabled.operation)) leaf_name_data.push_back(is_flooding_enabled.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.operation)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());
    if (maximum_links.is_set || is_set(maximum_links.operation)) leaf_name_data.push_back(maximum_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "areas-summary")
    {
        for(auto const & c : areas_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::LinkSummary::AreasSummary>();
        c->parent = this;
        areas_summary.push_back(std::move(c));
        children[segment_path] = areas_summary.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-account-summary")
    {
        if(bandwidth_account_summary != nullptr)
        {
            children["bandwidth-account-summary"] = bandwidth_account_summary;
        }
        else
        {
            bandwidth_account_summary = std::make_shared<MplsLcac::LinkSummary::BandwidthAccountSummary>();
            bandwidth_account_summary->parent = this;
            children["bandwidth-account-summary"] = bandwidth_account_summary;
        }
        return children.at("bandwidth-account-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkSummary::get_children()
{
    for (auto const & c : areas_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("bandwidth-account-summary") == children.end())
    {
        if(bandwidth_account_summary != nullptr)
        {
            children["bandwidth-account-summary"] = bandwidth_account_summary;
        }
    }

    return children;
}

void MplsLcac::LinkSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-flooding-enabled")
    {
        is_flooding_enabled = value;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
    }
    if(value_path == "links")
    {
        links = value;
    }
    if(value_path == "maximum-links")
    {
        maximum_links = value;
    }
}

MplsLcac::LinkSummary::BandwidthAccountSummary::BandwidthAccountSummary()
    :
    application_interval{YType::uint32, "application-interval"},
    application_time_remaining{YType::uint32, "application-time-remaining"},
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_time_remaining{YType::uint32, "sample-time-remaining"}
{
    yang_name = "bandwidth-account-summary"; yang_parent_name = "link-summary";
}

MplsLcac::LinkSummary::BandwidthAccountSummary::~BandwidthAccountSummary()
{
}

bool MplsLcac::LinkSummary::BandwidthAccountSummary::has_data() const
{
    return application_interval.is_set
	|| application_time_remaining.is_set
	|| is_bandwidth_account_enabled.is_set
	|| sample_interval.is_set
	|| sample_time_remaining.is_set;
}

bool MplsLcac::LinkSummary::BandwidthAccountSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(application_interval.operation)
	|| is_set(application_time_remaining.operation)
	|| is_set(is_bandwidth_account_enabled.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_time_remaining.operation);
}

std::string MplsLcac::LinkSummary::BandwidthAccountSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-summary";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkSummary::BandwidthAccountSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_interval.is_set || is_set(application_interval.operation)) leaf_name_data.push_back(application_interval.get_name_leafdata());
    if (application_time_remaining.is_set || is_set(application_time_remaining.operation)) leaf_name_data.push_back(application_time_remaining.get_name_leafdata());
    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.operation)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_time_remaining.is_set || is_set(sample_time_remaining.operation)) leaf_name_data.push_back(sample_time_remaining.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkSummary::BandwidthAccountSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkSummary::BandwidthAccountSummary::get_children()
{
    return children;
}

void MplsLcac::LinkSummary::BandwidthAccountSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-interval")
    {
        application_interval = value;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining = value;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining = value;
    }
}

MplsLcac::LinkSummary::AreasSummary::AreasSummary()
    :
    area_id{YType::str, "area-id"},
    igp_neighbors{YType::uint16, "igp-neighbors"},
    is_flooded{YType::boolean, "is-flooded"},
    is_periodic_flooding_on{YType::boolean, "is-periodic-flooding-on"},
    links_flooded{YType::uint16, "links-flooded"},
    local_node_router_id{YType::str, "local-node-router-id"},
    periodic_flooding_interval{YType::uint16, "periodic-flooding-interval"},
    protocol{YType::enumeration, "protocol"},
    system_id{YType::str, "system-id"}
{
    yang_name = "areas-summary"; yang_parent_name = "link-summary";
}

MplsLcac::LinkSummary::AreasSummary::~AreasSummary()
{
}

bool MplsLcac::LinkSummary::AreasSummary::has_data() const
{
    return area_id.is_set
	|| igp_neighbors.is_set
	|| is_flooded.is_set
	|| is_periodic_flooding_on.is_set
	|| links_flooded.is_set
	|| local_node_router_id.is_set
	|| periodic_flooding_interval.is_set
	|| protocol.is_set
	|| system_id.is_set;
}

bool MplsLcac::LinkSummary::AreasSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(igp_neighbors.operation)
	|| is_set(is_flooded.operation)
	|| is_set(is_periodic_flooding_on.operation)
	|| is_set(links_flooded.operation)
	|| is_set(local_node_router_id.operation)
	|| is_set(periodic_flooding_interval.operation)
	|| is_set(protocol.operation)
	|| is_set(system_id.operation);
}

std::string MplsLcac::LinkSummary::AreasSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas-summary";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkSummary::AreasSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.operation)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());
    if (is_flooded.is_set || is_set(is_flooded.operation)) leaf_name_data.push_back(is_flooded.get_name_leafdata());
    if (is_periodic_flooding_on.is_set || is_set(is_periodic_flooding_on.operation)) leaf_name_data.push_back(is_periodic_flooding_on.get_name_leafdata());
    if (links_flooded.is_set || is_set(links_flooded.operation)) leaf_name_data.push_back(links_flooded.get_name_leafdata());
    if (local_node_router_id.is_set || is_set(local_node_router_id.operation)) leaf_name_data.push_back(local_node_router_id.get_name_leafdata());
    if (periodic_flooding_interval.is_set || is_set(periodic_flooding_interval.operation)) leaf_name_data.push_back(periodic_flooding_interval.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkSummary::AreasSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkSummary::AreasSummary::get_children()
{
    return children;
}

void MplsLcac::LinkSummary::AreasSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
    }
    if(value_path == "is-flooded")
    {
        is_flooded = value;
    }
    if(value_path == "is-periodic-flooding-on")
    {
        is_periodic_flooding_on = value;
    }
    if(value_path == "links-flooded")
    {
        links_flooded = value;
    }
    if(value_path == "local-node-router-id")
    {
        local_node_router_id = value;
    }
    if(value_path == "periodic-flooding-interval")
    {
        periodic_flooding_interval = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
}

MplsLcac::LinkInformation::LinkInformation()
    :
    global(std::make_shared<MplsLcac::LinkInformation::Global>())
	,links(std::make_shared<MplsLcac::LinkInformation::Links>())
{
    global->parent = this;
    children["global"] = global;

    links->parent = this;
    children["links"] = links;

    yang_name = "link-information"; yang_parent_name = "mpls-lcac";
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
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation())
	|| (links !=  nullptr && links->has_operation());
}

std::string MplsLcac::LinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-information";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<MplsLcac::LinkInformation::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    if(child_yang_name == "links")
    {
        if(links != nullptr)
        {
            children["links"] = links;
        }
        else
        {
            links = std::make_shared<MplsLcac::LinkInformation::Links>();
            links->parent = this;
            children["links"] = links;
        }
        return children.at("links");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    if(children.find("links") == children.end())
    {
        if(links != nullptr)
        {
            children["links"] = links;
        }
    }

    return children;
}

void MplsLcac::LinkInformation::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::LinkInformation::Global::Global()
    :
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    maximum_links{YType::uint16, "maximum-links"}
{
    yang_name = "global"; yang_parent_name = "link-information";
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
    return is_set(operation)
	|| is_set(is_role_standby.operation)
	|| is_set(links.operation)
	|| is_set(maximum_links.operation);
}

std::string MplsLcac::LinkInformation::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.operation)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());
    if (maximum_links.is_set || is_set(maximum_links.operation)) leaf_name_data.push_back(maximum_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Global::get_children()
{
    return children;
}

void MplsLcac::LinkInformation::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
    }
    if(value_path == "links")
    {
        links = value;
    }
    if(value_path == "maximum-links")
    {
        maximum_links = value;
    }
}

MplsLcac::LinkInformation::Links::Links()
{
    yang_name = "links"; yang_parent_name = "link-information";
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
    return is_set(operation);
}

std::string MplsLcac::LinkInformation::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link>();
        c->parent = this;
        link.push_back(std::move(c));
        children[segment_path] = link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::get_children()
{
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::LinkInformation::Links::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::LinkInformation::Links::Link::Link()
    :
    interface_name{YType::str, "interface-name"},
    is_attribute_incomplete{YType::boolean, "is-attribute-incomplete"},
    is_name_based_attribute{YType::boolean, "is-name-based-attribute"},
    is_te_metric_valid{YType::boolean, "is-te-metric-valid"},
    link_attributes{YType::uint32, "link-attributes"},
    link_extended_attribute{YType::uint32, "link-extended-attribute"},
    link_forwad_ref_value{YType::uint32, "link-forwad-ref-value"},
    maximum_reservation_bandwidth_mam{YType::uint64, "maximum-reservation-bandwidth-mam"},
    maximum_reservation_bandwidth_rdm{YType::uint64, "maximum-reservation-bandwidth-rdm"},
    reason_not_flooded{YType::str, "reason-not-flooded"},
    reservable_pool0_bandwidth_mam{YType::uint64, "reservable-pool0-bandwidth-mam"},
    reservable_pool0_bandwidth_rdm{YType::uint64, "reservable-pool0-bandwidth-rdm"},
    reservable_pool1_bandwidth_mam{YType::uint64, "reservable-pool1-bandwidth-mam"},
    reservable_pool1_bandwidth_rdm{YType::uint64, "reservable-pool1-bandwidth-rdm"},
    te_metric{YType::uint32, "te-metric"}
    	,
    bandwidth_account(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount>())
	,hw_oor(std::make_shared<MplsLcac::LinkInformation::Links::Link::HwOor>())
	,link_common(std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon>())
{
    bandwidth_account->parent = this;
    children["bandwidth-account"] = bandwidth_account;

    hw_oor->parent = this;
    children["hw-oor"] = hw_oor;

    link_common->parent = this;
    children["link-common"] = link_common;

    yang_name = "link"; yang_parent_name = "links";
}

MplsLcac::LinkInformation::Links::Link::~Link()
{
}

bool MplsLcac::LinkInformation::Links::Link::has_data() const
{
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
    for (auto const & leaf : link_extended_attribute.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : link_forwad_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| is_attribute_incomplete.is_set
	|| is_name_based_attribute.is_set
	|| is_te_metric_valid.is_set
	|| link_attributes.is_set
	|| maximum_reservation_bandwidth_mam.is_set
	|| maximum_reservation_bandwidth_rdm.is_set
	|| reason_not_flooded.is_set
	|| reservable_pool0_bandwidth_mam.is_set
	|| reservable_pool0_bandwidth_rdm.is_set
	|| reservable_pool1_bandwidth_mam.is_set
	|| reservable_pool1_bandwidth_rdm.is_set
	|| te_metric.is_set
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_data())
	|| (hw_oor !=  nullptr && hw_oor->has_data())
	|| (link_common !=  nullptr && link_common->has_data());
}

bool MplsLcac::LinkInformation::Links::Link::has_operation() const
{
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
    for (auto const & leaf : link_extended_attribute.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : link_forwad_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_attribute_incomplete.operation)
	|| is_set(is_name_based_attribute.operation)
	|| is_set(is_te_metric_valid.operation)
	|| is_set(link_attributes.operation)
	|| is_set(link_extended_attribute.operation)
	|| is_set(link_forwad_ref_value.operation)
	|| is_set(maximum_reservation_bandwidth_mam.operation)
	|| is_set(maximum_reservation_bandwidth_rdm.operation)
	|| is_set(reason_not_flooded.operation)
	|| is_set(reservable_pool0_bandwidth_mam.operation)
	|| is_set(reservable_pool0_bandwidth_rdm.operation)
	|| is_set(reservable_pool1_bandwidth_mam.operation)
	|| is_set(reservable_pool1_bandwidth_rdm.operation)
	|| is_set(te_metric.operation)
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_operation())
	|| (hw_oor !=  nullptr && hw_oor->has_operation())
	|| (link_common !=  nullptr && link_common->has_operation());
}

std::string MplsLcac::LinkInformation::Links::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-information/links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_attribute_incomplete.is_set || is_set(is_attribute_incomplete.operation)) leaf_name_data.push_back(is_attribute_incomplete.get_name_leafdata());
    if (is_name_based_attribute.is_set || is_set(is_name_based_attribute.operation)) leaf_name_data.push_back(is_name_based_attribute.get_name_leafdata());
    if (is_te_metric_valid.is_set || is_set(is_te_metric_valid.operation)) leaf_name_data.push_back(is_te_metric_valid.get_name_leafdata());
    if (link_attributes.is_set || is_set(link_attributes.operation)) leaf_name_data.push_back(link_attributes.get_name_leafdata());
    if (maximum_reservation_bandwidth_mam.is_set || is_set(maximum_reservation_bandwidth_mam.operation)) leaf_name_data.push_back(maximum_reservation_bandwidth_mam.get_name_leafdata());
    if (maximum_reservation_bandwidth_rdm.is_set || is_set(maximum_reservation_bandwidth_rdm.operation)) leaf_name_data.push_back(maximum_reservation_bandwidth_rdm.get_name_leafdata());
    if (reason_not_flooded.is_set || is_set(reason_not_flooded.operation)) leaf_name_data.push_back(reason_not_flooded.get_name_leafdata());
    if (reservable_pool0_bandwidth_mam.is_set || is_set(reservable_pool0_bandwidth_mam.operation)) leaf_name_data.push_back(reservable_pool0_bandwidth_mam.get_name_leafdata());
    if (reservable_pool0_bandwidth_rdm.is_set || is_set(reservable_pool0_bandwidth_rdm.operation)) leaf_name_data.push_back(reservable_pool0_bandwidth_rdm.get_name_leafdata());
    if (reservable_pool1_bandwidth_mam.is_set || is_set(reservable_pool1_bandwidth_mam.operation)) leaf_name_data.push_back(reservable_pool1_bandwidth_mam.get_name_leafdata());
    if (reservable_pool1_bandwidth_rdm.is_set || is_set(reservable_pool1_bandwidth_rdm.operation)) leaf_name_data.push_back(reservable_pool1_bandwidth_rdm.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    auto link_extended_attribute_name_datas = link_extended_attribute.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), link_extended_attribute_name_datas.begin(), link_extended_attribute_name_datas.end());
    auto link_forwad_ref_value_name_datas = link_forwad_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), link_forwad_ref_value_name_datas.begin(), link_forwad_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity-map")
    {
        for(auto const & c : affinity_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::AffinityMap>();
        c->parent = this;
        affinity_map.push_back(std::move(c));
        children[segment_path] = affinity_map.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "areas")
    {
        for(auto const & c : areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::Areas>();
        c->parent = this;
        areas.push_back(std::move(c));
        children[segment_path] = areas.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-account")
    {
        if(bandwidth_account != nullptr)
        {
            children["bandwidth-account"] = bandwidth_account;
        }
        else
        {
            bandwidth_account = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount>();
            bandwidth_account->parent = this;
            children["bandwidth-account"] = bandwidth_account;
        }
        return children.at("bandwidth-account");
    }

    if(child_yang_name == "hw-oor")
    {
        if(hw_oor != nullptr)
        {
            children["hw-oor"] = hw_oor;
        }
        else
        {
            hw_oor = std::make_shared<MplsLcac::LinkInformation::Links::Link::HwOor>();
            hw_oor->parent = this;
            children["hw-oor"] = hw_oor;
        }
        return children.at("hw-oor");
    }

    if(child_yang_name == "link-common")
    {
        if(link_common != nullptr)
        {
            children["link-common"] = link_common;
        }
        else
        {
            link_common = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon>();
            link_common->parent = this;
            children["link-common"] = link_common;
        }
        return children.at("link-common");
    }

    if(child_yang_name == "lockout")
    {
        for(auto const & c : lockout)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::Lockout>();
        c->parent = this;
        lockout.push_back(std::move(c));
        children[segment_path] = lockout.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::get_children()
{
    for (auto const & c : affinity_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("bandwidth-account") == children.end())
    {
        if(bandwidth_account != nullptr)
        {
            children["bandwidth-account"] = bandwidth_account;
        }
    }

    if(children.find("hw-oor") == children.end())
    {
        if(hw_oor != nullptr)
        {
            children["hw-oor"] = hw_oor;
        }
    }

    if(children.find("link-common") == children.end())
    {
        if(link_common != nullptr)
        {
            children["link-common"] = link_common;
        }
    }

    for (auto const & c : lockout)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-attribute-incomplete")
    {
        is_attribute_incomplete = value;
    }
    if(value_path == "is-name-based-attribute")
    {
        is_name_based_attribute = value;
    }
    if(value_path == "is-te-metric-valid")
    {
        is_te_metric_valid = value;
    }
    if(value_path == "link-attributes")
    {
        link_attributes = value;
    }
    if(value_path == "link-extended-attribute")
    {
        link_extended_attribute.append(value);
    }
    if(value_path == "link-forwad-ref-value")
    {
        link_forwad_ref_value.append(value);
    }
    if(value_path == "maximum-reservation-bandwidth-mam")
    {
        maximum_reservation_bandwidth_mam = value;
    }
    if(value_path == "maximum-reservation-bandwidth-rdm")
    {
        maximum_reservation_bandwidth_rdm = value;
    }
    if(value_path == "reason-not-flooded")
    {
        reason_not_flooded = value;
    }
    if(value_path == "reservable-pool0-bandwidth-mam")
    {
        reservable_pool0_bandwidth_mam = value;
    }
    if(value_path == "reservable-pool0-bandwidth-rdm")
    {
        reservable_pool0_bandwidth_rdm = value;
    }
    if(value_path == "reservable-pool1-bandwidth-mam")
    {
        reservable_pool1_bandwidth_mam = value;
    }
    if(value_path == "reservable-pool1-bandwidth-rdm")
    {
        reservable_pool1_bandwidth_rdm = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkCommon()
    :
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    bcm_id{YType::uint16, "bcm-id"},
    capability{YType::uint32, "capability"},
    has_protection{YType::boolean, "has-protection"},
    igp_neighbors{YType::uint16, "igp-neighbors"},
    inbound_admission_method{YType::enumeration, "inbound-admission-method"},
    incoming_reservable_bandwidth_percentage{YType::uint8, "incoming-reservable-bandwidth-percentage"},
    incoming_reservable_pool0_bandwidth_percentage{YType::uint8, "incoming-reservable-pool0-bandwidth-percentage"},
    incoming_reservable_pool1_bandwidth_percentage{YType::uint8, "incoming-reservable-pool1-bandwidth-percentage"},
    is_resource_provider_installed{YType::boolean, "is-resource-provider-installed"},
    is_unnumbered{YType::boolean, "is-unnumbered"},
    last_flooded_effective_maximum_reservable_bandwidth{YType::uint64, "last-flooded-effective-maximum-reservable-bandwidth"},
    link_address{YType::str, "link-address"},
    link_id{YType::str, "link-id"},
    maximum_reservable_bandwidth{YType::uint64, "maximum-reservable-bandwidth"},
    maximum_reservable_pool0_bandwidth{YType::uint64, "maximum-reservable-pool0-bandwidth"},
    maximum_reservable_pool1_bandwidth{YType::uint64, "maximum-reservable-pool1-bandwidth"},
    outbound_admission_method{YType::enumeration, "outbound-admission-method"},
    outgoing_reservable_bandwidth_percentage{YType::uint8, "outgoing-reservable-bandwidth-percentage"},
    outgoing_reservable_pool0_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool0-bandwidth-percentage"},
    outgoing_reservable_pool1_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool1-bandwidth-percentage"},
    physical_bandwidth{YType::uint64, "physical-bandwidth"},
    resource_provider{YType::enumeration, "resource-provider"},
    working_priority{YType::uint32, "working-priority"}
    	,
    link_flags(std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags>())
{
    link_flags->parent = this;
    children["link-flags"] = link_flags;

    yang_name = "link-common"; yang_parent_name = "link";
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::~LinkCommon()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::has_data() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    return bandwidth_units.is_set
	|| bcm_id.is_set
	|| capability.is_set
	|| has_protection.is_set
	|| igp_neighbors.is_set
	|| inbound_admission_method.is_set
	|| incoming_reservable_bandwidth_percentage.is_set
	|| incoming_reservable_pool0_bandwidth_percentage.is_set
	|| incoming_reservable_pool1_bandwidth_percentage.is_set
	|| is_resource_provider_installed.is_set
	|| is_unnumbered.is_set
	|| last_flooded_effective_maximum_reservable_bandwidth.is_set
	|| link_address.is_set
	|| link_id.is_set
	|| maximum_reservable_bandwidth.is_set
	|| maximum_reservable_pool0_bandwidth.is_set
	|| maximum_reservable_pool1_bandwidth.is_set
	|| outbound_admission_method.is_set
	|| outgoing_reservable_bandwidth_percentage.is_set
	|| outgoing_reservable_pool0_bandwidth_percentage.is_set
	|| outgoing_reservable_pool1_bandwidth_percentage.is_set
	|| physical_bandwidth.is_set
	|| resource_provider.is_set
	|| working_priority.is_set
	|| (link_flags !=  nullptr && link_flags->has_data());
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::has_operation() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(bcm_id.operation)
	|| is_set(capability.operation)
	|| is_set(has_protection.operation)
	|| is_set(igp_neighbors.operation)
	|| is_set(inbound_admission_method.operation)
	|| is_set(incoming_reservable_bandwidth_percentage.operation)
	|| is_set(incoming_reservable_pool0_bandwidth_percentage.operation)
	|| is_set(incoming_reservable_pool1_bandwidth_percentage.operation)
	|| is_set(is_resource_provider_installed.operation)
	|| is_set(is_unnumbered.operation)
	|| is_set(last_flooded_effective_maximum_reservable_bandwidth.operation)
	|| is_set(link_address.operation)
	|| is_set(link_id.operation)
	|| is_set(maximum_reservable_bandwidth.operation)
	|| is_set(maximum_reservable_pool0_bandwidth.operation)
	|| is_set(maximum_reservable_pool1_bandwidth.operation)
	|| is_set(outbound_admission_method.operation)
	|| is_set(outgoing_reservable_bandwidth_percentage.operation)
	|| is_set(outgoing_reservable_pool0_bandwidth_percentage.operation)
	|| is_set(outgoing_reservable_pool1_bandwidth_percentage.operation)
	|| is_set(physical_bandwidth.operation)
	|| is_set(resource_provider.operation)
	|| is_set(working_priority.operation)
	|| (link_flags !=  nullptr && link_flags->has_operation());
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-common";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::LinkCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkCommon' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.operation)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (capability.is_set || is_set(capability.operation)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (has_protection.is_set || is_set(has_protection.operation)) leaf_name_data.push_back(has_protection.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.operation)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());
    if (inbound_admission_method.is_set || is_set(inbound_admission_method.operation)) leaf_name_data.push_back(inbound_admission_method.get_name_leafdata());
    if (incoming_reservable_bandwidth_percentage.is_set || is_set(incoming_reservable_bandwidth_percentage.operation)) leaf_name_data.push_back(incoming_reservable_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool0_bandwidth_percentage.is_set || is_set(incoming_reservable_pool0_bandwidth_percentage.operation)) leaf_name_data.push_back(incoming_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool1_bandwidth_percentage.is_set || is_set(incoming_reservable_pool1_bandwidth_percentage.operation)) leaf_name_data.push_back(incoming_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (is_resource_provider_installed.is_set || is_set(is_resource_provider_installed.operation)) leaf_name_data.push_back(is_resource_provider_installed.get_name_leafdata());
    if (is_unnumbered.is_set || is_set(is_unnumbered.operation)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());
    if (last_flooded_effective_maximum_reservable_bandwidth.is_set || is_set(last_flooded_effective_maximum_reservable_bandwidth.operation)) leaf_name_data.push_back(last_flooded_effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (maximum_reservable_bandwidth.is_set || is_set(maximum_reservable_bandwidth.operation)) leaf_name_data.push_back(maximum_reservable_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool0_bandwidth.is_set || is_set(maximum_reservable_pool0_bandwidth.operation)) leaf_name_data.push_back(maximum_reservable_pool0_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool1_bandwidth.is_set || is_set(maximum_reservable_pool1_bandwidth.operation)) leaf_name_data.push_back(maximum_reservable_pool1_bandwidth.get_name_leafdata());
    if (outbound_admission_method.is_set || is_set(outbound_admission_method.operation)) leaf_name_data.push_back(outbound_admission_method.get_name_leafdata());
    if (outgoing_reservable_bandwidth_percentage.is_set || is_set(outgoing_reservable_bandwidth_percentage.operation)) leaf_name_data.push_back(outgoing_reservable_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool0_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool0_bandwidth_percentage.operation)) leaf_name_data.push_back(outgoing_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool1_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool1_bandwidth_percentage.operation)) leaf_name_data.push_back(outgoing_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.operation)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (resource_provider.is_set || is_set(resource_provider.operation)) leaf_name_data.push_back(resource_provider.get_name_leafdata());
    if (working_priority.is_set || is_set(working_priority.operation)) leaf_name_data.push_back(working_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flooded-areas")
    {
        for(auto const & c : flooded_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas>();
        c->parent = this;
        flooded_areas.push_back(std::move(c));
        children[segment_path] = flooded_areas.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-switching-capability-descriptor")
    {
        for(auto const & c : interface_switching_capability_descriptor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor>();
        c->parent = this;
        interface_switching_capability_descriptor.push_back(std::move(c));
        children[segment_path] = interface_switching_capability_descriptor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "link-flags")
    {
        if(link_flags != nullptr)
        {
            children["link-flags"] = link_flags;
        }
        else
        {
            link_flags = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags>();
            link_flags->parent = this;
            children["link-flags"] = link_flags;
        }
        return children.at("link-flags");
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(std::move(c));
        children[segment_path] = shared_risk_link_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::LinkCommon::get_children()
{
    for (auto const & c : flooded_areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : interface_switching_capability_descriptor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("link-flags") == children.end())
    {
        if(link_flags != nullptr)
        {
            children["link-flags"] = link_flags;
        }
    }

    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
    }
    if(value_path == "capability")
    {
        capability = value;
    }
    if(value_path == "has-protection")
    {
        has_protection = value;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method = value;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage = value;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage = value;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage = value;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed = value;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth = value;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth = value;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth = value;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method = value;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage = value;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage = value;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage = value;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
    }
    if(value_path == "resource-provider")
    {
        resource_provider = value;
    }
    if(value_path == "working-priority")
    {
        working_priority = value;
    }
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::LinkFlags()
    :
    is_admin_up{YType::boolean, "is-admin-up"},
    is_mpls_te_on{YType::boolean, "is-mpls-te-on"},
    signaling_agent{YType::enumeration, "signaling-agent"}
{
    yang_name = "link-flags"; yang_parent_name = "link-common";
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::~LinkFlags()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_data() const
{
    return is_admin_up.is_set
	|| is_mpls_te_on.is_set
	|| signaling_agent.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_admin_up.operation)
	|| is_set(is_mpls_te_on.operation)
	|| is_set(signaling_agent.operation);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkFlags' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_admin_up.is_set || is_set(is_admin_up.operation)) leaf_name_data.push_back(is_admin_up.get_name_leafdata());
    if (is_mpls_te_on.is_set || is_set(is_mpls_te_on.operation)) leaf_name_data.push_back(is_mpls_te_on.get_name_leafdata());
    if (signaling_agent.is_set || is_set(signaling_agent.operation)) leaf_name_data.push_back(signaling_agent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_children()
{
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-admin-up")
    {
        is_admin_up = value;
    }
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on = value;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent = value;
    }
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "link-common";
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
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SharedRiskLinkGroup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.operation)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_children()
{
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::InterfaceSwitchingCapabilityDescriptor()
    :
    encoding{YType::uint8, "encoding"},
    key{YType::uint8, "key"},
    switching_capability{YType::uint8, "switching-capability"}
{
    yang_name = "interface-switching-capability-descriptor"; yang_parent_name = "link-common";
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::~InterfaceSwitchingCapabilityDescriptor()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_data() const
{
    return encoding.is_set
	|| key.is_set
	|| switching_capability.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_operation() const
{
    return is_set(operation)
	|| is_set(encoding.operation)
	|| is_set(key.operation)
	|| is_set(switching_capability.operation);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-switching-capability-descriptor";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceSwitchingCapabilityDescriptor' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encoding.is_set || is_set(encoding.operation)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (switching_capability.is_set || is_set(switching_capability.operation)) leaf_name_data.push_back(switching_capability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_children()
{
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encoding")
    {
        encoding = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "switching-capability")
    {
        switching_capability = value;
    }
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::FloodedAreas()
    :
    flooded_area{YType::str, "flooded-area"}
{
    yang_name = "flooded-areas"; yang_parent_name = "link-common";
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
    return is_set(operation)
	|| is_set(flooded_area.operation);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-areas";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodedAreas' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooded_area.is_set || is_set(flooded_area.operation)) leaf_name_data.push_back(flooded_area.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_children()
{
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flooded-area")
    {
        flooded_area = value;
    }
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccount()
    :
    bandwidth_account_common_info(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo>())
	,bandwidth_sample_history(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory>())
{
    bandwidth_account_common_info->parent = this;
    children["bandwidth-account-common-info"] = bandwidth_account_common_info;

    bandwidth_sample_history->parent = this;
    children["bandwidth-sample-history"] = bandwidth_sample_history;

    yang_name = "bandwidth-account"; yang_parent_name = "link";
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::~BandwidthAccount()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::has_data() const
{
    return (bandwidth_account_common_info !=  nullptr && bandwidth_account_common_info->has_data())
	|| (bandwidth_sample_history !=  nullptr && bandwidth_sample_history->has_data());
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::has_operation() const
{
    return is_set(operation)
	|| (bandwidth_account_common_info !=  nullptr && bandwidth_account_common_info->has_operation())
	|| (bandwidth_sample_history !=  nullptr && bandwidth_sample_history->has_operation());
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::BandwidthAccount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthAccount' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-account-common-info")
    {
        if(bandwidth_account_common_info != nullptr)
        {
            children["bandwidth-account-common-info"] = bandwidth_account_common_info;
        }
        else
        {
            bandwidth_account_common_info = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo>();
            bandwidth_account_common_info->parent = this;
            children["bandwidth-account-common-info"] = bandwidth_account_common_info;
        }
        return children.at("bandwidth-account-common-info");
    }

    if(child_yang_name == "bandwidth-sample-history")
    {
        if(bandwidth_sample_history != nullptr)
        {
            children["bandwidth-sample-history"] = bandwidth_sample_history;
        }
        else
        {
            bandwidth_sample_history = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory>();
            bandwidth_sample_history->parent = this;
            children["bandwidth-sample-history"] = bandwidth_sample_history;
        }
        return children.at("bandwidth-sample-history");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::BandwidthAccount::get_children()
{
    if(children.find("bandwidth-account-common-info") == children.end())
    {
        if(bandwidth_account_common_info != nullptr)
        {
            children["bandwidth-account-common-info"] = bandwidth_account_common_info;
        }
    }

    if(children.find("bandwidth-sample-history") == children.end())
    {
        if(bandwidth_sample_history != nullptr)
        {
            children["bandwidth-sample-history"] = bandwidth_sample_history;
        }
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthAccountCommonInfo()
    :
    adjustment_factor{YType::uint32, "adjustment-factor"},
    application_enabled{YType::boolean, "application-enabled"},
    application_interval{YType::uint32, "application-interval"},
    application_time_remaining{YType::uint32, "application-time-remaining"},
    collection_type{YType::enumeration, "collection-type"},
    down_threshold_max_reservable_bandwidth{YType::uint8, "down-threshold-max-reservable-bandwidth"},
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    last_application_timestamp{YType::uint32, "last-application-timestamp"},
    last_sample_collection_timestamp{YType::uint32, "last-sample-collection-timestamp"},
    max_reservable_bandwidth_threshold_are_default{YType::boolean, "max-reservable-bandwidth-threshold-are-default"},
    next_application{YType::uint32, "next-application"},
    next_sample_collection{YType::uint32, "next-sample-collection"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_time_remaining{YType::uint32, "sample-time-remaining"},
    up_threshold_max_reservable_bandwidth{YType::uint8, "up-threshold-max-reservable-bandwidth"}
    	,
    bandwidth_utilization(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization>())
{
    bandwidth_utilization->parent = this;
    children["bandwidth-utilization"] = bandwidth_utilization;

    yang_name = "bandwidth-account-common-info"; yang_parent_name = "bandwidth-account";
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::~BandwidthAccountCommonInfo()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_data() const
{
    return adjustment_factor.is_set
	|| application_enabled.is_set
	|| application_interval.is_set
	|| application_time_remaining.is_set
	|| collection_type.is_set
	|| down_threshold_max_reservable_bandwidth.is_set
	|| is_bandwidth_account_enabled.is_set
	|| last_application_timestamp.is_set
	|| last_sample_collection_timestamp.is_set
	|| max_reservable_bandwidth_threshold_are_default.is_set
	|| next_application.is_set
	|| next_sample_collection.is_set
	|| sample_interval.is_set
	|| sample_time_remaining.is_set
	|| up_threshold_max_reservable_bandwidth.is_set
	|| (bandwidth_utilization !=  nullptr && bandwidth_utilization->has_data());
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(adjustment_factor.operation)
	|| is_set(application_enabled.operation)
	|| is_set(application_interval.operation)
	|| is_set(application_time_remaining.operation)
	|| is_set(collection_type.operation)
	|| is_set(down_threshold_max_reservable_bandwidth.operation)
	|| is_set(is_bandwidth_account_enabled.operation)
	|| is_set(last_application_timestamp.operation)
	|| is_set(last_sample_collection_timestamp.operation)
	|| is_set(max_reservable_bandwidth_threshold_are_default.operation)
	|| is_set(next_application.operation)
	|| is_set(next_sample_collection.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_time_remaining.operation)
	|| is_set(up_threshold_max_reservable_bandwidth.operation)
	|| (bandwidth_utilization !=  nullptr && bandwidth_utilization->has_operation());
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-common-info";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthAccountCommonInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_factor.is_set || is_set(adjustment_factor.operation)) leaf_name_data.push_back(adjustment_factor.get_name_leafdata());
    if (application_enabled.is_set || is_set(application_enabled.operation)) leaf_name_data.push_back(application_enabled.get_name_leafdata());
    if (application_interval.is_set || is_set(application_interval.operation)) leaf_name_data.push_back(application_interval.get_name_leafdata());
    if (application_time_remaining.is_set || is_set(application_time_remaining.operation)) leaf_name_data.push_back(application_time_remaining.get_name_leafdata());
    if (collection_type.is_set || is_set(collection_type.operation)) leaf_name_data.push_back(collection_type.get_name_leafdata());
    if (down_threshold_max_reservable_bandwidth.is_set || is_set(down_threshold_max_reservable_bandwidth.operation)) leaf_name_data.push_back(down_threshold_max_reservable_bandwidth.get_name_leafdata());
    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.operation)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (last_application_timestamp.is_set || is_set(last_application_timestamp.operation)) leaf_name_data.push_back(last_application_timestamp.get_name_leafdata());
    if (last_sample_collection_timestamp.is_set || is_set(last_sample_collection_timestamp.operation)) leaf_name_data.push_back(last_sample_collection_timestamp.get_name_leafdata());
    if (max_reservable_bandwidth_threshold_are_default.is_set || is_set(max_reservable_bandwidth_threshold_are_default.operation)) leaf_name_data.push_back(max_reservable_bandwidth_threshold_are_default.get_name_leafdata());
    if (next_application.is_set || is_set(next_application.operation)) leaf_name_data.push_back(next_application.get_name_leafdata());
    if (next_sample_collection.is_set || is_set(next_sample_collection.operation)) leaf_name_data.push_back(next_sample_collection.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_time_remaining.is_set || is_set(sample_time_remaining.operation)) leaf_name_data.push_back(sample_time_remaining.get_name_leafdata());
    if (up_threshold_max_reservable_bandwidth.is_set || is_set(up_threshold_max_reservable_bandwidth.operation)) leaf_name_data.push_back(up_threshold_max_reservable_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-utilization")
    {
        if(bandwidth_utilization != nullptr)
        {
            children["bandwidth-utilization"] = bandwidth_utilization;
        }
        else
        {
            bandwidth_utilization = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization>();
            bandwidth_utilization->parent = this;
            children["bandwidth-utilization"] = bandwidth_utilization;
        }
        return children.at("bandwidth-utilization");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_children()
{
    if(children.find("bandwidth-utilization") == children.end())
    {
        if(bandwidth_utilization != nullptr)
        {
            children["bandwidth-utilization"] = bandwidth_utilization;
        }
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjustment-factor")
    {
        adjustment_factor = value;
    }
    if(value_path == "application-enabled")
    {
        application_enabled = value;
    }
    if(value_path == "application-interval")
    {
        application_interval = value;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining = value;
    }
    if(value_path == "collection-type")
    {
        collection_type = value;
    }
    if(value_path == "down-threshold-max-reservable-bandwidth")
    {
        down_threshold_max_reservable_bandwidth = value;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
    }
    if(value_path == "last-application-timestamp")
    {
        last_application_timestamp = value;
    }
    if(value_path == "last-sample-collection-timestamp")
    {
        last_sample_collection_timestamp = value;
    }
    if(value_path == "max-reservable-bandwidth-threshold-are-default")
    {
        max_reservable_bandwidth_threshold_are_default = value;
    }
    if(value_path == "next-application")
    {
        next_application = value;
    }
    if(value_path == "next-sample-collection")
    {
        next_sample_collection = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining = value;
    }
    if(value_path == "up-threshold-max-reservable-bandwidth")
    {
        up_threshold_max_reservable_bandwidth = value;
    }
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::BandwidthUtilization()
    :
    applied_non_rsvp_te_bandwidth_utilization{YType::uint64, "applied-non-rsvp-te-bandwidth-utilization"},
    non_rsvp_te_bandwidth_utilization{YType::uint64, "non-rsvp-te-bandwidth-utilization"},
    rsvp_te_bandwidth_utilization{YType::uint64, "rsvp-te-bandwidth-utilization"},
    total_link_bandwidth_utilization{YType::uint64, "total-link-bandwidth-utilization"}
{
    yang_name = "bandwidth-utilization"; yang_parent_name = "bandwidth-account-common-info";
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::~BandwidthUtilization()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::has_data() const
{
    return applied_non_rsvp_te_bandwidth_utilization.is_set
	|| non_rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_bandwidth_utilization.is_set
	|| total_link_bandwidth_utilization.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::has_operation() const
{
    return is_set(operation)
	|| is_set(applied_non_rsvp_te_bandwidth_utilization.operation)
	|| is_set(non_rsvp_te_bandwidth_utilization.operation)
	|| is_set(rsvp_te_bandwidth_utilization.operation)
	|| is_set(total_link_bandwidth_utilization.operation);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-utilization";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthUtilization' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applied_non_rsvp_te_bandwidth_utilization.is_set || is_set(applied_non_rsvp_te_bandwidth_utilization.operation)) leaf_name_data.push_back(applied_non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (non_rsvp_te_bandwidth_utilization.is_set || is_set(non_rsvp_te_bandwidth_utilization.operation)) leaf_name_data.push_back(non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_bandwidth_utilization.is_set || is_set(rsvp_te_bandwidth_utilization.operation)) leaf_name_data.push_back(rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (total_link_bandwidth_utilization.is_set || is_set(total_link_bandwidth_utilization.operation)) leaf_name_data.push_back(total_link_bandwidth_utilization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::get_children()
{
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applied-non-rsvp-te-bandwidth-utilization")
    {
        applied_non_rsvp_te_bandwidth_utilization = value;
    }
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization = value;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization = value;
    }
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization = value;
    }
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::BandwidthSampleHistory()
    :
    total_applications{YType::uint32, "total-applications"},
    total_samples{YType::uint32, "total-samples"}
{
    yang_name = "bandwidth-sample-history"; yang_parent_name = "bandwidth-account";
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::~BandwidthSampleHistory()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::has_data() const
{
    for (std::size_t index=0; index<active_interval_sample.size(); index++)
    {
        if(active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<previous_interval_sample.size(); index++)
    {
        if(previous_interval_sample[index]->has_data())
            return true;
    }
    return total_applications.is_set
	|| total_samples.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<active_interval_sample.size(); index++)
    {
        if(active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<previous_interval_sample.size(); index++)
    {
        if(previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(total_applications.operation)
	|| is_set(total_samples.operation);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-sample-history";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthSampleHistory' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_applications.is_set || is_set(total_applications.operation)) leaf_name_data.push_back(total_applications.get_name_leafdata());
    if (total_samples.is_set || is_set(total_samples.operation)) leaf_name_data.push_back(total_samples.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-interval-sample")
    {
        for(auto const & c : active_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample>();
        c->parent = this;
        active_interval_sample.push_back(std::move(c));
        children[segment_path] = active_interval_sample.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "previous-interval-sample")
    {
        for(auto const & c : previous_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample>();
        c->parent = this;
        previous_interval_sample.push_back(std::move(c));
        children[segment_path] = previous_interval_sample.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::get_children()
{
    for (auto const & c : active_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : previous_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-applications")
    {
        total_applications = value;
    }
    if(value_path == "total-samples")
    {
        total_samples = value;
    }
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::ActiveIntervalSample()
    :
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp{YType::uint32, "timestamp"},
    total_rate{YType::uint64, "total-rate"}
{
    yang_name = "active-interval-sample"; yang_parent_name = "bandwidth-sample-history";
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::~ActiveIntervalSample()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::has_data() const
{
    return non_rsvp_te_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp.is_set
	|| total_rate.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::has_operation() const
{
    return is_set(operation)
	|| is_set(non_rsvp_te_rate.operation)
	|| is_set(rsvp_te_rate.operation)
	|| is_set(timestamp.operation)
	|| is_set(total_rate.operation);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-interval-sample";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveIntervalSample' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.operation)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.operation)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.operation)) leaf_name_data.push_back(total_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::get_children()
{
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
    }
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::PreviousIntervalSample()
    :
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp{YType::uint32, "timestamp"},
    total_rate{YType::uint64, "total-rate"}
{
    yang_name = "previous-interval-sample"; yang_parent_name = "bandwidth-sample-history";
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::~PreviousIntervalSample()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::has_data() const
{
    return non_rsvp_te_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp.is_set
	|| total_rate.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::has_operation() const
{
    return is_set(operation)
	|| is_set(non_rsvp_te_rate.operation)
	|| is_set(rsvp_te_rate.operation)
	|| is_set(timestamp.operation)
	|| is_set(total_rate.operation);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-interval-sample";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreviousIntervalSample' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.operation)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.operation)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.operation)) leaf_name_data.push_back(total_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::get_children()
{
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
    }
}

MplsLcac::LinkInformation::Links::Link::HwOor::HwOor()
    :
    hw_o_or_green_recovery_time{YType::uint32, "hw-o-or-green-recovery-time"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    hw_oor_timestamp{YType::uint32, "hw-oor-timestamp"}
{
    yang_name = "hw-oor"; yang_parent_name = "link";
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
    return hw_o_or_green_recovery_time.is_set
	|| hw_oor_state.is_set
	|| hw_oor_timestamp.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::HwOor::has_operation() const
{
    for (std::size_t index=0; index<hw_o_or_link_statistic.size(); index++)
    {
        if(hw_o_or_link_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(hw_o_or_green_recovery_time.operation)
	|| is_set(hw_oor_state.operation)
	|| is_set(hw_oor_timestamp.operation);
}

std::string MplsLcac::LinkInformation::Links::Link::HwOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-oor";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::HwOor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwOor' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_o_or_green_recovery_time.is_set || is_set(hw_o_or_green_recovery_time.operation)) leaf_name_data.push_back(hw_o_or_green_recovery_time.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.operation)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (hw_oor_timestamp.is_set || is_set(hw_oor_timestamp.operation)) leaf_name_data.push_back(hw_oor_timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::HwOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hw-o-or-link-statistic")
    {
        for(auto const & c : hw_o_or_link_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic>();
        c->parent = this;
        hw_o_or_link_statistic.push_back(std::move(c));
        children[segment_path] = hw_o_or_link_statistic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::HwOor::get_children()
{
    for (auto const & c : hw_o_or_link_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::HwOor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hw-o-or-green-recovery-time")
    {
        hw_o_or_green_recovery_time = value;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
    }
    if(value_path == "hw-oor-timestamp")
    {
        hw_oor_timestamp = value;
    }
}

MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::HwOOrLinkStatistic()
    :
    accepted_ls_ps_number{YType::uint32, "accepted-ls-ps-number"},
    accepted_reopt_ls_ps_number{YType::uint32, "accepted-reopt-ls-ps-number"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    node_protection_disable_number{YType::uint32, "node-protection-disable-number"},
    rejected_ls_ps_number{YType::uint32, "rejected-ls-ps-number"},
    rejected_reopt_ls_ps_number{YType::uint32, "rejected-reopt-ls-ps-number"},
    transitions{YType::uint32, "transitions"}
{
    yang_name = "hw-o-or-link-statistic"; yang_parent_name = "hw-oor";
}

MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::~HwOOrLinkStatistic()
{
}

bool MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_data() const
{
    return accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| hw_oor_state.is_set
	|| node_protection_disable_number.is_set
	|| rejected_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set
	|| transitions.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_ls_ps_number.operation)
	|| is_set(accepted_reopt_ls_ps_number.operation)
	|| is_set(hw_oor_state.operation)
	|| is_set(node_protection_disable_number.operation)
	|| is_set(rejected_ls_ps_number.operation)
	|| is_set(rejected_reopt_ls_ps_number.operation)
	|| is_set(transitions.operation);
}

std::string MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-o-or-link-statistic";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwOOrLinkStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_ls_ps_number.is_set || is_set(accepted_ls_ps_number.operation)) leaf_name_data.push_back(accepted_ls_ps_number.get_name_leafdata());
    if (accepted_reopt_ls_ps_number.is_set || is_set(accepted_reopt_ls_ps_number.operation)) leaf_name_data.push_back(accepted_reopt_ls_ps_number.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.operation)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (node_protection_disable_number.is_set || is_set(node_protection_disable_number.operation)) leaf_name_data.push_back(node_protection_disable_number.get_name_leafdata());
    if (rejected_ls_ps_number.is_set || is_set(rejected_ls_ps_number.operation)) leaf_name_data.push_back(rejected_ls_ps_number.get_name_leafdata());
    if (rejected_reopt_ls_ps_number.is_set || is_set(rejected_reopt_ls_ps_number.operation)) leaf_name_data.push_back(rejected_reopt_ls_ps_number.get_name_leafdata());
    if (transitions.is_set || is_set(transitions.operation)) leaf_name_data.push_back(transitions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_children()
{
    return children;
}

void MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number = value;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number = value;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number = value;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number = value;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number = value;
    }
    if(value_path == "transitions")
    {
        transitions = value;
    }
}

MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityMap()
    :
    affinity_bit_position{YType::uint8, "affinity-bit-position"},
    affinity_extended_value{YType::uint32, "affinity-extended-value"},
    affinity_name{YType::str, "affinity-name"},
    affinity_table_id{YType::enumeration, "affinity-table-id"},
    affinity_value{YType::uint32, "affinity-value"}
{
    yang_name = "affinity-map"; yang_parent_name = "link";
}

MplsLcac::LinkInformation::Links::Link::AffinityMap::~AffinityMap()
{
}

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::has_data() const
{
    for (auto const & leaf : affinity_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return affinity_bit_position.is_set
	|| affinity_name.is_set
	|| affinity_table_id.is_set
	|| affinity_value.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::has_operation() const
{
    for (auto const & leaf : affinity_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bit_position.operation)
	|| is_set(affinity_extended_value.operation)
	|| is_set(affinity_name.operation)
	|| is_set(affinity_table_id.operation)
	|| is_set(affinity_value.operation);
}

std::string MplsLcac::LinkInformation::Links::Link::AffinityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::AffinityMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AffinityMap' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bit_position.is_set || is_set(affinity_bit_position.operation)) leaf_name_data.push_back(affinity_bit_position.get_name_leafdata());
    if (affinity_name.is_set || is_set(affinity_name.operation)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (affinity_table_id.is_set || is_set(affinity_table_id.operation)) leaf_name_data.push_back(affinity_table_id.get_name_leafdata());
    if (affinity_value.is_set || is_set(affinity_value.operation)) leaf_name_data.push_back(affinity_value.get_name_leafdata());

    auto affinity_extended_value_name_datas = affinity_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), affinity_extended_value_name_datas.begin(), affinity_extended_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::AffinityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::AffinityMap::get_children()
{
    return children;
}

void MplsLcac::LinkInformation::Links::Link::AffinityMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position = value;
    }
    if(value_path == "affinity-extended-value")
    {
        affinity_extended_value.append(value);
    }
    if(value_path == "affinity-name")
    {
        affinity_name = value;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id = value;
    }
    if(value_path == "affinity-value")
    {
        affinity_value = value;
    }
}

MplsLcac::LinkInformation::Links::Link::Areas::Areas()
    :
    area_id{YType::str, "area-id"},
    igp_metric{YType::uint32, "igp-metric"},
    is_neighbor_up{YType::boolean, "is-neighbor-up"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"}
{
    yang_name = "areas"; yang_parent_name = "link";
}

MplsLcac::LinkInformation::Links::Link::Areas::~Areas()
{
}

bool MplsLcac::LinkInformation::Links::Link::Areas::has_data() const
{
    return area_id.is_set
	|| igp_metric.is_set
	|| is_neighbor_up.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::Areas::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(igp_metric.operation)
	|| is_set(is_neighbor_up.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation);
}

std::string MplsLcac::LinkInformation::Links::Link::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::Areas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Areas' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (is_neighbor_up.is_set || is_set(is_neighbor_up.operation)) leaf_name_data.push_back(is_neighbor_up.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::Areas::get_children()
{
    return children;
}

void MplsLcac::LinkInformation::Links::Link::Areas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

MplsLcac::LinkInformation::Links::Link::Lockout::Lockout()
    :
    is_lockout{YType::boolean, "is-lockout"},
    lockout_off_timestamp{YType::uint32, "lockout-off-timestamp"},
    lockout_on_timestamp{YType::uint32, "lockout-on-timestamp"}
{
    yang_name = "lockout"; yang_parent_name = "link";
}

MplsLcac::LinkInformation::Links::Link::Lockout::~Lockout()
{
}

bool MplsLcac::LinkInformation::Links::Link::Lockout::has_data() const
{
    return is_lockout.is_set
	|| lockout_off_timestamp.is_set
	|| lockout_on_timestamp.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::Lockout::has_operation() const
{
    return is_set(operation)
	|| is_set(is_lockout.operation)
	|| is_set(lockout_off_timestamp.operation)
	|| is_set(lockout_on_timestamp.operation);
}

std::string MplsLcac::LinkInformation::Links::Link::Lockout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockout";

    return path_buffer.str();

}

EntityPath MplsLcac::LinkInformation::Links::Link::Lockout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lockout' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_lockout.is_set || is_set(is_lockout.operation)) leaf_name_data.push_back(is_lockout.get_name_leafdata());
    if (lockout_off_timestamp.is_set || is_set(lockout_off_timestamp.operation)) leaf_name_data.push_back(lockout_off_timestamp.get_name_leafdata());
    if (lockout_on_timestamp.is_set || is_set(lockout_on_timestamp.operation)) leaf_name_data.push_back(lockout_on_timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::Lockout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::LinkInformation::Links::Link::Lockout::get_children()
{
    return children;
}

void MplsLcac::LinkInformation::Links::Link::Lockout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-lockout")
    {
        is_lockout = value;
    }
    if(value_path == "lockout-off-timestamp")
    {
        lockout_off_timestamp = value;
    }
    if(value_path == "lockout-on-timestamp")
    {
        lockout_on_timestamp = value;
    }
}

MplsLcac::AdmissionControl::AdmissionControl()
    :
    admitted_tunnels(std::make_shared<MplsLcac::AdmissionControl::AdmittedTunnels>())
	,global(std::make_shared<MplsLcac::AdmissionControl::Global>())
	,link_interfaces(std::make_shared<MplsLcac::AdmissionControl::LinkInterfaces>())
{
    admitted_tunnels->parent = this;
    children["admitted-tunnels"] = admitted_tunnels;

    global->parent = this;
    children["global"] = global;

    link_interfaces->parent = this;
    children["link-interfaces"] = link_interfaces;

    yang_name = "admission-control"; yang_parent_name = "mpls-lcac";
}

MplsLcac::AdmissionControl::~AdmissionControl()
{
}

bool MplsLcac::AdmissionControl::has_data() const
{
    return (admitted_tunnels !=  nullptr && admitted_tunnels->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (link_interfaces !=  nullptr && link_interfaces->has_data());
}

bool MplsLcac::AdmissionControl::has_operation() const
{
    return is_set(operation)
	|| (admitted_tunnels !=  nullptr && admitted_tunnels->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (link_interfaces !=  nullptr && link_interfaces->has_operation());
}

std::string MplsLcac::AdmissionControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission-control";

    return path_buffer.str();

}

EntityPath MplsLcac::AdmissionControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admitted-tunnels")
    {
        if(admitted_tunnels != nullptr)
        {
            children["admitted-tunnels"] = admitted_tunnels;
        }
        else
        {
            admitted_tunnels = std::make_shared<MplsLcac::AdmissionControl::AdmittedTunnels>();
            admitted_tunnels->parent = this;
            children["admitted-tunnels"] = admitted_tunnels;
        }
        return children.at("admitted-tunnels");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<MplsLcac::AdmissionControl::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    if(child_yang_name == "link-interfaces")
    {
        if(link_interfaces != nullptr)
        {
            children["link-interfaces"] = link_interfaces;
        }
        else
        {
            link_interfaces = std::make_shared<MplsLcac::AdmissionControl::LinkInterfaces>();
            link_interfaces->parent = this;
            children["link-interfaces"] = link_interfaces;
        }
        return children.at("link-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::AdmissionControl::get_children()
{
    if(children.find("admitted-tunnels") == children.end())
    {
        if(admitted_tunnels != nullptr)
        {
            children["admitted-tunnels"] = admitted_tunnels;
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    if(children.find("link-interfaces") == children.end())
    {
        if(link_interfaces != nullptr)
        {
            children["link-interfaces"] = link_interfaces;
        }
    }

    return children;
}

void MplsLcac::AdmissionControl::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::AdmissionControl::Global::Global()
    :
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_role_standby{YType::boolean, "is-role-standby"},
    selected_tunnels{YType::uint32, "selected-tunnels"},
    total_p2mp_tunnels{YType::uint32, "total-p2mp-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "global"; yang_parent_name = "admission-control";
}

MplsLcac::AdmissionControl::Global::~Global()
{
}

bool MplsLcac::AdmissionControl::Global::has_data() const
{
    return bandwidth_units.is_set
	|| is_role_standby.is_set
	|| selected_tunnels.is_set
	|| total_p2mp_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsLcac::AdmissionControl::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(is_role_standby.operation)
	|| is_set(selected_tunnels.operation)
	|| is_set(total_p2mp_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsLcac::AdmissionControl::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsLcac::AdmissionControl::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.operation)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (selected_tunnels.is_set || is_set(selected_tunnels.operation)) leaf_name_data.push_back(selected_tunnels.get_name_leafdata());
    if (total_p2mp_tunnels.is_set || is_set(total_p2mp_tunnels.operation)) leaf_name_data.push_back(total_p2mp_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::AdmissionControl::Global::get_children()
{
    return children;
}

void MplsLcac::AdmissionControl::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels = value;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnels()
{
    yang_name = "admitted-tunnels"; yang_parent_name = "admission-control";
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
    return is_set(operation);
}

std::string MplsLcac::AdmissionControl::AdmittedTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admitted-tunnels";

    return path_buffer.str();

}

EntityPath MplsLcac::AdmissionControl::AdmittedTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::AdmittedTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admitted-tunnel")
    {
        for(auto const & c : admitted_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel>();
        c->parent = this;
        admitted_tunnel.push_back(std::move(c));
        children[segment_path] = admitted_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::AdmissionControl::AdmittedTunnels::get_children()
{
    for (auto const & c : admitted_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::AdmissionControl::AdmittedTunnels::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::AdmittedTunnel()
    :
    ctype{YType::enumeration, "ctype"},
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    next_hop_address{YType::str, "next-hop-address"},
    p2mp_id{YType::int32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    backup_interface{YType::str, "backup-interface"},
    bandwidth{YType::uint64, "bandwidth"},
    bandwidth_pool{YType::enumeration, "bandwidth-pool"},
    bandwidth_state{YType::enumeration, "bandwidth-state"},
    down_link_name{YType::str, "down-link-name"},
    hold_priority{YType::uint8, "hold-priority"},
    is_rerouted{YType::boolean, "is-rerouted"},
    local_label{YType::uint32, "local-label"},
    outgoing_label{YType::uint32, "outgoing-label"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_state{YType::enumeration, "tunnel-state"},
    up_link_name{YType::str, "up-link-name"}
{
    yang_name = "admitted-tunnel"; yang_parent_name = "admitted-tunnels";
}

MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::~AdmittedTunnel()
{
}

bool MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_data() const
{
    return ctype.is_set
	|| destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| next_hop_address.is_set
	|| p2mp_id.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| backup_interface.is_set
	|| bandwidth.is_set
	|| bandwidth_pool.is_set
	|| bandwidth_state.is_set
	|| down_link_name.is_set
	|| hold_priority.is_set
	|| is_rerouted.is_set
	|| local_label.is_set
	|| outgoing_label.is_set
	|| setup_priority.is_set
	|| tunnel_name.is_set
	|| tunnel_state.is_set
	|| up_link_name.is_set;
}

bool MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(ctype.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(backup_interface.operation)
	|| is_set(bandwidth.operation)
	|| is_set(bandwidth_pool.operation)
	|| is_set(bandwidth_state.operation)
	|| is_set(down_link_name.operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_rerouted.operation)
	|| is_set(local_label.operation)
	|| is_set(outgoing_label.operation)
	|| is_set(setup_priority.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_state.operation)
	|| is_set(up_link_name.operation);
}

std::string MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admitted-tunnel" <<"[ctype='" <<ctype <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[destination-port='" <<destination_port <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[source-port='" <<source_port <<"']";

    return path_buffer.str();

}

EntityPath MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/admitted-tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.operation)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth_pool.is_set || is_set(bandwidth_pool.operation)) leaf_name_data.push_back(bandwidth_pool.get_name_leafdata());
    if (bandwidth_state.is_set || is_set(bandwidth_state.operation)) leaf_name_data.push_back(bandwidth_state.get_name_leafdata());
    if (down_link_name.is_set || is_set(down_link_name.operation)) leaf_name_data.push_back(down_link_name.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_rerouted.is_set || is_set(is_rerouted.operation)) leaf_name_data.push_back(is_rerouted.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.operation)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.operation)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (up_link_name.is_set || is_set(up_link_name.operation)) leaf_name_data.push_back(up_link_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_children()
{
    return children;
}

void MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ctype")
    {
        ctype = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool = value;
    }
    if(value_path == "bandwidth-state")
    {
        bandwidth_state = value;
    }
    if(value_path == "down-link-name")
    {
        down_link_name = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-rerouted")
    {
        is_rerouted = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
    }
    if(value_path == "up-link-name")
    {
        up_link_name = value;
    }
}

MplsLcac::AdmissionControl::LinkInterfaces::LinkInterfaces()
{
    yang_name = "link-interfaces"; yang_parent_name = "admission-control";
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
    return is_set(operation);
}

std::string MplsLcac::AdmissionControl::LinkInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-interfaces";

    return path_buffer.str();

}

EntityPath MplsLcac::AdmissionControl::LinkInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::LinkInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-interface")
    {
        for(auto const & c : link_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface>();
        c->parent = this;
        link_interface.push_back(std::move(c));
        children[segment_path] = link_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::AdmissionControl::LinkInterfaces::get_children()
{
    for (auto const & c : link_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::AdmissionControl::LinkInterfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::LinkInterface()
    :
    interface_name{YType::str, "interface-name"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_role_standby{YType::boolean, "is-role-standby"},
    selected_tunnels{YType::uint32, "selected-tunnels"},
    total_p2mp_tunnels{YType::uint32, "total-p2mp-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "link-interface"; yang_parent_name = "link-interfaces";
}

MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::~LinkInterface()
{
}

bool MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::has_data() const
{
    return interface_name.is_set
	|| bandwidth_units.is_set
	|| is_role_standby.is_set
	|| selected_tunnels.is_set
	|| total_p2mp_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(is_role_standby.operation)
	|| is_set(selected_tunnels.operation)
	|| is_set(total_p2mp_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/link-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.operation)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (selected_tunnels.is_set || is_set(selected_tunnels.operation)) leaf_name_data.push_back(selected_tunnels.get_name_leafdata());
    if (total_p2mp_tunnels.is_set || is_set(total_p2mp_tunnels.operation)) leaf_name_data.push_back(total_p2mp_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_children()
{
    return children;
}

void MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels = value;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsLcac::SoftPreemptionGlobalInfo::SoftPreemptionGlobalInfo()
    :
    is_configured{YType::boolean, "is-configured"},
    is_timeout_interval_configured{YType::boolean, "is-timeout-interval-configured"},
    timeout_interval{YType::uint32, "timeout-interval"}
{
    yang_name = "soft-preemption-global-info"; yang_parent_name = "mpls-lcac";
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
    return is_set(operation)
	|| is_set(is_configured.operation)
	|| is_set(is_timeout_interval_configured.operation)
	|| is_set(timeout_interval.operation);
}

std::string MplsLcac::SoftPreemptionGlobalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-global-info";

    return path_buffer.str();

}

EntityPath MplsLcac::SoftPreemptionGlobalInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.operation)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (is_timeout_interval_configured.is_set || is_set(is_timeout_interval_configured.operation)) leaf_name_data.push_back(is_timeout_interval_configured.get_name_leafdata());
    if (timeout_interval.is_set || is_set(timeout_interval.operation)) leaf_name_data.push_back(timeout_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::SoftPreemptionGlobalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::SoftPreemptionGlobalInfo::get_children()
{
    return children;
}

void MplsLcac::SoftPreemptionGlobalInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
    }
    if(value_path == "is-timeout-interval-configured")
    {
        is_timeout_interval_configured = value;
    }
    if(value_path == "timeout-interval")
    {
        timeout_interval = value;
    }
}

MplsLcac::SoftPreemptions::SoftPreemptions()
{
    yang_name = "soft-preemptions"; yang_parent_name = "mpls-lcac";
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
    return is_set(operation);
}

std::string MplsLcac::SoftPreemptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemptions";

    return path_buffer.str();

}

EntityPath MplsLcac::SoftPreemptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::SoftPreemptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "soft-preemption")
    {
        for(auto const & c : soft_preemption)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::SoftPreemptions::SoftPreemption>();
        c->parent = this;
        soft_preemption.push_back(std::move(c));
        children[segment_path] = soft_preemption.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::SoftPreemptions::get_children()
{
    for (auto const & c : soft_preemption)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::SoftPreemptions::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::SoftPreemptions::SoftPreemption::SoftPreemption()
    :
    interface_name{YType::str, "interface-name"},
    current_over_subscribed_bandwidth_bc0{YType::uint64, "current-over-subscribed-bandwidth-bc0"},
    current_over_subscribed_bandwidth_bc1{YType::uint64, "current-over-subscribed-bandwidth-bc1"},
    current_soft_preempted_bandwidth_bc0{YType::uint64, "current-soft-preempted-bandwidth-bc0"},
    current_soft_preempted_bandwidth_bc1{YType::uint64, "current-soft-preempted-bandwidth-bc1"},
    link_address{YType::str, "link-address"},
    release_soft_preempted_bandwidth_bc0{YType::uint64, "release-soft-preempted-bandwidth-bc0"},
    release_soft_preempted_bandwidth_bc1{YType::uint64, "release-soft-preempted-bandwidth-bc1"},
    total_soft_preempted_bandwidth_bc0{YType::uint64, "total-soft-preempted-bandwidth-bc0"},
    total_soft_preempted_bandwidth_bc1{YType::uint64, "total-soft-preempted-bandwidth-bc1"}
{
    yang_name = "soft-preemption"; yang_parent_name = "soft-preemptions";
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
	|| current_over_subscribed_bandwidth_bc0.is_set
	|| current_over_subscribed_bandwidth_bc1.is_set
	|| current_soft_preempted_bandwidth_bc0.is_set
	|| current_soft_preempted_bandwidth_bc1.is_set
	|| link_address.is_set
	|| release_soft_preempted_bandwidth_bc0.is_set
	|| release_soft_preempted_bandwidth_bc1.is_set
	|| total_soft_preempted_bandwidth_bc0.is_set
	|| total_soft_preempted_bandwidth_bc1.is_set;
}

bool MplsLcac::SoftPreemptions::SoftPreemption::has_operation() const
{
    for (std::size_t index=0; index<current_soft_preemption_lsp.size(); index++)
    {
        if(current_soft_preemption_lsp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(current_over_subscribed_bandwidth_bc0.operation)
	|| is_set(current_over_subscribed_bandwidth_bc1.operation)
	|| is_set(current_soft_preempted_bandwidth_bc0.operation)
	|| is_set(current_soft_preempted_bandwidth_bc1.operation)
	|| is_set(link_address.operation)
	|| is_set(release_soft_preempted_bandwidth_bc0.operation)
	|| is_set(release_soft_preempted_bandwidth_bc1.operation)
	|| is_set(total_soft_preempted_bandwidth_bc0.operation)
	|| is_set(total_soft_preempted_bandwidth_bc1.operation);
}

std::string MplsLcac::SoftPreemptions::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcac::SoftPreemptions::SoftPreemption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/soft-preemptions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (current_over_subscribed_bandwidth_bc0.is_set || is_set(current_over_subscribed_bandwidth_bc0.operation)) leaf_name_data.push_back(current_over_subscribed_bandwidth_bc0.get_name_leafdata());
    if (current_over_subscribed_bandwidth_bc1.is_set || is_set(current_over_subscribed_bandwidth_bc1.operation)) leaf_name_data.push_back(current_over_subscribed_bandwidth_bc1.get_name_leafdata());
    if (current_soft_preempted_bandwidth_bc0.is_set || is_set(current_soft_preempted_bandwidth_bc0.operation)) leaf_name_data.push_back(current_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (current_soft_preempted_bandwidth_bc1.is_set || is_set(current_soft_preempted_bandwidth_bc1.operation)) leaf_name_data.push_back(current_soft_preempted_bandwidth_bc1.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (release_soft_preempted_bandwidth_bc0.is_set || is_set(release_soft_preempted_bandwidth_bc0.operation)) leaf_name_data.push_back(release_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (release_soft_preempted_bandwidth_bc1.is_set || is_set(release_soft_preempted_bandwidth_bc1.operation)) leaf_name_data.push_back(release_soft_preempted_bandwidth_bc1.get_name_leafdata());
    if (total_soft_preempted_bandwidth_bc0.is_set || is_set(total_soft_preempted_bandwidth_bc0.operation)) leaf_name_data.push_back(total_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (total_soft_preempted_bandwidth_bc1.is_set || is_set(total_soft_preempted_bandwidth_bc1.operation)) leaf_name_data.push_back(total_soft_preempted_bandwidth_bc1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::SoftPreemptions::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "current-soft-preemption-lsp")
    {
        for(auto const & c : current_soft_preemption_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp>();
        c->parent = this;
        current_soft_preemption_lsp.push_back(std::move(c));
        children[segment_path] = current_soft_preemption_lsp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::SoftPreemptions::SoftPreemption::get_children()
{
    for (auto const & c : current_soft_preemption_lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::SoftPreemptions::SoftPreemption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc0")
    {
        current_over_subscribed_bandwidth_bc0 = value;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc1")
    {
        current_over_subscribed_bandwidth_bc1 = value;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc0")
    {
        current_soft_preempted_bandwidth_bc0 = value;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc1")
    {
        current_soft_preempted_bandwidth_bc1 = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc0")
    {
        release_soft_preempted_bandwidth_bc0 = value;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc1")
    {
        release_soft_preempted_bandwidth_bc1 = value;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc0")
    {
        total_soft_preempted_bandwidth_bc0 = value;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc1")
    {
        total_soft_preempted_bandwidth_bc1 = value;
    }
}

MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::CurrentSoftPreemptionLsp()
    :
    bandwidth_preempted{YType::boolean, "bandwidth-preempted"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    destination_address{YType::str, "destination-address"},
    hold_priority{YType::uint8, "hold-priority"},
    lsp_id{YType::uint16, "lsp-id"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preempted{YType::boolean, "soft-preempted"},
    soft_preempted_fr_rrewrite{YType::boolean, "soft-preempted-fr-rrewrite"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "current-soft-preemption-lsp"; yang_parent_name = "soft-preemption";
}

MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::~CurrentSoftPreemptionLsp()
{
}

bool MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_data() const
{
    return bandwidth_preempted.is_set
	|| bandwidth_type.is_set
	|| destination_address.is_set
	|| hold_priority.is_set
	|| lsp_id.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| soft_preempted.is_set
	|| soft_preempted_fr_rrewrite.is_set
	|| soft_preemption_timeout.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_preempted.operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(destination_address.operation)
	|| is_set(hold_priority.operation)
	|| is_set(lsp_id.operation)
	|| is_set(requested_bandwidth.operation)
	|| is_set(setup_priority.operation)
	|| is_set(soft_preempted.operation)
	|| is_set(soft_preempted_fr_rrewrite.operation)
	|| is_set(soft_preemption_timeout.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-soft-preemption-lsp";

    return path_buffer.str();

}

EntityPath MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CurrentSoftPreemptionLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_preempted.is_set || is_set(bandwidth_preempted.operation)) leaf_name_data.push_back(bandwidth_preempted.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.operation)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preempted.is_set || is_set(soft_preempted.operation)) leaf_name_data.push_back(soft_preempted.get_name_leafdata());
    if (soft_preempted_fr_rrewrite.is_set || is_set(soft_preempted_fr_rrewrite.operation)) leaf_name_data.push_back(soft_preempted_fr_rrewrite.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.operation)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_children()
{
    return children;
}

void MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted = value;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted = value;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite = value;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsPce::MplsPce()
    :
    lsps(std::make_shared<MplsPce::Lsps>())
	,peers(std::make_shared<MplsPce::Peers>())
	,statistics(std::make_shared<MplsPce::Statistics>())
	,topology(std::make_shared<MplsPce::Topology>())
	,tunnels(std::make_shared<MplsPce::Tunnels>())
{
    lsps->parent = this;
    children["lsps"] = lsps;

    peers->parent = this;
    children["peers"] = peers;

    statistics->parent = this;
    children["statistics"] = statistics;

    topology->parent = this;
    children["topology"] = topology;

    tunnels->parent = this;
    children["tunnels"] = tunnels;

    yang_name = "mpls-pce"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper";
}

MplsPce::~MplsPce()
{
}

bool MplsPce::has_data() const
{
    return (lsps !=  nullptr && lsps->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool MplsPce::has_operation() const
{
    return is_set(operation)
	|| (lsps !=  nullptr && lsps->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string MplsPce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce";

    return path_buffer.str();

}

EntityPath MplsPce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsps")
    {
        if(lsps != nullptr)
        {
            children["lsps"] = lsps;
        }
        else
        {
            lsps = std::make_shared<MplsPce::Lsps>();
            lsps->parent = this;
            children["lsps"] = lsps;
        }
        return children.at("lsps");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<MplsPce::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsPce::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    if(child_yang_name == "topology")
    {
        if(topology != nullptr)
        {
            children["topology"] = topology;
        }
        else
        {
            topology = std::make_shared<MplsPce::Topology>();
            topology->parent = this;
            children["topology"] = topology;
        }
        return children.at("topology");
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<MplsPce::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::get_children()
{
    if(children.find("lsps") == children.end())
    {
        if(lsps != nullptr)
        {
            children["lsps"] = lsps;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    if(children.find("topology") == children.end())
    {
        if(topology != nullptr)
        {
            children["topology"] = topology;
        }
    }

    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    return children;
}

void MplsPce::set_value(const std::string & value_path, std::string value)
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

MplsPce::Lsps::Lsps()
    :
    administrative{YType::boolean, "administrative"},
    backup_path{YType::str, "backup-path"},
    binding_sid{YType::uint32, "binding-sid"},
    cleanup_timer_exp{YType::int32, "cleanup-timer-exp"},
    create{YType::boolean, "create"},
    delegatable{YType::boolean, "delegatable"},
    delegation_timer_exp{YType::int32, "delegation-timer-exp"},
    destination_address{YType::str, "destination-address"},
    forward_class_id{YType::uint32, "forward-class-id"},
    load_share{YType::uint32, "load-share"},
    lspo_is_used{YType::boolean, "lspo-is-used"},
    operational{YType::enumeration, "operational"},
    path_setup_type{YType::uint8, "path-setup-type"},
    request_queue_size{YType::uint8, "request-queue-size"},
    session_internal_lsp_id{YType::uint32, "session-internal-lsp-id"},
    source_address{YType::str, "source-address"},
    state_timer_exp{YType::int32, "state-timer-exp"},
    stateful_request_parameter_id{YType::uint32, "stateful-request-parameter-id"},
    symbolic_name_xr{YType::str, "symbolic-name-xr"}
    	,
    autoroute(std::make_shared<MplsPce::Lsps::Autoroute>())
	,creator(std::make_shared<MplsPce::Lsps::Creator>())
	,delegated(std::make_shared<MplsPce::Lsps::Delegated>())
	,identifiers(std::make_shared<MplsPce::Lsps::Identifiers>())
{
    autoroute->parent = this;
    children["autoroute"] = autoroute;

    creator->parent = this;
    children["creator"] = creator;

    delegated->parent = this;
    children["delegated"] = delegated;

    identifiers->parent = this;
    children["identifiers"] = identifiers;

    yang_name = "lsps"; yang_parent_name = "mpls-pce";
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
    return administrative.is_set
	|| binding_sid.is_set
	|| cleanup_timer_exp.is_set
	|| create.is_set
	|| delegatable.is_set
	|| delegation_timer_exp.is_set
	|| destination_address.is_set
	|| forward_class_id.is_set
	|| load_share.is_set
	|| lspo_is_used.is_set
	|| operational.is_set
	|| path_setup_type.is_set
	|| request_queue_size.is_set
	|| session_internal_lsp_id.is_set
	|| source_address.is_set
	|| state_timer_exp.is_set
	|| stateful_request_parameter_id.is_set
	|| symbolic_name_xr.is_set
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (creator !=  nullptr && creator->has_data())
	|| (delegated !=  nullptr && delegated->has_data())
	|| (identifiers !=  nullptr && identifiers->has_data());
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(administrative.operation)
	|| is_set(backup_path.operation)
	|| is_set(binding_sid.operation)
	|| is_set(cleanup_timer_exp.operation)
	|| is_set(create.operation)
	|| is_set(delegatable.operation)
	|| is_set(delegation_timer_exp.operation)
	|| is_set(destination_address.operation)
	|| is_set(forward_class_id.operation)
	|| is_set(load_share.operation)
	|| is_set(lspo_is_used.operation)
	|| is_set(operational.operation)
	|| is_set(path_setup_type.operation)
	|| is_set(request_queue_size.operation)
	|| is_set(session_internal_lsp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(state_timer_exp.operation)
	|| is_set(stateful_request_parameter_id.operation)
	|| is_set(symbolic_name_xr.operation)
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (creator !=  nullptr && creator->has_operation())
	|| (delegated !=  nullptr && delegated->has_operation())
	|| (identifiers !=  nullptr && identifiers->has_operation());
}

std::string MplsPce::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative.is_set || is_set(administrative.operation)) leaf_name_data.push_back(administrative.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.operation)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (cleanup_timer_exp.is_set || is_set(cleanup_timer_exp.operation)) leaf_name_data.push_back(cleanup_timer_exp.get_name_leafdata());
    if (create.is_set || is_set(create.operation)) leaf_name_data.push_back(create.get_name_leafdata());
    if (delegatable.is_set || is_set(delegatable.operation)) leaf_name_data.push_back(delegatable.get_name_leafdata());
    if (delegation_timer_exp.is_set || is_set(delegation_timer_exp.operation)) leaf_name_data.push_back(delegation_timer_exp.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (forward_class_id.is_set || is_set(forward_class_id.operation)) leaf_name_data.push_back(forward_class_id.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.operation)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (lspo_is_used.is_set || is_set(lspo_is_used.operation)) leaf_name_data.push_back(lspo_is_used.get_name_leafdata());
    if (operational.is_set || is_set(operational.operation)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (path_setup_type.is_set || is_set(path_setup_type.operation)) leaf_name_data.push_back(path_setup_type.get_name_leafdata());
    if (request_queue_size.is_set || is_set(request_queue_size.operation)) leaf_name_data.push_back(request_queue_size.get_name_leafdata());
    if (session_internal_lsp_id.is_set || is_set(session_internal_lsp_id.operation)) leaf_name_data.push_back(session_internal_lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state_timer_exp.is_set || is_set(state_timer_exp.operation)) leaf_name_data.push_back(state_timer_exp.get_name_leafdata());
    if (stateful_request_parameter_id.is_set || is_set(stateful_request_parameter_id.operation)) leaf_name_data.push_back(stateful_request_parameter_id.get_name_leafdata());
    if (symbolic_name_xr.is_set || is_set(symbolic_name_xr.operation)) leaf_name_data.push_back(symbolic_name_xr.get_name_leafdata());

    auto backup_path_name_datas = backup_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_path_name_datas.begin(), backup_path_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute != nullptr)
        {
            children["autoroute"] = autoroute;
        }
        else
        {
            autoroute = std::make_shared<MplsPce::Lsps::Autoroute>();
            autoroute->parent = this;
            children["autoroute"] = autoroute;
        }
        return children.at("autoroute");
    }

    if(child_yang_name == "creator")
    {
        if(creator != nullptr)
        {
            children["creator"] = creator;
        }
        else
        {
            creator = std::make_shared<MplsPce::Lsps::Creator>();
            creator->parent = this;
            children["creator"] = creator;
        }
        return children.at("creator");
    }

    if(child_yang_name == "delegated")
    {
        if(delegated != nullptr)
        {
            children["delegated"] = delegated;
        }
        else
        {
            delegated = std::make_shared<MplsPce::Lsps::Delegated>();
            delegated->parent = this;
            children["delegated"] = delegated;
        }
        return children.at("delegated");
    }

    if(child_yang_name == "identifiers")
    {
        if(identifiers != nullptr)
        {
            children["identifiers"] = identifiers;
        }
        else
        {
            identifiers = std::make_shared<MplsPce::Lsps::Identifiers>();
            identifiers->parent = this;
            children["identifiers"] = identifiers;
        }
        return children.at("identifiers");
    }

    if(child_yang_name == "lsp")
    {
        for(auto const & c : lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Lsp>();
        c->parent = this;
        lsp.push_back(std::move(c));
        children[segment_path] = lsp.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Paths>();
        c->parent = this;
        paths.push_back(std::move(c));
        children[segment_path] = paths.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::get_children()
{
    if(children.find("autoroute") == children.end())
    {
        if(autoroute != nullptr)
        {
            children["autoroute"] = autoroute;
        }
    }

    if(children.find("creator") == children.end())
    {
        if(creator != nullptr)
        {
            children["creator"] = creator;
        }
    }

    if(children.find("delegated") == children.end())
    {
        if(delegated != nullptr)
        {
            children["delegated"] = delegated;
        }
    }

    if(children.find("identifiers") == children.end())
    {
        if(identifiers != nullptr)
        {
            children["identifiers"] = identifiers;
        }
    }

    for (auto const & c : lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPce::Lsps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "administrative")
    {
        administrative = value;
    }
    if(value_path == "backup-path")
    {
        backup_path.append(value);
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp = value;
    }
    if(value_path == "create")
    {
        create = value;
    }
    if(value_path == "delegatable")
    {
        delegatable = value;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id = value;
    }
    if(value_path == "load-share")
    {
        load_share = value;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used = value;
    }
    if(value_path == "operational")
    {
        operational = value;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type = value;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size = value;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp = value;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id = value;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr = value;
    }
}

MplsPce::Lsps::Lsp::Lsp()
    :
    symbolic_name{YType::str, "symbolic-name"},
    administrative{YType::boolean, "administrative"},
    backup_path{YType::str, "backup-path"},
    binding_sid{YType::uint32, "binding-sid"},
    cleanup_timer_exp{YType::int32, "cleanup-timer-exp"},
    create{YType::boolean, "create"},
    delegatable{YType::boolean, "delegatable"},
    delegation_timer_exp{YType::int32, "delegation-timer-exp"},
    destination_address{YType::str, "destination-address"},
    forward_class_id{YType::uint32, "forward-class-id"},
    load_share{YType::uint32, "load-share"},
    lspo_is_used{YType::boolean, "lspo-is-used"},
    operational{YType::enumeration, "operational"},
    path_setup_type{YType::uint8, "path-setup-type"},
    request_queue_size{YType::uint8, "request-queue-size"},
    session_internal_lsp_id{YType::uint32, "session-internal-lsp-id"},
    source_address{YType::str, "source-address"},
    state_timer_exp{YType::int32, "state-timer-exp"},
    stateful_request_parameter_id{YType::uint32, "stateful-request-parameter-id"},
    symbolic_name_xr{YType::str, "symbolic-name-xr"}
    	,
    autoroute(std::make_shared<MplsPce::Lsps::Lsp::Autoroute>())
	,creator(std::make_shared<MplsPce::Lsps::Lsp::Creator>())
	,delegated(std::make_shared<MplsPce::Lsps::Lsp::Delegated>())
	,identifiers(std::make_shared<MplsPce::Lsps::Lsp::Identifiers>())
{
    autoroute->parent = this;
    children["autoroute"] = autoroute;

    creator->parent = this;
    children["creator"] = creator;

    delegated->parent = this;
    children["delegated"] = delegated;

    identifiers->parent = this;
    children["identifiers"] = identifiers;

    yang_name = "lsp"; yang_parent_name = "lsps";
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
	|| administrative.is_set
	|| binding_sid.is_set
	|| cleanup_timer_exp.is_set
	|| create.is_set
	|| delegatable.is_set
	|| delegation_timer_exp.is_set
	|| destination_address.is_set
	|| forward_class_id.is_set
	|| load_share.is_set
	|| lspo_is_used.is_set
	|| operational.is_set
	|| path_setup_type.is_set
	|| request_queue_size.is_set
	|| session_internal_lsp_id.is_set
	|| source_address.is_set
	|| state_timer_exp.is_set
	|| stateful_request_parameter_id.is_set
	|| symbolic_name_xr.is_set
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (creator !=  nullptr && creator->has_data())
	|| (delegated !=  nullptr && delegated->has_data())
	|| (identifiers !=  nullptr && identifiers->has_data());
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(symbolic_name.operation)
	|| is_set(administrative.operation)
	|| is_set(backup_path.operation)
	|| is_set(binding_sid.operation)
	|| is_set(cleanup_timer_exp.operation)
	|| is_set(create.operation)
	|| is_set(delegatable.operation)
	|| is_set(delegation_timer_exp.operation)
	|| is_set(destination_address.operation)
	|| is_set(forward_class_id.operation)
	|| is_set(load_share.operation)
	|| is_set(lspo_is_used.operation)
	|| is_set(operational.operation)
	|| is_set(path_setup_type.operation)
	|| is_set(request_queue_size.operation)
	|| is_set(session_internal_lsp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(state_timer_exp.operation)
	|| is_set(stateful_request_parameter_id.operation)
	|| is_set(symbolic_name_xr.operation)
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (creator !=  nullptr && creator->has_operation())
	|| (delegated !=  nullptr && delegated->has_operation())
	|| (identifiers !=  nullptr && identifiers->has_operation());
}

std::string MplsPce::Lsps::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp" <<"[symbolic-name='" <<symbolic_name <<"']";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Lsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (symbolic_name.is_set || is_set(symbolic_name.operation)) leaf_name_data.push_back(symbolic_name.get_name_leafdata());
    if (administrative.is_set || is_set(administrative.operation)) leaf_name_data.push_back(administrative.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.operation)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (cleanup_timer_exp.is_set || is_set(cleanup_timer_exp.operation)) leaf_name_data.push_back(cleanup_timer_exp.get_name_leafdata());
    if (create.is_set || is_set(create.operation)) leaf_name_data.push_back(create.get_name_leafdata());
    if (delegatable.is_set || is_set(delegatable.operation)) leaf_name_data.push_back(delegatable.get_name_leafdata());
    if (delegation_timer_exp.is_set || is_set(delegation_timer_exp.operation)) leaf_name_data.push_back(delegation_timer_exp.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (forward_class_id.is_set || is_set(forward_class_id.operation)) leaf_name_data.push_back(forward_class_id.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.operation)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (lspo_is_used.is_set || is_set(lspo_is_used.operation)) leaf_name_data.push_back(lspo_is_used.get_name_leafdata());
    if (operational.is_set || is_set(operational.operation)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (path_setup_type.is_set || is_set(path_setup_type.operation)) leaf_name_data.push_back(path_setup_type.get_name_leafdata());
    if (request_queue_size.is_set || is_set(request_queue_size.operation)) leaf_name_data.push_back(request_queue_size.get_name_leafdata());
    if (session_internal_lsp_id.is_set || is_set(session_internal_lsp_id.operation)) leaf_name_data.push_back(session_internal_lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state_timer_exp.is_set || is_set(state_timer_exp.operation)) leaf_name_data.push_back(state_timer_exp.get_name_leafdata());
    if (stateful_request_parameter_id.is_set || is_set(stateful_request_parameter_id.operation)) leaf_name_data.push_back(stateful_request_parameter_id.get_name_leafdata());
    if (symbolic_name_xr.is_set || is_set(symbolic_name_xr.operation)) leaf_name_data.push_back(symbolic_name_xr.get_name_leafdata());

    auto backup_path_name_datas = backup_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_path_name_datas.begin(), backup_path_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute != nullptr)
        {
            children["autoroute"] = autoroute;
        }
        else
        {
            autoroute = std::make_shared<MplsPce::Lsps::Lsp::Autoroute>();
            autoroute->parent = this;
            children["autoroute"] = autoroute;
        }
        return children.at("autoroute");
    }

    if(child_yang_name == "creator")
    {
        if(creator != nullptr)
        {
            children["creator"] = creator;
        }
        else
        {
            creator = std::make_shared<MplsPce::Lsps::Lsp::Creator>();
            creator->parent = this;
            children["creator"] = creator;
        }
        return children.at("creator");
    }

    if(child_yang_name == "delegated")
    {
        if(delegated != nullptr)
        {
            children["delegated"] = delegated;
        }
        else
        {
            delegated = std::make_shared<MplsPce::Lsps::Lsp::Delegated>();
            delegated->parent = this;
            children["delegated"] = delegated;
        }
        return children.at("delegated");
    }

    if(child_yang_name == "identifiers")
    {
        if(identifiers != nullptr)
        {
            children["identifiers"] = identifiers;
        }
        else
        {
            identifiers = std::make_shared<MplsPce::Lsps::Lsp::Identifiers>();
            identifiers->parent = this;
            children["identifiers"] = identifiers;
        }
        return children.at("identifiers");
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Lsp::Paths>();
        c->parent = this;
        paths.push_back(std::move(c));
        children[segment_path] = paths.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Lsp::get_children()
{
    if(children.find("autoroute") == children.end())
    {
        if(autoroute != nullptr)
        {
            children["autoroute"] = autoroute;
        }
    }

    if(children.find("creator") == children.end())
    {
        if(creator != nullptr)
        {
            children["creator"] = creator;
        }
    }

    if(children.find("delegated") == children.end())
    {
        if(delegated != nullptr)
        {
            children["delegated"] = delegated;
        }
    }

    if(children.find("identifiers") == children.end())
    {
        if(identifiers != nullptr)
        {
            children["identifiers"] = identifiers;
        }
    }

    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPce::Lsps::Lsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "symbolic-name")
    {
        symbolic_name = value;
    }
    if(value_path == "administrative")
    {
        administrative = value;
    }
    if(value_path == "backup-path")
    {
        backup_path.append(value);
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp = value;
    }
    if(value_path == "create")
    {
        create = value;
    }
    if(value_path == "delegatable")
    {
        delegatable = value;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id = value;
    }
    if(value_path == "load-share")
    {
        load_share = value;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used = value;
    }
    if(value_path == "operational")
    {
        operational = value;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type = value;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size = value;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp = value;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id = value;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr = value;
    }
}

MplsPce::Lsps::Lsp::Creator::Creator()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{
    yang_name = "creator"; yang_parent_name = "lsp";
}

MplsPce::Lsps::Lsp::Creator::~Creator()
{
}

bool MplsPce::Lsps::Lsp::Creator::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPce::Lsps::Lsp::Creator::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(node_identifier.operation);
}

std::string MplsPce::Lsps::Lsp::Creator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creator";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Lsp::Creator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Creator' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.operation)) leaf_name_data.push_back(node_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Creator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Lsp::Creator::get_children()
{
    return children;
}

void MplsPce::Lsps::Lsp::Creator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
    }
}

MplsPce::Lsps::Lsp::Delegated::Delegated()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{
    yang_name = "delegated"; yang_parent_name = "lsp";
}

MplsPce::Lsps::Lsp::Delegated::~Delegated()
{
}

bool MplsPce::Lsps::Lsp::Delegated::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPce::Lsps::Lsp::Delegated::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(node_identifier.operation);
}

std::string MplsPce::Lsps::Lsp::Delegated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Lsp::Delegated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delegated' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.operation)) leaf_name_data.push_back(node_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Delegated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Lsp::Delegated::get_children()
{
    return children;
}

void MplsPce::Lsps::Lsp::Delegated::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
    }
}

MplsPce::Lsps::Lsp::Identifiers::Identifiers()
    :
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"},
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "identifiers"; yang_parent_name = "lsp";
}

MplsPce::Lsps::Lsp::Identifiers::~Identifiers()
{
}

bool MplsPce::Lsps::Lsp::Identifiers::has_data() const
{
    return ext_tunnel_id.is_set
	|| is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set;
}

bool MplsPce::Lsps::Lsp::Identifiers::has_operation() const
{
    return is_set(operation)
	|| is_set(ext_tunnel_id.operation)
	|| is_set(is_used.operation)
	|| is_set(sender.operation)
	|| is_set(te_lsp_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsPce::Lsps::Lsp::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Lsp::Identifiers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identifiers' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.operation)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.operation)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.operation)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Lsp::Identifiers::get_children()
{
    return children;
}

void MplsPce::Lsps::Lsp::Identifiers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "sender")
    {
        sender = value;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsPce::Lsps::Lsp::Autoroute::Autoroute()
    :
    announced{YType::boolean, "announced"},
    destination{YType::str, "destination"},
    is_used{YType::boolean, "is-used"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"}
{
    yang_name = "autoroute"; yang_parent_name = "lsp";
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
    return announced.is_set
	|| is_used.is_set
	|| metric.is_set
	|| metric_type.is_set;
}

bool MplsPce::Lsps::Lsp::Autoroute::has_operation() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(announced.operation)
	|| is_set(destination.operation)
	|| is_set(is_used.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation);
}

std::string MplsPce::Lsps::Lsp::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Lsp::Autoroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoroute' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announced.is_set || is_set(announced.operation)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());

    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Lsp::Autoroute::get_children()
{
    return children;
}

void MplsPce::Lsps::Lsp::Autoroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "announced")
    {
        announced = value;
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
}

MplsPce::Lsps::Lsp::Paths::Paths()
    :
    applied_bw{YType::uint32, "applied-bw"},
    bw{YType::uint32, "bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"},
    is_bw_used{YType::boolean, "is-bw-used"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"}
    	,
    ero(std::make_shared<MplsPce::Lsps::Lsp::Paths::Ero>())
	,lspa(std::make_shared<MplsPce::Lsps::Lsp::Paths::Lspa>())
	,rro(std::make_shared<MplsPce::Lsps::Lsp::Paths::Rro>())
{
    ero->parent = this;
    children["ero"] = ero;

    lspa->parent = this;
    children["lspa"] = lspa;

    rro->parent = this;
    children["rro"] = rro;

    yang_name = "paths"; yang_parent_name = "lsp";
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
    return applied_bw.is_set
	|| bw.is_set
	|| is_applied_bw_used.is_set
	|| is_bw_used.is_set
	|| is_reopt_bw_used.is_set
	|| reopt_bw.is_set
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
    return is_set(operation)
	|| is_set(applied_bw.operation)
	|| is_set(bw.operation)
	|| is_set(is_applied_bw_used.operation)
	|| is_set(is_bw_used.operation)
	|| is_set(is_reopt_bw_used.operation)
	|| is_set(reopt_bw.operation)
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

EntityPath MplsPce::Lsps::Lsp::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applied_bw.is_set || is_set(applied_bw.operation)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (bw.is_set || is_set(bw.operation)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.operation)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.operation)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.operation)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.operation)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ero")
    {
        if(ero != nullptr)
        {
            children["ero"] = ero;
        }
        else
        {
            ero = std::make_shared<MplsPce::Lsps::Lsp::Paths::Ero>();
            ero->parent = this;
            children["ero"] = ero;
        }
        return children.at("ero");
    }

    if(child_yang_name == "lspa")
    {
        if(lspa != nullptr)
        {
            children["lspa"] = lspa;
        }
        else
        {
            lspa = std::make_shared<MplsPce::Lsps::Lsp::Paths::Lspa>();
            lspa->parent = this;
            children["lspa"] = lspa;
        }
        return children.at("lspa");
    }

    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Lsp::Paths::Metric>();
        c->parent = this;
        metric.push_back(std::move(c));
        children[segment_path] = metric.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "rro")
    {
        if(rro != nullptr)
        {
            children["rro"] = rro;
        }
        else
        {
            rro = std::make_shared<MplsPce::Lsps::Lsp::Paths::Rro>();
            rro->parent = this;
            children["rro"] = rro;
        }
        return children.at("rro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Lsp::Paths::get_children()
{
    if(children.find("ero") == children.end())
    {
        if(ero != nullptr)
        {
            children["ero"] = ero;
        }
    }

    if(children.find("lspa") == children.end())
    {
        if(lspa != nullptr)
        {
            children["lspa"] = lspa;
        }
    }

    for (auto const & c : metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("rro") == children.end())
    {
        if(rro != nullptr)
        {
            children["rro"] = rro;
        }
    }

    return children;
}

void MplsPce::Lsps::Lsp::Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applied-bw")
    {
        applied_bw = value;
    }
    if(value_path == "bw")
    {
        bw = value;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
    }
}

MplsPce::Lsps::Lsp::Paths::Ero::Ero()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{
    yang_name = "ero"; yang_parent_name = "paths";
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
    return cost.is_set
	|| is_used.is_set;
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(cost.operation)
	|| is_set(is_used.operation);
}

std::string MplsPce::Lsps::Lsp::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Lsp::Paths::Ero::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ero' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Lsp::Paths::Ero::Subobject>();
        c->parent = this;
        subobject.push_back(std::move(c));
        children[segment_path] = subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Lsp::Paths::Ero::get_children()
{
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPce::Lsps::Lsp::Paths::Ero::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
}

MplsPce::Lsps::Lsp::Paths::Ero::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{
    yang_name = "subobject"; yang_parent_name = "ero";
}

MplsPce::Lsps::Lsp::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPce::Lsps::Lsp::Paths::Ero::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Ero::Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(complete_mpls_label_entry.operation)
	|| is_set(global.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_prefix_len.operation)
	|| is_set(local_address.operation)
	|| is_set(missing_node_adjcency_id.operation)
	|| is_set(missing_segment_id.operation)
	|| is_set(mpls_label.operation)
	|| is_set(node_adjacency_id_exists.operation)
	|| is_set(node_id.operation)
	|| is_set(only_valid_mpls_label.operation)
	|| is_set(remote_address.operation)
	|| is_set(segment_id_exists.operation)
	|| is_set(segment_id_type.operation)
	|| is_set(segment_id_value.operation)
	|| is_set(strict.operation)
	|| is_set(subobj_type.operation);
}

std::string MplsPce::Lsps::Lsp::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Lsp::Paths::Ero::Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.operation)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.operation)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.operation)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.operation)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.operation)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.operation)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.operation)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.operation)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.operation)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.operation)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.operation)) leaf_name_data.push_back(subobj_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Lsp::Paths::Ero::Subobject::get_children()
{
    return children;
}

void MplsPce::Lsps::Lsp::Paths::Ero::Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
    }
    if(value_path == "strict")
    {
        strict = value;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
    }
}

MplsPce::Lsps::Lsp::Paths::Lspa::Lspa()
    :
    exlude_any{YType::uint32, "exlude-any"},
    hold{YType::uint8, "hold"},
    include_all{YType::uint32, "include-all"},
    include_any{YType::uint32, "include-any"},
    is_used{YType::boolean, "is-used"},
    lbit{YType::boolean, "lbit"},
    setup{YType::uint8, "setup"}
{
    yang_name = "lspa"; yang_parent_name = "paths";
}

MplsPce::Lsps::Lsp::Paths::Lspa::~Lspa()
{
}

bool MplsPce::Lsps::Lsp::Paths::Lspa::has_data() const
{
    return exlude_any.is_set
	|| hold.is_set
	|| include_all.is_set
	|| include_any.is_set
	|| is_used.is_set
	|| lbit.is_set
	|| setup.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Lspa::has_operation() const
{
    return is_set(operation)
	|| is_set(exlude_any.operation)
	|| is_set(hold.operation)
	|| is_set(include_all.operation)
	|| is_set(include_any.operation)
	|| is_set(is_used.operation)
	|| is_set(lbit.operation)
	|| is_set(setup.operation);
}

std::string MplsPce::Lsps::Lsp::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Lsp::Paths::Lspa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lspa' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exlude_any.is_set || is_set(exlude_any.operation)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (hold.is_set || is_set(hold.operation)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.operation)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.operation)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.operation)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (setup.is_set || is_set(setup.operation)) leaf_name_data.push_back(setup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Lsp::Paths::Lspa::get_children()
{
    return children;
}

void MplsPce::Lsps::Lsp::Paths::Lspa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exlude-any")
    {
        exlude_any = value;
    }
    if(value_path == "hold")
    {
        hold = value;
    }
    if(value_path == "include-all")
    {
        include_all = value;
    }
    if(value_path == "include-any")
    {
        include_any = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "lbit")
    {
        lbit = value;
    }
    if(value_path == "setup")
    {
        setup = value;
    }
}

MplsPce::Lsps::Lsp::Paths::Rro::Rro()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{
    yang_name = "rro"; yang_parent_name = "paths";
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
    return cost.is_set
	|| is_used.is_set;
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(cost.operation)
	|| is_set(is_used.operation);
}

std::string MplsPce::Lsps::Lsp::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Lsp::Paths::Rro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Lsp::Paths::Rro::Subobject>();
        c->parent = this;
        subobject.push_back(std::move(c));
        children[segment_path] = subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Lsp::Paths::Rro::get_children()
{
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPce::Lsps::Lsp::Paths::Rro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
}

MplsPce::Lsps::Lsp::Paths::Rro::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{
    yang_name = "subobject"; yang_parent_name = "rro";
}

MplsPce::Lsps::Lsp::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPce::Lsps::Lsp::Paths::Rro::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Rro::Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(complete_mpls_label_entry.operation)
	|| is_set(global.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_prefix_len.operation)
	|| is_set(local_address.operation)
	|| is_set(missing_node_adjcency_id.operation)
	|| is_set(missing_segment_id.operation)
	|| is_set(mpls_label.operation)
	|| is_set(node_adjacency_id_exists.operation)
	|| is_set(node_id.operation)
	|| is_set(only_valid_mpls_label.operation)
	|| is_set(remote_address.operation)
	|| is_set(segment_id_exists.operation)
	|| is_set(segment_id_type.operation)
	|| is_set(segment_id_value.operation)
	|| is_set(strict.operation)
	|| is_set(subobj_type.operation);
}

std::string MplsPce::Lsps::Lsp::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Lsp::Paths::Rro::Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.operation)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.operation)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.operation)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.operation)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.operation)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.operation)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.operation)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.operation)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.operation)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.operation)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.operation)) leaf_name_data.push_back(subobj_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Lsp::Paths::Rro::Subobject::get_children()
{
    return children;
}

void MplsPce::Lsps::Lsp::Paths::Rro::Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
    }
    if(value_path == "strict")
    {
        strict = value;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
    }
}

MplsPce::Lsps::Lsp::Paths::Metric::Metric()
    :
    cost{YType::uint32, "cost"},
    type{YType::uint8, "type"}
{
    yang_name = "metric"; yang_parent_name = "paths";
}

MplsPce::Lsps::Lsp::Paths::Metric::~Metric()
{
}

bool MplsPce::Lsps::Lsp::Paths::Metric::has_data() const
{
    return cost.is_set
	|| type.is_set;
}

bool MplsPce::Lsps::Lsp::Paths::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(type.operation);
}

std::string MplsPce::Lsps::Lsp::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Lsp::Paths::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Lsp::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Lsp::Paths::Metric::get_children()
{
    return children;
}

void MplsPce::Lsps::Lsp::Paths::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsPce::Lsps::Creator::Creator()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{
    yang_name = "creator"; yang_parent_name = "lsps";
}

MplsPce::Lsps::Creator::~Creator()
{
}

bool MplsPce::Lsps::Creator::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPce::Lsps::Creator::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(node_identifier.operation);
}

std::string MplsPce::Lsps::Creator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creator";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Creator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.operation)) leaf_name_data.push_back(node_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Creator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Creator::get_children()
{
    return children;
}

void MplsPce::Lsps::Creator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
    }
}

MplsPce::Lsps::Delegated::Delegated()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{
    yang_name = "delegated"; yang_parent_name = "lsps";
}

MplsPce::Lsps::Delegated::~Delegated()
{
}

bool MplsPce::Lsps::Delegated::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPce::Lsps::Delegated::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(node_identifier.operation);
}

std::string MplsPce::Lsps::Delegated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Delegated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.operation)) leaf_name_data.push_back(node_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Delegated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Delegated::get_children()
{
    return children;
}

void MplsPce::Lsps::Delegated::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
    }
}

MplsPce::Lsps::Identifiers::Identifiers()
    :
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"},
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "identifiers"; yang_parent_name = "lsps";
}

MplsPce::Lsps::Identifiers::~Identifiers()
{
}

bool MplsPce::Lsps::Identifiers::has_data() const
{
    return ext_tunnel_id.is_set
	|| is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set;
}

bool MplsPce::Lsps::Identifiers::has_operation() const
{
    return is_set(operation)
	|| is_set(ext_tunnel_id.operation)
	|| is_set(is_used.operation)
	|| is_set(sender.operation)
	|| is_set(te_lsp_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsPce::Lsps::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Identifiers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.operation)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.operation)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.operation)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Identifiers::get_children()
{
    return children;
}

void MplsPce::Lsps::Identifiers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "sender")
    {
        sender = value;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsPce::Lsps::Autoroute::Autoroute()
    :
    announced{YType::boolean, "announced"},
    destination{YType::str, "destination"},
    is_used{YType::boolean, "is-used"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"}
{
    yang_name = "autoroute"; yang_parent_name = "lsps";
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
    return announced.is_set
	|| is_used.is_set
	|| metric.is_set
	|| metric_type.is_set;
}

bool MplsPce::Lsps::Autoroute::has_operation() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(announced.operation)
	|| is_set(destination.operation)
	|| is_set(is_used.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation);
}

std::string MplsPce::Lsps::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Autoroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announced.is_set || is_set(announced.operation)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());

    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Autoroute::get_children()
{
    return children;
}

void MplsPce::Lsps::Autoroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "announced")
    {
        announced = value;
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
}

MplsPce::Lsps::Paths::Paths()
    :
    applied_bw{YType::uint32, "applied-bw"},
    bw{YType::uint32, "bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"},
    is_bw_used{YType::boolean, "is-bw-used"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"}
    	,
    ero(std::make_shared<MplsPce::Lsps::Paths::Ero>())
	,lspa(std::make_shared<MplsPce::Lsps::Paths::Lspa>())
	,rro(std::make_shared<MplsPce::Lsps::Paths::Rro>())
{
    ero->parent = this;
    children["ero"] = ero;

    lspa->parent = this;
    children["lspa"] = lspa;

    rro->parent = this;
    children["rro"] = rro;

    yang_name = "paths"; yang_parent_name = "lsps";
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
    return applied_bw.is_set
	|| bw.is_set
	|| is_applied_bw_used.is_set
	|| is_bw_used.is_set
	|| is_reopt_bw_used.is_set
	|| reopt_bw.is_set
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
    return is_set(operation)
	|| is_set(applied_bw.operation)
	|| is_set(bw.operation)
	|| is_set(is_applied_bw_used.operation)
	|| is_set(is_bw_used.operation)
	|| is_set(is_reopt_bw_used.operation)
	|| is_set(reopt_bw.operation)
	|| (ero !=  nullptr && ero->has_operation())
	|| (lspa !=  nullptr && lspa->has_operation())
	|| (rro !=  nullptr && rro->has_operation());
}

std::string MplsPce::Lsps::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applied_bw.is_set || is_set(applied_bw.operation)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (bw.is_set || is_set(bw.operation)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.operation)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.operation)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.operation)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.operation)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ero")
    {
        if(ero != nullptr)
        {
            children["ero"] = ero;
        }
        else
        {
            ero = std::make_shared<MplsPce::Lsps::Paths::Ero>();
            ero->parent = this;
            children["ero"] = ero;
        }
        return children.at("ero");
    }

    if(child_yang_name == "lspa")
    {
        if(lspa != nullptr)
        {
            children["lspa"] = lspa;
        }
        else
        {
            lspa = std::make_shared<MplsPce::Lsps::Paths::Lspa>();
            lspa->parent = this;
            children["lspa"] = lspa;
        }
        return children.at("lspa");
    }

    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Paths::Metric>();
        c->parent = this;
        metric.push_back(std::move(c));
        children[segment_path] = metric.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "rro")
    {
        if(rro != nullptr)
        {
            children["rro"] = rro;
        }
        else
        {
            rro = std::make_shared<MplsPce::Lsps::Paths::Rro>();
            rro->parent = this;
            children["rro"] = rro;
        }
        return children.at("rro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Paths::get_children()
{
    if(children.find("ero") == children.end())
    {
        if(ero != nullptr)
        {
            children["ero"] = ero;
        }
    }

    if(children.find("lspa") == children.end())
    {
        if(lspa != nullptr)
        {
            children["lspa"] = lspa;
        }
    }

    for (auto const & c : metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("rro") == children.end())
    {
        if(rro != nullptr)
        {
            children["rro"] = rro;
        }
    }

    return children;
}

void MplsPce::Lsps::Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applied-bw")
    {
        applied_bw = value;
    }
    if(value_path == "bw")
    {
        bw = value;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
    }
}

MplsPce::Lsps::Paths::Ero::Ero()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{
    yang_name = "ero"; yang_parent_name = "paths";
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
    return cost.is_set
	|| is_used.is_set;
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(cost.operation)
	|| is_set(is_used.operation);
}

std::string MplsPce::Lsps::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Paths::Ero::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Paths::Ero::Subobject>();
        c->parent = this;
        subobject.push_back(std::move(c));
        children[segment_path] = subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Paths::Ero::get_children()
{
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPce::Lsps::Paths::Ero::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
}

MplsPce::Lsps::Paths::Ero::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{
    yang_name = "subobject"; yang_parent_name = "ero";
}

MplsPce::Lsps::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPce::Lsps::Paths::Ero::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPce::Lsps::Paths::Ero::Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(complete_mpls_label_entry.operation)
	|| is_set(global.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_prefix_len.operation)
	|| is_set(local_address.operation)
	|| is_set(missing_node_adjcency_id.operation)
	|| is_set(missing_segment_id.operation)
	|| is_set(mpls_label.operation)
	|| is_set(node_adjacency_id_exists.operation)
	|| is_set(node_id.operation)
	|| is_set(only_valid_mpls_label.operation)
	|| is_set(remote_address.operation)
	|| is_set(segment_id_exists.operation)
	|| is_set(segment_id_type.operation)
	|| is_set(segment_id_value.operation)
	|| is_set(strict.operation)
	|| is_set(subobj_type.operation);
}

std::string MplsPce::Lsps::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Paths::Ero::Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/ero/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.operation)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.operation)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.operation)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.operation)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.operation)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.operation)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.operation)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.operation)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.operation)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.operation)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.operation)) leaf_name_data.push_back(subobj_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Paths::Ero::Subobject::get_children()
{
    return children;
}

void MplsPce::Lsps::Paths::Ero::Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
    }
    if(value_path == "strict")
    {
        strict = value;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
    }
}

MplsPce::Lsps::Paths::Lspa::Lspa()
    :
    exlude_any{YType::uint32, "exlude-any"},
    hold{YType::uint8, "hold"},
    include_all{YType::uint32, "include-all"},
    include_any{YType::uint32, "include-any"},
    is_used{YType::boolean, "is-used"},
    lbit{YType::boolean, "lbit"},
    setup{YType::uint8, "setup"}
{
    yang_name = "lspa"; yang_parent_name = "paths";
}

MplsPce::Lsps::Paths::Lspa::~Lspa()
{
}

bool MplsPce::Lsps::Paths::Lspa::has_data() const
{
    return exlude_any.is_set
	|| hold.is_set
	|| include_all.is_set
	|| include_any.is_set
	|| is_used.is_set
	|| lbit.is_set
	|| setup.is_set;
}

bool MplsPce::Lsps::Paths::Lspa::has_operation() const
{
    return is_set(operation)
	|| is_set(exlude_any.operation)
	|| is_set(hold.operation)
	|| is_set(include_all.operation)
	|| is_set(include_any.operation)
	|| is_set(is_used.operation)
	|| is_set(lbit.operation)
	|| is_set(setup.operation);
}

std::string MplsPce::Lsps::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Paths::Lspa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exlude_any.is_set || is_set(exlude_any.operation)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (hold.is_set || is_set(hold.operation)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.operation)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.operation)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.operation)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (setup.is_set || is_set(setup.operation)) leaf_name_data.push_back(setup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Paths::Lspa::get_children()
{
    return children;
}

void MplsPce::Lsps::Paths::Lspa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exlude-any")
    {
        exlude_any = value;
    }
    if(value_path == "hold")
    {
        hold = value;
    }
    if(value_path == "include-all")
    {
        include_all = value;
    }
    if(value_path == "include-any")
    {
        include_any = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "lbit")
    {
        lbit = value;
    }
    if(value_path == "setup")
    {
        setup = value;
    }
}

MplsPce::Lsps::Paths::Rro::Rro()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{
    yang_name = "rro"; yang_parent_name = "paths";
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
    return cost.is_set
	|| is_used.is_set;
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(cost.operation)
	|| is_set(is_used.operation);
}

std::string MplsPce::Lsps::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Paths::Rro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPce::Lsps::Paths::Rro::Subobject>();
        c->parent = this;
        subobject.push_back(std::move(c));
        children[segment_path] = subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Paths::Rro::get_children()
{
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPce::Lsps::Paths::Rro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
}

MplsPce::Lsps::Paths::Rro::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{
    yang_name = "subobject"; yang_parent_name = "rro";
}

MplsPce::Lsps::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPce::Lsps::Paths::Rro::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPce::Lsps::Paths::Rro::Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(complete_mpls_label_entry.operation)
	|| is_set(global.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_prefix_len.operation)
	|| is_set(local_address.operation)
	|| is_set(missing_node_adjcency_id.operation)
	|| is_set(missing_segment_id.operation)
	|| is_set(mpls_label.operation)
	|| is_set(node_adjacency_id_exists.operation)
	|| is_set(node_id.operation)
	|| is_set(only_valid_mpls_label.operation)
	|| is_set(remote_address.operation)
	|| is_set(segment_id_exists.operation)
	|| is_set(segment_id_type.operation)
	|| is_set(segment_id_value.operation)
	|| is_set(strict.operation)
	|| is_set(subobj_type.operation);
}

std::string MplsPce::Lsps::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Paths::Rro::Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/rro/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.operation)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.operation)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.operation)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.operation)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.operation)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.operation)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.operation)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.operation)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.operation)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.operation)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.operation)) leaf_name_data.push_back(subobj_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Paths::Rro::Subobject::get_children()
{
    return children;
}

void MplsPce::Lsps::Paths::Rro::Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
    }
    if(value_path == "strict")
    {
        strict = value;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
    }
}

MplsPce::Lsps::Paths::Metric::Metric()
    :
    cost{YType::uint32, "cost"},
    type{YType::uint8, "type"}
{
    yang_name = "metric"; yang_parent_name = "paths";
}

MplsPce::Lsps::Paths::Metric::~Metric()
{
}

bool MplsPce::Lsps::Paths::Metric::has_data() const
{
    return cost.is_set
	|| type.is_set;
}

bool MplsPce::Lsps::Paths::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(type.operation);
}

std::string MplsPce::Lsps::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

EntityPath MplsPce::Lsps::Paths::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/lsps/paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Lsps::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Lsps::Paths::Metric::get_children()
{
    return children;
}

void MplsPce::Lsps::Paths::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsPce::Statistics::Statistics()
    :
    average_in_queue_depth{YType::uint32, "average-in-queue-depth"},
    current_file_descriptors{YType::uint32, "current-file-descriptors"},
    current_pceq_length{YType::uint32, "current-pceq-length"},
    current_teq_length{YType::uint32, "current-teq-length"},
    max_file_descriptors{YType::uint32, "max-file-descriptors"},
    max_pceq_length{YType::uint32, "max-pceq-length"},
    max_teq_length{YType::uint32, "max-teq-length"},
    maximum_in_queue_depth{YType::uint32, "maximum-in-queue-depth"},
    neighbors{YType::uint32, "neighbors"},
    pce_req_pending{YType::uint32, "pce-req-pending"},
    pce_req_timed_out{YType::uint32, "pce-req-timed-out"},
    pce_req_total{YType::uint32, "pce-req-total"},
    tunnels{YType::uint32, "tunnels"}
    	,
    igp_statistics(std::make_shared<MplsPce::Statistics::IgpStatistics>())
{
    igp_statistics->parent = this;
    children["igp-statistics"] = igp_statistics;

    yang_name = "statistics"; yang_parent_name = "mpls-pce";
}

MplsPce::Statistics::~Statistics()
{
}

bool MplsPce::Statistics::has_data() const
{
    for (auto const & leaf : average_in_queue_depth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : maximum_in_queue_depth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return current_file_descriptors.is_set
	|| current_pceq_length.is_set
	|| current_teq_length.is_set
	|| max_file_descriptors.is_set
	|| max_pceq_length.is_set
	|| max_teq_length.is_set
	|| neighbors.is_set
	|| pce_req_pending.is_set
	|| pce_req_timed_out.is_set
	|| pce_req_total.is_set
	|| tunnels.is_set
	|| (igp_statistics !=  nullptr && igp_statistics->has_data());
}

bool MplsPce::Statistics::has_operation() const
{
    for (auto const & leaf : average_in_queue_depth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : maximum_in_queue_depth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(average_in_queue_depth.operation)
	|| is_set(current_file_descriptors.operation)
	|| is_set(current_pceq_length.operation)
	|| is_set(current_teq_length.operation)
	|| is_set(max_file_descriptors.operation)
	|| is_set(max_pceq_length.operation)
	|| is_set(max_teq_length.operation)
	|| is_set(maximum_in_queue_depth.operation)
	|| is_set(neighbors.operation)
	|| is_set(pce_req_pending.operation)
	|| is_set(pce_req_timed_out.operation)
	|| is_set(pce_req_total.operation)
	|| is_set(tunnels.operation)
	|| (igp_statistics !=  nullptr && igp_statistics->has_operation());
}

std::string MplsPce::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsPce::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_file_descriptors.is_set || is_set(current_file_descriptors.operation)) leaf_name_data.push_back(current_file_descriptors.get_name_leafdata());
    if (current_pceq_length.is_set || is_set(current_pceq_length.operation)) leaf_name_data.push_back(current_pceq_length.get_name_leafdata());
    if (current_teq_length.is_set || is_set(current_teq_length.operation)) leaf_name_data.push_back(current_teq_length.get_name_leafdata());
    if (max_file_descriptors.is_set || is_set(max_file_descriptors.operation)) leaf_name_data.push_back(max_file_descriptors.get_name_leafdata());
    if (max_pceq_length.is_set || is_set(max_pceq_length.operation)) leaf_name_data.push_back(max_pceq_length.get_name_leafdata());
    if (max_teq_length.is_set || is_set(max_teq_length.operation)) leaf_name_data.push_back(max_teq_length.get_name_leafdata());
    if (neighbors.is_set || is_set(neighbors.operation)) leaf_name_data.push_back(neighbors.get_name_leafdata());
    if (pce_req_pending.is_set || is_set(pce_req_pending.operation)) leaf_name_data.push_back(pce_req_pending.get_name_leafdata());
    if (pce_req_timed_out.is_set || is_set(pce_req_timed_out.operation)) leaf_name_data.push_back(pce_req_timed_out.get_name_leafdata());
    if (pce_req_total.is_set || is_set(pce_req_total.operation)) leaf_name_data.push_back(pce_req_total.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.operation)) leaf_name_data.push_back(tunnels.get_name_leafdata());

    auto average_in_queue_depth_name_datas = average_in_queue_depth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), average_in_queue_depth_name_datas.begin(), average_in_queue_depth_name_datas.end());
    auto maximum_in_queue_depth_name_datas = maximum_in_queue_depth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_in_queue_depth_name_datas.begin(), maximum_in_queue_depth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp-statistics")
    {
        if(igp_statistics != nullptr)
        {
            children["igp-statistics"] = igp_statistics;
        }
        else
        {
            igp_statistics = std::make_shared<MplsPce::Statistics::IgpStatistics>();
            igp_statistics->parent = this;
            children["igp-statistics"] = igp_statistics;
        }
        return children.at("igp-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Statistics::get_children()
{
    if(children.find("igp-statistics") == children.end())
    {
        if(igp_statistics != nullptr)
        {
            children["igp-statistics"] = igp_statistics;
        }
    }

    return children;
}

void MplsPce::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-in-queue-depth")
    {
        average_in_queue_depth.append(value);
    }
    if(value_path == "current-file-descriptors")
    {
        current_file_descriptors = value;
    }
    if(value_path == "current-pceq-length")
    {
        current_pceq_length = value;
    }
    if(value_path == "current-teq-length")
    {
        current_teq_length = value;
    }
    if(value_path == "max-file-descriptors")
    {
        max_file_descriptors = value;
    }
    if(value_path == "max-pceq-length")
    {
        max_pceq_length = value;
    }
    if(value_path == "max-teq-length")
    {
        max_teq_length = value;
    }
    if(value_path == "maximum-in-queue-depth")
    {
        maximum_in_queue_depth.append(value);
    }
    if(value_path == "neighbors")
    {
        neighbors = value;
    }
    if(value_path == "pce-req-pending")
    {
        pce_req_pending = value;
    }
    if(value_path == "pce-req-timed-out")
    {
        pce_req_timed_out = value;
    }
    if(value_path == "pce-req-total")
    {
        pce_req_total = value;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
    }
}

MplsPce::Statistics::IgpStatistics::IgpStatistics()
    :
    abr_lookup_avg{YType::uint64, "abr-lookup-avg"},
    abr_lookup_complete{YType::uint64, "abr-lookup-complete"},
    abr_lookup_max{YType::uint64, "abr-lookup-max"},
    abr_lookup_min{YType::uint64, "abr-lookup-min"},
    abr_lookup_timeout{YType::uint64, "abr-lookup-timeout"}
{
    yang_name = "igp-statistics"; yang_parent_name = "statistics";
}

MplsPce::Statistics::IgpStatistics::~IgpStatistics()
{
}

bool MplsPce::Statistics::IgpStatistics::has_data() const
{
    return abr_lookup_avg.is_set
	|| abr_lookup_complete.is_set
	|| abr_lookup_max.is_set
	|| abr_lookup_min.is_set
	|| abr_lookup_timeout.is_set;
}

bool MplsPce::Statistics::IgpStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(abr_lookup_avg.operation)
	|| is_set(abr_lookup_complete.operation)
	|| is_set(abr_lookup_max.operation)
	|| is_set(abr_lookup_min.operation)
	|| is_set(abr_lookup_timeout.operation);
}

std::string MplsPce::Statistics::IgpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-statistics";

    return path_buffer.str();

}

EntityPath MplsPce::Statistics::IgpStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_lookup_avg.is_set || is_set(abr_lookup_avg.operation)) leaf_name_data.push_back(abr_lookup_avg.get_name_leafdata());
    if (abr_lookup_complete.is_set || is_set(abr_lookup_complete.operation)) leaf_name_data.push_back(abr_lookup_complete.get_name_leafdata());
    if (abr_lookup_max.is_set || is_set(abr_lookup_max.operation)) leaf_name_data.push_back(abr_lookup_max.get_name_leafdata());
    if (abr_lookup_min.is_set || is_set(abr_lookup_min.operation)) leaf_name_data.push_back(abr_lookup_min.get_name_leafdata());
    if (abr_lookup_timeout.is_set || is_set(abr_lookup_timeout.operation)) leaf_name_data.push_back(abr_lookup_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Statistics::IgpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Statistics::IgpStatistics::get_children()
{
    return children;
}

void MplsPce::Statistics::IgpStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abr-lookup-avg")
    {
        abr_lookup_avg = value;
    }
    if(value_path == "abr-lookup-complete")
    {
        abr_lookup_complete = value;
    }
    if(value_path == "abr-lookup-max")
    {
        abr_lookup_max = value;
    }
    if(value_path == "abr-lookup-min")
    {
        abr_lookup_min = value;
    }
    if(value_path == "abr-lookup-timeout")
    {
        abr_lookup_timeout = value;
    }
}

MplsPce::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "mpls-pce";
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
    return is_set(operation);
}

std::string MplsPce::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath MplsPce::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPce::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPce::Peers::set_value(const std::string & value_path, std::string value)
{
}

MplsPce::Peers::Peer::Peer()
    :
    peer_address{YType::str, "peer-address"},
    candidate{YType::boolean, "candidate"},
    capability_db_version{YType::boolean, "capability-db-version"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    capability_update{YType::boolean, "capability-update"},
    delta_sync_capability{YType::boolean, "delta-sync-capability"},
    error{YType::str, "error"},
    keepalives{YType::uint32, "keepalives"},
    keychain_enabled{YType::boolean, "keychain-enabled"},
    local_sid{YType::uint8, "local-sid"},
    max_dead_interval{YType::uint8, "max-dead-interval"},
    md5_enabled{YType::boolean, "md5-enabled"},
    min_keepalive_interval{YType::uint8, "min-keepalive-interval"},
    negotated_dead_time{YType::uint32, "negotated-dead-time"},
    negotiated_keepalive{YType::uint32, "negotiated-keepalive"},
    pce_err_rx{YType::uint32, "pce-err-rx"},
    pce_err_tx{YType::uint32, "pce-err-tx"},
    pce_init_rx{YType::uint32, "pce-init-rx"},
    pce_init_tx{YType::uint32, "pce-init-tx"},
    pce_keepalive_rx{YType::uint64, "pce-keepalive-rx"},
    pce_keepalive_tx{YType::uint64, "pce-keepalive-tx"},
    pce_open_rx{YType::uint32, "pce-open-rx"},
    pce_open_tx{YType::uint32, "pce-open-tx"},
    pce_rep_rx{YType::uint32, "pce-rep-rx"},
    pce_rep_tx{YType::uint32, "pce-rep-tx"},
    pce_req_rx{YType::uint32, "pce-req-rx"},
    pce_req_tx{YType::uint32, "pce-req-tx"},
    pce_rpt_rx{YType::uint32, "pce-rpt-rx"},
    pce_rpt_tx{YType::uint32, "pce-rpt-tx"},
    pce_state{YType::enumeration, "pce-state"},
    pce_upd_rx{YType::uint32, "pce-upd-rx"},
    pce_upd_tx{YType::uint32, "pce-upd-tx"},
    pcep_up_time{YType::uint32, "pcep-up-time"},
    precedence{YType::uint32, "precedence"},
    remote_sid{YType::uint8, "remote-sid"},
    req_reply_avg{YType::uint64, "req-reply-avg"},
    req_reply_max{YType::uint64, "req-reply-max"},
    req_reply_min{YType::uint64, "req-reply-min"},
    request_timeouts{YType::uint64, "request-timeouts"},
    stateful{YType::boolean, "stateful"},
    statically_configured{YType::boolean, "statically-configured"},
    triggered_sync_capability{YType::boolean, "triggered-sync-capability"}
    	,
    last_rx_pce_err(std::make_shared<MplsPce::Peers::Peer::LastRxPceErr>())
	,last_tx_pce_err(std::make_shared<MplsPce::Peers::Peer::LastTxPceErr>())
{
    last_rx_pce_err->parent = this;
    children["last-rx-pce-err"] = last_rx_pce_err;

    last_tx_pce_err->parent = this;
    children["last-tx-pce-err"] = last_tx_pce_err;

    yang_name = "peer"; yang_parent_name = "peers";
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
	|| candidate.is_set
	|| capability_db_version.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| capability_update.is_set
	|| delta_sync_capability.is_set
	|| error.is_set
	|| keepalives.is_set
	|| keychain_enabled.is_set
	|| local_sid.is_set
	|| max_dead_interval.is_set
	|| md5_enabled.is_set
	|| min_keepalive_interval.is_set
	|| negotated_dead_time.is_set
	|| negotiated_keepalive.is_set
	|| pce_err_rx.is_set
	|| pce_err_tx.is_set
	|| pce_init_rx.is_set
	|| pce_init_tx.is_set
	|| pce_keepalive_rx.is_set
	|| pce_keepalive_tx.is_set
	|| pce_open_rx.is_set
	|| pce_open_tx.is_set
	|| pce_rep_rx.is_set
	|| pce_rep_tx.is_set
	|| pce_req_rx.is_set
	|| pce_req_tx.is_set
	|| pce_rpt_rx.is_set
	|| pce_rpt_tx.is_set
	|| pce_state.is_set
	|| pce_upd_rx.is_set
	|| pce_upd_tx.is_set
	|| pcep_up_time.is_set
	|| precedence.is_set
	|| remote_sid.is_set
	|| req_reply_avg.is_set
	|| req_reply_max.is_set
	|| req_reply_min.is_set
	|| request_timeouts.is_set
	|| stateful.is_set
	|| statically_configured.is_set
	|| triggered_sync_capability.is_set
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_data())
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_data());
}

bool MplsPce::Peers::Peer::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(peer_address.operation)
	|| is_set(candidate.operation)
	|| is_set(capability_db_version.operation)
	|| is_set(capability_instantiate.operation)
	|| is_set(capability_segment_routing.operation)
	|| is_set(capability_update.operation)
	|| is_set(delta_sync_capability.operation)
	|| is_set(error.operation)
	|| is_set(keepalives.operation)
	|| is_set(keychain_enabled.operation)
	|| is_set(local_sid.operation)
	|| is_set(max_dead_interval.operation)
	|| is_set(md5_enabled.operation)
	|| is_set(min_keepalive_interval.operation)
	|| is_set(negotated_dead_time.operation)
	|| is_set(negotiated_keepalive.operation)
	|| is_set(pce_err_rx.operation)
	|| is_set(pce_err_tx.operation)
	|| is_set(pce_init_rx.operation)
	|| is_set(pce_init_tx.operation)
	|| is_set(pce_keepalive_rx.operation)
	|| is_set(pce_keepalive_tx.operation)
	|| is_set(pce_open_rx.operation)
	|| is_set(pce_open_tx.operation)
	|| is_set(pce_rep_rx.operation)
	|| is_set(pce_rep_tx.operation)
	|| is_set(pce_req_rx.operation)
	|| is_set(pce_req_tx.operation)
	|| is_set(pce_rpt_rx.operation)
	|| is_set(pce_rpt_tx.operation)
	|| is_set(pce_state.operation)
	|| is_set(pce_upd_rx.operation)
	|| is_set(pce_upd_tx.operation)
	|| is_set(pcep_up_time.operation)
	|| is_set(precedence.operation)
	|| is_set(remote_sid.operation)
	|| is_set(req_reply_avg.operation)
	|| is_set(req_reply_max.operation)
	|| is_set(req_reply_min.operation)
	|| is_set(request_timeouts.operation)
	|| is_set(stateful.operation)
	|| is_set(statically_configured.operation)
	|| is_set(triggered_sync_capability.operation)
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_operation())
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_operation());
}

std::string MplsPce::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-address='" <<peer_address <<"']";

    return path_buffer.str();

}

EntityPath MplsPce::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (candidate.is_set || is_set(candidate.operation)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.operation)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.operation)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.operation)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.operation)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (delta_sync_capability.is_set || is_set(delta_sync_capability.operation)) leaf_name_data.push_back(delta_sync_capability.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (keepalives.is_set || is_set(keepalives.operation)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (keychain_enabled.is_set || is_set(keychain_enabled.operation)) leaf_name_data.push_back(keychain_enabled.get_name_leafdata());
    if (local_sid.is_set || is_set(local_sid.operation)) leaf_name_data.push_back(local_sid.get_name_leafdata());
    if (max_dead_interval.is_set || is_set(max_dead_interval.operation)) leaf_name_data.push_back(max_dead_interval.get_name_leafdata());
    if (md5_enabled.is_set || is_set(md5_enabled.operation)) leaf_name_data.push_back(md5_enabled.get_name_leafdata());
    if (min_keepalive_interval.is_set || is_set(min_keepalive_interval.operation)) leaf_name_data.push_back(min_keepalive_interval.get_name_leafdata());
    if (negotated_dead_time.is_set || is_set(negotated_dead_time.operation)) leaf_name_data.push_back(negotated_dead_time.get_name_leafdata());
    if (negotiated_keepalive.is_set || is_set(negotiated_keepalive.operation)) leaf_name_data.push_back(negotiated_keepalive.get_name_leafdata());
    if (pce_err_rx.is_set || is_set(pce_err_rx.operation)) leaf_name_data.push_back(pce_err_rx.get_name_leafdata());
    if (pce_err_tx.is_set || is_set(pce_err_tx.operation)) leaf_name_data.push_back(pce_err_tx.get_name_leafdata());
    if (pce_init_rx.is_set || is_set(pce_init_rx.operation)) leaf_name_data.push_back(pce_init_rx.get_name_leafdata());
    if (pce_init_tx.is_set || is_set(pce_init_tx.operation)) leaf_name_data.push_back(pce_init_tx.get_name_leafdata());
    if (pce_keepalive_rx.is_set || is_set(pce_keepalive_rx.operation)) leaf_name_data.push_back(pce_keepalive_rx.get_name_leafdata());
    if (pce_keepalive_tx.is_set || is_set(pce_keepalive_tx.operation)) leaf_name_data.push_back(pce_keepalive_tx.get_name_leafdata());
    if (pce_open_rx.is_set || is_set(pce_open_rx.operation)) leaf_name_data.push_back(pce_open_rx.get_name_leafdata());
    if (pce_open_tx.is_set || is_set(pce_open_tx.operation)) leaf_name_data.push_back(pce_open_tx.get_name_leafdata());
    if (pce_rep_rx.is_set || is_set(pce_rep_rx.operation)) leaf_name_data.push_back(pce_rep_rx.get_name_leafdata());
    if (pce_rep_tx.is_set || is_set(pce_rep_tx.operation)) leaf_name_data.push_back(pce_rep_tx.get_name_leafdata());
    if (pce_req_rx.is_set || is_set(pce_req_rx.operation)) leaf_name_data.push_back(pce_req_rx.get_name_leafdata());
    if (pce_req_tx.is_set || is_set(pce_req_tx.operation)) leaf_name_data.push_back(pce_req_tx.get_name_leafdata());
    if (pce_rpt_rx.is_set || is_set(pce_rpt_rx.operation)) leaf_name_data.push_back(pce_rpt_rx.get_name_leafdata());
    if (pce_rpt_tx.is_set || is_set(pce_rpt_tx.operation)) leaf_name_data.push_back(pce_rpt_tx.get_name_leafdata());
    if (pce_state.is_set || is_set(pce_state.operation)) leaf_name_data.push_back(pce_state.get_name_leafdata());
    if (pce_upd_rx.is_set || is_set(pce_upd_rx.operation)) leaf_name_data.push_back(pce_upd_rx.get_name_leafdata());
    if (pce_upd_tx.is_set || is_set(pce_upd_tx.operation)) leaf_name_data.push_back(pce_upd_tx.get_name_leafdata());
    if (pcep_up_time.is_set || is_set(pcep_up_time.operation)) leaf_name_data.push_back(pcep_up_time.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (remote_sid.is_set || is_set(remote_sid.operation)) leaf_name_data.push_back(remote_sid.get_name_leafdata());
    if (req_reply_avg.is_set || is_set(req_reply_avg.operation)) leaf_name_data.push_back(req_reply_avg.get_name_leafdata());
    if (req_reply_max.is_set || is_set(req_reply_max.operation)) leaf_name_data.push_back(req_reply_max.get_name_leafdata());
    if (req_reply_min.is_set || is_set(req_reply_min.operation)) leaf_name_data.push_back(req_reply_min.get_name_leafdata());
    if (request_timeouts.is_set || is_set(request_timeouts.operation)) leaf_name_data.push_back(request_timeouts.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.operation)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (statically_configured.is_set || is_set(statically_configured.operation)) leaf_name_data.push_back(statically_configured.get_name_leafdata());
    if (triggered_sync_capability.is_set || is_set(triggered_sync_capability.operation)) leaf_name_data.push_back(triggered_sync_capability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ig-ps")
    {
        for(auto const & c : ig_ps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPce::Peers::Peer::IgPs>();
        c->parent = this;
        ig_ps.push_back(std::move(c));
        children[segment_path] = ig_ps.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-rx-pce-err")
    {
        if(last_rx_pce_err != nullptr)
        {
            children["last-rx-pce-err"] = last_rx_pce_err;
        }
        else
        {
            last_rx_pce_err = std::make_shared<MplsPce::Peers::Peer::LastRxPceErr>();
            last_rx_pce_err->parent = this;
            children["last-rx-pce-err"] = last_rx_pce_err;
        }
        return children.at("last-rx-pce-err");
    }

    if(child_yang_name == "last-tx-pce-err")
    {
        if(last_tx_pce_err != nullptr)
        {
            children["last-tx-pce-err"] = last_tx_pce_err;
        }
        else
        {
            last_tx_pce_err = std::make_shared<MplsPce::Peers::Peer::LastTxPceErr>();
            last_tx_pce_err->parent = this;
            children["last-tx-pce-err"] = last_tx_pce_err;
        }
        return children.at("last-tx-pce-err");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Peers::Peer::get_children()
{
    for (auto const & c : ig_ps)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("last-rx-pce-err") == children.end())
    {
        if(last_rx_pce_err != nullptr)
        {
            children["last-rx-pce-err"] = last_rx_pce_err;
        }
    }

    if(children.find("last-tx-pce-err") == children.end())
    {
        if(last_tx_pce_err != nullptr)
        {
            children["last-tx-pce-err"] = last_tx_pce_err;
        }
    }

    return children;
}

void MplsPce::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "candidate")
    {
        candidate = value;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
    }
    if(value_path == "delta-sync-capability")
    {
        delta_sync_capability = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "keepalives")
    {
        keepalives = value;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled = value;
    }
    if(value_path == "local-sid")
    {
        local_sid = value;
    }
    if(value_path == "max-dead-interval")
    {
        max_dead_interval = value;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled = value;
    }
    if(value_path == "min-keepalive-interval")
    {
        min_keepalive_interval = value;
    }
    if(value_path == "negotated-dead-time")
    {
        negotated_dead_time = value;
    }
    if(value_path == "negotiated-keepalive")
    {
        negotiated_keepalive = value;
    }
    if(value_path == "pce-err-rx")
    {
        pce_err_rx = value;
    }
    if(value_path == "pce-err-tx")
    {
        pce_err_tx = value;
    }
    if(value_path == "pce-init-rx")
    {
        pce_init_rx = value;
    }
    if(value_path == "pce-init-tx")
    {
        pce_init_tx = value;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx = value;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx = value;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx = value;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx = value;
    }
    if(value_path == "pce-rep-rx")
    {
        pce_rep_rx = value;
    }
    if(value_path == "pce-rep-tx")
    {
        pce_rep_tx = value;
    }
    if(value_path == "pce-req-rx")
    {
        pce_req_rx = value;
    }
    if(value_path == "pce-req-tx")
    {
        pce_req_tx = value;
    }
    if(value_path == "pce-rpt-rx")
    {
        pce_rpt_rx = value;
    }
    if(value_path == "pce-rpt-tx")
    {
        pce_rpt_tx = value;
    }
    if(value_path == "pce-state")
    {
        pce_state = value;
    }
    if(value_path == "pce-upd-rx")
    {
        pce_upd_rx = value;
    }
    if(value_path == "pce-upd-tx")
    {
        pce_upd_tx = value;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "remote-sid")
    {
        remote_sid = value;
    }
    if(value_path == "req-reply-avg")
    {
        req_reply_avg = value;
    }
    if(value_path == "req-reply-max")
    {
        req_reply_max = value;
    }
    if(value_path == "req-reply-min")
    {
        req_reply_min = value;
    }
    if(value_path == "request-timeouts")
    {
        request_timeouts = value;
    }
    if(value_path == "stateful")
    {
        stateful = value;
    }
    if(value_path == "statically-configured")
    {
        statically_configured = value;
    }
    if(value_path == "triggered-sync-capability")
    {
        triggered_sync_capability = value;
    }
}

MplsPce::Peers::Peer::LastTxPceErr::LastTxPceErr()
    :
    has_open_object{YType::boolean, "has-open-object"},
    has_rp_object{YType::boolean, "has-rp-object"},
    open_dead_time{YType::uint32, "open-dead-time"},
    open_keepalive{YType::uint32, "open-keepalive"},
    openversion{YType::uint32, "openversion"},
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    rp_request_id{YType::uint32, "rp-request-id"}
{
    yang_name = "last-tx-pce-err"; yang_parent_name = "peer";
}

MplsPce::Peers::Peer::LastTxPceErr::~LastTxPceErr()
{
}

bool MplsPce::Peers::Peer::LastTxPceErr::has_data() const
{
    return has_open_object.is_set
	|| has_rp_object.is_set
	|| open_dead_time.is_set
	|| open_keepalive.is_set
	|| openversion.is_set
	|| pce_err_type.is_set
	|| pce_err_value.is_set
	|| rp_request_id.is_set;
}

bool MplsPce::Peers::Peer::LastTxPceErr::has_operation() const
{
    return is_set(operation)
	|| is_set(has_open_object.operation)
	|| is_set(has_rp_object.operation)
	|| is_set(open_dead_time.operation)
	|| is_set(open_keepalive.operation)
	|| is_set(openversion.operation)
	|| is_set(pce_err_type.operation)
	|| is_set(pce_err_value.operation)
	|| is_set(rp_request_id.operation);
}

std::string MplsPce::Peers::Peer::LastTxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-tx-pce-err";

    return path_buffer.str();

}

EntityPath MplsPce::Peers::Peer::LastTxPceErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTxPceErr' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_open_object.is_set || is_set(has_open_object.operation)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.operation)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.operation)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.operation)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.operation)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (pce_err_type.is_set || is_set(pce_err_type.operation)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.operation)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.operation)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Peers::Peer::LastTxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Peers::Peer::LastTxPceErr::get_children()
{
    return children;
}

void MplsPce::Peers::Peer::LastTxPceErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-open-object")
    {
        has_open_object = value;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
    }
    if(value_path == "openversion")
    {
        openversion = value;
    }
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
    }
}

MplsPce::Peers::Peer::LastRxPceErr::LastRxPceErr()
    :
    has_open_object{YType::boolean, "has-open-object"},
    has_rp_object{YType::boolean, "has-rp-object"},
    open_dead_time{YType::uint32, "open-dead-time"},
    open_keepalive{YType::uint32, "open-keepalive"},
    openversion{YType::uint32, "openversion"},
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    rp_request_id{YType::uint32, "rp-request-id"}
{
    yang_name = "last-rx-pce-err"; yang_parent_name = "peer";
}

MplsPce::Peers::Peer::LastRxPceErr::~LastRxPceErr()
{
}

bool MplsPce::Peers::Peer::LastRxPceErr::has_data() const
{
    return has_open_object.is_set
	|| has_rp_object.is_set
	|| open_dead_time.is_set
	|| open_keepalive.is_set
	|| openversion.is_set
	|| pce_err_type.is_set
	|| pce_err_value.is_set
	|| rp_request_id.is_set;
}

bool MplsPce::Peers::Peer::LastRxPceErr::has_operation() const
{
    return is_set(operation)
	|| is_set(has_open_object.operation)
	|| is_set(has_rp_object.operation)
	|| is_set(open_dead_time.operation)
	|| is_set(open_keepalive.operation)
	|| is_set(openversion.operation)
	|| is_set(pce_err_type.operation)
	|| is_set(pce_err_value.operation)
	|| is_set(rp_request_id.operation);
}

std::string MplsPce::Peers::Peer::LastRxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rx-pce-err";

    return path_buffer.str();

}

EntityPath MplsPce::Peers::Peer::LastRxPceErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastRxPceErr' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_open_object.is_set || is_set(has_open_object.operation)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.operation)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.operation)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.operation)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.operation)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (pce_err_type.is_set || is_set(pce_err_type.operation)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.operation)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.operation)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Peers::Peer::LastRxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Peers::Peer::LastRxPceErr::get_children()
{
    return children;
}

void MplsPce::Peers::Peer::LastRxPceErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-open-object")
    {
        has_open_object = value;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
    }
    if(value_path == "openversion")
    {
        openversion = value;
    }
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
    }
}

MplsPce::Peers::Peer::IgPs::IgPs()
    :
    igp_instance_id{YType::str, "igp-instance-id"},
    igp_type{YType::enumeration, "igp-type"}
{
    yang_name = "ig-ps"; yang_parent_name = "peer";
}

MplsPce::Peers::Peer::IgPs::~IgPs()
{
}

bool MplsPce::Peers::Peer::IgPs::has_data() const
{
    return igp_instance_id.is_set
	|| igp_type.is_set;
}

bool MplsPce::Peers::Peer::IgPs::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_instance_id.operation)
	|| is_set(igp_type.operation);
}

std::string MplsPce::Peers::Peer::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";

    return path_buffer.str();

}

EntityPath MplsPce::Peers::Peer::IgPs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgPs' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_instance_id.is_set || is_set(igp_instance_id.operation)) leaf_name_data.push_back(igp_instance_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Peers::Peer::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Peers::Peer::IgPs::get_children()
{
    return children;
}

void MplsPce::Peers::Peer::IgPs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-instance-id")
    {
        igp_instance_id = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
}

MplsPce::Topology::Topology()
    :
    global(std::make_shared<MplsPce::Topology::Global>())
{
    global->parent = this;
    children["global"] = global;

    yang_name = "topology"; yang_parent_name = "mpls-pce";
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
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsPce::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

EntityPath MplsPce::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<MplsPce::Topology::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Topology::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    return children;
}

void MplsPce::Topology::set_value(const std::string & value_path, std::string value)
{
}

MplsPce::Topology::Global::Global()
{
    yang_name = "global"; yang_parent_name = "topology";
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
    return is_set(operation);
}

std::string MplsPce::Topology::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsPce::Topology::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Topology::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        for(auto const & c : nodes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPce::Topology::Global::Nodes>();
        c->parent = this;
        nodes.push_back(std::move(c));
        children[segment_path] = nodes.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Topology::Global::get_children()
{
    for (auto const & c : nodes)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPce::Topology::Global::set_value(const std::string & value_path, std::string value)
{
}

MplsPce::Topology::Global::Nodes::Nodes()
    :
    igp_area_format{YType::enumeration, "igp-area-format"},
    igp_area_id{YType::uint32, "igp-area-id"},
    is_pce_border_node{YType::boolean, "is-pce-border-node"},
    node_id{YType::str, "node-id"},
    pce_cost{YType::uint32, "pce-cost"},
    router_id{YType::str, "router-id"}
{
    yang_name = "nodes"; yang_parent_name = "global";
}

MplsPce::Topology::Global::Nodes::~Nodes()
{
}

bool MplsPce::Topology::Global::Nodes::has_data() const
{
    return igp_area_format.is_set
	|| igp_area_id.is_set
	|| is_pce_border_node.is_set
	|| node_id.is_set
	|| pce_cost.is_set
	|| router_id.is_set;
}

bool MplsPce::Topology::Global::Nodes::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_area_format.operation)
	|| is_set(igp_area_id.operation)
	|| is_set(is_pce_border_node.operation)
	|| is_set(node_id.operation)
	|| is_set(pce_cost.operation)
	|| is_set(router_id.operation);
}

std::string MplsPce::Topology::Global::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath MplsPce::Topology::Global::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/topology/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_format.is_set || is_set(igp_area_format.operation)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.operation)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (is_pce_border_node.is_set || is_set(is_pce_border_node.operation)) leaf_name_data.push_back(is_pce_border_node.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (pce_cost.is_set || is_set(pce_cost.operation)) leaf_name_data.push_back(pce_cost.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Topology::Global::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Topology::Global::Nodes::get_children()
{
    return children;
}

void MplsPce::Topology::Global::Nodes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
    }
    if(value_path == "is-pce-border-node")
    {
        is_pce_border_node = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "pce-cost")
    {
        pce_cost = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

MplsPce::Tunnels::Tunnels()
    :
    admin_weight{YType::uint32, "admin-weight"},
    configured_pce_address{YType::str, "configured-pce-address"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    destination_address{YType::str, "destination-address"},
    hop_count{YType::uint32, "hop-count"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    path_state{YType::enumeration, "path-state"},
    sender_pce_address{YType::str, "sender-pce-address"},
    source_address{YType::str, "source-address"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{
    yang_name = "tunnels"; yang_parent_name = "mpls-pce";
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
    return admin_weight.is_set
	|| configured_pce_address.is_set
	|| curr_path_option_index.is_set
	|| destination_address.is_set
	|| hop_count.is_set
	|| is_curr_path_option_pce.is_set
	|| path_state.is_set
	|| sender_pce_address.is_set
	|| source_address.is_set
	|| tunnel_state.is_set;
}

bool MplsPce::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(admin_weight.operation)
	|| is_set(configured_pce_address.operation)
	|| is_set(curr_path_option_index.operation)
	|| is_set(destination_address.operation)
	|| is_set(hop_count.operation)
	|| is_set(is_curr_path_option_pce.operation)
	|| is_set(path_state.operation)
	|| is_set(sender_pce_address.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_state.operation);
}

std::string MplsPce::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

EntityPath MplsPce::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.operation)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.operation)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.operation)) leaf_name_data.push_back(hop_count.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.operation)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.operation)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.operation)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.operation)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPce::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(std::move(c));
        children[segment_path] = tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Tunnels::get_children()
{
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPce::Tunnels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
    }
    if(value_path == "path-state")
    {
        path_state = value;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
    }
}

MplsPce::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    admin_weight{YType::uint32, "admin-weight"},
    configured_pce_address{YType::str, "configured-pce-address"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    destination_address{YType::str, "destination-address"},
    hop_count{YType::uint32, "hop-count"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    path_state{YType::enumeration, "path-state"},
    sender_pce_address{YType::str, "sender-pce-address"},
    source_address{YType::str, "source-address"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{
    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

MplsPce::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsPce::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| admin_weight.is_set
	|| configured_pce_address.is_set
	|| curr_path_option_index.is_set
	|| destination_address.is_set
	|| hop_count.is_set
	|| is_curr_path_option_pce.is_set
	|| path_state.is_set
	|| sender_pce_address.is_set
	|| source_address.is_set
	|| tunnel_state.is_set;
}

bool MplsPce::Tunnels::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| is_set(admin_weight.operation)
	|| is_set(configured_pce_address.operation)
	|| is_set(curr_path_option_index.operation)
	|| is_set(destination_address.operation)
	|| is_set(hop_count.operation)
	|| is_set(is_curr_path_option_pce.operation)
	|| is_set(path_state.operation)
	|| is_set(sender_pce_address.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_state.operation);
}

std::string MplsPce::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";

    return path_buffer.str();

}

EntityPath MplsPce::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.operation)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.operation)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.operation)) leaf_name_data.push_back(hop_count.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.operation)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.operation)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.operation)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.operation)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPce::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPce::Tunnels::Tunnel::get_children()
{
    return children;
}

void MplsPce::Tunnels::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
    }
    if(value_path == "path-state")
    {
        path_state = value;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
    }
}

MplsPceStdby::MplsPceStdby()
    :
    lsps(std::make_shared<MplsPceStdby::Lsps>())
	,peers(std::make_shared<MplsPceStdby::Peers>())
	,statistics(std::make_shared<MplsPceStdby::Statistics>())
	,topology(std::make_shared<MplsPceStdby::Topology>())
	,tunnels(std::make_shared<MplsPceStdby::Tunnels>())
{
    lsps->parent = this;
    children["lsps"] = lsps;

    peers->parent = this;
    children["peers"] = peers;

    statistics->parent = this;
    children["statistics"] = statistics;

    topology->parent = this;
    children["topology"] = topology;

    tunnels->parent = this;
    children["tunnels"] = tunnels;

    yang_name = "mpls-pce-stdby"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper";
}

MplsPceStdby::~MplsPceStdby()
{
}

bool MplsPceStdby::has_data() const
{
    return (lsps !=  nullptr && lsps->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool MplsPceStdby::has_operation() const
{
    return is_set(operation)
	|| (lsps !=  nullptr && lsps->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string MplsPceStdby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby";

    return path_buffer.str();

}

EntityPath MplsPceStdby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsps")
    {
        if(lsps != nullptr)
        {
            children["lsps"] = lsps;
        }
        else
        {
            lsps = std::make_shared<MplsPceStdby::Lsps>();
            lsps->parent = this;
            children["lsps"] = lsps;
        }
        return children.at("lsps");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<MplsPceStdby::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsPceStdby::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    if(child_yang_name == "topology")
    {
        if(topology != nullptr)
        {
            children["topology"] = topology;
        }
        else
        {
            topology = std::make_shared<MplsPceStdby::Topology>();
            topology->parent = this;
            children["topology"] = topology;
        }
        return children.at("topology");
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<MplsPceStdby::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::get_children()
{
    if(children.find("lsps") == children.end())
    {
        if(lsps != nullptr)
        {
            children["lsps"] = lsps;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    if(children.find("topology") == children.end())
    {
        if(topology != nullptr)
        {
            children["topology"] = topology;
        }
    }

    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    return children;
}

void MplsPceStdby::set_value(const std::string & value_path, std::string value)
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

MplsPceStdby::Lsps::Lsps()
    :
    administrative{YType::boolean, "administrative"},
    backup_path{YType::str, "backup-path"},
    binding_sid{YType::uint32, "binding-sid"},
    cleanup_timer_exp{YType::int32, "cleanup-timer-exp"},
    create{YType::boolean, "create"},
    delegatable{YType::boolean, "delegatable"},
    delegation_timer_exp{YType::int32, "delegation-timer-exp"},
    destination_address{YType::str, "destination-address"},
    forward_class_id{YType::uint32, "forward-class-id"},
    load_share{YType::uint32, "load-share"},
    lspo_is_used{YType::boolean, "lspo-is-used"},
    operational{YType::enumeration, "operational"},
    path_setup_type{YType::uint8, "path-setup-type"},
    request_queue_size{YType::uint8, "request-queue-size"},
    session_internal_lsp_id{YType::uint32, "session-internal-lsp-id"},
    source_address{YType::str, "source-address"},
    state_timer_exp{YType::int32, "state-timer-exp"},
    stateful_request_parameter_id{YType::uint32, "stateful-request-parameter-id"},
    symbolic_name_xr{YType::str, "symbolic-name-xr"}
    	,
    autoroute(std::make_shared<MplsPceStdby::Lsps::Autoroute>())
	,creator(std::make_shared<MplsPceStdby::Lsps::Creator>())
	,delegated(std::make_shared<MplsPceStdby::Lsps::Delegated>())
	,identifiers(std::make_shared<MplsPceStdby::Lsps::Identifiers>())
{
    autoroute->parent = this;
    children["autoroute"] = autoroute;

    creator->parent = this;
    children["creator"] = creator;

    delegated->parent = this;
    children["delegated"] = delegated;

    identifiers->parent = this;
    children["identifiers"] = identifiers;

    yang_name = "lsps"; yang_parent_name = "mpls-pce-stdby";
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
    return administrative.is_set
	|| binding_sid.is_set
	|| cleanup_timer_exp.is_set
	|| create.is_set
	|| delegatable.is_set
	|| delegation_timer_exp.is_set
	|| destination_address.is_set
	|| forward_class_id.is_set
	|| load_share.is_set
	|| lspo_is_used.is_set
	|| operational.is_set
	|| path_setup_type.is_set
	|| request_queue_size.is_set
	|| session_internal_lsp_id.is_set
	|| source_address.is_set
	|| state_timer_exp.is_set
	|| stateful_request_parameter_id.is_set
	|| symbolic_name_xr.is_set
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (creator !=  nullptr && creator->has_data())
	|| (delegated !=  nullptr && delegated->has_data())
	|| (identifiers !=  nullptr && identifiers->has_data());
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(administrative.operation)
	|| is_set(backup_path.operation)
	|| is_set(binding_sid.operation)
	|| is_set(cleanup_timer_exp.operation)
	|| is_set(create.operation)
	|| is_set(delegatable.operation)
	|| is_set(delegation_timer_exp.operation)
	|| is_set(destination_address.operation)
	|| is_set(forward_class_id.operation)
	|| is_set(load_share.operation)
	|| is_set(lspo_is_used.operation)
	|| is_set(operational.operation)
	|| is_set(path_setup_type.operation)
	|| is_set(request_queue_size.operation)
	|| is_set(session_internal_lsp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(state_timer_exp.operation)
	|| is_set(stateful_request_parameter_id.operation)
	|| is_set(symbolic_name_xr.operation)
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (creator !=  nullptr && creator->has_operation())
	|| (delegated !=  nullptr && delegated->has_operation())
	|| (identifiers !=  nullptr && identifiers->has_operation());
}

std::string MplsPceStdby::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative.is_set || is_set(administrative.operation)) leaf_name_data.push_back(administrative.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.operation)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (cleanup_timer_exp.is_set || is_set(cleanup_timer_exp.operation)) leaf_name_data.push_back(cleanup_timer_exp.get_name_leafdata());
    if (create.is_set || is_set(create.operation)) leaf_name_data.push_back(create.get_name_leafdata());
    if (delegatable.is_set || is_set(delegatable.operation)) leaf_name_data.push_back(delegatable.get_name_leafdata());
    if (delegation_timer_exp.is_set || is_set(delegation_timer_exp.operation)) leaf_name_data.push_back(delegation_timer_exp.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (forward_class_id.is_set || is_set(forward_class_id.operation)) leaf_name_data.push_back(forward_class_id.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.operation)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (lspo_is_used.is_set || is_set(lspo_is_used.operation)) leaf_name_data.push_back(lspo_is_used.get_name_leafdata());
    if (operational.is_set || is_set(operational.operation)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (path_setup_type.is_set || is_set(path_setup_type.operation)) leaf_name_data.push_back(path_setup_type.get_name_leafdata());
    if (request_queue_size.is_set || is_set(request_queue_size.operation)) leaf_name_data.push_back(request_queue_size.get_name_leafdata());
    if (session_internal_lsp_id.is_set || is_set(session_internal_lsp_id.operation)) leaf_name_data.push_back(session_internal_lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state_timer_exp.is_set || is_set(state_timer_exp.operation)) leaf_name_data.push_back(state_timer_exp.get_name_leafdata());
    if (stateful_request_parameter_id.is_set || is_set(stateful_request_parameter_id.operation)) leaf_name_data.push_back(stateful_request_parameter_id.get_name_leafdata());
    if (symbolic_name_xr.is_set || is_set(symbolic_name_xr.operation)) leaf_name_data.push_back(symbolic_name_xr.get_name_leafdata());

    auto backup_path_name_datas = backup_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_path_name_datas.begin(), backup_path_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute != nullptr)
        {
            children["autoroute"] = autoroute;
        }
        else
        {
            autoroute = std::make_shared<MplsPceStdby::Lsps::Autoroute>();
            autoroute->parent = this;
            children["autoroute"] = autoroute;
        }
        return children.at("autoroute");
    }

    if(child_yang_name == "creator")
    {
        if(creator != nullptr)
        {
            children["creator"] = creator;
        }
        else
        {
            creator = std::make_shared<MplsPceStdby::Lsps::Creator>();
            creator->parent = this;
            children["creator"] = creator;
        }
        return children.at("creator");
    }

    if(child_yang_name == "delegated")
    {
        if(delegated != nullptr)
        {
            children["delegated"] = delegated;
        }
        else
        {
            delegated = std::make_shared<MplsPceStdby::Lsps::Delegated>();
            delegated->parent = this;
            children["delegated"] = delegated;
        }
        return children.at("delegated");
    }

    if(child_yang_name == "identifiers")
    {
        if(identifiers != nullptr)
        {
            children["identifiers"] = identifiers;
        }
        else
        {
            identifiers = std::make_shared<MplsPceStdby::Lsps::Identifiers>();
            identifiers->parent = this;
            children["identifiers"] = identifiers;
        }
        return children.at("identifiers");
    }

    if(child_yang_name == "lsp")
    {
        for(auto const & c : lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp>();
        c->parent = this;
        lsp.push_back(std::move(c));
        children[segment_path] = lsp.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Paths>();
        c->parent = this;
        paths.push_back(std::move(c));
        children[segment_path] = paths.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::get_children()
{
    if(children.find("autoroute") == children.end())
    {
        if(autoroute != nullptr)
        {
            children["autoroute"] = autoroute;
        }
    }

    if(children.find("creator") == children.end())
    {
        if(creator != nullptr)
        {
            children["creator"] = creator;
        }
    }

    if(children.find("delegated") == children.end())
    {
        if(delegated != nullptr)
        {
            children["delegated"] = delegated;
        }
    }

    if(children.find("identifiers") == children.end())
    {
        if(identifiers != nullptr)
        {
            children["identifiers"] = identifiers;
        }
    }

    for (auto const & c : lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPceStdby::Lsps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "administrative")
    {
        administrative = value;
    }
    if(value_path == "backup-path")
    {
        backup_path.append(value);
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp = value;
    }
    if(value_path == "create")
    {
        create = value;
    }
    if(value_path == "delegatable")
    {
        delegatable = value;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id = value;
    }
    if(value_path == "load-share")
    {
        load_share = value;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used = value;
    }
    if(value_path == "operational")
    {
        operational = value;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type = value;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size = value;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp = value;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id = value;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr = value;
    }
}

MplsPceStdby::Lsps::Lsp::Lsp()
    :
    symbolic_name{YType::str, "symbolic-name"},
    administrative{YType::boolean, "administrative"},
    backup_path{YType::str, "backup-path"},
    binding_sid{YType::uint32, "binding-sid"},
    cleanup_timer_exp{YType::int32, "cleanup-timer-exp"},
    create{YType::boolean, "create"},
    delegatable{YType::boolean, "delegatable"},
    delegation_timer_exp{YType::int32, "delegation-timer-exp"},
    destination_address{YType::str, "destination-address"},
    forward_class_id{YType::uint32, "forward-class-id"},
    load_share{YType::uint32, "load-share"},
    lspo_is_used{YType::boolean, "lspo-is-used"},
    operational{YType::enumeration, "operational"},
    path_setup_type{YType::uint8, "path-setup-type"},
    request_queue_size{YType::uint8, "request-queue-size"},
    session_internal_lsp_id{YType::uint32, "session-internal-lsp-id"},
    source_address{YType::str, "source-address"},
    state_timer_exp{YType::int32, "state-timer-exp"},
    stateful_request_parameter_id{YType::uint32, "stateful-request-parameter-id"},
    symbolic_name_xr{YType::str, "symbolic-name-xr"}
    	,
    autoroute(std::make_shared<MplsPceStdby::Lsps::Lsp::Autoroute>())
	,creator(std::make_shared<MplsPceStdby::Lsps::Lsp::Creator>())
	,delegated(std::make_shared<MplsPceStdby::Lsps::Lsp::Delegated>())
	,identifiers(std::make_shared<MplsPceStdby::Lsps::Lsp::Identifiers>())
{
    autoroute->parent = this;
    children["autoroute"] = autoroute;

    creator->parent = this;
    children["creator"] = creator;

    delegated->parent = this;
    children["delegated"] = delegated;

    identifiers->parent = this;
    children["identifiers"] = identifiers;

    yang_name = "lsp"; yang_parent_name = "lsps";
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
	|| administrative.is_set
	|| binding_sid.is_set
	|| cleanup_timer_exp.is_set
	|| create.is_set
	|| delegatable.is_set
	|| delegation_timer_exp.is_set
	|| destination_address.is_set
	|| forward_class_id.is_set
	|| load_share.is_set
	|| lspo_is_used.is_set
	|| operational.is_set
	|| path_setup_type.is_set
	|| request_queue_size.is_set
	|| session_internal_lsp_id.is_set
	|| source_address.is_set
	|| state_timer_exp.is_set
	|| stateful_request_parameter_id.is_set
	|| symbolic_name_xr.is_set
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (creator !=  nullptr && creator->has_data())
	|| (delegated !=  nullptr && delegated->has_data())
	|| (identifiers !=  nullptr && identifiers->has_data());
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(symbolic_name.operation)
	|| is_set(administrative.operation)
	|| is_set(backup_path.operation)
	|| is_set(binding_sid.operation)
	|| is_set(cleanup_timer_exp.operation)
	|| is_set(create.operation)
	|| is_set(delegatable.operation)
	|| is_set(delegation_timer_exp.operation)
	|| is_set(destination_address.operation)
	|| is_set(forward_class_id.operation)
	|| is_set(load_share.operation)
	|| is_set(lspo_is_used.operation)
	|| is_set(operational.operation)
	|| is_set(path_setup_type.operation)
	|| is_set(request_queue_size.operation)
	|| is_set(session_internal_lsp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(state_timer_exp.operation)
	|| is_set(stateful_request_parameter_id.operation)
	|| is_set(symbolic_name_xr.operation)
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (creator !=  nullptr && creator->has_operation())
	|| (delegated !=  nullptr && delegated->has_operation())
	|| (identifiers !=  nullptr && identifiers->has_operation());
}

std::string MplsPceStdby::Lsps::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp" <<"[symbolic-name='" <<symbolic_name <<"']";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Lsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (symbolic_name.is_set || is_set(symbolic_name.operation)) leaf_name_data.push_back(symbolic_name.get_name_leafdata());
    if (administrative.is_set || is_set(administrative.operation)) leaf_name_data.push_back(administrative.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.operation)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (cleanup_timer_exp.is_set || is_set(cleanup_timer_exp.operation)) leaf_name_data.push_back(cleanup_timer_exp.get_name_leafdata());
    if (create.is_set || is_set(create.operation)) leaf_name_data.push_back(create.get_name_leafdata());
    if (delegatable.is_set || is_set(delegatable.operation)) leaf_name_data.push_back(delegatable.get_name_leafdata());
    if (delegation_timer_exp.is_set || is_set(delegation_timer_exp.operation)) leaf_name_data.push_back(delegation_timer_exp.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (forward_class_id.is_set || is_set(forward_class_id.operation)) leaf_name_data.push_back(forward_class_id.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.operation)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (lspo_is_used.is_set || is_set(lspo_is_used.operation)) leaf_name_data.push_back(lspo_is_used.get_name_leafdata());
    if (operational.is_set || is_set(operational.operation)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (path_setup_type.is_set || is_set(path_setup_type.operation)) leaf_name_data.push_back(path_setup_type.get_name_leafdata());
    if (request_queue_size.is_set || is_set(request_queue_size.operation)) leaf_name_data.push_back(request_queue_size.get_name_leafdata());
    if (session_internal_lsp_id.is_set || is_set(session_internal_lsp_id.operation)) leaf_name_data.push_back(session_internal_lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state_timer_exp.is_set || is_set(state_timer_exp.operation)) leaf_name_data.push_back(state_timer_exp.get_name_leafdata());
    if (stateful_request_parameter_id.is_set || is_set(stateful_request_parameter_id.operation)) leaf_name_data.push_back(stateful_request_parameter_id.get_name_leafdata());
    if (symbolic_name_xr.is_set || is_set(symbolic_name_xr.operation)) leaf_name_data.push_back(symbolic_name_xr.get_name_leafdata());

    auto backup_path_name_datas = backup_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), backup_path_name_datas.begin(), backup_path_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute != nullptr)
        {
            children["autoroute"] = autoroute;
        }
        else
        {
            autoroute = std::make_shared<MplsPceStdby::Lsps::Lsp::Autoroute>();
            autoroute->parent = this;
            children["autoroute"] = autoroute;
        }
        return children.at("autoroute");
    }

    if(child_yang_name == "creator")
    {
        if(creator != nullptr)
        {
            children["creator"] = creator;
        }
        else
        {
            creator = std::make_shared<MplsPceStdby::Lsps::Lsp::Creator>();
            creator->parent = this;
            children["creator"] = creator;
        }
        return children.at("creator");
    }

    if(child_yang_name == "delegated")
    {
        if(delegated != nullptr)
        {
            children["delegated"] = delegated;
        }
        else
        {
            delegated = std::make_shared<MplsPceStdby::Lsps::Lsp::Delegated>();
            delegated->parent = this;
            children["delegated"] = delegated;
        }
        return children.at("delegated");
    }

    if(child_yang_name == "identifiers")
    {
        if(identifiers != nullptr)
        {
            children["identifiers"] = identifiers;
        }
        else
        {
            identifiers = std::make_shared<MplsPceStdby::Lsps::Lsp::Identifiers>();
            identifiers->parent = this;
            children["identifiers"] = identifiers;
        }
        return children.at("identifiers");
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths>();
        c->parent = this;
        paths.push_back(std::move(c));
        children[segment_path] = paths.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Lsp::get_children()
{
    if(children.find("autoroute") == children.end())
    {
        if(autoroute != nullptr)
        {
            children["autoroute"] = autoroute;
        }
    }

    if(children.find("creator") == children.end())
    {
        if(creator != nullptr)
        {
            children["creator"] = creator;
        }
    }

    if(children.find("delegated") == children.end())
    {
        if(delegated != nullptr)
        {
            children["delegated"] = delegated;
        }
    }

    if(children.find("identifiers") == children.end())
    {
        if(identifiers != nullptr)
        {
            children["identifiers"] = identifiers;
        }
    }

    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPceStdby::Lsps::Lsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "symbolic-name")
    {
        symbolic_name = value;
    }
    if(value_path == "administrative")
    {
        administrative = value;
    }
    if(value_path == "backup-path")
    {
        backup_path.append(value);
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
    }
    if(value_path == "cleanup-timer-exp")
    {
        cleanup_timer_exp = value;
    }
    if(value_path == "create")
    {
        create = value;
    }
    if(value_path == "delegatable")
    {
        delegatable = value;
    }
    if(value_path == "delegation-timer-exp")
    {
        delegation_timer_exp = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "forward-class-id")
    {
        forward_class_id = value;
    }
    if(value_path == "load-share")
    {
        load_share = value;
    }
    if(value_path == "lspo-is-used")
    {
        lspo_is_used = value;
    }
    if(value_path == "operational")
    {
        operational = value;
    }
    if(value_path == "path-setup-type")
    {
        path_setup_type = value;
    }
    if(value_path == "request-queue-size")
    {
        request_queue_size = value;
    }
    if(value_path == "session-internal-lsp-id")
    {
        session_internal_lsp_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "state-timer-exp")
    {
        state_timer_exp = value;
    }
    if(value_path == "stateful-request-parameter-id")
    {
        stateful_request_parameter_id = value;
    }
    if(value_path == "symbolic-name-xr")
    {
        symbolic_name_xr = value;
    }
}

MplsPceStdby::Lsps::Lsp::Creator::Creator()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{
    yang_name = "creator"; yang_parent_name = "lsp";
}

MplsPceStdby::Lsps::Lsp::Creator::~Creator()
{
}

bool MplsPceStdby::Lsps::Lsp::Creator::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Creator::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(node_identifier.operation);
}

std::string MplsPceStdby::Lsps::Lsp::Creator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creator";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Lsp::Creator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Creator' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.operation)) leaf_name_data.push_back(node_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Creator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Lsp::Creator::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Lsp::Creator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
    }
}

MplsPceStdby::Lsps::Lsp::Delegated::Delegated()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{
    yang_name = "delegated"; yang_parent_name = "lsp";
}

MplsPceStdby::Lsps::Lsp::Delegated::~Delegated()
{
}

bool MplsPceStdby::Lsps::Lsp::Delegated::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Delegated::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(node_identifier.operation);
}

std::string MplsPceStdby::Lsps::Lsp::Delegated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Lsp::Delegated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delegated' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.operation)) leaf_name_data.push_back(node_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Delegated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Lsp::Delegated::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Lsp::Delegated::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
    }
}

MplsPceStdby::Lsps::Lsp::Identifiers::Identifiers()
    :
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"},
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "identifiers"; yang_parent_name = "lsp";
}

MplsPceStdby::Lsps::Lsp::Identifiers::~Identifiers()
{
}

bool MplsPceStdby::Lsps::Lsp::Identifiers::has_data() const
{
    return ext_tunnel_id.is_set
	|| is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Identifiers::has_operation() const
{
    return is_set(operation)
	|| is_set(ext_tunnel_id.operation)
	|| is_set(is_used.operation)
	|| is_set(sender.operation)
	|| is_set(te_lsp_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsPceStdby::Lsps::Lsp::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Lsp::Identifiers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identifiers' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.operation)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.operation)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.operation)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Lsp::Identifiers::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Lsp::Identifiers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "sender")
    {
        sender = value;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsPceStdby::Lsps::Lsp::Autoroute::Autoroute()
    :
    announced{YType::boolean, "announced"},
    destination{YType::str, "destination"},
    is_used{YType::boolean, "is-used"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"}
{
    yang_name = "autoroute"; yang_parent_name = "lsp";
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
    return announced.is_set
	|| is_used.is_set
	|| metric.is_set
	|| metric_type.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Autoroute::has_operation() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(announced.operation)
	|| is_set(destination.operation)
	|| is_set(is_used.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation);
}

std::string MplsPceStdby::Lsps::Lsp::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Lsp::Autoroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoroute' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announced.is_set || is_set(announced.operation)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());

    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Lsp::Autoroute::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Lsp::Autoroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "announced")
    {
        announced = value;
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
}

MplsPceStdby::Lsps::Lsp::Paths::Paths()
    :
    applied_bw{YType::uint32, "applied-bw"},
    bw{YType::uint32, "bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"},
    is_bw_used{YType::boolean, "is-bw-used"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"}
    	,
    ero(std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Ero>())
	,lspa(std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Lspa>())
	,rro(std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Rro>())
{
    ero->parent = this;
    children["ero"] = ero;

    lspa->parent = this;
    children["lspa"] = lspa;

    rro->parent = this;
    children["rro"] = rro;

    yang_name = "paths"; yang_parent_name = "lsp";
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
    return applied_bw.is_set
	|| bw.is_set
	|| is_applied_bw_used.is_set
	|| is_bw_used.is_set
	|| is_reopt_bw_used.is_set
	|| reopt_bw.is_set
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
    return is_set(operation)
	|| is_set(applied_bw.operation)
	|| is_set(bw.operation)
	|| is_set(is_applied_bw_used.operation)
	|| is_set(is_bw_used.operation)
	|| is_set(is_reopt_bw_used.operation)
	|| is_set(reopt_bw.operation)
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

EntityPath MplsPceStdby::Lsps::Lsp::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applied_bw.is_set || is_set(applied_bw.operation)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (bw.is_set || is_set(bw.operation)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.operation)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.operation)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.operation)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.operation)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ero")
    {
        if(ero != nullptr)
        {
            children["ero"] = ero;
        }
        else
        {
            ero = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Ero>();
            ero->parent = this;
            children["ero"] = ero;
        }
        return children.at("ero");
    }

    if(child_yang_name == "lspa")
    {
        if(lspa != nullptr)
        {
            children["lspa"] = lspa;
        }
        else
        {
            lspa = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Lspa>();
            lspa->parent = this;
            children["lspa"] = lspa;
        }
        return children.at("lspa");
    }

    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Metric>();
        c->parent = this;
        metric.push_back(std::move(c));
        children[segment_path] = metric.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "rro")
    {
        if(rro != nullptr)
        {
            children["rro"] = rro;
        }
        else
        {
            rro = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Rro>();
            rro->parent = this;
            children["rro"] = rro;
        }
        return children.at("rro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Lsp::Paths::get_children()
{
    if(children.find("ero") == children.end())
    {
        if(ero != nullptr)
        {
            children["ero"] = ero;
        }
    }

    if(children.find("lspa") == children.end())
    {
        if(lspa != nullptr)
        {
            children["lspa"] = lspa;
        }
    }

    for (auto const & c : metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("rro") == children.end())
    {
        if(rro != nullptr)
        {
            children["rro"] = rro;
        }
    }

    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applied-bw")
    {
        applied_bw = value;
    }
    if(value_path == "bw")
    {
        bw = value;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
    }
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Ero()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{
    yang_name = "ero"; yang_parent_name = "paths";
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
    return cost.is_set
	|| is_used.is_set;
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(cost.operation)
	|| is_set(is_used.operation);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Lsp::Paths::Ero::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ero' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject>();
        c->parent = this;
        subobject.push_back(std::move(c));
        children[segment_path] = subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Lsp::Paths::Ero::get_children()
{
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{
    yang_name = "subobject"; yang_parent_name = "ero";
}

MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(complete_mpls_label_entry.operation)
	|| is_set(global.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_prefix_len.operation)
	|| is_set(local_address.operation)
	|| is_set(missing_node_adjcency_id.operation)
	|| is_set(missing_segment_id.operation)
	|| is_set(mpls_label.operation)
	|| is_set(node_adjacency_id_exists.operation)
	|| is_set(node_id.operation)
	|| is_set(only_valid_mpls_label.operation)
	|| is_set(remote_address.operation)
	|| is_set(segment_id_exists.operation)
	|| is_set(segment_id_type.operation)
	|| is_set(segment_id_value.operation)
	|| is_set(strict.operation)
	|| is_set(subobj_type.operation);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.operation)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.operation)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.operation)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.operation)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.operation)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.operation)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.operation)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.operation)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.operation)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.operation)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.operation)) leaf_name_data.push_back(subobj_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
    }
    if(value_path == "strict")
    {
        strict = value;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
    }
}

MplsPceStdby::Lsps::Lsp::Paths::Lspa::Lspa()
    :
    exlude_any{YType::uint32, "exlude-any"},
    hold{YType::uint8, "hold"},
    include_all{YType::uint32, "include-all"},
    include_any{YType::uint32, "include-any"},
    is_used{YType::boolean, "is-used"},
    lbit{YType::boolean, "lbit"},
    setup{YType::uint8, "setup"}
{
    yang_name = "lspa"; yang_parent_name = "paths";
}

MplsPceStdby::Lsps::Lsp::Paths::Lspa::~Lspa()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Lspa::has_data() const
{
    return exlude_any.is_set
	|| hold.is_set
	|| include_all.is_set
	|| include_any.is_set
	|| is_used.is_set
	|| lbit.is_set
	|| setup.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Lspa::has_operation() const
{
    return is_set(operation)
	|| is_set(exlude_any.operation)
	|| is_set(hold.operation)
	|| is_set(include_all.operation)
	|| is_set(include_any.operation)
	|| is_set(is_used.operation)
	|| is_set(lbit.operation)
	|| is_set(setup.operation);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lspa' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exlude_any.is_set || is_set(exlude_any.operation)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (hold.is_set || is_set(hold.operation)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.operation)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.operation)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.operation)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (setup.is_set || is_set(setup.operation)) leaf_name_data.push_back(setup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Lsp::Paths::Lspa::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Lspa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exlude-any")
    {
        exlude_any = value;
    }
    if(value_path == "hold")
    {
        hold = value;
    }
    if(value_path == "include-all")
    {
        include_all = value;
    }
    if(value_path == "include-any")
    {
        include_any = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "lbit")
    {
        lbit = value;
    }
    if(value_path == "setup")
    {
        setup = value;
    }
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Rro()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{
    yang_name = "rro"; yang_parent_name = "paths";
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
    return cost.is_set
	|| is_used.is_set;
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(cost.operation)
	|| is_set(is_used.operation);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Lsp::Paths::Rro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject>();
        c->parent = this;
        subobject.push_back(std::move(c));
        children[segment_path] = subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Lsp::Paths::Rro::get_children()
{
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{
    yang_name = "subobject"; yang_parent_name = "rro";
}

MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(complete_mpls_label_entry.operation)
	|| is_set(global.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_prefix_len.operation)
	|| is_set(local_address.operation)
	|| is_set(missing_node_adjcency_id.operation)
	|| is_set(missing_segment_id.operation)
	|| is_set(mpls_label.operation)
	|| is_set(node_adjacency_id_exists.operation)
	|| is_set(node_id.operation)
	|| is_set(only_valid_mpls_label.operation)
	|| is_set(remote_address.operation)
	|| is_set(segment_id_exists.operation)
	|| is_set(segment_id_type.operation)
	|| is_set(segment_id_value.operation)
	|| is_set(strict.operation)
	|| is_set(subobj_type.operation);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.operation)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.operation)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.operation)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.operation)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.operation)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.operation)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.operation)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.operation)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.operation)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.operation)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.operation)) leaf_name_data.push_back(subobj_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
    }
    if(value_path == "strict")
    {
        strict = value;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
    }
}

MplsPceStdby::Lsps::Lsp::Paths::Metric::Metric()
    :
    cost{YType::uint32, "cost"},
    type{YType::uint8, "type"}
{
    yang_name = "metric"; yang_parent_name = "paths";
}

MplsPceStdby::Lsps::Lsp::Paths::Metric::~Metric()
{
}

bool MplsPceStdby::Lsps::Lsp::Paths::Metric::has_data() const
{
    return cost.is_set
	|| type.is_set;
}

bool MplsPceStdby::Lsps::Lsp::Paths::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(type.operation);
}

std::string MplsPceStdby::Lsps::Lsp::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Lsp::Paths::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Lsp::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Lsp::Paths::Metric::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Lsp::Paths::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsPceStdby::Lsps::Creator::Creator()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{
    yang_name = "creator"; yang_parent_name = "lsps";
}

MplsPceStdby::Lsps::Creator::~Creator()
{
}

bool MplsPceStdby::Lsps::Creator::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPceStdby::Lsps::Creator::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(node_identifier.operation);
}

std::string MplsPceStdby::Lsps::Creator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creator";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Creator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.operation)) leaf_name_data.push_back(node_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Creator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Creator::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Creator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
    }
}

MplsPceStdby::Lsps::Delegated::Delegated()
    :
    address{YType::str, "address"},
    node_identifier{YType::str, "node-identifier"}
{
    yang_name = "delegated"; yang_parent_name = "lsps";
}

MplsPceStdby::Lsps::Delegated::~Delegated()
{
}

bool MplsPceStdby::Lsps::Delegated::has_data() const
{
    return address.is_set
	|| node_identifier.is_set;
}

bool MplsPceStdby::Lsps::Delegated::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(node_identifier.operation);
}

std::string MplsPceStdby::Lsps::Delegated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Delegated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (node_identifier.is_set || is_set(node_identifier.operation)) leaf_name_data.push_back(node_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Delegated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Delegated::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Delegated::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "node-identifier")
    {
        node_identifier = value;
    }
}

MplsPceStdby::Lsps::Identifiers::Identifiers()
    :
    ext_tunnel_id{YType::uint32, "ext-tunnel-id"},
    is_used{YType::boolean, "is-used"},
    sender{YType::str, "sender"},
    te_lsp_id{YType::uint16, "te-lsp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "identifiers"; yang_parent_name = "lsps";
}

MplsPceStdby::Lsps::Identifiers::~Identifiers()
{
}

bool MplsPceStdby::Lsps::Identifiers::has_data() const
{
    return ext_tunnel_id.is_set
	|| is_used.is_set
	|| sender.is_set
	|| te_lsp_id.is_set
	|| tunnel_id.is_set;
}

bool MplsPceStdby::Lsps::Identifiers::has_operation() const
{
    return is_set(operation)
	|| is_set(ext_tunnel_id.operation)
	|| is_set(is_used.operation)
	|| is_set(sender.operation)
	|| is_set(te_lsp_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsPceStdby::Lsps::Identifiers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifiers";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Identifiers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ext_tunnel_id.is_set || is_set(ext_tunnel_id.operation)) leaf_name_data.push_back(ext_tunnel_id.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (sender.is_set || is_set(sender.operation)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (te_lsp_id.is_set || is_set(te_lsp_id.operation)) leaf_name_data.push_back(te_lsp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Identifiers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Identifiers::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Identifiers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ext-tunnel-id")
    {
        ext_tunnel_id = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "sender")
    {
        sender = value;
    }
    if(value_path == "te-lsp-id")
    {
        te_lsp_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsPceStdby::Lsps::Autoroute::Autoroute()
    :
    announced{YType::boolean, "announced"},
    destination{YType::str, "destination"},
    is_used{YType::boolean, "is-used"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"}
{
    yang_name = "autoroute"; yang_parent_name = "lsps";
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
    return announced.is_set
	|| is_used.is_set
	|| metric.is_set
	|| metric_type.is_set;
}

bool MplsPceStdby::Lsps::Autoroute::has_operation() const
{
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(announced.operation)
	|| is_set(destination.operation)
	|| is_set(is_used.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation);
}

std::string MplsPceStdby::Lsps::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Autoroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announced.is_set || is_set(announced.operation)) leaf_name_data.push_back(announced.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());

    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Autoroute::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Autoroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "announced")
    {
        announced = value;
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
}

MplsPceStdby::Lsps::Paths::Paths()
    :
    applied_bw{YType::uint32, "applied-bw"},
    bw{YType::uint32, "bw"},
    is_applied_bw_used{YType::boolean, "is-applied-bw-used"},
    is_bw_used{YType::boolean, "is-bw-used"},
    is_reopt_bw_used{YType::boolean, "is-reopt-bw-used"},
    reopt_bw{YType::uint32, "reopt-bw"}
    	,
    ero(std::make_shared<MplsPceStdby::Lsps::Paths::Ero>())
	,lspa(std::make_shared<MplsPceStdby::Lsps::Paths::Lspa>())
	,rro(std::make_shared<MplsPceStdby::Lsps::Paths::Rro>())
{
    ero->parent = this;
    children["ero"] = ero;

    lspa->parent = this;
    children["lspa"] = lspa;

    rro->parent = this;
    children["rro"] = rro;

    yang_name = "paths"; yang_parent_name = "lsps";
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
    return applied_bw.is_set
	|| bw.is_set
	|| is_applied_bw_used.is_set
	|| is_bw_used.is_set
	|| is_reopt_bw_used.is_set
	|| reopt_bw.is_set
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
    return is_set(operation)
	|| is_set(applied_bw.operation)
	|| is_set(bw.operation)
	|| is_set(is_applied_bw_used.operation)
	|| is_set(is_bw_used.operation)
	|| is_set(is_reopt_bw_used.operation)
	|| is_set(reopt_bw.operation)
	|| (ero !=  nullptr && ero->has_operation())
	|| (lspa !=  nullptr && lspa->has_operation())
	|| (rro !=  nullptr && rro->has_operation());
}

std::string MplsPceStdby::Lsps::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applied_bw.is_set || is_set(applied_bw.operation)) leaf_name_data.push_back(applied_bw.get_name_leafdata());
    if (bw.is_set || is_set(bw.operation)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (is_applied_bw_used.is_set || is_set(is_applied_bw_used.operation)) leaf_name_data.push_back(is_applied_bw_used.get_name_leafdata());
    if (is_bw_used.is_set || is_set(is_bw_used.operation)) leaf_name_data.push_back(is_bw_used.get_name_leafdata());
    if (is_reopt_bw_used.is_set || is_set(is_reopt_bw_used.operation)) leaf_name_data.push_back(is_reopt_bw_used.get_name_leafdata());
    if (reopt_bw.is_set || is_set(reopt_bw.operation)) leaf_name_data.push_back(reopt_bw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ero")
    {
        if(ero != nullptr)
        {
            children["ero"] = ero;
        }
        else
        {
            ero = std::make_shared<MplsPceStdby::Lsps::Paths::Ero>();
            ero->parent = this;
            children["ero"] = ero;
        }
        return children.at("ero");
    }

    if(child_yang_name == "lspa")
    {
        if(lspa != nullptr)
        {
            children["lspa"] = lspa;
        }
        else
        {
            lspa = std::make_shared<MplsPceStdby::Lsps::Paths::Lspa>();
            lspa->parent = this;
            children["lspa"] = lspa;
        }
        return children.at("lspa");
    }

    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Paths::Metric>();
        c->parent = this;
        metric.push_back(std::move(c));
        children[segment_path] = metric.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "rro")
    {
        if(rro != nullptr)
        {
            children["rro"] = rro;
        }
        else
        {
            rro = std::make_shared<MplsPceStdby::Lsps::Paths::Rro>();
            rro->parent = this;
            children["rro"] = rro;
        }
        return children.at("rro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Paths::get_children()
{
    if(children.find("ero") == children.end())
    {
        if(ero != nullptr)
        {
            children["ero"] = ero;
        }
    }

    if(children.find("lspa") == children.end())
    {
        if(lspa != nullptr)
        {
            children["lspa"] = lspa;
        }
    }

    for (auto const & c : metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("rro") == children.end())
    {
        if(rro != nullptr)
        {
            children["rro"] = rro;
        }
    }

    return children;
}

void MplsPceStdby::Lsps::Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applied-bw")
    {
        applied_bw = value;
    }
    if(value_path == "bw")
    {
        bw = value;
    }
    if(value_path == "is-applied-bw-used")
    {
        is_applied_bw_used = value;
    }
    if(value_path == "is-bw-used")
    {
        is_bw_used = value;
    }
    if(value_path == "is-reopt-bw-used")
    {
        is_reopt_bw_used = value;
    }
    if(value_path == "reopt-bw")
    {
        reopt_bw = value;
    }
}

MplsPceStdby::Lsps::Paths::Ero::Ero()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{
    yang_name = "ero"; yang_parent_name = "paths";
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
    return cost.is_set
	|| is_used.is_set;
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(cost.operation)
	|| is_set(is_used.operation);
}

std::string MplsPceStdby::Lsps::Paths::Ero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ero";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Paths::Ero::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Ero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Paths::Ero::Subobject>();
        c->parent = this;
        subobject.push_back(std::move(c));
        children[segment_path] = subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Paths::Ero::get_children()
{
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPceStdby::Lsps::Paths::Ero::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
}

MplsPceStdby::Lsps::Paths::Ero::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{
    yang_name = "subobject"; yang_parent_name = "ero";
}

MplsPceStdby::Lsps::Paths::Ero::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Paths::Ero::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPceStdby::Lsps::Paths::Ero::Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(complete_mpls_label_entry.operation)
	|| is_set(global.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_prefix_len.operation)
	|| is_set(local_address.operation)
	|| is_set(missing_node_adjcency_id.operation)
	|| is_set(missing_segment_id.operation)
	|| is_set(mpls_label.operation)
	|| is_set(node_adjacency_id_exists.operation)
	|| is_set(node_id.operation)
	|| is_set(only_valid_mpls_label.operation)
	|| is_set(remote_address.operation)
	|| is_set(segment_id_exists.operation)
	|| is_set(segment_id_type.operation)
	|| is_set(segment_id_value.operation)
	|| is_set(strict.operation)
	|| is_set(subobj_type.operation);
}

std::string MplsPceStdby::Lsps::Paths::Ero::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Paths::Ero::Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/ero/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.operation)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.operation)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.operation)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.operation)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.operation)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.operation)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.operation)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.operation)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.operation)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.operation)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.operation)) leaf_name_data.push_back(subobj_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Ero::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Paths::Ero::Subobject::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Paths::Ero::Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
    }
    if(value_path == "strict")
    {
        strict = value;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
    }
}

MplsPceStdby::Lsps::Paths::Lspa::Lspa()
    :
    exlude_any{YType::uint32, "exlude-any"},
    hold{YType::uint8, "hold"},
    include_all{YType::uint32, "include-all"},
    include_any{YType::uint32, "include-any"},
    is_used{YType::boolean, "is-used"},
    lbit{YType::boolean, "lbit"},
    setup{YType::uint8, "setup"}
{
    yang_name = "lspa"; yang_parent_name = "paths";
}

MplsPceStdby::Lsps::Paths::Lspa::~Lspa()
{
}

bool MplsPceStdby::Lsps::Paths::Lspa::has_data() const
{
    return exlude_any.is_set
	|| hold.is_set
	|| include_all.is_set
	|| include_any.is_set
	|| is_used.is_set
	|| lbit.is_set
	|| setup.is_set;
}

bool MplsPceStdby::Lsps::Paths::Lspa::has_operation() const
{
    return is_set(operation)
	|| is_set(exlude_any.operation)
	|| is_set(hold.operation)
	|| is_set(include_all.operation)
	|| is_set(include_any.operation)
	|| is_set(is_used.operation)
	|| is_set(lbit.operation)
	|| is_set(setup.operation);
}

std::string MplsPceStdby::Lsps::Paths::Lspa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lspa";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Paths::Lspa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exlude_any.is_set || is_set(exlude_any.operation)) leaf_name_data.push_back(exlude_any.get_name_leafdata());
    if (hold.is_set || is_set(hold.operation)) leaf_name_data.push_back(hold.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.operation)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.operation)) leaf_name_data.push_back(include_any.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.operation)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (setup.is_set || is_set(setup.operation)) leaf_name_data.push_back(setup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Lspa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Paths::Lspa::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Paths::Lspa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exlude-any")
    {
        exlude_any = value;
    }
    if(value_path == "hold")
    {
        hold = value;
    }
    if(value_path == "include-all")
    {
        include_all = value;
    }
    if(value_path == "include-any")
    {
        include_any = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "lbit")
    {
        lbit = value;
    }
    if(value_path == "setup")
    {
        setup = value;
    }
}

MplsPceStdby::Lsps::Paths::Rro::Rro()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    is_used{YType::boolean, "is-used"}
{
    yang_name = "rro"; yang_parent_name = "paths";
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
    return cost.is_set
	|| is_used.is_set;
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(cost.operation)
	|| is_set(is_used.operation);
}

std::string MplsPceStdby::Lsps::Paths::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Paths::Rro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subobject")
    {
        for(auto const & c : subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPceStdby::Lsps::Paths::Rro::Subobject>();
        c->parent = this;
        subobject.push_back(std::move(c));
        children[segment_path] = subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Paths::Rro::get_children()
{
    for (auto const & c : subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPceStdby::Lsps::Paths::Rro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
}

MplsPceStdby::Lsps::Paths::Rro::Subobject::Subobject()
    :
    complete_mpls_label_entry{YType::boolean, "complete-mpls-label-entry"},
    global{YType::boolean, "global"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_prefix_len{YType::uint32, "ipv4-prefix-len"},
    local_address{YType::str, "local-address"},
    missing_node_adjcency_id{YType::boolean, "missing-node-adjcency-id"},
    missing_segment_id{YType::boolean, "missing-segment-id"},
    mpls_label{YType::uint32, "mpls-label"},
    node_adjacency_id_exists{YType::boolean, "node-adjacency-id-exists"},
    node_id{YType::str, "node-id"},
    only_valid_mpls_label{YType::boolean, "only-valid-mpls-label"},
    remote_address{YType::str, "remote-address"},
    segment_id_exists{YType::boolean, "segment-id-exists"},
    segment_id_type{YType::enumeration, "segment-id-type"},
    segment_id_value{YType::uint32, "segment-id-value"},
    strict{YType::boolean, "strict"},
    subobj_type{YType::uint8, "subobj-type"}
{
    yang_name = "subobject"; yang_parent_name = "rro";
}

MplsPceStdby::Lsps::Paths::Rro::Subobject::~Subobject()
{
}

bool MplsPceStdby::Lsps::Paths::Rro::Subobject::has_data() const
{
    return complete_mpls_label_entry.is_set
	|| global.is_set
	|| ipv4_address.is_set
	|| ipv4_prefix_len.is_set
	|| local_address.is_set
	|| missing_node_adjcency_id.is_set
	|| missing_segment_id.is_set
	|| mpls_label.is_set
	|| node_adjacency_id_exists.is_set
	|| node_id.is_set
	|| only_valid_mpls_label.is_set
	|| remote_address.is_set
	|| segment_id_exists.is_set
	|| segment_id_type.is_set
	|| segment_id_value.is_set
	|| strict.is_set
	|| subobj_type.is_set;
}

bool MplsPceStdby::Lsps::Paths::Rro::Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(complete_mpls_label_entry.operation)
	|| is_set(global.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_prefix_len.operation)
	|| is_set(local_address.operation)
	|| is_set(missing_node_adjcency_id.operation)
	|| is_set(missing_segment_id.operation)
	|| is_set(mpls_label.operation)
	|| is_set(node_adjacency_id_exists.operation)
	|| is_set(node_id.operation)
	|| is_set(only_valid_mpls_label.operation)
	|| is_set(remote_address.operation)
	|| is_set(segment_id_exists.operation)
	|| is_set(segment_id_type.operation)
	|| is_set(segment_id_value.operation)
	|| is_set(strict.operation)
	|| is_set(subobj_type.operation);
}

std::string MplsPceStdby::Lsps::Paths::Rro::Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subobject";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Paths::Rro::Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/rro/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_mpls_label_entry.is_set || is_set(complete_mpls_label_entry.operation)) leaf_name_data.push_back(complete_mpls_label_entry.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_prefix_len.is_set || is_set(ipv4_prefix_len.operation)) leaf_name_data.push_back(ipv4_prefix_len.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (missing_node_adjcency_id.is_set || is_set(missing_node_adjcency_id.operation)) leaf_name_data.push_back(missing_node_adjcency_id.get_name_leafdata());
    if (missing_segment_id.is_set || is_set(missing_segment_id.operation)) leaf_name_data.push_back(missing_segment_id.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (node_adjacency_id_exists.is_set || is_set(node_adjacency_id_exists.operation)) leaf_name_data.push_back(node_adjacency_id_exists.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (only_valid_mpls_label.is_set || is_set(only_valid_mpls_label.operation)) leaf_name_data.push_back(only_valid_mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (segment_id_exists.is_set || is_set(segment_id_exists.operation)) leaf_name_data.push_back(segment_id_exists.get_name_leafdata());
    if (segment_id_type.is_set || is_set(segment_id_type.operation)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (segment_id_value.is_set || is_set(segment_id_value.operation)) leaf_name_data.push_back(segment_id_value.get_name_leafdata());
    if (strict.is_set || is_set(strict.operation)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (subobj_type.is_set || is_set(subobj_type.operation)) leaf_name_data.push_back(subobj_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Rro::Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Paths::Rro::Subobject::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Paths::Rro::Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "complete-mpls-label-entry")
    {
        complete_mpls_label_entry = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-prefix-len")
    {
        ipv4_prefix_len = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "missing-node-adjcency-id")
    {
        missing_node_adjcency_id = value;
    }
    if(value_path == "missing-segment-id")
    {
        missing_segment_id = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "node-adjacency-id-exists")
    {
        node_adjacency_id_exists = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "only-valid-mpls-label")
    {
        only_valid_mpls_label = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "segment-id-exists")
    {
        segment_id_exists = value;
    }
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
    }
    if(value_path == "segment-id-value")
    {
        segment_id_value = value;
    }
    if(value_path == "strict")
    {
        strict = value;
    }
    if(value_path == "subobj-type")
    {
        subobj_type = value;
    }
}

MplsPceStdby::Lsps::Paths::Metric::Metric()
    :
    cost{YType::uint32, "cost"},
    type{YType::uint8, "type"}
{
    yang_name = "metric"; yang_parent_name = "paths";
}

MplsPceStdby::Lsps::Paths::Metric::~Metric()
{
}

bool MplsPceStdby::Lsps::Paths::Metric::has_data() const
{
    return cost.is_set
	|| type.is_set;
}

bool MplsPceStdby::Lsps::Paths::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(type.operation);
}

std::string MplsPceStdby::Lsps::Paths::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Lsps::Paths::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/lsps/paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Lsps::Paths::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Lsps::Paths::Metric::get_children()
{
    return children;
}

void MplsPceStdby::Lsps::Paths::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsPceStdby::Statistics::Statistics()
    :
    average_in_queue_depth{YType::uint32, "average-in-queue-depth"},
    current_file_descriptors{YType::uint32, "current-file-descriptors"},
    current_pceq_length{YType::uint32, "current-pceq-length"},
    current_teq_length{YType::uint32, "current-teq-length"},
    max_file_descriptors{YType::uint32, "max-file-descriptors"},
    max_pceq_length{YType::uint32, "max-pceq-length"},
    max_teq_length{YType::uint32, "max-teq-length"},
    maximum_in_queue_depth{YType::uint32, "maximum-in-queue-depth"},
    neighbors{YType::uint32, "neighbors"},
    pce_req_pending{YType::uint32, "pce-req-pending"},
    pce_req_timed_out{YType::uint32, "pce-req-timed-out"},
    pce_req_total{YType::uint32, "pce-req-total"},
    tunnels{YType::uint32, "tunnels"}
    	,
    igp_statistics(std::make_shared<MplsPceStdby::Statistics::IgpStatistics>())
{
    igp_statistics->parent = this;
    children["igp-statistics"] = igp_statistics;

    yang_name = "statistics"; yang_parent_name = "mpls-pce-stdby";
}

MplsPceStdby::Statistics::~Statistics()
{
}

bool MplsPceStdby::Statistics::has_data() const
{
    for (auto const & leaf : average_in_queue_depth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : maximum_in_queue_depth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return current_file_descriptors.is_set
	|| current_pceq_length.is_set
	|| current_teq_length.is_set
	|| max_file_descriptors.is_set
	|| max_pceq_length.is_set
	|| max_teq_length.is_set
	|| neighbors.is_set
	|| pce_req_pending.is_set
	|| pce_req_timed_out.is_set
	|| pce_req_total.is_set
	|| tunnels.is_set
	|| (igp_statistics !=  nullptr && igp_statistics->has_data());
}

bool MplsPceStdby::Statistics::has_operation() const
{
    for (auto const & leaf : average_in_queue_depth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : maximum_in_queue_depth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(average_in_queue_depth.operation)
	|| is_set(current_file_descriptors.operation)
	|| is_set(current_pceq_length.operation)
	|| is_set(current_teq_length.operation)
	|| is_set(max_file_descriptors.operation)
	|| is_set(max_pceq_length.operation)
	|| is_set(max_teq_length.operation)
	|| is_set(maximum_in_queue_depth.operation)
	|| is_set(neighbors.operation)
	|| is_set(pce_req_pending.operation)
	|| is_set(pce_req_timed_out.operation)
	|| is_set(pce_req_total.operation)
	|| is_set(tunnels.operation)
	|| (igp_statistics !=  nullptr && igp_statistics->has_operation());
}

std::string MplsPceStdby::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_file_descriptors.is_set || is_set(current_file_descriptors.operation)) leaf_name_data.push_back(current_file_descriptors.get_name_leafdata());
    if (current_pceq_length.is_set || is_set(current_pceq_length.operation)) leaf_name_data.push_back(current_pceq_length.get_name_leafdata());
    if (current_teq_length.is_set || is_set(current_teq_length.operation)) leaf_name_data.push_back(current_teq_length.get_name_leafdata());
    if (max_file_descriptors.is_set || is_set(max_file_descriptors.operation)) leaf_name_data.push_back(max_file_descriptors.get_name_leafdata());
    if (max_pceq_length.is_set || is_set(max_pceq_length.operation)) leaf_name_data.push_back(max_pceq_length.get_name_leafdata());
    if (max_teq_length.is_set || is_set(max_teq_length.operation)) leaf_name_data.push_back(max_teq_length.get_name_leafdata());
    if (neighbors.is_set || is_set(neighbors.operation)) leaf_name_data.push_back(neighbors.get_name_leafdata());
    if (pce_req_pending.is_set || is_set(pce_req_pending.operation)) leaf_name_data.push_back(pce_req_pending.get_name_leafdata());
    if (pce_req_timed_out.is_set || is_set(pce_req_timed_out.operation)) leaf_name_data.push_back(pce_req_timed_out.get_name_leafdata());
    if (pce_req_total.is_set || is_set(pce_req_total.operation)) leaf_name_data.push_back(pce_req_total.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.operation)) leaf_name_data.push_back(tunnels.get_name_leafdata());

    auto average_in_queue_depth_name_datas = average_in_queue_depth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), average_in_queue_depth_name_datas.begin(), average_in_queue_depth_name_datas.end());
    auto maximum_in_queue_depth_name_datas = maximum_in_queue_depth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), maximum_in_queue_depth_name_datas.begin(), maximum_in_queue_depth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp-statistics")
    {
        if(igp_statistics != nullptr)
        {
            children["igp-statistics"] = igp_statistics;
        }
        else
        {
            igp_statistics = std::make_shared<MplsPceStdby::Statistics::IgpStatistics>();
            igp_statistics->parent = this;
            children["igp-statistics"] = igp_statistics;
        }
        return children.at("igp-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Statistics::get_children()
{
    if(children.find("igp-statistics") == children.end())
    {
        if(igp_statistics != nullptr)
        {
            children["igp-statistics"] = igp_statistics;
        }
    }

    return children;
}

void MplsPceStdby::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-in-queue-depth")
    {
        average_in_queue_depth.append(value);
    }
    if(value_path == "current-file-descriptors")
    {
        current_file_descriptors = value;
    }
    if(value_path == "current-pceq-length")
    {
        current_pceq_length = value;
    }
    if(value_path == "current-teq-length")
    {
        current_teq_length = value;
    }
    if(value_path == "max-file-descriptors")
    {
        max_file_descriptors = value;
    }
    if(value_path == "max-pceq-length")
    {
        max_pceq_length = value;
    }
    if(value_path == "max-teq-length")
    {
        max_teq_length = value;
    }
    if(value_path == "maximum-in-queue-depth")
    {
        maximum_in_queue_depth.append(value);
    }
    if(value_path == "neighbors")
    {
        neighbors = value;
    }
    if(value_path == "pce-req-pending")
    {
        pce_req_pending = value;
    }
    if(value_path == "pce-req-timed-out")
    {
        pce_req_timed_out = value;
    }
    if(value_path == "pce-req-total")
    {
        pce_req_total = value;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
    }
}

MplsPceStdby::Statistics::IgpStatistics::IgpStatistics()
    :
    abr_lookup_avg{YType::uint64, "abr-lookup-avg"},
    abr_lookup_complete{YType::uint64, "abr-lookup-complete"},
    abr_lookup_max{YType::uint64, "abr-lookup-max"},
    abr_lookup_min{YType::uint64, "abr-lookup-min"},
    abr_lookup_timeout{YType::uint64, "abr-lookup-timeout"}
{
    yang_name = "igp-statistics"; yang_parent_name = "statistics";
}

MplsPceStdby::Statistics::IgpStatistics::~IgpStatistics()
{
}

bool MplsPceStdby::Statistics::IgpStatistics::has_data() const
{
    return abr_lookup_avg.is_set
	|| abr_lookup_complete.is_set
	|| abr_lookup_max.is_set
	|| abr_lookup_min.is_set
	|| abr_lookup_timeout.is_set;
}

bool MplsPceStdby::Statistics::IgpStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(abr_lookup_avg.operation)
	|| is_set(abr_lookup_complete.operation)
	|| is_set(abr_lookup_max.operation)
	|| is_set(abr_lookup_min.operation)
	|| is_set(abr_lookup_timeout.operation);
}

std::string MplsPceStdby::Statistics::IgpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-statistics";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Statistics::IgpStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_lookup_avg.is_set || is_set(abr_lookup_avg.operation)) leaf_name_data.push_back(abr_lookup_avg.get_name_leafdata());
    if (abr_lookup_complete.is_set || is_set(abr_lookup_complete.operation)) leaf_name_data.push_back(abr_lookup_complete.get_name_leafdata());
    if (abr_lookup_max.is_set || is_set(abr_lookup_max.operation)) leaf_name_data.push_back(abr_lookup_max.get_name_leafdata());
    if (abr_lookup_min.is_set || is_set(abr_lookup_min.operation)) leaf_name_data.push_back(abr_lookup_min.get_name_leafdata());
    if (abr_lookup_timeout.is_set || is_set(abr_lookup_timeout.operation)) leaf_name_data.push_back(abr_lookup_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Statistics::IgpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Statistics::IgpStatistics::get_children()
{
    return children;
}

void MplsPceStdby::Statistics::IgpStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abr-lookup-avg")
    {
        abr_lookup_avg = value;
    }
    if(value_path == "abr-lookup-complete")
    {
        abr_lookup_complete = value;
    }
    if(value_path == "abr-lookup-max")
    {
        abr_lookup_max = value;
    }
    if(value_path == "abr-lookup-min")
    {
        abr_lookup_min = value;
    }
    if(value_path == "abr-lookup-timeout")
    {
        abr_lookup_timeout = value;
    }
}

MplsPceStdby::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "mpls-pce-stdby";
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
    return is_set(operation);
}

std::string MplsPceStdby::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPceStdby::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPceStdby::Peers::set_value(const std::string & value_path, std::string value)
{
}

MplsPceStdby::Peers::Peer::Peer()
    :
    peer_address{YType::str, "peer-address"},
    candidate{YType::boolean, "candidate"},
    capability_db_version{YType::boolean, "capability-db-version"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    capability_update{YType::boolean, "capability-update"},
    delta_sync_capability{YType::boolean, "delta-sync-capability"},
    error{YType::str, "error"},
    keepalives{YType::uint32, "keepalives"},
    keychain_enabled{YType::boolean, "keychain-enabled"},
    local_sid{YType::uint8, "local-sid"},
    max_dead_interval{YType::uint8, "max-dead-interval"},
    md5_enabled{YType::boolean, "md5-enabled"},
    min_keepalive_interval{YType::uint8, "min-keepalive-interval"},
    negotated_dead_time{YType::uint32, "negotated-dead-time"},
    negotiated_keepalive{YType::uint32, "negotiated-keepalive"},
    pce_err_rx{YType::uint32, "pce-err-rx"},
    pce_err_tx{YType::uint32, "pce-err-tx"},
    pce_init_rx{YType::uint32, "pce-init-rx"},
    pce_init_tx{YType::uint32, "pce-init-tx"},
    pce_keepalive_rx{YType::uint64, "pce-keepalive-rx"},
    pce_keepalive_tx{YType::uint64, "pce-keepalive-tx"},
    pce_open_rx{YType::uint32, "pce-open-rx"},
    pce_open_tx{YType::uint32, "pce-open-tx"},
    pce_rep_rx{YType::uint32, "pce-rep-rx"},
    pce_rep_tx{YType::uint32, "pce-rep-tx"},
    pce_req_rx{YType::uint32, "pce-req-rx"},
    pce_req_tx{YType::uint32, "pce-req-tx"},
    pce_rpt_rx{YType::uint32, "pce-rpt-rx"},
    pce_rpt_tx{YType::uint32, "pce-rpt-tx"},
    pce_state{YType::enumeration, "pce-state"},
    pce_upd_rx{YType::uint32, "pce-upd-rx"},
    pce_upd_tx{YType::uint32, "pce-upd-tx"},
    pcep_up_time{YType::uint32, "pcep-up-time"},
    precedence{YType::uint32, "precedence"},
    remote_sid{YType::uint8, "remote-sid"},
    req_reply_avg{YType::uint64, "req-reply-avg"},
    req_reply_max{YType::uint64, "req-reply-max"},
    req_reply_min{YType::uint64, "req-reply-min"},
    request_timeouts{YType::uint64, "request-timeouts"},
    stateful{YType::boolean, "stateful"},
    statically_configured{YType::boolean, "statically-configured"},
    triggered_sync_capability{YType::boolean, "triggered-sync-capability"}
    	,
    last_rx_pce_err(std::make_shared<MplsPceStdby::Peers::Peer::LastRxPceErr>())
	,last_tx_pce_err(std::make_shared<MplsPceStdby::Peers::Peer::LastTxPceErr>())
{
    last_rx_pce_err->parent = this;
    children["last-rx-pce-err"] = last_rx_pce_err;

    last_tx_pce_err->parent = this;
    children["last-tx-pce-err"] = last_tx_pce_err;

    yang_name = "peer"; yang_parent_name = "peers";
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
	|| candidate.is_set
	|| capability_db_version.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| capability_update.is_set
	|| delta_sync_capability.is_set
	|| error.is_set
	|| keepalives.is_set
	|| keychain_enabled.is_set
	|| local_sid.is_set
	|| max_dead_interval.is_set
	|| md5_enabled.is_set
	|| min_keepalive_interval.is_set
	|| negotated_dead_time.is_set
	|| negotiated_keepalive.is_set
	|| pce_err_rx.is_set
	|| pce_err_tx.is_set
	|| pce_init_rx.is_set
	|| pce_init_tx.is_set
	|| pce_keepalive_rx.is_set
	|| pce_keepalive_tx.is_set
	|| pce_open_rx.is_set
	|| pce_open_tx.is_set
	|| pce_rep_rx.is_set
	|| pce_rep_tx.is_set
	|| pce_req_rx.is_set
	|| pce_req_tx.is_set
	|| pce_rpt_rx.is_set
	|| pce_rpt_tx.is_set
	|| pce_state.is_set
	|| pce_upd_rx.is_set
	|| pce_upd_tx.is_set
	|| pcep_up_time.is_set
	|| precedence.is_set
	|| remote_sid.is_set
	|| req_reply_avg.is_set
	|| req_reply_max.is_set
	|| req_reply_min.is_set
	|| request_timeouts.is_set
	|| stateful.is_set
	|| statically_configured.is_set
	|| triggered_sync_capability.is_set
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_data())
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_data());
}

bool MplsPceStdby::Peers::Peer::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(peer_address.operation)
	|| is_set(candidate.operation)
	|| is_set(capability_db_version.operation)
	|| is_set(capability_instantiate.operation)
	|| is_set(capability_segment_routing.operation)
	|| is_set(capability_update.operation)
	|| is_set(delta_sync_capability.operation)
	|| is_set(error.operation)
	|| is_set(keepalives.operation)
	|| is_set(keychain_enabled.operation)
	|| is_set(local_sid.operation)
	|| is_set(max_dead_interval.operation)
	|| is_set(md5_enabled.operation)
	|| is_set(min_keepalive_interval.operation)
	|| is_set(negotated_dead_time.operation)
	|| is_set(negotiated_keepalive.operation)
	|| is_set(pce_err_rx.operation)
	|| is_set(pce_err_tx.operation)
	|| is_set(pce_init_rx.operation)
	|| is_set(pce_init_tx.operation)
	|| is_set(pce_keepalive_rx.operation)
	|| is_set(pce_keepalive_tx.operation)
	|| is_set(pce_open_rx.operation)
	|| is_set(pce_open_tx.operation)
	|| is_set(pce_rep_rx.operation)
	|| is_set(pce_rep_tx.operation)
	|| is_set(pce_req_rx.operation)
	|| is_set(pce_req_tx.operation)
	|| is_set(pce_rpt_rx.operation)
	|| is_set(pce_rpt_tx.operation)
	|| is_set(pce_state.operation)
	|| is_set(pce_upd_rx.operation)
	|| is_set(pce_upd_tx.operation)
	|| is_set(pcep_up_time.operation)
	|| is_set(precedence.operation)
	|| is_set(remote_sid.operation)
	|| is_set(req_reply_avg.operation)
	|| is_set(req_reply_max.operation)
	|| is_set(req_reply_min.operation)
	|| is_set(request_timeouts.operation)
	|| is_set(stateful.operation)
	|| is_set(statically_configured.operation)
	|| is_set(triggered_sync_capability.operation)
	|| (last_rx_pce_err !=  nullptr && last_rx_pce_err->has_operation())
	|| (last_tx_pce_err !=  nullptr && last_tx_pce_err->has_operation());
}

std::string MplsPceStdby::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-address='" <<peer_address <<"']";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (candidate.is_set || is_set(candidate.operation)) leaf_name_data.push_back(candidate.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.operation)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.operation)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.operation)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.operation)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (delta_sync_capability.is_set || is_set(delta_sync_capability.operation)) leaf_name_data.push_back(delta_sync_capability.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (keepalives.is_set || is_set(keepalives.operation)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (keychain_enabled.is_set || is_set(keychain_enabled.operation)) leaf_name_data.push_back(keychain_enabled.get_name_leafdata());
    if (local_sid.is_set || is_set(local_sid.operation)) leaf_name_data.push_back(local_sid.get_name_leafdata());
    if (max_dead_interval.is_set || is_set(max_dead_interval.operation)) leaf_name_data.push_back(max_dead_interval.get_name_leafdata());
    if (md5_enabled.is_set || is_set(md5_enabled.operation)) leaf_name_data.push_back(md5_enabled.get_name_leafdata());
    if (min_keepalive_interval.is_set || is_set(min_keepalive_interval.operation)) leaf_name_data.push_back(min_keepalive_interval.get_name_leafdata());
    if (negotated_dead_time.is_set || is_set(negotated_dead_time.operation)) leaf_name_data.push_back(negotated_dead_time.get_name_leafdata());
    if (negotiated_keepalive.is_set || is_set(negotiated_keepalive.operation)) leaf_name_data.push_back(negotiated_keepalive.get_name_leafdata());
    if (pce_err_rx.is_set || is_set(pce_err_rx.operation)) leaf_name_data.push_back(pce_err_rx.get_name_leafdata());
    if (pce_err_tx.is_set || is_set(pce_err_tx.operation)) leaf_name_data.push_back(pce_err_tx.get_name_leafdata());
    if (pce_init_rx.is_set || is_set(pce_init_rx.operation)) leaf_name_data.push_back(pce_init_rx.get_name_leafdata());
    if (pce_init_tx.is_set || is_set(pce_init_tx.operation)) leaf_name_data.push_back(pce_init_tx.get_name_leafdata());
    if (pce_keepalive_rx.is_set || is_set(pce_keepalive_rx.operation)) leaf_name_data.push_back(pce_keepalive_rx.get_name_leafdata());
    if (pce_keepalive_tx.is_set || is_set(pce_keepalive_tx.operation)) leaf_name_data.push_back(pce_keepalive_tx.get_name_leafdata());
    if (pce_open_rx.is_set || is_set(pce_open_rx.operation)) leaf_name_data.push_back(pce_open_rx.get_name_leafdata());
    if (pce_open_tx.is_set || is_set(pce_open_tx.operation)) leaf_name_data.push_back(pce_open_tx.get_name_leafdata());
    if (pce_rep_rx.is_set || is_set(pce_rep_rx.operation)) leaf_name_data.push_back(pce_rep_rx.get_name_leafdata());
    if (pce_rep_tx.is_set || is_set(pce_rep_tx.operation)) leaf_name_data.push_back(pce_rep_tx.get_name_leafdata());
    if (pce_req_rx.is_set || is_set(pce_req_rx.operation)) leaf_name_data.push_back(pce_req_rx.get_name_leafdata());
    if (pce_req_tx.is_set || is_set(pce_req_tx.operation)) leaf_name_data.push_back(pce_req_tx.get_name_leafdata());
    if (pce_rpt_rx.is_set || is_set(pce_rpt_rx.operation)) leaf_name_data.push_back(pce_rpt_rx.get_name_leafdata());
    if (pce_rpt_tx.is_set || is_set(pce_rpt_tx.operation)) leaf_name_data.push_back(pce_rpt_tx.get_name_leafdata());
    if (pce_state.is_set || is_set(pce_state.operation)) leaf_name_data.push_back(pce_state.get_name_leafdata());
    if (pce_upd_rx.is_set || is_set(pce_upd_rx.operation)) leaf_name_data.push_back(pce_upd_rx.get_name_leafdata());
    if (pce_upd_tx.is_set || is_set(pce_upd_tx.operation)) leaf_name_data.push_back(pce_upd_tx.get_name_leafdata());
    if (pcep_up_time.is_set || is_set(pcep_up_time.operation)) leaf_name_data.push_back(pcep_up_time.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (remote_sid.is_set || is_set(remote_sid.operation)) leaf_name_data.push_back(remote_sid.get_name_leafdata());
    if (req_reply_avg.is_set || is_set(req_reply_avg.operation)) leaf_name_data.push_back(req_reply_avg.get_name_leafdata());
    if (req_reply_max.is_set || is_set(req_reply_max.operation)) leaf_name_data.push_back(req_reply_max.get_name_leafdata());
    if (req_reply_min.is_set || is_set(req_reply_min.operation)) leaf_name_data.push_back(req_reply_min.get_name_leafdata());
    if (request_timeouts.is_set || is_set(request_timeouts.operation)) leaf_name_data.push_back(request_timeouts.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.operation)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (statically_configured.is_set || is_set(statically_configured.operation)) leaf_name_data.push_back(statically_configured.get_name_leafdata());
    if (triggered_sync_capability.is_set || is_set(triggered_sync_capability.operation)) leaf_name_data.push_back(triggered_sync_capability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ig-ps")
    {
        for(auto const & c : ig_ps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPceStdby::Peers::Peer::IgPs>();
        c->parent = this;
        ig_ps.push_back(std::move(c));
        children[segment_path] = ig_ps.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "last-rx-pce-err")
    {
        if(last_rx_pce_err != nullptr)
        {
            children["last-rx-pce-err"] = last_rx_pce_err;
        }
        else
        {
            last_rx_pce_err = std::make_shared<MplsPceStdby::Peers::Peer::LastRxPceErr>();
            last_rx_pce_err->parent = this;
            children["last-rx-pce-err"] = last_rx_pce_err;
        }
        return children.at("last-rx-pce-err");
    }

    if(child_yang_name == "last-tx-pce-err")
    {
        if(last_tx_pce_err != nullptr)
        {
            children["last-tx-pce-err"] = last_tx_pce_err;
        }
        else
        {
            last_tx_pce_err = std::make_shared<MplsPceStdby::Peers::Peer::LastTxPceErr>();
            last_tx_pce_err->parent = this;
            children["last-tx-pce-err"] = last_tx_pce_err;
        }
        return children.at("last-tx-pce-err");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Peers::Peer::get_children()
{
    for (auto const & c : ig_ps)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("last-rx-pce-err") == children.end())
    {
        if(last_rx_pce_err != nullptr)
        {
            children["last-rx-pce-err"] = last_rx_pce_err;
        }
    }

    if(children.find("last-tx-pce-err") == children.end())
    {
        if(last_tx_pce_err != nullptr)
        {
            children["last-tx-pce-err"] = last_tx_pce_err;
        }
    }

    return children;
}

void MplsPceStdby::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "candidate")
    {
        candidate = value;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
    }
    if(value_path == "delta-sync-capability")
    {
        delta_sync_capability = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "keepalives")
    {
        keepalives = value;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled = value;
    }
    if(value_path == "local-sid")
    {
        local_sid = value;
    }
    if(value_path == "max-dead-interval")
    {
        max_dead_interval = value;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled = value;
    }
    if(value_path == "min-keepalive-interval")
    {
        min_keepalive_interval = value;
    }
    if(value_path == "negotated-dead-time")
    {
        negotated_dead_time = value;
    }
    if(value_path == "negotiated-keepalive")
    {
        negotiated_keepalive = value;
    }
    if(value_path == "pce-err-rx")
    {
        pce_err_rx = value;
    }
    if(value_path == "pce-err-tx")
    {
        pce_err_tx = value;
    }
    if(value_path == "pce-init-rx")
    {
        pce_init_rx = value;
    }
    if(value_path == "pce-init-tx")
    {
        pce_init_tx = value;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx = value;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx = value;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx = value;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx = value;
    }
    if(value_path == "pce-rep-rx")
    {
        pce_rep_rx = value;
    }
    if(value_path == "pce-rep-tx")
    {
        pce_rep_tx = value;
    }
    if(value_path == "pce-req-rx")
    {
        pce_req_rx = value;
    }
    if(value_path == "pce-req-tx")
    {
        pce_req_tx = value;
    }
    if(value_path == "pce-rpt-rx")
    {
        pce_rpt_rx = value;
    }
    if(value_path == "pce-rpt-tx")
    {
        pce_rpt_tx = value;
    }
    if(value_path == "pce-state")
    {
        pce_state = value;
    }
    if(value_path == "pce-upd-rx")
    {
        pce_upd_rx = value;
    }
    if(value_path == "pce-upd-tx")
    {
        pce_upd_tx = value;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "remote-sid")
    {
        remote_sid = value;
    }
    if(value_path == "req-reply-avg")
    {
        req_reply_avg = value;
    }
    if(value_path == "req-reply-max")
    {
        req_reply_max = value;
    }
    if(value_path == "req-reply-min")
    {
        req_reply_min = value;
    }
    if(value_path == "request-timeouts")
    {
        request_timeouts = value;
    }
    if(value_path == "stateful")
    {
        stateful = value;
    }
    if(value_path == "statically-configured")
    {
        statically_configured = value;
    }
    if(value_path == "triggered-sync-capability")
    {
        triggered_sync_capability = value;
    }
}

MplsPceStdby::Peers::Peer::LastTxPceErr::LastTxPceErr()
    :
    has_open_object{YType::boolean, "has-open-object"},
    has_rp_object{YType::boolean, "has-rp-object"},
    open_dead_time{YType::uint32, "open-dead-time"},
    open_keepalive{YType::uint32, "open-keepalive"},
    openversion{YType::uint32, "openversion"},
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    rp_request_id{YType::uint32, "rp-request-id"}
{
    yang_name = "last-tx-pce-err"; yang_parent_name = "peer";
}

MplsPceStdby::Peers::Peer::LastTxPceErr::~LastTxPceErr()
{
}

bool MplsPceStdby::Peers::Peer::LastTxPceErr::has_data() const
{
    return has_open_object.is_set
	|| has_rp_object.is_set
	|| open_dead_time.is_set
	|| open_keepalive.is_set
	|| openversion.is_set
	|| pce_err_type.is_set
	|| pce_err_value.is_set
	|| rp_request_id.is_set;
}

bool MplsPceStdby::Peers::Peer::LastTxPceErr::has_operation() const
{
    return is_set(operation)
	|| is_set(has_open_object.operation)
	|| is_set(has_rp_object.operation)
	|| is_set(open_dead_time.operation)
	|| is_set(open_keepalive.operation)
	|| is_set(openversion.operation)
	|| is_set(pce_err_type.operation)
	|| is_set(pce_err_value.operation)
	|| is_set(rp_request_id.operation);
}

std::string MplsPceStdby::Peers::Peer::LastTxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-tx-pce-err";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Peers::Peer::LastTxPceErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTxPceErr' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_open_object.is_set || is_set(has_open_object.operation)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.operation)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.operation)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.operation)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.operation)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (pce_err_type.is_set || is_set(pce_err_type.operation)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.operation)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.operation)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::Peer::LastTxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Peers::Peer::LastTxPceErr::get_children()
{
    return children;
}

void MplsPceStdby::Peers::Peer::LastTxPceErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-open-object")
    {
        has_open_object = value;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
    }
    if(value_path == "openversion")
    {
        openversion = value;
    }
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
    }
}

MplsPceStdby::Peers::Peer::LastRxPceErr::LastRxPceErr()
    :
    has_open_object{YType::boolean, "has-open-object"},
    has_rp_object{YType::boolean, "has-rp-object"},
    open_dead_time{YType::uint32, "open-dead-time"},
    open_keepalive{YType::uint32, "open-keepalive"},
    openversion{YType::uint32, "openversion"},
    pce_err_type{YType::uint32, "pce-err-type"},
    pce_err_value{YType::uint32, "pce-err-value"},
    rp_request_id{YType::uint32, "rp-request-id"}
{
    yang_name = "last-rx-pce-err"; yang_parent_name = "peer";
}

MplsPceStdby::Peers::Peer::LastRxPceErr::~LastRxPceErr()
{
}

bool MplsPceStdby::Peers::Peer::LastRxPceErr::has_data() const
{
    return has_open_object.is_set
	|| has_rp_object.is_set
	|| open_dead_time.is_set
	|| open_keepalive.is_set
	|| openversion.is_set
	|| pce_err_type.is_set
	|| pce_err_value.is_set
	|| rp_request_id.is_set;
}

bool MplsPceStdby::Peers::Peer::LastRxPceErr::has_operation() const
{
    return is_set(operation)
	|| is_set(has_open_object.operation)
	|| is_set(has_rp_object.operation)
	|| is_set(open_dead_time.operation)
	|| is_set(open_keepalive.operation)
	|| is_set(openversion.operation)
	|| is_set(pce_err_type.operation)
	|| is_set(pce_err_value.operation)
	|| is_set(rp_request_id.operation);
}

std::string MplsPceStdby::Peers::Peer::LastRxPceErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rx-pce-err";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Peers::Peer::LastRxPceErr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastRxPceErr' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_open_object.is_set || is_set(has_open_object.operation)) leaf_name_data.push_back(has_open_object.get_name_leafdata());
    if (has_rp_object.is_set || is_set(has_rp_object.operation)) leaf_name_data.push_back(has_rp_object.get_name_leafdata());
    if (open_dead_time.is_set || is_set(open_dead_time.operation)) leaf_name_data.push_back(open_dead_time.get_name_leafdata());
    if (open_keepalive.is_set || is_set(open_keepalive.operation)) leaf_name_data.push_back(open_keepalive.get_name_leafdata());
    if (openversion.is_set || is_set(openversion.operation)) leaf_name_data.push_back(openversion.get_name_leafdata());
    if (pce_err_type.is_set || is_set(pce_err_type.operation)) leaf_name_data.push_back(pce_err_type.get_name_leafdata());
    if (pce_err_value.is_set || is_set(pce_err_value.operation)) leaf_name_data.push_back(pce_err_value.get_name_leafdata());
    if (rp_request_id.is_set || is_set(rp_request_id.operation)) leaf_name_data.push_back(rp_request_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::Peer::LastRxPceErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Peers::Peer::LastRxPceErr::get_children()
{
    return children;
}

void MplsPceStdby::Peers::Peer::LastRxPceErr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-open-object")
    {
        has_open_object = value;
    }
    if(value_path == "has-rp-object")
    {
        has_rp_object = value;
    }
    if(value_path == "open-dead-time")
    {
        open_dead_time = value;
    }
    if(value_path == "open-keepalive")
    {
        open_keepalive = value;
    }
    if(value_path == "openversion")
    {
        openversion = value;
    }
    if(value_path == "pce-err-type")
    {
        pce_err_type = value;
    }
    if(value_path == "pce-err-value")
    {
        pce_err_value = value;
    }
    if(value_path == "rp-request-id")
    {
        rp_request_id = value;
    }
}

MplsPceStdby::Peers::Peer::IgPs::IgPs()
    :
    igp_instance_id{YType::str, "igp-instance-id"},
    igp_type{YType::enumeration, "igp-type"}
{
    yang_name = "ig-ps"; yang_parent_name = "peer";
}

MplsPceStdby::Peers::Peer::IgPs::~IgPs()
{
}

bool MplsPceStdby::Peers::Peer::IgPs::has_data() const
{
    return igp_instance_id.is_set
	|| igp_type.is_set;
}

bool MplsPceStdby::Peers::Peer::IgPs::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_instance_id.operation)
	|| is_set(igp_type.operation);
}

std::string MplsPceStdby::Peers::Peer::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Peers::Peer::IgPs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgPs' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_instance_id.is_set || is_set(igp_instance_id.operation)) leaf_name_data.push_back(igp_instance_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Peers::Peer::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Peers::Peer::IgPs::get_children()
{
    return children;
}

void MplsPceStdby::Peers::Peer::IgPs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-instance-id")
    {
        igp_instance_id = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
}

MplsPceStdby::Topology::Topology()
    :
    global(std::make_shared<MplsPceStdby::Topology::Global>())
{
    global->parent = this;
    children["global"] = global;

    yang_name = "topology"; yang_parent_name = "mpls-pce-stdby";
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
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsPceStdby::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<MplsPceStdby::Topology::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Topology::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    return children;
}

void MplsPceStdby::Topology::set_value(const std::string & value_path, std::string value)
{
}

MplsPceStdby::Topology::Global::Global()
{
    yang_name = "global"; yang_parent_name = "topology";
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
    return is_set(operation);
}

std::string MplsPceStdby::Topology::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Topology::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Topology::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        for(auto const & c : nodes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPceStdby::Topology::Global::Nodes>();
        c->parent = this;
        nodes.push_back(std::move(c));
        children[segment_path] = nodes.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Topology::Global::get_children()
{
    for (auto const & c : nodes)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPceStdby::Topology::Global::set_value(const std::string & value_path, std::string value)
{
}

MplsPceStdby::Topology::Global::Nodes::Nodes()
    :
    igp_area_format{YType::enumeration, "igp-area-format"},
    igp_area_id{YType::uint32, "igp-area-id"},
    is_pce_border_node{YType::boolean, "is-pce-border-node"},
    node_id{YType::str, "node-id"},
    pce_cost{YType::uint32, "pce-cost"},
    router_id{YType::str, "router-id"}
{
    yang_name = "nodes"; yang_parent_name = "global";
}

MplsPceStdby::Topology::Global::Nodes::~Nodes()
{
}

bool MplsPceStdby::Topology::Global::Nodes::has_data() const
{
    return igp_area_format.is_set
	|| igp_area_id.is_set
	|| is_pce_border_node.is_set
	|| node_id.is_set
	|| pce_cost.is_set
	|| router_id.is_set;
}

bool MplsPceStdby::Topology::Global::Nodes::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_area_format.operation)
	|| is_set(igp_area_id.operation)
	|| is_set(is_pce_border_node.operation)
	|| is_set(node_id.operation)
	|| is_set(pce_cost.operation)
	|| is_set(router_id.operation);
}

std::string MplsPceStdby::Topology::Global::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Topology::Global::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/topology/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_format.is_set || is_set(igp_area_format.operation)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.operation)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (is_pce_border_node.is_set || is_set(is_pce_border_node.operation)) leaf_name_data.push_back(is_pce_border_node.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (pce_cost.is_set || is_set(pce_cost.operation)) leaf_name_data.push_back(pce_cost.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Topology::Global::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Topology::Global::Nodes::get_children()
{
    return children;
}

void MplsPceStdby::Topology::Global::Nodes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
    }
    if(value_path == "is-pce-border-node")
    {
        is_pce_border_node = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "pce-cost")
    {
        pce_cost = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

MplsPceStdby::Tunnels::Tunnels()
    :
    admin_weight{YType::uint32, "admin-weight"},
    configured_pce_address{YType::str, "configured-pce-address"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    destination_address{YType::str, "destination-address"},
    hop_count{YType::uint32, "hop-count"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    path_state{YType::enumeration, "path-state"},
    sender_pce_address{YType::str, "sender-pce-address"},
    source_address{YType::str, "source-address"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{
    yang_name = "tunnels"; yang_parent_name = "mpls-pce-stdby";
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
    return admin_weight.is_set
	|| configured_pce_address.is_set
	|| curr_path_option_index.is_set
	|| destination_address.is_set
	|| hop_count.is_set
	|| is_curr_path_option_pce.is_set
	|| path_state.is_set
	|| sender_pce_address.is_set
	|| source_address.is_set
	|| tunnel_state.is_set;
}

bool MplsPceStdby::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(admin_weight.operation)
	|| is_set(configured_pce_address.operation)
	|| is_set(curr_path_option_index.operation)
	|| is_set(destination_address.operation)
	|| is_set(hop_count.operation)
	|| is_set(is_curr_path_option_pce.operation)
	|| is_set(path_state.operation)
	|| is_set(sender_pce_address.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_state.operation);
}

std::string MplsPceStdby::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.operation)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.operation)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.operation)) leaf_name_data.push_back(hop_count.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.operation)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.operation)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.operation)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.operation)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsPceStdby::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(std::move(c));
        children[segment_path] = tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Tunnels::get_children()
{
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsPceStdby::Tunnels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
    }
    if(value_path == "path-state")
    {
        path_state = value;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
    }
}

MplsPceStdby::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    admin_weight{YType::uint32, "admin-weight"},
    configured_pce_address{YType::str, "configured-pce-address"},
    curr_path_option_index{YType::uint32, "curr-path-option-index"},
    destination_address{YType::str, "destination-address"},
    hop_count{YType::uint32, "hop-count"},
    is_curr_path_option_pce{YType::boolean, "is-curr-path-option-pce"},
    path_state{YType::enumeration, "path-state"},
    sender_pce_address{YType::str, "sender-pce-address"},
    source_address{YType::str, "source-address"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{
    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

MplsPceStdby::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsPceStdby::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| admin_weight.is_set
	|| configured_pce_address.is_set
	|| curr_path_option_index.is_set
	|| destination_address.is_set
	|| hop_count.is_set
	|| is_curr_path_option_pce.is_set
	|| path_state.is_set
	|| sender_pce_address.is_set
	|| source_address.is_set
	|| tunnel_state.is_set;
}

bool MplsPceStdby::Tunnels::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| is_set(admin_weight.operation)
	|| is_set(configured_pce_address.operation)
	|| is_set(curr_path_option_index.operation)
	|| is_set(destination_address.operation)
	|| is_set(hop_count.operation)
	|| is_set(is_curr_path_option_pce.operation)
	|| is_set(path_state.operation)
	|| is_set(sender_pce_address.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_state.operation);
}

std::string MplsPceStdby::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";

    return path_buffer.str();

}

EntityPath MplsPceStdby::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (configured_pce_address.is_set || is_set(configured_pce_address.operation)) leaf_name_data.push_back(configured_pce_address.get_name_leafdata());
    if (curr_path_option_index.is_set || is_set(curr_path_option_index.operation)) leaf_name_data.push_back(curr_path_option_index.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hop_count.is_set || is_set(hop_count.operation)) leaf_name_data.push_back(hop_count.get_name_leafdata());
    if (is_curr_path_option_pce.is_set || is_set(is_curr_path_option_pce.operation)) leaf_name_data.push_back(is_curr_path_option_pce.get_name_leafdata());
    if (path_state.is_set || is_set(path_state.operation)) leaf_name_data.push_back(path_state.get_name_leafdata());
    if (sender_pce_address.is_set || is_set(sender_pce_address.operation)) leaf_name_data.push_back(sender_pce_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.operation)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsPceStdby::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsPceStdby::Tunnels::Tunnel::get_children()
{
    return children;
}

void MplsPceStdby::Tunnels::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
    if(value_path == "configured-pce-address")
    {
        configured_pce_address = value;
    }
    if(value_path == "curr-path-option-index")
    {
        curr_path_option_index = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "hop-count")
    {
        hop_count = value;
    }
    if(value_path == "is-curr-path-option-pce")
    {
        is_curr_path_option_pce = value;
    }
    if(value_path == "path-state")
    {
        path_state = value;
    }
    if(value_path == "sender-pce-address")
    {
        sender_pce_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
    }
}

MplsTp::MplsTp()
    :
    tp_global_parameters(std::make_shared<MplsTp::TpGlobalParameters>())
	,tp_links(std::make_shared<MplsTp::TpLinks>())
	,tp_midpoints(std::make_shared<MplsTp::TpMidpoints>())
	,tp_tunnels(std::make_shared<MplsTp::TpTunnels>())
{
    tp_global_parameters->parent = this;
    children["tp-global-parameters"] = tp_global_parameters;

    tp_links->parent = this;
    children["tp-links"] = tp_links;

    tp_midpoints->parent = this;
    children["tp-midpoints"] = tp_midpoints;

    tp_tunnels->parent = this;
    children["tp-tunnels"] = tp_tunnels;

    yang_name = "mpls-tp"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper";
}

MplsTp::~MplsTp()
{
}

bool MplsTp::has_data() const
{
    return (tp_global_parameters !=  nullptr && tp_global_parameters->has_data())
	|| (tp_links !=  nullptr && tp_links->has_data())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_data())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_data());
}

bool MplsTp::has_operation() const
{
    return is_set(operation)
	|| (tp_global_parameters !=  nullptr && tp_global_parameters->has_operation())
	|| (tp_links !=  nullptr && tp_links->has_operation())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_operation())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_operation());
}

std::string MplsTp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp";

    return path_buffer.str();

}

EntityPath MplsTp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tp-global-parameters")
    {
        if(tp_global_parameters != nullptr)
        {
            children["tp-global-parameters"] = tp_global_parameters;
        }
        else
        {
            tp_global_parameters = std::make_shared<MplsTp::TpGlobalParameters>();
            tp_global_parameters->parent = this;
            children["tp-global-parameters"] = tp_global_parameters;
        }
        return children.at("tp-global-parameters");
    }

    if(child_yang_name == "tp-links")
    {
        if(tp_links != nullptr)
        {
            children["tp-links"] = tp_links;
        }
        else
        {
            tp_links = std::make_shared<MplsTp::TpLinks>();
            tp_links->parent = this;
            children["tp-links"] = tp_links;
        }
        return children.at("tp-links");
    }

    if(child_yang_name == "tp-midpoints")
    {
        if(tp_midpoints != nullptr)
        {
            children["tp-midpoints"] = tp_midpoints;
        }
        else
        {
            tp_midpoints = std::make_shared<MplsTp::TpMidpoints>();
            tp_midpoints->parent = this;
            children["tp-midpoints"] = tp_midpoints;
        }
        return children.at("tp-midpoints");
    }

    if(child_yang_name == "tp-tunnels")
    {
        if(tp_tunnels != nullptr)
        {
            children["tp-tunnels"] = tp_tunnels;
        }
        else
        {
            tp_tunnels = std::make_shared<MplsTp::TpTunnels>();
            tp_tunnels->parent = this;
            children["tp-tunnels"] = tp_tunnels;
        }
        return children.at("tp-tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::get_children()
{
    if(children.find("tp-global-parameters") == children.end())
    {
        if(tp_global_parameters != nullptr)
        {
            children["tp-global-parameters"] = tp_global_parameters;
        }
    }

    if(children.find("tp-links") == children.end())
    {
        if(tp_links != nullptr)
        {
            children["tp-links"] = tp_links;
        }
    }

    if(children.find("tp-midpoints") == children.end())
    {
        if(tp_midpoints != nullptr)
        {
            children["tp-midpoints"] = tp_midpoints;
        }
    }

    if(children.find("tp-tunnels") == children.end())
    {
        if(tp_tunnels != nullptr)
        {
            children["tp-tunnels"] = tp_tunnels;
        }
    }

    return children;
}

void MplsTp::set_value(const std::string & value_path, std::string value)
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

MplsTp::TpLinks::TpLinks()
    :
    tp_detail_links(std::make_shared<MplsTp::TpLinks::TpDetailLinks>())
	,tp_link_summary(std::make_shared<MplsTp::TpLinks::TpLinkSummary>())
	,tp_links(std::make_shared<MplsTp::TpLinks::TpLinks_>())
{
    tp_detail_links->parent = this;
    children["tp-detail-links"] = tp_detail_links;

    tp_link_summary->parent = this;
    children["tp-link-summary"] = tp_link_summary;

    tp_links->parent = this;
    children["tp-links"] = tp_links;

    yang_name = "tp-links"; yang_parent_name = "mpls-tp";
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
    return is_set(operation)
	|| (tp_detail_links !=  nullptr && tp_detail_links->has_operation())
	|| (tp_link_summary !=  nullptr && tp_link_summary->has_operation())
	|| (tp_links !=  nullptr && tp_links->has_operation());
}

std::string MplsTp::TpLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-links";

    return path_buffer.str();

}

EntityPath MplsTp::TpLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tp-detail-links")
    {
        if(tp_detail_links != nullptr)
        {
            children["tp-detail-links"] = tp_detail_links;
        }
        else
        {
            tp_detail_links = std::make_shared<MplsTp::TpLinks::TpDetailLinks>();
            tp_detail_links->parent = this;
            children["tp-detail-links"] = tp_detail_links;
        }
        return children.at("tp-detail-links");
    }

    if(child_yang_name == "tp-link-summary")
    {
        if(tp_link_summary != nullptr)
        {
            children["tp-link-summary"] = tp_link_summary;
        }
        else
        {
            tp_link_summary = std::make_shared<MplsTp::TpLinks::TpLinkSummary>();
            tp_link_summary->parent = this;
            children["tp-link-summary"] = tp_link_summary;
        }
        return children.at("tp-link-summary");
    }

    if(child_yang_name == "tp-links")
    {
        if(tp_links != nullptr)
        {
            children["tp-links"] = tp_links;
        }
        else
        {
            tp_links = std::make_shared<MplsTp::TpLinks::TpLinks_>();
            tp_links->parent = this;
            children["tp-links"] = tp_links;
        }
        return children.at("tp-links");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpLinks::get_children()
{
    if(children.find("tp-detail-links") == children.end())
    {
        if(tp_detail_links != nullptr)
        {
            children["tp-detail-links"] = tp_detail_links;
        }
    }

    if(children.find("tp-link-summary") == children.end())
    {
        if(tp_link_summary != nullptr)
        {
            children["tp-link-summary"] = tp_link_summary;
        }
    }

    if(children.find("tp-links") == children.end())
    {
        if(tp_links != nullptr)
        {
            children["tp-links"] = tp_links;
        }
    }

    return children;
}

void MplsTp::TpLinks::set_value(const std::string & value_path, std::string value)
{
}

MplsTp::TpLinks::TpDetailLinks::TpDetailLinks()
{
    yang_name = "tp-detail-links"; yang_parent_name = "tp-links";
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
    return is_set(operation);
}

std::string MplsTp::TpLinks::TpDetailLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-links";

    return path_buffer.str();

}

EntityPath MplsTp::TpLinks::TpDetailLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpDetailLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tp-detail-link")
    {
        for(auto const & c : tp_detail_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTp::TpLinks::TpDetailLinks::TpDetailLink>();
        c->parent = this;
        tp_detail_link.push_back(std::move(c));
        children[segment_path] = tp_detail_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpLinks::TpDetailLinks::get_children()
{
    for (auto const & c : tp_detail_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTp::TpLinks::TpDetailLinks::set_value(const std::string & value_path, std::string value)
{
}

MplsTp::TpLinks::TpDetailLinks::TpDetailLink::TpDetailLink()
    :
    tp_link_id{YType::int32, "tp-link-id"},
    available_bandwidth{YType::uint64, "available-bandwidth"},
    interface{YType::str, "interface"},
    link_id{YType::uint32, "link-id"},
    link_state{YType::enumeration, "link-state"},
    ls_ps{YType::uint32, "ls-ps"},
    next_hop_address{YType::str, "next-hop-address"},
    reserved_bandwidth{YType::uint64, "reserved-bandwidth"},
    unsupported_linecard{YType::boolean, "unsupported-linecard"}
{
    yang_name = "tp-detail-link"; yang_parent_name = "tp-detail-links";
}

MplsTp::TpLinks::TpDetailLinks::TpDetailLink::~TpDetailLink()
{
}

bool MplsTp::TpLinks::TpDetailLinks::TpDetailLink::has_data() const
{
    return tp_link_id.is_set
	|| available_bandwidth.is_set
	|| interface.is_set
	|| link_id.is_set
	|| link_state.is_set
	|| ls_ps.is_set
	|| next_hop_address.is_set
	|| reserved_bandwidth.is_set
	|| unsupported_linecard.is_set;
}

bool MplsTp::TpLinks::TpDetailLinks::TpDetailLink::has_operation() const
{
    return is_set(operation)
	|| is_set(tp_link_id.operation)
	|| is_set(available_bandwidth.operation)
	|| is_set(interface.operation)
	|| is_set(link_id.operation)
	|| is_set(link_state.operation)
	|| is_set(ls_ps.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(reserved_bandwidth.operation)
	|| is_set(unsupported_linecard.operation);
}

std::string MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-link" <<"[tp-link-id='" <<tp_link_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/tp-detail-links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_link_id.is_set || is_set(tp_link_id.operation)) leaf_name_data.push_back(tp_link_id.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.operation)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_state.is_set || is_set(link_state.operation)) leaf_name_data.push_back(link_state.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.operation)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.operation)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());
    if (unsupported_linecard.is_set || is_set(unsupported_linecard.operation)) leaf_name_data.push_back(unsupported_linecard.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpLinks::TpDetailLinks::TpDetailLink::get_children()
{
    return children;
}

void MplsTp::TpLinks::TpDetailLinks::TpDetailLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id = value;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-state")
    {
        link_state = value;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
    }
    if(value_path == "unsupported-linecard")
    {
        unsupported_linecard = value;
    }
}

MplsTp::TpLinks::TpLinkSummary::TpLinkSummary()
    :
    links{YType::uint32, "links"}
{
    yang_name = "tp-link-summary"; yang_parent_name = "tp-links";
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
    return is_set(operation)
	|| is_set(links.operation);
}

std::string MplsTp::TpLinks::TpLinkSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-link-summary";

    return path_buffer.str();

}

EntityPath MplsTp::TpLinks::TpLinkSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpLinkSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpLinks::TpLinkSummary::get_children()
{
    return children;
}

void MplsTp::TpLinks::TpLinkSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "links")
    {
        links = value;
    }
}

MplsTp::TpLinks::TpLinks_::TpLinks_()
{
    yang_name = "tp-links"; yang_parent_name = "tp-links";
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
    return is_set(operation);
}

std::string MplsTp::TpLinks::TpLinks_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-links";

    return path_buffer.str();

}

EntityPath MplsTp::TpLinks::TpLinks_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpLinks_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tp-link")
    {
        for(auto const & c : tp_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTp::TpLinks::TpLinks_::TpLink>();
        c->parent = this;
        tp_link.push_back(std::move(c));
        children[segment_path] = tp_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpLinks::TpLinks_::get_children()
{
    for (auto const & c : tp_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTp::TpLinks::TpLinks_::set_value(const std::string & value_path, std::string value)
{
}

MplsTp::TpLinks::TpLinks_::TpLink::TpLink()
    :
    tp_link_id{YType::int32, "tp-link-id"},
    available_bandwidth{YType::uint64, "available-bandwidth"},
    interface{YType::str, "interface"},
    link_id{YType::uint32, "link-id"},
    link_state{YType::enumeration, "link-state"},
    next_hop_address{YType::str, "next-hop-address"}
{
    yang_name = "tp-link"; yang_parent_name = "tp-links";
}

MplsTp::TpLinks::TpLinks_::TpLink::~TpLink()
{
}

bool MplsTp::TpLinks::TpLinks_::TpLink::has_data() const
{
    return tp_link_id.is_set
	|| available_bandwidth.is_set
	|| interface.is_set
	|| link_id.is_set
	|| link_state.is_set
	|| next_hop_address.is_set;
}

bool MplsTp::TpLinks::TpLinks_::TpLink::has_operation() const
{
    return is_set(operation)
	|| is_set(tp_link_id.operation)
	|| is_set(available_bandwidth.operation)
	|| is_set(interface.operation)
	|| is_set(link_id.operation)
	|| is_set(link_state.operation)
	|| is_set(next_hop_address.operation);
}

std::string MplsTp::TpLinks::TpLinks_::TpLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-link" <<"[tp-link-id='" <<tp_link_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTp::TpLinks::TpLinks_::TpLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-links/tp-links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_link_id.is_set || is_set(tp_link_id.operation)) leaf_name_data.push_back(tp_link_id.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.operation)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_state.is_set || is_set(link_state.operation)) leaf_name_data.push_back(link_state.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpLinks::TpLinks_::TpLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpLinks::TpLinks_::TpLink::get_children()
{
    return children;
}

void MplsTp::TpLinks::TpLinks_::TpLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tp-link-id")
    {
        tp_link_id = value;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-state")
    {
        link_state = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
}

MplsTp::TpTunnels::TpTunnels()
    :
    tp_detail_tunnels(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels>())
	,tp_tunnel_summary(std::make_shared<MplsTp::TpTunnels::TpTunnelSummary>())
	,tp_tunnels(std::make_shared<MplsTp::TpTunnels::TpTunnels_>())
{
    tp_detail_tunnels->parent = this;
    children["tp-detail-tunnels"] = tp_detail_tunnels;

    tp_tunnel_summary->parent = this;
    children["tp-tunnel-summary"] = tp_tunnel_summary;

    tp_tunnels->parent = this;
    children["tp-tunnels"] = tp_tunnels;

    yang_name = "tp-tunnels"; yang_parent_name = "mpls-tp";
}

MplsTp::TpTunnels::~TpTunnels()
{
}

bool MplsTp::TpTunnels::has_data() const
{
    return (tp_detail_tunnels !=  nullptr && tp_detail_tunnels->has_data())
	|| (tp_tunnel_summary !=  nullptr && tp_tunnel_summary->has_data())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_data());
}

bool MplsTp::TpTunnels::has_operation() const
{
    return is_set(operation)
	|| (tp_detail_tunnels !=  nullptr && tp_detail_tunnels->has_operation())
	|| (tp_tunnel_summary !=  nullptr && tp_tunnel_summary->has_operation())
	|| (tp_tunnels !=  nullptr && tp_tunnels->has_operation());
}

std::string MplsTp::TpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnels";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tp-detail-tunnels")
    {
        if(tp_detail_tunnels != nullptr)
        {
            children["tp-detail-tunnels"] = tp_detail_tunnels;
        }
        else
        {
            tp_detail_tunnels = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels>();
            tp_detail_tunnels->parent = this;
            children["tp-detail-tunnels"] = tp_detail_tunnels;
        }
        return children.at("tp-detail-tunnels");
    }

    if(child_yang_name == "tp-tunnel-summary")
    {
        if(tp_tunnel_summary != nullptr)
        {
            children["tp-tunnel-summary"] = tp_tunnel_summary;
        }
        else
        {
            tp_tunnel_summary = std::make_shared<MplsTp::TpTunnels::TpTunnelSummary>();
            tp_tunnel_summary->parent = this;
            children["tp-tunnel-summary"] = tp_tunnel_summary;
        }
        return children.at("tp-tunnel-summary");
    }

    if(child_yang_name == "tp-tunnels")
    {
        if(tp_tunnels != nullptr)
        {
            children["tp-tunnels"] = tp_tunnels;
        }
        else
        {
            tp_tunnels = std::make_shared<MplsTp::TpTunnels::TpTunnels_>();
            tp_tunnels->parent = this;
            children["tp-tunnels"] = tp_tunnels;
        }
        return children.at("tp-tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::get_children()
{
    if(children.find("tp-detail-tunnels") == children.end())
    {
        if(tp_detail_tunnels != nullptr)
        {
            children["tp-detail-tunnels"] = tp_detail_tunnels;
        }
    }

    if(children.find("tp-tunnel-summary") == children.end())
    {
        if(tp_tunnel_summary != nullptr)
        {
            children["tp-tunnel-summary"] = tp_tunnel_summary;
        }
    }

    if(children.find("tp-tunnels") == children.end())
    {
        if(tp_tunnels != nullptr)
        {
            children["tp-tunnels"] = tp_tunnels;
        }
    }

    return children;
}

void MplsTp::TpTunnels::set_value(const std::string & value_path, std::string value)
{
}

MplsTp::TpTunnels::TpTunnelSummary::TpTunnelSummary()
    :
    active_protect_ls_ps{YType::uint32, "active-protect-ls-ps"},
    active_working_ls_ps{YType::uint32, "active-working-ls-ps"},
    admin_down_tunnels{YType::uint32, "admin-down-tunnels"},
    bfd_session_protect_ls_ps{YType::uint32, "bfd-session-protect-ls-ps"},
    bfd_session_working_ls_ps{YType::uint32, "bfd-session-working-ls-ps"},
    complete_fec_protect_ls_ps{YType::uint32, "complete-fec-protect-ls-ps"},
    complete_fec_working_ls_ps{YType::uint32, "complete-fec-working-ls-ps"},
    down_protect_ls_ps{YType::uint32, "down-protect-ls-ps"},
    down_tunnels{YType::uint32, "down-tunnels"},
    down_working_ls_ps{YType::uint32, "down-working-ls-ps"},
    locked_protect_ls_ps{YType::uint32, "locked-protect-ls-ps"},
    locked_working_ls_ps{YType::uint32, "locked-working-ls-ps"},
    up_protect_ls_ps{YType::uint32, "up-protect-ls-ps"},
    up_tunnels{YType::uint32, "up-tunnels"},
    up_working_ls_ps{YType::uint32, "up-working-ls-ps"}
{
    yang_name = "tp-tunnel-summary"; yang_parent_name = "tp-tunnels";
}

MplsTp::TpTunnels::TpTunnelSummary::~TpTunnelSummary()
{
}

bool MplsTp::TpTunnels::TpTunnelSummary::has_data() const
{
    return active_protect_ls_ps.is_set
	|| active_working_ls_ps.is_set
	|| admin_down_tunnels.is_set
	|| bfd_session_protect_ls_ps.is_set
	|| bfd_session_working_ls_ps.is_set
	|| complete_fec_protect_ls_ps.is_set
	|| complete_fec_working_ls_ps.is_set
	|| down_protect_ls_ps.is_set
	|| down_tunnels.is_set
	|| down_working_ls_ps.is_set
	|| locked_protect_ls_ps.is_set
	|| locked_working_ls_ps.is_set
	|| up_protect_ls_ps.is_set
	|| up_tunnels.is_set
	|| up_working_ls_ps.is_set;
}

bool MplsTp::TpTunnels::TpTunnelSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(active_protect_ls_ps.operation)
	|| is_set(active_working_ls_ps.operation)
	|| is_set(admin_down_tunnels.operation)
	|| is_set(bfd_session_protect_ls_ps.operation)
	|| is_set(bfd_session_working_ls_ps.operation)
	|| is_set(complete_fec_protect_ls_ps.operation)
	|| is_set(complete_fec_working_ls_ps.operation)
	|| is_set(down_protect_ls_ps.operation)
	|| is_set(down_tunnels.operation)
	|| is_set(down_working_ls_ps.operation)
	|| is_set(locked_protect_ls_ps.operation)
	|| is_set(locked_working_ls_ps.operation)
	|| is_set(up_protect_ls_ps.operation)
	|| is_set(up_tunnels.operation)
	|| is_set(up_working_ls_ps.operation);
}

std::string MplsTp::TpTunnels::TpTunnelSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnel-summary";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpTunnelSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_protect_ls_ps.is_set || is_set(active_protect_ls_ps.operation)) leaf_name_data.push_back(active_protect_ls_ps.get_name_leafdata());
    if (active_working_ls_ps.is_set || is_set(active_working_ls_ps.operation)) leaf_name_data.push_back(active_working_ls_ps.get_name_leafdata());
    if (admin_down_tunnels.is_set || is_set(admin_down_tunnels.operation)) leaf_name_data.push_back(admin_down_tunnels.get_name_leafdata());
    if (bfd_session_protect_ls_ps.is_set || is_set(bfd_session_protect_ls_ps.operation)) leaf_name_data.push_back(bfd_session_protect_ls_ps.get_name_leafdata());
    if (bfd_session_working_ls_ps.is_set || is_set(bfd_session_working_ls_ps.operation)) leaf_name_data.push_back(bfd_session_working_ls_ps.get_name_leafdata());
    if (complete_fec_protect_ls_ps.is_set || is_set(complete_fec_protect_ls_ps.operation)) leaf_name_data.push_back(complete_fec_protect_ls_ps.get_name_leafdata());
    if (complete_fec_working_ls_ps.is_set || is_set(complete_fec_working_ls_ps.operation)) leaf_name_data.push_back(complete_fec_working_ls_ps.get_name_leafdata());
    if (down_protect_ls_ps.is_set || is_set(down_protect_ls_ps.operation)) leaf_name_data.push_back(down_protect_ls_ps.get_name_leafdata());
    if (down_tunnels.is_set || is_set(down_tunnels.operation)) leaf_name_data.push_back(down_tunnels.get_name_leafdata());
    if (down_working_ls_ps.is_set || is_set(down_working_ls_ps.operation)) leaf_name_data.push_back(down_working_ls_ps.get_name_leafdata());
    if (locked_protect_ls_ps.is_set || is_set(locked_protect_ls_ps.operation)) leaf_name_data.push_back(locked_protect_ls_ps.get_name_leafdata());
    if (locked_working_ls_ps.is_set || is_set(locked_working_ls_ps.operation)) leaf_name_data.push_back(locked_working_ls_ps.get_name_leafdata());
    if (up_protect_ls_ps.is_set || is_set(up_protect_ls_ps.operation)) leaf_name_data.push_back(up_protect_ls_ps.get_name_leafdata());
    if (up_tunnels.is_set || is_set(up_tunnels.operation)) leaf_name_data.push_back(up_tunnels.get_name_leafdata());
    if (up_working_ls_ps.is_set || is_set(up_working_ls_ps.operation)) leaf_name_data.push_back(up_working_ls_ps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnelSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpTunnelSummary::get_children()
{
    return children;
}

void MplsTp::TpTunnels::TpTunnelSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-protect-ls-ps")
    {
        active_protect_ls_ps = value;
    }
    if(value_path == "active-working-ls-ps")
    {
        active_working_ls_ps = value;
    }
    if(value_path == "admin-down-tunnels")
    {
        admin_down_tunnels = value;
    }
    if(value_path == "bfd-session-protect-ls-ps")
    {
        bfd_session_protect_ls_ps = value;
    }
    if(value_path == "bfd-session-working-ls-ps")
    {
        bfd_session_working_ls_ps = value;
    }
    if(value_path == "complete-fec-protect-ls-ps")
    {
        complete_fec_protect_ls_ps = value;
    }
    if(value_path == "complete-fec-working-ls-ps")
    {
        complete_fec_working_ls_ps = value;
    }
    if(value_path == "down-protect-ls-ps")
    {
        down_protect_ls_ps = value;
    }
    if(value_path == "down-tunnels")
    {
        down_tunnels = value;
    }
    if(value_path == "down-working-ls-ps")
    {
        down_working_ls_ps = value;
    }
    if(value_path == "locked-protect-ls-ps")
    {
        locked_protect_ls_ps = value;
    }
    if(value_path == "locked-working-ls-ps")
    {
        locked_working_ls_ps = value;
    }
    if(value_path == "up-protect-ls-ps")
    {
        up_protect_ls_ps = value;
    }
    if(value_path == "up-tunnels")
    {
        up_tunnels = value;
    }
    if(value_path == "up-working-ls-ps")
    {
        up_working_ls_ps = value;
    }
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnels()
{
    yang_name = "tp-detail-tunnels"; yang_parent_name = "tp-tunnels";
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
    return is_set(operation);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-tunnels";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpDetailTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tp-detail-tunnel")
    {
        for(auto const & c : tp_detail_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel>();
        c->parent = this;
        tp_detail_tunnel.push_back(std::move(c));
        children[segment_path] = tp_detail_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpDetailTunnels::get_children()
{
    for (auto const & c : tp_detail_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::set_value(const std::string & value_path, std::string value)
{
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::TpDetailTunnel()
    :
    tp_tunnel_name{YType::str, "tp-tunnel-name"},
    bfd_interval_active{YType::uint32, "bfd-interval-active"},
    bfd_interval_active_in_micro_sec{YType::boolean, "bfd-interval-active-in-micro-sec"},
    bfd_interval_standby{YType::uint32, "bfd-interval-standby"},
    bfd_interval_standby_in_micro_sec{YType::boolean, "bfd-interval-standby-in-micro-sec"},
    bfd_multiplier_active{YType::uint32, "bfd-multiplier-active"},
    bfd_multiplier_standby{YType::uint32, "bfd-multiplier-standby"},
    oam_interval{YType::uint32, "oam-interval"},
    req_bandwidth{YType::uint32, "req-bandwidth"},
    switch_over_time{YType::uint32, "switch-over-time"},
    switchover_trig{YType::enumeration, "switchover-trig"},
    tunnel_up_time{YType::uint32, "tunnel-up-time"}
    	,
    oam_protection_triggers(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers>())
	,protect_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp>())
	,tunnel(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel>())
	,working_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp>())
{
    oam_protection_triggers->parent = this;
    children["oam-protection-triggers"] = oam_protection_triggers;

    protect_lsp->parent = this;
    children["protect-lsp"] = protect_lsp;

    tunnel->parent = this;
    children["tunnel"] = tunnel;

    working_lsp->parent = this;
    children["working-lsp"] = working_lsp;

    yang_name = "tp-detail-tunnel"; yang_parent_name = "tp-detail-tunnels";
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::~TpDetailTunnel()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::has_data() const
{
    return tp_tunnel_name.is_set
	|| bfd_interval_active.is_set
	|| bfd_interval_active_in_micro_sec.is_set
	|| bfd_interval_standby.is_set
	|| bfd_interval_standby_in_micro_sec.is_set
	|| bfd_multiplier_active.is_set
	|| bfd_multiplier_standby.is_set
	|| oam_interval.is_set
	|| req_bandwidth.is_set
	|| switch_over_time.is_set
	|| switchover_trig.is_set
	|| tunnel_up_time.is_set
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tp_tunnel_name.operation)
	|| is_set(bfd_interval_active.operation)
	|| is_set(bfd_interval_active_in_micro_sec.operation)
	|| is_set(bfd_interval_standby.operation)
	|| is_set(bfd_interval_standby_in_micro_sec.operation)
	|| is_set(bfd_multiplier_active.operation)
	|| is_set(bfd_multiplier_standby.operation)
	|| is_set(oam_interval.operation)
	|| is_set(req_bandwidth.operation)
	|| is_set(switch_over_time.operation)
	|| is_set(switchover_trig.operation)
	|| is_set(tunnel_up_time.operation)
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-tunnel" <<"[tp-tunnel-name='" <<tp_tunnel_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/tp-detail-tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_tunnel_name.is_set || is_set(tp_tunnel_name.operation)) leaf_name_data.push_back(tp_tunnel_name.get_name_leafdata());
    if (bfd_interval_active.is_set || is_set(bfd_interval_active.operation)) leaf_name_data.push_back(bfd_interval_active.get_name_leafdata());
    if (bfd_interval_active_in_micro_sec.is_set || is_set(bfd_interval_active_in_micro_sec.operation)) leaf_name_data.push_back(bfd_interval_active_in_micro_sec.get_name_leafdata());
    if (bfd_interval_standby.is_set || is_set(bfd_interval_standby.operation)) leaf_name_data.push_back(bfd_interval_standby.get_name_leafdata());
    if (bfd_interval_standby_in_micro_sec.is_set || is_set(bfd_interval_standby_in_micro_sec.operation)) leaf_name_data.push_back(bfd_interval_standby_in_micro_sec.get_name_leafdata());
    if (bfd_multiplier_active.is_set || is_set(bfd_multiplier_active.operation)) leaf_name_data.push_back(bfd_multiplier_active.get_name_leafdata());
    if (bfd_multiplier_standby.is_set || is_set(bfd_multiplier_standby.operation)) leaf_name_data.push_back(bfd_multiplier_standby.get_name_leafdata());
    if (oam_interval.is_set || is_set(oam_interval.operation)) leaf_name_data.push_back(oam_interval.get_name_leafdata());
    if (req_bandwidth.is_set || is_set(req_bandwidth.operation)) leaf_name_data.push_back(req_bandwidth.get_name_leafdata());
    if (switch_over_time.is_set || is_set(switch_over_time.operation)) leaf_name_data.push_back(switch_over_time.get_name_leafdata());
    if (switchover_trig.is_set || is_set(switchover_trig.operation)) leaf_name_data.push_back(switchover_trig.get_name_leafdata());
    if (tunnel_up_time.is_set || is_set(tunnel_up_time.operation)) leaf_name_data.push_back(tunnel_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oam-protection-triggers")
    {
        if(oam_protection_triggers != nullptr)
        {
            children["oam-protection-triggers"] = oam_protection_triggers;
        }
        else
        {
            oam_protection_triggers = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers>();
            oam_protection_triggers->parent = this;
            children["oam-protection-triggers"] = oam_protection_triggers;
        }
        return children.at("oam-protection-triggers");
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp != nullptr)
        {
            children["protect-lsp"] = protect_lsp;
        }
        else
        {
            protect_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp>();
            protect_lsp->parent = this;
            children["protect-lsp"] = protect_lsp;
        }
        return children.at("protect-lsp");
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel != nullptr)
        {
            children["tunnel"] = tunnel;
        }
        else
        {
            tunnel = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel>();
            tunnel->parent = this;
            children["tunnel"] = tunnel;
        }
        return children.at("tunnel");
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp != nullptr)
        {
            children["working-lsp"] = working_lsp;
        }
        else
        {
            working_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp>();
            working_lsp->parent = this;
            children["working-lsp"] = working_lsp;
        }
        return children.at("working-lsp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::get_children()
{
    if(children.find("oam-protection-triggers") == children.end())
    {
        if(oam_protection_triggers != nullptr)
        {
            children["oam-protection-triggers"] = oam_protection_triggers;
        }
    }

    if(children.find("protect-lsp") == children.end())
    {
        if(protect_lsp != nullptr)
        {
            children["protect-lsp"] = protect_lsp;
        }
    }

    if(children.find("tunnel") == children.end())
    {
        if(tunnel != nullptr)
        {
            children["tunnel"] = tunnel;
        }
    }

    if(children.find("working-lsp") == children.end())
    {
        if(working_lsp != nullptr)
        {
            children["working-lsp"] = working_lsp;
        }
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name = value;
    }
    if(value_path == "bfd-interval-active")
    {
        bfd_interval_active = value;
    }
    if(value_path == "bfd-interval-active-in-micro-sec")
    {
        bfd_interval_active_in_micro_sec = value;
    }
    if(value_path == "bfd-interval-standby")
    {
        bfd_interval_standby = value;
    }
    if(value_path == "bfd-interval-standby-in-micro-sec")
    {
        bfd_interval_standby_in_micro_sec = value;
    }
    if(value_path == "bfd-multiplier-active")
    {
        bfd_multiplier_active = value;
    }
    if(value_path == "bfd-multiplier-standby")
    {
        bfd_multiplier_standby = value;
    }
    if(value_path == "oam-interval")
    {
        oam_interval = value;
    }
    if(value_path == "req-bandwidth")
    {
        req_bandwidth = value;
    }
    if(value_path == "switch-over-time")
    {
        switch_over_time = value;
    }
    if(value_path == "switchover-trig")
    {
        switchover_trig = value;
    }
    if(value_path == "tunnel-up-time")
    {
        tunnel_up_time = value;
    }
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::Tunnel()
    :
    active_lsp{YType::enumeration, "active-lsp"},
    admin_status{YType::enumeration, "admin-status"},
    destination_global_id{YType::uint32, "destination-global-id"},
    destination_node_id{YType::str, "destination-node-id"},
    operation_status{YType::enumeration, "operation-status"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    source_global_id{YType::uint32, "source-global-id"},
    source_node_id{YType::str, "source-node-id"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    protect_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp>())
	,working_lsp(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp>())
{
    protect_lsp->parent = this;
    children["protect-lsp"] = protect_lsp;

    working_lsp->parent = this;
    children["working-lsp"] = working_lsp;

    yang_name = "tunnel"; yang_parent_name = "tp-detail-tunnel";
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::~Tunnel()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::has_data() const
{
    return active_lsp.is_set
	|| admin_status.is_set
	|| destination_global_id.is_set
	|| destination_node_id.is_set
	|| operation_status.is_set
	|| remote_tunnel_id.is_set
	|| source_global_id.is_set
	|| source_node_id.is_set
	|| source_tunnel_id.is_set
	|| tunnel_name.is_set
	|| (protect_lsp !=  nullptr && protect_lsp->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(active_lsp.operation)
	|| is_set(admin_status.operation)
	|| is_set(destination_global_id.operation)
	|| is_set(destination_node_id.operation)
	|| is_set(operation_status.operation)
	|| is_set(remote_tunnel_id.operation)
	|| is_set(source_global_id.operation)
	|| is_set(source_node_id.operation)
	|| is_set(source_tunnel_id.operation)
	|| is_set(tunnel_name.operation)
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp.is_set || is_set(active_lsp.operation)) leaf_name_data.push_back(active_lsp.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.operation)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (destination_global_id.is_set || is_set(destination_global_id.operation)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.operation)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (operation_status.is_set || is_set(operation_status.operation)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.operation)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.operation)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.operation)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp != nullptr)
        {
            children["protect-lsp"] = protect_lsp;
        }
        else
        {
            protect_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp>();
            protect_lsp->parent = this;
            children["protect-lsp"] = protect_lsp;
        }
        return children.at("protect-lsp");
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp != nullptr)
        {
            children["working-lsp"] = working_lsp;
        }
        else
        {
            working_lsp = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp>();
            working_lsp->parent = this;
            children["working-lsp"] = working_lsp;
        }
        return children.at("working-lsp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::get_children()
{
    if(children.find("protect-lsp") == children.end())
    {
        if(protect_lsp != nullptr)
        {
            children["protect-lsp"] = protect_lsp;
        }
    }

    if(children.find("working-lsp") == children.end())
    {
        if(working_lsp != nullptr)
        {
            children["working-lsp"] = working_lsp;
        }
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-lsp")
    {
        active_lsp = value;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
    }
    if(value_path == "operation-status")
    {
        operation_status = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::WorkingLsp()
    :
    bfd_state{YType::enumeration, "bfd-state"},
    lock_out{YType::boolean, "lock-out"},
    lsp_id{YType::uint32, "lsp-id"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    state{YType::enumeration, "state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"}
{
    yang_name = "working-lsp"; yang_parent_name = "tunnel";
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::~WorkingLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::has_data() const
{
    return bfd_state.is_set
	|| lock_out.is_set
	|| lsp_id.is_set
	|| rx_oam_state.is_set
	|| state.is_set
	|| tx_oam_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_state.operation)
	|| is_set(lock_out.operation)
	|| is_set(lsp_id.operation)
	|| is_set(rx_oam_state.operation)
	|| is_set(state.operation)
	|| is_set(tx_oam_state.operation);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WorkingLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_state.is_set || is_set(bfd_state.operation)) leaf_name_data.push_back(bfd_state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.operation)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.operation)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.operation)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::get_children()
{
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-state")
    {
        bfd_state = value;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
    }
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::ProtectLsp()
    :
    bfd_state{YType::enumeration, "bfd-state"},
    lock_out{YType::boolean, "lock-out"},
    lsp_id{YType::uint32, "lsp-id"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    state{YType::enumeration, "state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"}
{
    yang_name = "protect-lsp"; yang_parent_name = "tunnel";
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::~ProtectLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::has_data() const
{
    return bfd_state.is_set
	|| lock_out.is_set
	|| lsp_id.is_set
	|| rx_oam_state.is_set
	|| state.is_set
	|| tx_oam_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_state.operation)
	|| is_set(lock_out.operation)
	|| is_set(lsp_id.operation)
	|| is_set(rx_oam_state.operation)
	|| is_set(state.operation)
	|| is_set(tx_oam_state.operation);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_state.is_set || is_set(bfd_state.operation)) leaf_name_data.push_back(bfd_state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.operation)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.operation)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.operation)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::get_children()
{
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-state")
    {
        bfd_state = value;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
    }
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::WorkingLsp()
    :
    in_label{YType::uint32, "in-label"},
    link_id{YType::uint32, "link-id"},
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    out_interface_name{YType::str, "out-interface-name"},
    out_next_hop{YType::str, "out-next-hop"},
    reserved_bandwidth{YType::uint32, "reserved-bandwidth"},
    tp_out_label{YType::uint32, "tp-out-label"}
    	,
    brief_information(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation>())
{
    brief_information->parent = this;
    children["brief-information"] = brief_information;

    yang_name = "working-lsp"; yang_parent_name = "tp-detail-tunnel";
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::~WorkingLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::has_data() const
{
    return in_label.is_set
	|| link_id.is_set
	|| oam_refresh_interval.is_set
	|| out_interface_name.is_set
	|| out_next_hop.is_set
	|| reserved_bandwidth.is_set
	|| tp_out_label.is_set
	|| (brief_information !=  nullptr && brief_information->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(in_label.operation)
	|| is_set(link_id.operation)
	|| is_set(oam_refresh_interval.operation)
	|| is_set(out_interface_name.operation)
	|| is_set(out_next_hop.operation)
	|| is_set(reserved_bandwidth.operation)
	|| is_set(tp_out_label.operation)
	|| (brief_information !=  nullptr && brief_information->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WorkingLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.operation)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.operation)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());
    if (out_next_hop.is_set || is_set(out_next_hop.operation)) leaf_name_data.push_back(out_next_hop.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.operation)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());
    if (tp_out_label.is_set || is_set(tp_out_label.operation)) leaf_name_data.push_back(tp_out_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief-information")
    {
        if(brief_information != nullptr)
        {
            children["brief-information"] = brief_information;
        }
        else
        {
            brief_information = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation>();
            brief_information->parent = this;
            children["brief-information"] = brief_information;
        }
        return children.at("brief-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::get_children()
{
    if(children.find("brief-information") == children.end())
    {
        if(brief_information != nullptr)
        {
            children["brief-information"] = brief_information;
        }
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop = value;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label = value;
    }
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::BriefInformation()
    :
    bfd_state{YType::enumeration, "bfd-state"},
    lock_out{YType::boolean, "lock-out"},
    lsp_id{YType::uint32, "lsp-id"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    state{YType::enumeration, "state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"}
{
    yang_name = "brief-information"; yang_parent_name = "working-lsp";
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::~BriefInformation()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::has_data() const
{
    return bfd_state.is_set
	|| lock_out.is_set
	|| lsp_id.is_set
	|| rx_oam_state.is_set
	|| state.is_set
	|| tx_oam_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_state.operation)
	|| is_set(lock_out.operation)
	|| is_set(lsp_id.operation)
	|| is_set(rx_oam_state.operation)
	|| is_set(state.operation)
	|| is_set(tx_oam_state.operation);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-information";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BriefInformation' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_state.is_set || is_set(bfd_state.operation)) leaf_name_data.push_back(bfd_state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.operation)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.operation)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.operation)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::get_children()
{
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-state")
    {
        bfd_state = value;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
    }
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::ProtectLsp()
    :
    in_label{YType::uint32, "in-label"},
    link_id{YType::uint32, "link-id"},
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    out_interface_name{YType::str, "out-interface-name"},
    out_next_hop{YType::str, "out-next-hop"},
    reserved_bandwidth{YType::uint32, "reserved-bandwidth"},
    tp_out_label{YType::uint32, "tp-out-label"}
    	,
    brief_information(std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation>())
{
    brief_information->parent = this;
    children["brief-information"] = brief_information;

    yang_name = "protect-lsp"; yang_parent_name = "tp-detail-tunnel";
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::~ProtectLsp()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::has_data() const
{
    return in_label.is_set
	|| link_id.is_set
	|| oam_refresh_interval.is_set
	|| out_interface_name.is_set
	|| out_next_hop.is_set
	|| reserved_bandwidth.is_set
	|| tp_out_label.is_set
	|| (brief_information !=  nullptr && brief_information->has_data());
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(in_label.operation)
	|| is_set(link_id.operation)
	|| is_set(oam_refresh_interval.operation)
	|| is_set(out_interface_name.operation)
	|| is_set(out_next_hop.operation)
	|| is_set(reserved_bandwidth.operation)
	|| is_set(tp_out_label.operation)
	|| (brief_information !=  nullptr && brief_information->has_operation());
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.operation)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.operation)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());
    if (out_next_hop.is_set || is_set(out_next_hop.operation)) leaf_name_data.push_back(out_next_hop.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.operation)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());
    if (tp_out_label.is_set || is_set(tp_out_label.operation)) leaf_name_data.push_back(tp_out_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief-information")
    {
        if(brief_information != nullptr)
        {
            children["brief-information"] = brief_information;
        }
        else
        {
            brief_information = std::make_shared<MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation>();
            brief_information->parent = this;
            children["brief-information"] = brief_information;
        }
        return children.at("brief-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::get_children()
{
    if(children.find("brief-information") == children.end())
    {
        if(brief_information != nullptr)
        {
            children["brief-information"] = brief_information;
        }
    }

    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
    }
    if(value_path == "out-next-hop")
    {
        out_next_hop = value;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
    }
    if(value_path == "tp-out-label")
    {
        tp_out_label = value;
    }
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::BriefInformation()
    :
    bfd_state{YType::enumeration, "bfd-state"},
    lock_out{YType::boolean, "lock-out"},
    lsp_id{YType::uint32, "lsp-id"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    state{YType::enumeration, "state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"}
{
    yang_name = "brief-information"; yang_parent_name = "protect-lsp";
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::~BriefInformation()
{
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::has_data() const
{
    return bfd_state.is_set
	|| lock_out.is_set
	|| lsp_id.is_set
	|| rx_oam_state.is_set
	|| state.is_set
	|| tx_oam_state.is_set;
}

bool MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_state.operation)
	|| is_set(lock_out.operation)
	|| is_set(lsp_id.operation)
	|| is_set(rx_oam_state.operation)
	|| is_set(state.operation)
	|| is_set(tx_oam_state.operation);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-information";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BriefInformation' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_state.is_set || is_set(bfd_state.operation)) leaf_name_data.push_back(bfd_state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.operation)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.operation)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.operation)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::get_children()
{
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-state")
    {
        bfd_state = value;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
    }
}

MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::OamProtectionTriggers()
    :
    ais{YType::boolean, "ais"},
    ldi{YType::boolean, "ldi"},
    lkr{YType::boolean, "lkr"}
{
    yang_name = "oam-protection-triggers"; yang_parent_name = "tp-detail-tunnel";
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
    return is_set(operation)
	|| is_set(ais.operation)
	|| is_set(ldi.operation)
	|| is_set(lkr.operation);
}

std::string MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-protection-triggers";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OamProtectionTriggers' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.operation)) leaf_name_data.push_back(ais.get_name_leafdata());
    if (ldi.is_set || is_set(ldi.operation)) leaf_name_data.push_back(ldi.get_name_leafdata());
    if (lkr.is_set || is_set(lkr.operation)) leaf_name_data.push_back(lkr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::get_children()
{
    return children;
}

void MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ais")
    {
        ais = value;
    }
    if(value_path == "ldi")
    {
        ldi = value;
    }
    if(value_path == "lkr")
    {
        lkr = value;
    }
}

MplsTp::TpTunnels::TpTunnels_::TpTunnels_()
{
    yang_name = "tp-tunnels"; yang_parent_name = "tp-tunnels";
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
    return is_set(operation);
}

std::string MplsTp::TpTunnels::TpTunnels_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnels";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpTunnels_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnels_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tp-tunnel")
    {
        for(auto const & c : tp_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel>();
        c->parent = this;
        tp_tunnel.push_back(std::move(c));
        children[segment_path] = tp_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpTunnels_::get_children()
{
    for (auto const & c : tp_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTp::TpTunnels::TpTunnels_::set_value(const std::string & value_path, std::string value)
{
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::TpTunnel()
    :
    tp_tunnel_name{YType::str, "tp-tunnel-name"},
    active_lsp{YType::enumeration, "active-lsp"},
    admin_status{YType::enumeration, "admin-status"},
    destination_global_id{YType::uint32, "destination-global-id"},
    destination_node_id{YType::str, "destination-node-id"},
    operation_status{YType::enumeration, "operation-status"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    source_global_id{YType::uint32, "source-global-id"},
    source_node_id{YType::str, "source-node-id"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    protect_lsp(std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp>())
	,working_lsp(std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp>())
{
    protect_lsp->parent = this;
    children["protect-lsp"] = protect_lsp;

    working_lsp->parent = this;
    children["working-lsp"] = working_lsp;

    yang_name = "tp-tunnel"; yang_parent_name = "tp-tunnels";
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::~TpTunnel()
{
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::has_data() const
{
    return tp_tunnel_name.is_set
	|| active_lsp.is_set
	|| admin_status.is_set
	|| destination_global_id.is_set
	|| destination_node_id.is_set
	|| operation_status.is_set
	|| remote_tunnel_id.is_set
	|| source_global_id.is_set
	|| source_node_id.is_set
	|| source_tunnel_id.is_set
	|| tunnel_name.is_set
	|| (protect_lsp !=  nullptr && protect_lsp->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data());
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tp_tunnel_name.operation)
	|| is_set(active_lsp.operation)
	|| is_set(admin_status.operation)
	|| is_set(destination_global_id.operation)
	|| is_set(destination_node_id.operation)
	|| is_set(operation_status.operation)
	|| is_set(remote_tunnel_id.operation)
	|| is_set(source_global_id.operation)
	|| is_set(source_node_id.operation)
	|| is_set(source_tunnel_id.operation)
	|| is_set(tunnel_name.operation)
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation());
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-tunnel" <<"[tp-tunnel-name='" <<tp_tunnel_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-tunnels/tp-tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_tunnel_name.is_set || is_set(tp_tunnel_name.operation)) leaf_name_data.push_back(tp_tunnel_name.get_name_leafdata());
    if (active_lsp.is_set || is_set(active_lsp.operation)) leaf_name_data.push_back(active_lsp.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.operation)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (destination_global_id.is_set || is_set(destination_global_id.operation)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.operation)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (operation_status.is_set || is_set(operation_status.operation)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.operation)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.operation)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.operation)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp != nullptr)
        {
            children["protect-lsp"] = protect_lsp;
        }
        else
        {
            protect_lsp = std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp>();
            protect_lsp->parent = this;
            children["protect-lsp"] = protect_lsp;
        }
        return children.at("protect-lsp");
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp != nullptr)
        {
            children["working-lsp"] = working_lsp;
        }
        else
        {
            working_lsp = std::make_shared<MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp>();
            working_lsp->parent = this;
            children["working-lsp"] = working_lsp;
        }
        return children.at("working-lsp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpTunnels_::TpTunnel::get_children()
{
    if(children.find("protect-lsp") == children.end())
    {
        if(protect_lsp != nullptr)
        {
            children["protect-lsp"] = protect_lsp;
        }
    }

    if(children.find("working-lsp") == children.end())
    {
        if(working_lsp != nullptr)
        {
            children["working-lsp"] = working_lsp;
        }
    }

    return children;
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tp-tunnel-name")
    {
        tp_tunnel_name = value;
    }
    if(value_path == "active-lsp")
    {
        active_lsp = value;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
    }
    if(value_path == "operation-status")
    {
        operation_status = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::WorkingLsp()
    :
    bfd_state{YType::enumeration, "bfd-state"},
    lock_out{YType::boolean, "lock-out"},
    lsp_id{YType::uint32, "lsp-id"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    state{YType::enumeration, "state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"}
{
    yang_name = "working-lsp"; yang_parent_name = "tp-tunnel";
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::~WorkingLsp()
{
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::has_data() const
{
    return bfd_state.is_set
	|| lock_out.is_set
	|| lsp_id.is_set
	|| rx_oam_state.is_set
	|| state.is_set
	|| tx_oam_state.is_set;
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_state.operation)
	|| is_set(lock_out.operation)
	|| is_set(lsp_id.operation)
	|| is_set(rx_oam_state.operation)
	|| is_set(state.operation)
	|| is_set(tx_oam_state.operation);
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WorkingLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_state.is_set || is_set(bfd_state.operation)) leaf_name_data.push_back(bfd_state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.operation)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.operation)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.operation)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::get_children()
{
    return children;
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-state")
    {
        bfd_state = value;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
    }
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::ProtectLsp()
    :
    bfd_state{YType::enumeration, "bfd-state"},
    lock_out{YType::boolean, "lock-out"},
    lsp_id{YType::uint32, "lsp-id"},
    rx_oam_state{YType::enumeration, "rx-oam-state"},
    state{YType::enumeration, "state"},
    tx_oam_state{YType::enumeration, "tx-oam-state"}
{
    yang_name = "protect-lsp"; yang_parent_name = "tp-tunnel";
}

MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::~ProtectLsp()
{
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::has_data() const
{
    return bfd_state.is_set
	|| lock_out.is_set
	|| lsp_id.is_set
	|| rx_oam_state.is_set
	|| state.is_set
	|| tx_oam_state.is_set;
}

bool MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_state.operation)
	|| is_set(lock_out.operation)
	|| is_set(lsp_id.operation)
	|| is_set(rx_oam_state.operation)
	|| is_set(state.operation)
	|| is_set(tx_oam_state.operation);
}

std::string MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";

    return path_buffer.str();

}

EntityPath MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_state.is_set || is_set(bfd_state.operation)) leaf_name_data.push_back(bfd_state.get_name_leafdata());
    if (lock_out.is_set || is_set(lock_out.operation)) leaf_name_data.push_back(lock_out.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (rx_oam_state.is_set || is_set(rx_oam_state.operation)) leaf_name_data.push_back(rx_oam_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tx_oam_state.is_set || is_set(tx_oam_state.operation)) leaf_name_data.push_back(tx_oam_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::get_children()
{
    return children;
}

void MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-state")
    {
        bfd_state = value;
    }
    if(value_path == "lock-out")
    {
        lock_out = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "rx-oam-state")
    {
        rx_oam_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "tx-oam-state")
    {
        tx_oam_state = value;
    }
}

MplsTp::TpMidpoints::TpMidpoints()
    :
    tp_detail_midpoints(std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints>())
	,tp_midpoint_summary(std::make_shared<MplsTp::TpMidpoints::TpMidpointSummary>())
	,tp_midpoints(std::make_shared<MplsTp::TpMidpoints::TpMidpoints_>())
{
    tp_detail_midpoints->parent = this;
    children["tp-detail-midpoints"] = tp_detail_midpoints;

    tp_midpoint_summary->parent = this;
    children["tp-midpoint-summary"] = tp_midpoint_summary;

    tp_midpoints->parent = this;
    children["tp-midpoints"] = tp_midpoints;

    yang_name = "tp-midpoints"; yang_parent_name = "mpls-tp";
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
    return is_set(operation)
	|| (tp_detail_midpoints !=  nullptr && tp_detail_midpoints->has_operation())
	|| (tp_midpoint_summary !=  nullptr && tp_midpoint_summary->has_operation())
	|| (tp_midpoints !=  nullptr && tp_midpoints->has_operation());
}

std::string MplsTp::TpMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-midpoints";

    return path_buffer.str();

}

EntityPath MplsTp::TpMidpoints::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tp-detail-midpoints")
    {
        if(tp_detail_midpoints != nullptr)
        {
            children["tp-detail-midpoints"] = tp_detail_midpoints;
        }
        else
        {
            tp_detail_midpoints = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints>();
            tp_detail_midpoints->parent = this;
            children["tp-detail-midpoints"] = tp_detail_midpoints;
        }
        return children.at("tp-detail-midpoints");
    }

    if(child_yang_name == "tp-midpoint-summary")
    {
        if(tp_midpoint_summary != nullptr)
        {
            children["tp-midpoint-summary"] = tp_midpoint_summary;
        }
        else
        {
            tp_midpoint_summary = std::make_shared<MplsTp::TpMidpoints::TpMidpointSummary>();
            tp_midpoint_summary->parent = this;
            children["tp-midpoint-summary"] = tp_midpoint_summary;
        }
        return children.at("tp-midpoint-summary");
    }

    if(child_yang_name == "tp-midpoints")
    {
        if(tp_midpoints != nullptr)
        {
            children["tp-midpoints"] = tp_midpoints;
        }
        else
        {
            tp_midpoints = std::make_shared<MplsTp::TpMidpoints::TpMidpoints_>();
            tp_midpoints->parent = this;
            children["tp-midpoints"] = tp_midpoints;
        }
        return children.at("tp-midpoints");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpMidpoints::get_children()
{
    if(children.find("tp-detail-midpoints") == children.end())
    {
        if(tp_detail_midpoints != nullptr)
        {
            children["tp-detail-midpoints"] = tp_detail_midpoints;
        }
    }

    if(children.find("tp-midpoint-summary") == children.end())
    {
        if(tp_midpoint_summary != nullptr)
        {
            children["tp-midpoint-summary"] = tp_midpoint_summary;
        }
    }

    if(children.find("tp-midpoints") == children.end())
    {
        if(tp_midpoints != nullptr)
        {
            children["tp-midpoints"] = tp_midpoints;
        }
    }

    return children;
}

void MplsTp::TpMidpoints::set_value(const std::string & value_path, std::string value)
{
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoints()
{
    yang_name = "tp-detail-midpoints"; yang_parent_name = "tp-midpoints";
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
    return is_set(operation);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-midpoints";

    return path_buffer.str();

}

EntityPath MplsTp::TpMidpoints::TpDetailMidpoints::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tp-detail-midpoint")
    {
        for(auto const & c : tp_detail_midpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint>();
        c->parent = this;
        tp_detail_midpoint.push_back(std::move(c));
        children[segment_path] = tp_detail_midpoint.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpMidpoints::TpDetailMidpoints::get_children()
{
    for (auto const & c : tp_detail_midpoint)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::set_value(const std::string & value_path, std::string value)
{
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
    children["brief-lsp-information"] = brief_lsp_information;

    forward_lsp->parent = this;
    children["forward-lsp"] = forward_lsp;

    reverse_lsp->parent = this;
    children["reverse-lsp"] = reverse_lsp;

    yang_name = "tp-detail-midpoint"; yang_parent_name = "tp-detail-midpoints";
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
    return is_set(operation)
	|| is_set(tp_midpoint_name.operation)
	|| is_set(forward_lsp_reserved_bandwidth.operation)
	|| is_set(reverse_lsp_reserved_bandwidth.operation)
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_operation())
	|| (forward_lsp !=  nullptr && forward_lsp->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation());
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-detail-midpoint" <<"[tp-midpoint-name='" <<tp_midpoint_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/tp-detail-midpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_midpoint_name.is_set || is_set(tp_midpoint_name.operation)) leaf_name_data.push_back(tp_midpoint_name.get_name_leafdata());
    if (forward_lsp_reserved_bandwidth.is_set || is_set(forward_lsp_reserved_bandwidth.operation)) leaf_name_data.push_back(forward_lsp_reserved_bandwidth.get_name_leafdata());
    if (reverse_lsp_reserved_bandwidth.is_set || is_set(reverse_lsp_reserved_bandwidth.operation)) leaf_name_data.push_back(reverse_lsp_reserved_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief-lsp-information")
    {
        if(brief_lsp_information != nullptr)
        {
            children["brief-lsp-information"] = brief_lsp_information;
        }
        else
        {
            brief_lsp_information = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation>();
            brief_lsp_information->parent = this;
            children["brief-lsp-information"] = brief_lsp_information;
        }
        return children.at("brief-lsp-information");
    }

    if(child_yang_name == "forward-lsp")
    {
        if(forward_lsp != nullptr)
        {
            children["forward-lsp"] = forward_lsp;
        }
        else
        {
            forward_lsp = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp>();
            forward_lsp->parent = this;
            children["forward-lsp"] = forward_lsp;
        }
        return children.at("forward-lsp");
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp != nullptr)
        {
            children["reverse-lsp"] = reverse_lsp;
        }
        else
        {
            reverse_lsp = std::make_shared<MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp>();
            reverse_lsp->parent = this;
            children["reverse-lsp"] = reverse_lsp;
        }
        return children.at("reverse-lsp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::get_children()
{
    if(children.find("brief-lsp-information") == children.end())
    {
        if(brief_lsp_information != nullptr)
        {
            children["brief-lsp-information"] = brief_lsp_information;
        }
    }

    if(children.find("forward-lsp") == children.end())
    {
        if(forward_lsp != nullptr)
        {
            children["forward-lsp"] = forward_lsp;
        }
    }

    if(children.find("reverse-lsp") == children.end())
    {
        if(reverse_lsp != nullptr)
        {
            children["reverse-lsp"] = reverse_lsp;
        }
    }

    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tp-midpoint-name")
    {
        tp_midpoint_name = value;
    }
    if(value_path == "forward-lsp-reserved-bandwidth")
    {
        forward_lsp_reserved_bandwidth = value;
    }
    if(value_path == "reverse-lsp-reserved-bandwidth")
    {
        reverse_lsp_reserved_bandwidth = value;
    }
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::BriefLspInformation()
    :
    destination_global_id{YType::uint32, "destination-global-id"},
    destination_node_id{YType::str, "destination-node-id"},
    destination_tunnel_id{YType::uint32, "destination-tunnel-id"},
    forward_lsp_state{YType::enumeration, "forward-lsp-state"},
    lsp_id{YType::uint32, "lsp-id"},
    midpoint_name{YType::str, "midpoint-name"},
    reverse_lsp_state{YType::enumeration, "reverse-lsp-state"},
    source_global_id{YType::uint32, "source-global-id"},
    source_node_id{YType::str, "source-node-id"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "brief-lsp-information"; yang_parent_name = "tp-detail-midpoint";
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::~BriefLspInformation()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::has_data() const
{
    return destination_global_id.is_set
	|| destination_node_id.is_set
	|| destination_tunnel_id.is_set
	|| forward_lsp_state.is_set
	|| lsp_id.is_set
	|| midpoint_name.is_set
	|| reverse_lsp_state.is_set
	|| source_global_id.is_set
	|| source_node_id.is_set
	|| source_tunnel_id.is_set
	|| tunnel_name.is_set;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_global_id.operation)
	|| is_set(destination_node_id.operation)
	|| is_set(destination_tunnel_id.operation)
	|| is_set(forward_lsp_state.operation)
	|| is_set(lsp_id.operation)
	|| is_set(midpoint_name.operation)
	|| is_set(reverse_lsp_state.operation)
	|| is_set(source_global_id.operation)
	|| is_set(source_node_id.operation)
	|| is_set(source_tunnel_id.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-lsp-information";

    return path_buffer.str();

}

EntityPath MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BriefLspInformation' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_global_id.is_set || is_set(destination_global_id.operation)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.operation)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (destination_tunnel_id.is_set || is_set(destination_tunnel_id.operation)) leaf_name_data.push_back(destination_tunnel_id.get_name_leafdata());
    if (forward_lsp_state.is_set || is_set(forward_lsp_state.operation)) leaf_name_data.push_back(forward_lsp_state.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (midpoint_name.is_set || is_set(midpoint_name.operation)) leaf_name_data.push_back(midpoint_name.get_name_leafdata());
    if (reverse_lsp_state.is_set || is_set(reverse_lsp_state.operation)) leaf_name_data.push_back(reverse_lsp_state.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.operation)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.operation)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.operation)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::get_children()
{
    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
    }
    if(value_path == "destination-tunnel-id")
    {
        destination_tunnel_id = value;
    }
    if(value_path == "forward-lsp-state")
    {
        forward_lsp_state = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "midpoint-name")
    {
        midpoint_name = value;
    }
    if(value_path == "reverse-lsp-state")
    {
        reverse_lsp_state = value;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::ForwardLsp()
    :
    bandwidth{YType::uint32, "bandwidth"},
    in_label{YType::uint32, "in-label"},
    next_hop_address{YType::str, "next-hop-address"},
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"},
    outgoing_interface{YType::str, "outgoing-interface"}
{
    yang_name = "forward-lsp"; yang_parent_name = "tp-detail-midpoint";
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::~ForwardLsp()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::has_data() const
{
    return bandwidth.is_set
	|| in_label.is_set
	|| next_hop_address.is_set
	|| oam_refresh_interval.is_set
	|| out_label.is_set
	|| out_link.is_set
	|| outgoing_interface.is_set;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(in_label.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(oam_refresh_interval.operation)
	|| is_set(out_label.operation)
	|| is_set(out_link.operation)
	|| is_set(outgoing_interface.operation);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-lsp";

    return path_buffer.str();

}

EntityPath MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.operation)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.operation)) leaf_name_data.push_back(out_link.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::get_children()
{
    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "out-link")
    {
        out_link = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::ReverseLsp()
    :
    bandwidth{YType::uint32, "bandwidth"},
    in_label{YType::uint32, "in-label"},
    next_hop_address{YType::str, "next-hop-address"},
    oam_refresh_interval{YType::uint32, "oam-refresh-interval"},
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"},
    outgoing_interface{YType::str, "outgoing-interface"}
{
    yang_name = "reverse-lsp"; yang_parent_name = "tp-detail-midpoint";
}

MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::~ReverseLsp()
{
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::has_data() const
{
    return bandwidth.is_set
	|| in_label.is_set
	|| next_hop_address.is_set
	|| oam_refresh_interval.is_set
	|| out_label.is_set
	|| out_link.is_set
	|| outgoing_interface.is_set;
}

bool MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(in_label.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(oam_refresh_interval.operation)
	|| is_set(out_label.operation)
	|| is_set(out_link.operation)
	|| is_set(outgoing_interface.operation);
}

std::string MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";

    return path_buffer.str();

}

EntityPath MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (oam_refresh_interval.is_set || is_set(oam_refresh_interval.operation)) leaf_name_data.push_back(oam_refresh_interval.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.operation)) leaf_name_data.push_back(out_link.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::get_children()
{
    return children;
}

void MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "oam-refresh-interval")
    {
        oam_refresh_interval = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "out-link")
    {
        out_link = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
}

MplsTp::TpMidpoints::TpMidpointSummary::TpMidpointSummary()
    :
    down_forward_ls_ps{YType::uint32, "down-forward-ls-ps"},
    down_reverse_ls_ps{YType::uint32, "down-reverse-ls-ps"},
    mid_points{YType::uint32, "mid-points"},
    up_forward_ls_ps{YType::uint32, "up-forward-ls-ps"},
    up_reverse_ls_ps{YType::uint32, "up-reverse-ls-ps"}
{
    yang_name = "tp-midpoint-summary"; yang_parent_name = "tp-midpoints";
}

MplsTp::TpMidpoints::TpMidpointSummary::~TpMidpointSummary()
{
}

bool MplsTp::TpMidpoints::TpMidpointSummary::has_data() const
{
    return down_forward_ls_ps.is_set
	|| down_reverse_ls_ps.is_set
	|| mid_points.is_set
	|| up_forward_ls_ps.is_set
	|| up_reverse_ls_ps.is_set;
}

bool MplsTp::TpMidpoints::TpMidpointSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(down_forward_ls_ps.operation)
	|| is_set(down_reverse_ls_ps.operation)
	|| is_set(mid_points.operation)
	|| is_set(up_forward_ls_ps.operation)
	|| is_set(up_reverse_ls_ps.operation);
}

std::string MplsTp::TpMidpoints::TpMidpointSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-midpoint-summary";

    return path_buffer.str();

}

EntityPath MplsTp::TpMidpoints::TpMidpointSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_forward_ls_ps.is_set || is_set(down_forward_ls_ps.operation)) leaf_name_data.push_back(down_forward_ls_ps.get_name_leafdata());
    if (down_reverse_ls_ps.is_set || is_set(down_reverse_ls_ps.operation)) leaf_name_data.push_back(down_reverse_ls_ps.get_name_leafdata());
    if (mid_points.is_set || is_set(mid_points.operation)) leaf_name_data.push_back(mid_points.get_name_leafdata());
    if (up_forward_ls_ps.is_set || is_set(up_forward_ls_ps.operation)) leaf_name_data.push_back(up_forward_ls_ps.get_name_leafdata());
    if (up_reverse_ls_ps.is_set || is_set(up_reverse_ls_ps.operation)) leaf_name_data.push_back(up_reverse_ls_ps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpMidpointSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpMidpoints::TpMidpointSummary::get_children()
{
    return children;
}

void MplsTp::TpMidpoints::TpMidpointSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-forward-ls-ps")
    {
        down_forward_ls_ps = value;
    }
    if(value_path == "down-reverse-ls-ps")
    {
        down_reverse_ls_ps = value;
    }
    if(value_path == "mid-points")
    {
        mid_points = value;
    }
    if(value_path == "up-forward-ls-ps")
    {
        up_forward_ls_ps = value;
    }
    if(value_path == "up-reverse-ls-ps")
    {
        up_reverse_ls_ps = value;
    }
}

MplsTp::TpMidpoints::TpMidpoints_::TpMidpoints_()
{
    yang_name = "tp-midpoints"; yang_parent_name = "tp-midpoints";
}

MplsTp::TpMidpoints::TpMidpoints_::~TpMidpoints_()
{
}

bool MplsTp::TpMidpoints::TpMidpoints_::has_data() const
{
    for (std::size_t index=0; index<tp_midpoint.size(); index++)
    {
        if(tp_midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTp::TpMidpoints::TpMidpoints_::has_operation() const
{
    for (std::size_t index=0; index<tp_midpoint.size(); index++)
    {
        if(tp_midpoint[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTp::TpMidpoints::TpMidpoints_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-midpoints";

    return path_buffer.str();

}

EntityPath MplsTp::TpMidpoints::TpMidpoints_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpMidpoints_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tp-midpoint")
    {
        for(auto const & c : tp_midpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint>();
        c->parent = this;
        tp_midpoint.push_back(std::move(c));
        children[segment_path] = tp_midpoint.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpMidpoints::TpMidpoints_::get_children()
{
    for (auto const & c : tp_midpoint)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTp::TpMidpoints::TpMidpoints_::set_value(const std::string & value_path, std::string value)
{
}

MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::TpMidpoint()
    :
    tp_midpoint_name{YType::str, "tp-midpoint-name"},
    destination_global_id{YType::uint32, "destination-global-id"},
    destination_node_id{YType::str, "destination-node-id"},
    destination_tunnel_id{YType::uint32, "destination-tunnel-id"},
    forward_lsp_state{YType::enumeration, "forward-lsp-state"},
    lsp_id{YType::uint32, "lsp-id"},
    midpoint_name{YType::str, "midpoint-name"},
    reverse_lsp_state{YType::enumeration, "reverse-lsp-state"},
    source_global_id{YType::uint32, "source-global-id"},
    source_node_id{YType::str, "source-node-id"},
    source_tunnel_id{YType::uint32, "source-tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "tp-midpoint"; yang_parent_name = "tp-midpoints";
}

MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::~TpMidpoint()
{
}

bool MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::has_data() const
{
    return tp_midpoint_name.is_set
	|| destination_global_id.is_set
	|| destination_node_id.is_set
	|| destination_tunnel_id.is_set
	|| forward_lsp_state.is_set
	|| lsp_id.is_set
	|| midpoint_name.is_set
	|| reverse_lsp_state.is_set
	|| source_global_id.is_set
	|| source_node_id.is_set
	|| source_tunnel_id.is_set
	|| tunnel_name.is_set;
}

bool MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::has_operation() const
{
    return is_set(operation)
	|| is_set(tp_midpoint_name.operation)
	|| is_set(destination_global_id.operation)
	|| is_set(destination_node_id.operation)
	|| is_set(destination_tunnel_id.operation)
	|| is_set(forward_lsp_state.operation)
	|| is_set(lsp_id.operation)
	|| is_set(midpoint_name.operation)
	|| is_set(reverse_lsp_state.operation)
	|| is_set(source_global_id.operation)
	|| is_set(source_node_id.operation)
	|| is_set(source_tunnel_id.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-midpoint" <<"[tp-midpoint-name='" <<tp_midpoint_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-midpoints/tp-midpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tp_midpoint_name.is_set || is_set(tp_midpoint_name.operation)) leaf_name_data.push_back(tp_midpoint_name.get_name_leafdata());
    if (destination_global_id.is_set || is_set(destination_global_id.operation)) leaf_name_data.push_back(destination_global_id.get_name_leafdata());
    if (destination_node_id.is_set || is_set(destination_node_id.operation)) leaf_name_data.push_back(destination_node_id.get_name_leafdata());
    if (destination_tunnel_id.is_set || is_set(destination_tunnel_id.operation)) leaf_name_data.push_back(destination_tunnel_id.get_name_leafdata());
    if (forward_lsp_state.is_set || is_set(forward_lsp_state.operation)) leaf_name_data.push_back(forward_lsp_state.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (midpoint_name.is_set || is_set(midpoint_name.operation)) leaf_name_data.push_back(midpoint_name.get_name_leafdata());
    if (reverse_lsp_state.is_set || is_set(reverse_lsp_state.operation)) leaf_name_data.push_back(reverse_lsp_state.get_name_leafdata());
    if (source_global_id.is_set || is_set(source_global_id.operation)) leaf_name_data.push_back(source_global_id.get_name_leafdata());
    if (source_node_id.is_set || is_set(source_node_id.operation)) leaf_name_data.push_back(source_node_id.get_name_leafdata());
    if (source_tunnel_id.is_set || is_set(source_tunnel_id.operation)) leaf_name_data.push_back(source_tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::get_children()
{
    return children;
}

void MplsTp::TpMidpoints::TpMidpoints_::TpMidpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tp-midpoint-name")
    {
        tp_midpoint_name = value;
    }
    if(value_path == "destination-global-id")
    {
        destination_global_id = value;
    }
    if(value_path == "destination-node-id")
    {
        destination_node_id = value;
    }
    if(value_path == "destination-tunnel-id")
    {
        destination_tunnel_id = value;
    }
    if(value_path == "forward-lsp-state")
    {
        forward_lsp_state = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "midpoint-name")
    {
        midpoint_name = value;
    }
    if(value_path == "reverse-lsp-state")
    {
        reverse_lsp_state = value;
    }
    if(value_path == "source-global-id")
    {
        source_global_id = value;
    }
    if(value_path == "source-node-id")
    {
        source_node_id = value;
    }
    if(value_path == "source-tunnel-id")
    {
        source_tunnel_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTp::TpGlobalParameters::TpGlobalParameters()
    :
    alarm_suppression{YType::boolean, "alarm-suppression"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_interval_in_micro_sec{YType::boolean, "bfd-interval-in-micro-sec"},
    bfd_interval_standby{YType::uint32, "bfd-interval-standby"},
    bfd_interval_standby_in_micro_sec{YType::boolean, "bfd-interval-standby-in-micro-sec"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    bfd_multiplier_standby{YType::uint32, "bfd-multiplier-standby"},
    global_id{YType::uint32, "global-id"},
    node_id{YType::str, "node-id"},
    oam_refresh{YType::uint32, "oam-refresh"},
    soak_time{YType::uint32, "soak-time"},
    wait_to_restore_interval{YType::uint32, "wait-to-restore-interval"}
    	,
    oam_protection_triggers(std::make_shared<MplsTp::TpGlobalParameters::OamProtectionTriggers>())
{
    oam_protection_triggers->parent = this;
    children["oam-protection-triggers"] = oam_protection_triggers;

    yang_name = "tp-global-parameters"; yang_parent_name = "mpls-tp";
}

MplsTp::TpGlobalParameters::~TpGlobalParameters()
{
}

bool MplsTp::TpGlobalParameters::has_data() const
{
    return alarm_suppression.is_set
	|| bfd_interval.is_set
	|| bfd_interval_in_micro_sec.is_set
	|| bfd_interval_standby.is_set
	|| bfd_interval_standby_in_micro_sec.is_set
	|| bfd_multiplier.is_set
	|| bfd_multiplier_standby.is_set
	|| global_id.is_set
	|| node_id.is_set
	|| oam_refresh.is_set
	|| soak_time.is_set
	|| wait_to_restore_interval.is_set
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_data());
}

bool MplsTp::TpGlobalParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(alarm_suppression.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_interval_in_micro_sec.operation)
	|| is_set(bfd_interval_standby.operation)
	|| is_set(bfd_interval_standby_in_micro_sec.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(bfd_multiplier_standby.operation)
	|| is_set(global_id.operation)
	|| is_set(node_id.operation)
	|| is_set(oam_refresh.operation)
	|| is_set(soak_time.operation)
	|| is_set(wait_to_restore_interval.operation)
	|| (oam_protection_triggers !=  nullptr && oam_protection_triggers->has_operation());
}

std::string MplsTp::TpGlobalParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-global-parameters";

    return path_buffer.str();

}

EntityPath MplsTp::TpGlobalParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_suppression.is_set || is_set(alarm_suppression.operation)) leaf_name_data.push_back(alarm_suppression.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_interval_in_micro_sec.is_set || is_set(bfd_interval_in_micro_sec.operation)) leaf_name_data.push_back(bfd_interval_in_micro_sec.get_name_leafdata());
    if (bfd_interval_standby.is_set || is_set(bfd_interval_standby.operation)) leaf_name_data.push_back(bfd_interval_standby.get_name_leafdata());
    if (bfd_interval_standby_in_micro_sec.is_set || is_set(bfd_interval_standby_in_micro_sec.operation)) leaf_name_data.push_back(bfd_interval_standby_in_micro_sec.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_multiplier_standby.is_set || is_set(bfd_multiplier_standby.operation)) leaf_name_data.push_back(bfd_multiplier_standby.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.operation)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (oam_refresh.is_set || is_set(oam_refresh.operation)) leaf_name_data.push_back(oam_refresh.get_name_leafdata());
    if (soak_time.is_set || is_set(soak_time.operation)) leaf_name_data.push_back(soak_time.get_name_leafdata());
    if (wait_to_restore_interval.is_set || is_set(wait_to_restore_interval.operation)) leaf_name_data.push_back(wait_to_restore_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpGlobalParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oam-protection-triggers")
    {
        if(oam_protection_triggers != nullptr)
        {
            children["oam-protection-triggers"] = oam_protection_triggers;
        }
        else
        {
            oam_protection_triggers = std::make_shared<MplsTp::TpGlobalParameters::OamProtectionTriggers>();
            oam_protection_triggers->parent = this;
            children["oam-protection-triggers"] = oam_protection_triggers;
        }
        return children.at("oam-protection-triggers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpGlobalParameters::get_children()
{
    if(children.find("oam-protection-triggers") == children.end())
    {
        if(oam_protection_triggers != nullptr)
        {
            children["oam-protection-triggers"] = oam_protection_triggers;
        }
    }

    return children;
}

void MplsTp::TpGlobalParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alarm-suppression")
    {
        alarm_suppression = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-interval-in-micro-sec")
    {
        bfd_interval_in_micro_sec = value;
    }
    if(value_path == "bfd-interval-standby")
    {
        bfd_interval_standby = value;
    }
    if(value_path == "bfd-interval-standby-in-micro-sec")
    {
        bfd_interval_standby_in_micro_sec = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "bfd-multiplier-standby")
    {
        bfd_multiplier_standby = value;
    }
    if(value_path == "global-id")
    {
        global_id = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "oam-refresh")
    {
        oam_refresh = value;
    }
    if(value_path == "soak-time")
    {
        soak_time = value;
    }
    if(value_path == "wait-to-restore-interval")
    {
        wait_to_restore_interval = value;
    }
}

MplsTp::TpGlobalParameters::OamProtectionTriggers::OamProtectionTriggers()
    :
    ais{YType::boolean, "ais"},
    ldi{YType::boolean, "ldi"},
    lkr{YType::boolean, "lkr"}
{
    yang_name = "oam-protection-triggers"; yang_parent_name = "tp-global-parameters";
}

MplsTp::TpGlobalParameters::OamProtectionTriggers::~OamProtectionTriggers()
{
}

bool MplsTp::TpGlobalParameters::OamProtectionTriggers::has_data() const
{
    return ais.is_set
	|| ldi.is_set
	|| lkr.is_set;
}

bool MplsTp::TpGlobalParameters::OamProtectionTriggers::has_operation() const
{
    return is_set(operation)
	|| is_set(ais.operation)
	|| is_set(ldi.operation)
	|| is_set(lkr.operation);
}

std::string MplsTp::TpGlobalParameters::OamProtectionTriggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-protection-triggers";

    return path_buffer.str();

}

EntityPath MplsTp::TpGlobalParameters::OamProtectionTriggers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-tp/tp-global-parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.operation)) leaf_name_data.push_back(ais.get_name_leafdata());
    if (ldi.is_set || is_set(ldi.operation)) leaf_name_data.push_back(ldi.get_name_leafdata());
    if (lkr.is_set || is_set(lkr.operation)) leaf_name_data.push_back(lkr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTp::TpGlobalParameters::OamProtectionTriggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTp::TpGlobalParameters::OamProtectionTriggers::get_children()
{
    return children;
}

void MplsTp::TpGlobalParameters::OamProtectionTriggers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ais")
    {
        ais = value;
    }
    if(value_path == "ldi")
    {
        ldi = value;
    }
    if(value_path == "lkr")
    {
        lkr = value;
    }
}

MplsTeStandby::MplsTeStandby()
    :
    affinity_map(std::make_shared<MplsTeStandby::AffinityMap>())
	,announce_tunnels_info(std::make_shared<MplsTeStandby::AnnounceTunnelsInfo>())
	,attribute_sets(std::make_shared<MplsTeStandby::AttributeSets>())
	,auto_tunnel(std::make_shared<MplsTeStandby::AutoTunnel>())
	,auto_tunnel_services(std::make_shared<MplsTeStandby::AutoTunnelServices>())
	,bfd(std::make_shared<MplsTeStandby::Bfd>())
	,collaborator_timers(std::make_shared<MplsTeStandby::CollaboratorTimers>())
	,diff_serv_te_classes(std::make_shared<MplsTeStandby::DiffServTeClasses>())
	,fast_reroute(std::make_shared<MplsTeStandby::FastReroute>())
	,fib_next_hop_label_routes(std::make_shared<MplsTeStandby::FibNextHopLabelRoutes>())
	,forwarding_adjacency_destinations(std::make_shared<MplsTeStandby::ForwardingAdjacencyDestinations>())
	,hardware_out_of_resources(std::make_shared<MplsTeStandby::HardwareOutOfResources>())
	,igp_area_briefs(std::make_shared<MplsTeStandby::IgpAreaBriefs>())
	,igp_areas(std::make_shared<MplsTeStandby::IgpAreas>())
	,issu(std::make_shared<MplsTeStandby::Issu>())
	,lsp_out_of_resources(std::make_shared<MplsTeStandby::LspOutOfResources>())
	,maximum_tunnels(std::make_shared<MplsTeStandby::MaximumTunnels>())
	,nsr(std::make_shared<MplsTeStandby::Nsr>())
	,open_config(std::make_shared<MplsTeStandby::OpenConfig>())
	,p2mp(std::make_shared<MplsTeStandby::P2Mp>())
	,p2p_p2mp_tunnel(std::make_shared<MplsTeStandby::P2PP2MpTunnel>())
	,path_protection(std::make_shared<MplsTeStandby::PathProtection>())
	,signalling_counters(std::make_shared<MplsTeStandby::SignallingCounters>())
	,soft_preemption(std::make_shared<MplsTeStandby::SoftPreemption>())
	,topology(std::make_shared<MplsTeStandby::Topology>())
	,topology_briefs(std::make_shared<MplsTeStandby::TopologyBriefs>())
	,topology_nodes(std::make_shared<MplsTeStandby::TopologyNodes>())
	,tunnels(std::make_shared<MplsTeStandby::Tunnels>())
	,wrap_protection(std::make_shared<MplsTeStandby::WrapProtection>())
{
    affinity_map->parent = this;
    children["affinity-map"] = affinity_map;

    announce_tunnels_info->parent = this;
    children["announce-tunnels-info"] = announce_tunnels_info;

    attribute_sets->parent = this;
    children["attribute-sets"] = attribute_sets;

    auto_tunnel->parent = this;
    children["auto-tunnel"] = auto_tunnel;

    auto_tunnel_services->parent = this;
    children["auto-tunnel-services"] = auto_tunnel_services;

    bfd->parent = this;
    children["bfd"] = bfd;

    collaborator_timers->parent = this;
    children["collaborator-timers"] = collaborator_timers;

    diff_serv_te_classes->parent = this;
    children["diff-serv-te-classes"] = diff_serv_te_classes;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    fib_next_hop_label_routes->parent = this;
    children["fib-next-hop-label-routes"] = fib_next_hop_label_routes;

    forwarding_adjacency_destinations->parent = this;
    children["forwarding-adjacency-destinations"] = forwarding_adjacency_destinations;

    hardware_out_of_resources->parent = this;
    children["hardware-out-of-resources"] = hardware_out_of_resources;

    igp_area_briefs->parent = this;
    children["igp-area-briefs"] = igp_area_briefs;

    igp_areas->parent = this;
    children["igp-areas"] = igp_areas;

    issu->parent = this;
    children["issu"] = issu;

    lsp_out_of_resources->parent = this;
    children["lsp-out-of-resources"] = lsp_out_of_resources;

    maximum_tunnels->parent = this;
    children["maximum-tunnels"] = maximum_tunnels;

    nsr->parent = this;
    children["nsr"] = nsr;

    open_config->parent = this;
    children["open-config"] = open_config;

    p2mp->parent = this;
    children["p2mp"] = p2mp;

    p2p_p2mp_tunnel->parent = this;
    children["p2p-p2mp-tunnel"] = p2p_p2mp_tunnel;

    path_protection->parent = this;
    children["path-protection"] = path_protection;

    signalling_counters->parent = this;
    children["signalling-counters"] = signalling_counters;

    soft_preemption->parent = this;
    children["soft-preemption"] = soft_preemption;

    topology->parent = this;
    children["topology"] = topology;

    topology_briefs->parent = this;
    children["topology-briefs"] = topology_briefs;

    topology_nodes->parent = this;
    children["topology-nodes"] = topology_nodes;

    tunnels->parent = this;
    children["tunnels"] = tunnels;

    wrap_protection->parent = this;
    children["wrap-protection"] = wrap_protection;

    yang_name = "mpls-te-standby"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper";
}

MplsTeStandby::~MplsTeStandby()
{
}

bool MplsTeStandby::has_data() const
{
    return (affinity_map !=  nullptr && affinity_map->has_data())
	|| (announce_tunnels_info !=  nullptr && announce_tunnels_info->has_data())
	|| (attribute_sets !=  nullptr && attribute_sets->has_data())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_data())
	|| (auto_tunnel_services !=  nullptr && auto_tunnel_services->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (collaborator_timers !=  nullptr && collaborator_timers->has_data())
	|| (diff_serv_te_classes !=  nullptr && diff_serv_te_classes->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (fib_next_hop_label_routes !=  nullptr && fib_next_hop_label_routes->has_data())
	|| (forwarding_adjacency_destinations !=  nullptr && forwarding_adjacency_destinations->has_data())
	|| (hardware_out_of_resources !=  nullptr && hardware_out_of_resources->has_data())
	|| (igp_area_briefs !=  nullptr && igp_area_briefs->has_data())
	|| (igp_areas !=  nullptr && igp_areas->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (lsp_out_of_resources !=  nullptr && lsp_out_of_resources->has_data())
	|| (maximum_tunnels !=  nullptr && maximum_tunnels->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (open_config !=  nullptr && open_config->has_data())
	|| (p2mp !=  nullptr && p2mp->has_data())
	|| (p2p_p2mp_tunnel !=  nullptr && p2p_p2mp_tunnel->has_data())
	|| (path_protection !=  nullptr && path_protection->has_data())
	|| (signalling_counters !=  nullptr && signalling_counters->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (topology_briefs !=  nullptr && topology_briefs->has_data())
	|| (topology_nodes !=  nullptr && topology_nodes->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data())
	|| (wrap_protection !=  nullptr && wrap_protection->has_data());
}

bool MplsTeStandby::has_operation() const
{
    return is_set(operation)
	|| (affinity_map !=  nullptr && affinity_map->has_operation())
	|| (announce_tunnels_info !=  nullptr && announce_tunnels_info->has_operation())
	|| (attribute_sets !=  nullptr && attribute_sets->has_operation())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_operation())
	|| (auto_tunnel_services !=  nullptr && auto_tunnel_services->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (collaborator_timers !=  nullptr && collaborator_timers->has_operation())
	|| (diff_serv_te_classes !=  nullptr && diff_serv_te_classes->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (fib_next_hop_label_routes !=  nullptr && fib_next_hop_label_routes->has_operation())
	|| (forwarding_adjacency_destinations !=  nullptr && forwarding_adjacency_destinations->has_operation())
	|| (hardware_out_of_resources !=  nullptr && hardware_out_of_resources->has_operation())
	|| (igp_area_briefs !=  nullptr && igp_area_briefs->has_operation())
	|| (igp_areas !=  nullptr && igp_areas->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (lsp_out_of_resources !=  nullptr && lsp_out_of_resources->has_operation())
	|| (maximum_tunnels !=  nullptr && maximum_tunnels->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (open_config !=  nullptr && open_config->has_operation())
	|| (p2mp !=  nullptr && p2mp->has_operation())
	|| (p2p_p2mp_tunnel !=  nullptr && p2p_p2mp_tunnel->has_operation())
	|| (path_protection !=  nullptr && path_protection->has_operation())
	|| (signalling_counters !=  nullptr && signalling_counters->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (topology_briefs !=  nullptr && topology_briefs->has_operation())
	|| (topology_nodes !=  nullptr && topology_nodes->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation())
	|| (wrap_protection !=  nullptr && wrap_protection->has_operation());
}

std::string MplsTeStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby";

    return path_buffer.str();

}

EntityPath MplsTeStandby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity-map")
    {
        if(affinity_map != nullptr)
        {
            children["affinity-map"] = affinity_map;
        }
        else
        {
            affinity_map = std::make_shared<MplsTeStandby::AffinityMap>();
            affinity_map->parent = this;
            children["affinity-map"] = affinity_map;
        }
        return children.at("affinity-map");
    }

    if(child_yang_name == "announce-tunnels-info")
    {
        if(announce_tunnels_info != nullptr)
        {
            children["announce-tunnels-info"] = announce_tunnels_info;
        }
        else
        {
            announce_tunnels_info = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo>();
            announce_tunnels_info->parent = this;
            children["announce-tunnels-info"] = announce_tunnels_info;
        }
        return children.at("announce-tunnels-info");
    }

    if(child_yang_name == "attribute-sets")
    {
        if(attribute_sets != nullptr)
        {
            children["attribute-sets"] = attribute_sets;
        }
        else
        {
            attribute_sets = std::make_shared<MplsTeStandby::AttributeSets>();
            attribute_sets->parent = this;
            children["attribute-sets"] = attribute_sets;
        }
        return children.at("attribute-sets");
    }

    if(child_yang_name == "auto-tunnel")
    {
        if(auto_tunnel != nullptr)
        {
            children["auto-tunnel"] = auto_tunnel;
        }
        else
        {
            auto_tunnel = std::make_shared<MplsTeStandby::AutoTunnel>();
            auto_tunnel->parent = this;
            children["auto-tunnel"] = auto_tunnel;
        }
        return children.at("auto-tunnel");
    }

    if(child_yang_name == "auto-tunnel-services")
    {
        if(auto_tunnel_services != nullptr)
        {
            children["auto-tunnel-services"] = auto_tunnel_services;
        }
        else
        {
            auto_tunnel_services = std::make_shared<MplsTeStandby::AutoTunnelServices>();
            auto_tunnel_services->parent = this;
            children["auto-tunnel-services"] = auto_tunnel_services;
        }
        return children.at("auto-tunnel-services");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<MplsTeStandby::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "collaborator-timers")
    {
        if(collaborator_timers != nullptr)
        {
            children["collaborator-timers"] = collaborator_timers;
        }
        else
        {
            collaborator_timers = std::make_shared<MplsTeStandby::CollaboratorTimers>();
            collaborator_timers->parent = this;
            children["collaborator-timers"] = collaborator_timers;
        }
        return children.at("collaborator-timers");
    }

    if(child_yang_name == "diff-serv-te-classes")
    {
        if(diff_serv_te_classes != nullptr)
        {
            children["diff-serv-te-classes"] = diff_serv_te_classes;
        }
        else
        {
            diff_serv_te_classes = std::make_shared<MplsTeStandby::DiffServTeClasses>();
            diff_serv_te_classes->parent = this;
            children["diff-serv-te-classes"] = diff_serv_te_classes;
        }
        return children.at("diff-serv-te-classes");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<MplsTeStandby::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "fib-next-hop-label-routes")
    {
        if(fib_next_hop_label_routes != nullptr)
        {
            children["fib-next-hop-label-routes"] = fib_next_hop_label_routes;
        }
        else
        {
            fib_next_hop_label_routes = std::make_shared<MplsTeStandby::FibNextHopLabelRoutes>();
            fib_next_hop_label_routes->parent = this;
            children["fib-next-hop-label-routes"] = fib_next_hop_label_routes;
        }
        return children.at("fib-next-hop-label-routes");
    }

    if(child_yang_name == "forwarding-adjacency-destinations")
    {
        if(forwarding_adjacency_destinations != nullptr)
        {
            children["forwarding-adjacency-destinations"] = forwarding_adjacency_destinations;
        }
        else
        {
            forwarding_adjacency_destinations = std::make_shared<MplsTeStandby::ForwardingAdjacencyDestinations>();
            forwarding_adjacency_destinations->parent = this;
            children["forwarding-adjacency-destinations"] = forwarding_adjacency_destinations;
        }
        return children.at("forwarding-adjacency-destinations");
    }

    if(child_yang_name == "hardware-out-of-resources")
    {
        if(hardware_out_of_resources != nullptr)
        {
            children["hardware-out-of-resources"] = hardware_out_of_resources;
        }
        else
        {
            hardware_out_of_resources = std::make_shared<MplsTeStandby::HardwareOutOfResources>();
            hardware_out_of_resources->parent = this;
            children["hardware-out-of-resources"] = hardware_out_of_resources;
        }
        return children.at("hardware-out-of-resources");
    }

    if(child_yang_name == "igp-area-briefs")
    {
        if(igp_area_briefs != nullptr)
        {
            children["igp-area-briefs"] = igp_area_briefs;
        }
        else
        {
            igp_area_briefs = std::make_shared<MplsTeStandby::IgpAreaBriefs>();
            igp_area_briefs->parent = this;
            children["igp-area-briefs"] = igp_area_briefs;
        }
        return children.at("igp-area-briefs");
    }

    if(child_yang_name == "igp-areas")
    {
        if(igp_areas != nullptr)
        {
            children["igp-areas"] = igp_areas;
        }
        else
        {
            igp_areas = std::make_shared<MplsTeStandby::IgpAreas>();
            igp_areas->parent = this;
            children["igp-areas"] = igp_areas;
        }
        return children.at("igp-areas");
    }

    if(child_yang_name == "issu")
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
        else
        {
            issu = std::make_shared<MplsTeStandby::Issu>();
            issu->parent = this;
            children["issu"] = issu;
        }
        return children.at("issu");
    }

    if(child_yang_name == "lsp-out-of-resources")
    {
        if(lsp_out_of_resources != nullptr)
        {
            children["lsp-out-of-resources"] = lsp_out_of_resources;
        }
        else
        {
            lsp_out_of_resources = std::make_shared<MplsTeStandby::LspOutOfResources>();
            lsp_out_of_resources->parent = this;
            children["lsp-out-of-resources"] = lsp_out_of_resources;
        }
        return children.at("lsp-out-of-resources");
    }

    if(child_yang_name == "maximum-tunnels")
    {
        if(maximum_tunnels != nullptr)
        {
            children["maximum-tunnels"] = maximum_tunnels;
        }
        else
        {
            maximum_tunnels = std::make_shared<MplsTeStandby::MaximumTunnels>();
            maximum_tunnels->parent = this;
            children["maximum-tunnels"] = maximum_tunnels;
        }
        return children.at("maximum-tunnels");
    }

    if(child_yang_name == "nsr")
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
        else
        {
            nsr = std::make_shared<MplsTeStandby::Nsr>();
            nsr->parent = this;
            children["nsr"] = nsr;
        }
        return children.at("nsr");
    }

    if(child_yang_name == "open-config")
    {
        if(open_config != nullptr)
        {
            children["open-config"] = open_config;
        }
        else
        {
            open_config = std::make_shared<MplsTeStandby::OpenConfig>();
            open_config->parent = this;
            children["open-config"] = open_config;
        }
        return children.at("open-config");
    }

    if(child_yang_name == "p2mp")
    {
        if(p2mp != nullptr)
        {
            children["p2mp"] = p2mp;
        }
        else
        {
            p2mp = std::make_shared<MplsTeStandby::P2Mp>();
            p2mp->parent = this;
            children["p2mp"] = p2mp;
        }
        return children.at("p2mp");
    }

    if(child_yang_name == "p2p-p2mp-tunnel")
    {
        if(p2p_p2mp_tunnel != nullptr)
        {
            children["p2p-p2mp-tunnel"] = p2p_p2mp_tunnel;
        }
        else
        {
            p2p_p2mp_tunnel = std::make_shared<MplsTeStandby::P2PP2MpTunnel>();
            p2p_p2mp_tunnel->parent = this;
            children["p2p-p2mp-tunnel"] = p2p_p2mp_tunnel;
        }
        return children.at("p2p-p2mp-tunnel");
    }

    if(child_yang_name == "path-protection")
    {
        if(path_protection != nullptr)
        {
            children["path-protection"] = path_protection;
        }
        else
        {
            path_protection = std::make_shared<MplsTeStandby::PathProtection>();
            path_protection->parent = this;
            children["path-protection"] = path_protection;
        }
        return children.at("path-protection");
    }

    if(child_yang_name == "signalling-counters")
    {
        if(signalling_counters != nullptr)
        {
            children["signalling-counters"] = signalling_counters;
        }
        else
        {
            signalling_counters = std::make_shared<MplsTeStandby::SignallingCounters>();
            signalling_counters->parent = this;
            children["signalling-counters"] = signalling_counters;
        }
        return children.at("signalling-counters");
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption != nullptr)
        {
            children["soft-preemption"] = soft_preemption;
        }
        else
        {
            soft_preemption = std::make_shared<MplsTeStandby::SoftPreemption>();
            soft_preemption->parent = this;
            children["soft-preemption"] = soft_preemption;
        }
        return children.at("soft-preemption");
    }

    if(child_yang_name == "topology")
    {
        if(topology != nullptr)
        {
            children["topology"] = topology;
        }
        else
        {
            topology = std::make_shared<MplsTeStandby::Topology>();
            topology->parent = this;
            children["topology"] = topology;
        }
        return children.at("topology");
    }

    if(child_yang_name == "topology-briefs")
    {
        if(topology_briefs != nullptr)
        {
            children["topology-briefs"] = topology_briefs;
        }
        else
        {
            topology_briefs = std::make_shared<MplsTeStandby::TopologyBriefs>();
            topology_briefs->parent = this;
            children["topology-briefs"] = topology_briefs;
        }
        return children.at("topology-briefs");
    }

    if(child_yang_name == "topology-nodes")
    {
        if(topology_nodes != nullptr)
        {
            children["topology-nodes"] = topology_nodes;
        }
        else
        {
            topology_nodes = std::make_shared<MplsTeStandby::TopologyNodes>();
            topology_nodes->parent = this;
            children["topology-nodes"] = topology_nodes;
        }
        return children.at("topology-nodes");
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<MplsTeStandby::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    if(child_yang_name == "wrap-protection")
    {
        if(wrap_protection != nullptr)
        {
            children["wrap-protection"] = wrap_protection;
        }
        else
        {
            wrap_protection = std::make_shared<MplsTeStandby::WrapProtection>();
            wrap_protection->parent = this;
            children["wrap-protection"] = wrap_protection;
        }
        return children.at("wrap-protection");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::get_children()
{
    if(children.find("affinity-map") == children.end())
    {
        if(affinity_map != nullptr)
        {
            children["affinity-map"] = affinity_map;
        }
    }

    if(children.find("announce-tunnels-info") == children.end())
    {
        if(announce_tunnels_info != nullptr)
        {
            children["announce-tunnels-info"] = announce_tunnels_info;
        }
    }

    if(children.find("attribute-sets") == children.end())
    {
        if(attribute_sets != nullptr)
        {
            children["attribute-sets"] = attribute_sets;
        }
    }

    if(children.find("auto-tunnel") == children.end())
    {
        if(auto_tunnel != nullptr)
        {
            children["auto-tunnel"] = auto_tunnel;
        }
    }

    if(children.find("auto-tunnel-services") == children.end())
    {
        if(auto_tunnel_services != nullptr)
        {
            children["auto-tunnel-services"] = auto_tunnel_services;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("collaborator-timers") == children.end())
    {
        if(collaborator_timers != nullptr)
        {
            children["collaborator-timers"] = collaborator_timers;
        }
    }

    if(children.find("diff-serv-te-classes") == children.end())
    {
        if(diff_serv_te_classes != nullptr)
        {
            children["diff-serv-te-classes"] = diff_serv_te_classes;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("fib-next-hop-label-routes") == children.end())
    {
        if(fib_next_hop_label_routes != nullptr)
        {
            children["fib-next-hop-label-routes"] = fib_next_hop_label_routes;
        }
    }

    if(children.find("forwarding-adjacency-destinations") == children.end())
    {
        if(forwarding_adjacency_destinations != nullptr)
        {
            children["forwarding-adjacency-destinations"] = forwarding_adjacency_destinations;
        }
    }

    if(children.find("hardware-out-of-resources") == children.end())
    {
        if(hardware_out_of_resources != nullptr)
        {
            children["hardware-out-of-resources"] = hardware_out_of_resources;
        }
    }

    if(children.find("igp-area-briefs") == children.end())
    {
        if(igp_area_briefs != nullptr)
        {
            children["igp-area-briefs"] = igp_area_briefs;
        }
    }

    if(children.find("igp-areas") == children.end())
    {
        if(igp_areas != nullptr)
        {
            children["igp-areas"] = igp_areas;
        }
    }

    if(children.find("issu") == children.end())
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
    }

    if(children.find("lsp-out-of-resources") == children.end())
    {
        if(lsp_out_of_resources != nullptr)
        {
            children["lsp-out-of-resources"] = lsp_out_of_resources;
        }
    }

    if(children.find("maximum-tunnels") == children.end())
    {
        if(maximum_tunnels != nullptr)
        {
            children["maximum-tunnels"] = maximum_tunnels;
        }
    }

    if(children.find("nsr") == children.end())
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
    }

    if(children.find("open-config") == children.end())
    {
        if(open_config != nullptr)
        {
            children["open-config"] = open_config;
        }
    }

    if(children.find("p2mp") == children.end())
    {
        if(p2mp != nullptr)
        {
            children["p2mp"] = p2mp;
        }
    }

    if(children.find("p2p-p2mp-tunnel") == children.end())
    {
        if(p2p_p2mp_tunnel != nullptr)
        {
            children["p2p-p2mp-tunnel"] = p2p_p2mp_tunnel;
        }
    }

    if(children.find("path-protection") == children.end())
    {
        if(path_protection != nullptr)
        {
            children["path-protection"] = path_protection;
        }
    }

    if(children.find("signalling-counters") == children.end())
    {
        if(signalling_counters != nullptr)
        {
            children["signalling-counters"] = signalling_counters;
        }
    }

    if(children.find("soft-preemption") == children.end())
    {
        if(soft_preemption != nullptr)
        {
            children["soft-preemption"] = soft_preemption;
        }
    }

    if(children.find("topology") == children.end())
    {
        if(topology != nullptr)
        {
            children["topology"] = topology;
        }
    }

    if(children.find("topology-briefs") == children.end())
    {
        if(topology_briefs != nullptr)
        {
            children["topology-briefs"] = topology_briefs;
        }
    }

    if(children.find("topology-nodes") == children.end())
    {
        if(topology_nodes != nullptr)
        {
            children["topology-nodes"] = topology_nodes;
        }
    }

    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    if(children.find("wrap-protection") == children.end())
    {
        if(wrap_protection != nullptr)
        {
            children["wrap-protection"] = wrap_protection;
        }
    }

    return children;
}

void MplsTeStandby::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MplsTeStandby::clone_ptr() const
{
    return std::make_shared<MplsTeStandby>();
}

std::string MplsTeStandby::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsTeStandby::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsTeStandby::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

MplsTeStandby::HardwareOutOfResources::HardwareOutOfResources()
    :
    summary(std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary>())
{
    summary->parent = this;
    children["summary"] = summary;

    yang_name = "hardware-out-of-resources"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::HardwareOutOfResources::~HardwareOutOfResources()
{
}

bool MplsTeStandby::HardwareOutOfResources::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::HardwareOutOfResources::has_operation() const
{
    return is_set(operation)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::HardwareOutOfResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-out-of-resources";

    return path_buffer.str();

}

EntityPath MplsTeStandby::HardwareOutOfResources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::HardwareOutOfResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::HardwareOutOfResources::get_children()
{
    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void MplsTeStandby::HardwareOutOfResources::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::HardwareOutOfResources::Summary::Summary()
{
    yang_name = "summary"; yang_parent_name = "hardware-out-of-resources";
}

MplsTeStandby::HardwareOutOfResources::Summary::~Summary()
{
}

bool MplsTeStandby::HardwareOutOfResources::Summary::has_data() const
{
    for (std::size_t index=0; index<hardware_out_of_resources_state.size(); index++)
    {
        if(hardware_out_of_resources_state[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::HardwareOutOfResources::Summary::has_operation() const
{
    for (std::size_t index=0; index<hardware_out_of_resources_state.size(); index++)
    {
        if(hardware_out_of_resources_state[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsTeStandby::HardwareOutOfResources::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/hardware-out-of-resources/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::HardwareOutOfResources::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hardware-out-of-resources-state")
    {
        for(auto const & c : hardware_out_of_resources_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState>();
        c->parent = this;
        hardware_out_of_resources_state.push_back(std::move(c));
        children[segment_path] = hardware_out_of_resources_state.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::HardwareOutOfResources::Summary::get_children()
{
    for (auto const & c : hardware_out_of_resources_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::HardwareOutOfResources::Summary::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::HardwareOutOfResourcesState()
    :
    accept_reopt{YType::boolean, "accept-reopt"},
    available_bw_percentage{YType::uint32, "available-bw-percentage"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    minimum_lsp_bandwidth{YType::uint32, "minimum-lsp-bandwidth"},
    node_protection_disable{YType::boolean, "node-protection-disable"},
    te_metric_penalty{YType::uint32, "te-metric-penalty"},
    transition_duration{YType::uint32, "transition-duration"}
    	,
    statistics(std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "hardware-out-of-resources-state"; yang_parent_name = "summary";
}

MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::~HardwareOutOfResourcesState()
{
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::has_data() const
{
    return accept_reopt.is_set
	|| available_bw_percentage.is_set
	|| hw_oor_state.is_set
	|| minimum_lsp_bandwidth.is_set
	|| node_protection_disable.is_set
	|| te_metric_penalty.is_set
	|| transition_duration.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_reopt.operation)
	|| is_set(available_bw_percentage.operation)
	|| is_set(hw_oor_state.operation)
	|| is_set(minimum_lsp_bandwidth.operation)
	|| is_set(node_protection_disable.operation)
	|| is_set(te_metric_penalty.operation)
	|| is_set(transition_duration.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-out-of-resources-state";

    return path_buffer.str();

}

EntityPath MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/hardware-out-of-resources/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_reopt.is_set || is_set(accept_reopt.operation)) leaf_name_data.push_back(accept_reopt.get_name_leafdata());
    if (available_bw_percentage.is_set || is_set(available_bw_percentage.operation)) leaf_name_data.push_back(available_bw_percentage.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.operation)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (minimum_lsp_bandwidth.is_set || is_set(minimum_lsp_bandwidth.operation)) leaf_name_data.push_back(minimum_lsp_bandwidth.get_name_leafdata());
    if (node_protection_disable.is_set || is_set(node_protection_disable.operation)) leaf_name_data.push_back(node_protection_disable.get_name_leafdata());
    if (te_metric_penalty.is_set || is_set(te_metric_penalty.operation)) leaf_name_data.push_back(te_metric_penalty.get_name_leafdata());
    if (transition_duration.is_set || is_set(transition_duration.operation)) leaf_name_data.push_back(transition_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-reopt")
    {
        accept_reopt = value;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage = value;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth = value;
    }
    if(value_path == "node-protection-disable")
    {
        node_protection_disable = value;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty = value;
    }
    if(value_path == "transition-duration")
    {
        transition_duration = value;
    }
}


}
}

