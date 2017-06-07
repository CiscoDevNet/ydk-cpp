
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_qos_ma_oper_1.hpp"
#include "Cisco_IOS_XR_qos_ma_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_qos_ma_oper {

Qos::NvInterfaceTable::Interface::Input::Statistics::Statistics()
    :
    policy_name{YType::str, "policy-name"},
    satid{YType::uint32, "satid"},
    state{YType::enumeration, "state"},
    state_description{YType::str, "state-description"}
{
    yang_name = "statistics"; yang_parent_name = "input";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::~Statistics()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::has_data() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_data())
            return true;
    }
    return policy_name.is_set
	|| satid.is_set
	|| state.is_set
	|| state_description.is_set;
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::has_operation() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| is_set(satid.operation)
	|| is_set(state.operation)
	|| is_set(state_description.operation);
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (satid.is_set || is_set(satid.operation)) leaf_name_data.push_back(satid.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_description.is_set || is_set(state_description.operation)) leaf_name_data.push_back(state_description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-stats")
    {
        for(auto const & c : class_stats)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats>();
        c->parent = this;
        class_stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_stats)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "satid")
    {
        satid = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "state-description")
    {
        state_description = value;
    }
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ClassStats()
    :
    cac_state{YType::enumeration, "cac-state"},
    class_name{YType::str, "class-name"},
    counter_validity_bitmask{YType::uint64, "counter-validity-bitmask"},
    queue_descr{YType::str, "queue-descr"},
    shared_queue_id{YType::uint32, "shared-queue-id"}
    	,
    cac_stats(std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats>())
	,child_policy(std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy>())
	,general_stats(std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats>())
	,iphc_stats(std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats>())
{
    cac_stats->parent = this;

    child_policy->parent = this;

    general_stats->parent = this;

    iphc_stats->parent = this;

    yang_name = "class-stats"; yang_parent_name = "statistics";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::~ClassStats()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::has_data() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_data())
            return true;
    }
    return cac_state.is_set
	|| class_name.is_set
	|| counter_validity_bitmask.is_set
	|| queue_descr.is_set
	|| shared_queue_id.is_set
	|| (cac_stats !=  nullptr && cac_stats->has_data())
	|| (child_policy !=  nullptr && child_policy->has_data())
	|| (general_stats !=  nullptr && general_stats->has_data())
	|| (iphc_stats !=  nullptr && iphc_stats->has_data());
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::has_operation() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cac_state.operation)
	|| is_set(class_name.operation)
	|| is_set(counter_validity_bitmask.operation)
	|| is_set(queue_descr.operation)
	|| is_set(shared_queue_id.operation)
	|| (cac_stats !=  nullptr && cac_stats->has_operation())
	|| (child_policy !=  nullptr && child_policy->has_operation())
	|| (general_stats !=  nullptr && general_stats->has_operation())
	|| (iphc_stats !=  nullptr && iphc_stats->has_operation());
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_state.is_set || is_set(cac_state.operation)) leaf_name_data.push_back(cac_state.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (counter_validity_bitmask.is_set || is_set(counter_validity_bitmask.operation)) leaf_name_data.push_back(counter_validity_bitmask.get_name_leafdata());
    if (queue_descr.is_set || is_set(queue_descr.operation)) leaf_name_data.push_back(queue_descr.get_name_leafdata());
    if (shared_queue_id.is_set || is_set(shared_queue_id.operation)) leaf_name_data.push_back(shared_queue_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cac-stats")
    {
        if(cac_stats == nullptr)
        {
            cac_stats = std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats>();
        }
        return cac_stats;
    }

    if(child_yang_name == "child-policy")
    {
        if(child_policy == nullptr)
        {
            child_policy = std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy>();
        }
        return child_policy;
    }

    if(child_yang_name == "general-stats")
    {
        if(general_stats == nullptr)
        {
            general_stats = std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats>();
        }
        return general_stats;
    }

    if(child_yang_name == "iphc-stats")
    {
        if(iphc_stats == nullptr)
        {
            iphc_stats = std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats>();
        }
        return iphc_stats;
    }

    if(child_yang_name == "police-stats-array")
    {
        for(auto const & c : police_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray>();
        c->parent = this;
        police_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-stats-array")
    {
        for(auto const & c : queue_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray>();
        c->parent = this;
        queue_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "wred-stats-array")
    {
        for(auto const & c : wred_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray>();
        c->parent = this;
        wred_stats_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cac_stats != nullptr)
    {
        children["cac-stats"] = cac_stats;
    }

    if(child_policy != nullptr)
    {
        children["child-policy"] = child_policy;
    }

    if(general_stats != nullptr)
    {
        children["general-stats"] = general_stats;
    }

    if(iphc_stats != nullptr)
    {
        children["iphc-stats"] = iphc_stats;
    }

    for (auto const & c : police_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wred_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cac-state")
    {
        cac_state = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "counter-validity-bitmask")
    {
        counter_validity_bitmask = value;
    }
    if(value_path == "queue-descr")
    {
        queue_descr = value;
    }
    if(value_path == "shared-queue-id")
    {
        shared_queue_id = value;
    }
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats::GeneralStats()
    :
    match_data_rate{YType::uint32, "match-data-rate"},
    pre_policy_matched_bytes{YType::uint64, "pre-policy-matched-bytes"},
    pre_policy_matched_packets{YType::uint64, "pre-policy-matched-packets"},
    total_drop_bytes{YType::uint64, "total-drop-bytes"},
    total_drop_packets{YType::uint64, "total-drop-packets"},
    total_drop_rate{YType::uint32, "total-drop-rate"},
    total_transmit_rate{YType::uint32, "total-transmit-rate"},
    transmit_bytes{YType::uint64, "transmit-bytes"},
    transmit_packets{YType::uint64, "transmit-packets"}
{
    yang_name = "general-stats"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats::~GeneralStats()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats::has_data() const
{
    return match_data_rate.is_set
	|| pre_policy_matched_bytes.is_set
	|| pre_policy_matched_packets.is_set
	|| total_drop_bytes.is_set
	|| total_drop_packets.is_set
	|| total_drop_rate.is_set
	|| total_transmit_rate.is_set
	|| transmit_bytes.is_set
	|| transmit_packets.is_set;
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats::has_operation() const
{
    return is_set(operation)
	|| is_set(match_data_rate.operation)
	|| is_set(pre_policy_matched_bytes.operation)
	|| is_set(pre_policy_matched_packets.operation)
	|| is_set(total_drop_bytes.operation)
	|| is_set(total_drop_packets.operation)
	|| is_set(total_drop_rate.operation)
	|| is_set(total_transmit_rate.operation)
	|| is_set(transmit_bytes.operation)
	|| is_set(transmit_packets.operation);
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GeneralStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_data_rate.is_set || is_set(match_data_rate.operation)) leaf_name_data.push_back(match_data_rate.get_name_leafdata());
    if (pre_policy_matched_bytes.is_set || is_set(pre_policy_matched_bytes.operation)) leaf_name_data.push_back(pre_policy_matched_bytes.get_name_leafdata());
    if (pre_policy_matched_packets.is_set || is_set(pre_policy_matched_packets.operation)) leaf_name_data.push_back(pre_policy_matched_packets.get_name_leafdata());
    if (total_drop_bytes.is_set || is_set(total_drop_bytes.operation)) leaf_name_data.push_back(total_drop_bytes.get_name_leafdata());
    if (total_drop_packets.is_set || is_set(total_drop_packets.operation)) leaf_name_data.push_back(total_drop_packets.get_name_leafdata());
    if (total_drop_rate.is_set || is_set(total_drop_rate.operation)) leaf_name_data.push_back(total_drop_rate.get_name_leafdata());
    if (total_transmit_rate.is_set || is_set(total_transmit_rate.operation)) leaf_name_data.push_back(total_transmit_rate.get_name_leafdata());
    if (transmit_bytes.is_set || is_set(transmit_bytes.operation)) leaf_name_data.push_back(transmit_bytes.get_name_leafdata());
    if (transmit_packets.is_set || is_set(transmit_packets.operation)) leaf_name_data.push_back(transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::GeneralStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-data-rate")
    {
        match_data_rate = value;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes = value;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets = value;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes = value;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets = value;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate = value;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate = value;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes = value;
    }
    if(value_path == "transmit-packets")
    {
        transmit_packets = value;
    }
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats::IphcStats()
    :
    non_tcp_bytes_saved{YType::uint64, "non-tcp-bytes-saved"},
    non_tcp_bytes_sent_rate{YType::uint32, "non-tcp-bytes-sent-rate"},
    non_tcp_compressed_packets_out{YType::uint64, "non-tcp-compressed-packets-out"},
    non_tcp_full_header_packets_out{YType::uint64, "non-tcp-full-header-packets-out"},
    non_tcp_total_out_bytes{YType::uint64, "non-tcp-total-out-bytes"},
    non_tcp_total_out_packets{YType::uint64, "non-tcp-total-out-packets"},
    tcp_bytes_saved{YType::uint64, "tcp-bytes-saved"},
    tcp_bytes_sent_rate{YType::uint32, "tcp-bytes-sent-rate"},
    tcp_compressed_packets_out{YType::uint64, "tcp-compressed-packets-out"},
    tcp_full_header_packets_out{YType::uint64, "tcp-full-header-packets-out"},
    tcp_total_out_bytes{YType::uint64, "tcp-total-out-bytes"},
    tcp_total_out_packets{YType::uint64, "tcp-total-out-packets"}
{
    yang_name = "iphc-stats"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats::~IphcStats()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats::has_data() const
{
    return non_tcp_bytes_saved.is_set
	|| non_tcp_bytes_sent_rate.is_set
	|| non_tcp_compressed_packets_out.is_set
	|| non_tcp_full_header_packets_out.is_set
	|| non_tcp_total_out_bytes.is_set
	|| non_tcp_total_out_packets.is_set
	|| tcp_bytes_saved.is_set
	|| tcp_bytes_sent_rate.is_set
	|| tcp_compressed_packets_out.is_set
	|| tcp_full_header_packets_out.is_set
	|| tcp_total_out_bytes.is_set
	|| tcp_total_out_packets.is_set;
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(non_tcp_bytes_saved.operation)
	|| is_set(non_tcp_bytes_sent_rate.operation)
	|| is_set(non_tcp_compressed_packets_out.operation)
	|| is_set(non_tcp_full_header_packets_out.operation)
	|| is_set(non_tcp_total_out_bytes.operation)
	|| is_set(non_tcp_total_out_packets.operation)
	|| is_set(tcp_bytes_saved.operation)
	|| is_set(tcp_bytes_sent_rate.operation)
	|| is_set(tcp_compressed_packets_out.operation)
	|| is_set(tcp_full_header_packets_out.operation)
	|| is_set(tcp_total_out_bytes.operation)
	|| is_set(tcp_total_out_packets.operation);
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iphc-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IphcStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_tcp_bytes_saved.is_set || is_set(non_tcp_bytes_saved.operation)) leaf_name_data.push_back(non_tcp_bytes_saved.get_name_leafdata());
    if (non_tcp_bytes_sent_rate.is_set || is_set(non_tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(non_tcp_bytes_sent_rate.get_name_leafdata());
    if (non_tcp_compressed_packets_out.is_set || is_set(non_tcp_compressed_packets_out.operation)) leaf_name_data.push_back(non_tcp_compressed_packets_out.get_name_leafdata());
    if (non_tcp_full_header_packets_out.is_set || is_set(non_tcp_full_header_packets_out.operation)) leaf_name_data.push_back(non_tcp_full_header_packets_out.get_name_leafdata());
    if (non_tcp_total_out_bytes.is_set || is_set(non_tcp_total_out_bytes.operation)) leaf_name_data.push_back(non_tcp_total_out_bytes.get_name_leafdata());
    if (non_tcp_total_out_packets.is_set || is_set(non_tcp_total_out_packets.operation)) leaf_name_data.push_back(non_tcp_total_out_packets.get_name_leafdata());
    if (tcp_bytes_saved.is_set || is_set(tcp_bytes_saved.operation)) leaf_name_data.push_back(tcp_bytes_saved.get_name_leafdata());
    if (tcp_bytes_sent_rate.is_set || is_set(tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(tcp_bytes_sent_rate.get_name_leafdata());
    if (tcp_compressed_packets_out.is_set || is_set(tcp_compressed_packets_out.operation)) leaf_name_data.push_back(tcp_compressed_packets_out.get_name_leafdata());
    if (tcp_full_header_packets_out.is_set || is_set(tcp_full_header_packets_out.operation)) leaf_name_data.push_back(tcp_full_header_packets_out.get_name_leafdata());
    if (tcp_total_out_bytes.is_set || is_set(tcp_total_out_bytes.operation)) leaf_name_data.push_back(tcp_total_out_bytes.get_name_leafdata());
    if (tcp_total_out_packets.is_set || is_set(tcp_total_out_packets.operation)) leaf_name_data.push_back(tcp_total_out_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::IphcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-tcp-bytes-saved")
    {
        non_tcp_bytes_saved = value;
    }
    if(value_path == "non-tcp-bytes-sent-rate")
    {
        non_tcp_bytes_sent_rate = value;
    }
    if(value_path == "non-tcp-compressed-packets-out")
    {
        non_tcp_compressed_packets_out = value;
    }
    if(value_path == "non-tcp-full-header-packets-out")
    {
        non_tcp_full_header_packets_out = value;
    }
    if(value_path == "non-tcp-total-out-bytes")
    {
        non_tcp_total_out_bytes = value;
    }
    if(value_path == "non-tcp-total-out-packets")
    {
        non_tcp_total_out_packets = value;
    }
    if(value_path == "tcp-bytes-saved")
    {
        tcp_bytes_saved = value;
    }
    if(value_path == "tcp-bytes-sent-rate")
    {
        tcp_bytes_sent_rate = value;
    }
    if(value_path == "tcp-compressed-packets-out")
    {
        tcp_compressed_packets_out = value;
    }
    if(value_path == "tcp-full-header-packets-out")
    {
        tcp_full_header_packets_out = value;
    }
    if(value_path == "tcp-total-out-bytes")
    {
        tcp_total_out_bytes = value;
    }
    if(value_path == "tcp-total-out-packets")
    {
        tcp_total_out_packets = value;
    }
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::ChildPolicy()
{
    yang_name = "child-policy"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::~ChildPolicy()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::has_data() const
{
    return false;
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::has_operation() const
{
    return is_set(operation);
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-policy";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChildPolicy' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::ChildPolicy::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats::CacStats()
    :
    admit_bytes{YType::uint64, "admit-bytes"},
    admit_rates{YType::uint32, "admit-rates"},
    admitpackets{YType::uint64, "admitpackets"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    drop_rates{YType::uint32, "drop-rates"}
{
    yang_name = "cac-stats"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats::~CacStats()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats::has_data() const
{
    return admit_bytes.is_set
	|| admit_rates.is_set
	|| admitpackets.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| drop_rates.is_set;
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats::has_operation() const
{
    return is_set(operation)
	|| is_set(admit_bytes.operation)
	|| is_set(admit_rates.operation)
	|| is_set(admitpackets.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(drop_rates.operation);
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CacStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admit_bytes.is_set || is_set(admit_bytes.operation)) leaf_name_data.push_back(admit_bytes.get_name_leafdata());
    if (admit_rates.is_set || is_set(admit_rates.operation)) leaf_name_data.push_back(admit_rates.get_name_leafdata());
    if (admitpackets.is_set || is_set(admitpackets.operation)) leaf_name_data.push_back(admitpackets.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (drop_rates.is_set || is_set(drop_rates.operation)) leaf_name_data.push_back(drop_rates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::CacStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admit-bytes")
    {
        admit_bytes = value;
    }
    if(value_path == "admit-rates")
    {
        admit_rates = value;
    }
    if(value_path == "admitpackets")
    {
        admitpackets = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "drop-rates")
    {
        drop_rates = value;
    }
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueStatsArray()
    :
    atm_clp0_drop_bytes{YType::uint64, "atm-clp0-drop-bytes"},
    atm_clp0_drop_packets{YType::uint64, "atm-clp0-drop-packets"},
    atm_clp1_drop_bytes{YType::uint64, "atm-clp1-drop-bytes"},
    atm_clp1_drop_packets{YType::uint64, "atm-clp1-drop-packets"},
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    forced_wred_stats_display{YType::boolean, "forced-wred-stats-display"},
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    queue_drop_threshold{YType::uint32, "queue-drop-threshold"},
    queue_id{YType::uint32, "queue-id"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    tail_drop_bytes{YType::uint64, "tail-drop-bytes"},
    tail_drop_packets{YType::uint64, "tail-drop-packets"}
{
    yang_name = "queue-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::~QueueStatsArray()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::has_data() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_data())
            return true;
    }
    return atm_clp0_drop_bytes.is_set
	|| atm_clp0_drop_packets.is_set
	|| atm_clp1_drop_bytes.is_set
	|| atm_clp1_drop_packets.is_set
	|| conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| forced_wred_stats_display.is_set
	|| max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| queue_drop_threshold.is_set
	|| queue_id.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| tail_drop_bytes.is_set
	|| tail_drop_packets.is_set;
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::has_operation() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(atm_clp0_drop_bytes.operation)
	|| is_set(atm_clp0_drop_packets.operation)
	|| is_set(atm_clp1_drop_bytes.operation)
	|| is_set(atm_clp1_drop_packets.operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(forced_wred_stats_display.operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(queue_drop_threshold.operation)
	|| is_set(queue_id.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(tail_drop_bytes.operation)
	|| is_set(tail_drop_packets.operation);
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp0_drop_bytes.is_set || is_set(atm_clp0_drop_bytes.operation)) leaf_name_data.push_back(atm_clp0_drop_bytes.get_name_leafdata());
    if (atm_clp0_drop_packets.is_set || is_set(atm_clp0_drop_packets.operation)) leaf_name_data.push_back(atm_clp0_drop_packets.get_name_leafdata());
    if (atm_clp1_drop_bytes.is_set || is_set(atm_clp1_drop_bytes.operation)) leaf_name_data.push_back(atm_clp1_drop_bytes.get_name_leafdata());
    if (atm_clp1_drop_packets.is_set || is_set(atm_clp1_drop_packets.operation)) leaf_name_data.push_back(atm_clp1_drop_packets.get_name_leafdata());
    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (forced_wred_stats_display.is_set || is_set(forced_wred_stats_display.operation)) leaf_name_data.push_back(forced_wred_stats_display.get_name_leafdata());
    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (queue_drop_threshold.is_set || is_set(queue_drop_threshold.operation)) leaf_name_data.push_back(queue_drop_threshold.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (tail_drop_bytes.is_set || is_set(tail_drop_bytes.operation)) leaf_name_data.push_back(tail_drop_bytes.get_name_leafdata());
    if (tail_drop_packets.is_set || is_set(tail_drop_packets.operation)) leaf_name_data.push_back(tail_drop_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue-average-length")
    {
        for(auto const & c : queue_average_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength>();
        c->parent = this;
        queue_average_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-instance-length")
    {
        for(auto const & c : queue_instance_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength>();
        c->parent = this;
        queue_instance_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-max-length")
    {
        for(auto const & c : queue_max_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength>();
        c->parent = this;
        queue_max_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : queue_average_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_instance_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_max_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-clp0-drop-bytes")
    {
        atm_clp0_drop_bytes = value;
    }
    if(value_path == "atm-clp0-drop-packets")
    {
        atm_clp0_drop_packets = value;
    }
    if(value_path == "atm-clp1-drop-bytes")
    {
        atm_clp1_drop_bytes = value;
    }
    if(value_path == "atm-clp1-drop-packets")
    {
        atm_clp1_drop_packets = value;
    }
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "forced-wred-stats-display")
    {
        forced_wred_stats_display = value;
    }
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "queue-drop-threshold")
    {
        queue_drop_threshold = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes = value;
    }
    if(value_path == "tail-drop-packets")
    {
        tail_drop_packets = value;
    }
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::QueueInstanceLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-instance-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::~QueueInstanceLength()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-instance-length";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueInstanceLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::QueueAverageLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-average-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::~QueueAverageLength()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-average-length";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueAverageLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::QueueMaxLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-max-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::~QueueMaxLength()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-max-length";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueMaxLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::PoliceStatsArray()
    :
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    parent_drop_bytes{YType::uint64, "parent-drop-bytes"},
    parent_drop_packets{YType::uint64, "parent-drop-packets"},
    violate_bytes{YType::uint64, "violate-bytes"},
    violate_packets{YType::uint64, "violate-packets"},
    violate_rate{YType::uint32, "violate-rate"}
    	,
    color_class_stats(std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>())
{
    color_class_stats->parent = this;

    yang_name = "police-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::~PoliceStatsArray()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::has_data() const
{
    return conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| parent_drop_bytes.is_set
	|| parent_drop_packets.is_set
	|| violate_bytes.is_set
	|| violate_packets.is_set
	|| violate_rate.is_set
	|| (color_class_stats !=  nullptr && color_class_stats->has_data());
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(parent_drop_bytes.operation)
	|| is_set(parent_drop_packets.operation)
	|| is_set(violate_bytes.operation)
	|| is_set(violate_packets.operation)
	|| is_set(violate_rate.operation)
	|| (color_class_stats !=  nullptr && color_class_stats->has_operation());
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (parent_drop_bytes.is_set || is_set(parent_drop_bytes.operation)) leaf_name_data.push_back(parent_drop_bytes.get_name_leafdata());
    if (parent_drop_packets.is_set || is_set(parent_drop_packets.operation)) leaf_name_data.push_back(parent_drop_packets.get_name_leafdata());
    if (violate_bytes.is_set || is_set(violate_bytes.operation)) leaf_name_data.push_back(violate_bytes.get_name_leafdata());
    if (violate_packets.is_set || is_set(violate_packets.operation)) leaf_name_data.push_back(violate_packets.get_name_leafdata());
    if (violate_rate.is_set || is_set(violate_rate.operation)) leaf_name_data.push_back(violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "color-class-stats")
    {
        if(color_class_stats == nullptr)
        {
            color_class_stats = std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>();
        }
        return color_class_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(color_class_stats != nullptr)
    {
        children["color-class-stats"] = color_class_stats;
    }

    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "parent-drop-bytes")
    {
        parent_drop_bytes = value;
    }
    if(value_path == "parent-drop-packets")
    {
        parent_drop_packets = value;
    }
    if(value_path == "violate-bytes")
    {
        violate_bytes = value;
    }
    if(value_path == "violate-packets")
    {
        violate_packets = value;
    }
    if(value_path == "violate-rate")
    {
        violate_rate = value;
    }
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::ColorClassStats()
    :
    conform_class_conform_bytes{YType::uint64, "conform-class-conform-bytes"},
    conform_class_conform_packets{YType::uint64, "conform-class-conform-packets"},
    conform_class_conform_rate{YType::uint32, "conform-class-conform-rate"},
    conform_class_exceed_bytes{YType::uint64, "conform-class-exceed-bytes"},
    conform_class_exceed_packets{YType::uint64, "conform-class-exceed-packets"},
    conform_class_exceed_rate{YType::uint32, "conform-class-exceed-rate"},
    conform_class_violate_bytes{YType::uint64, "conform-class-violate-bytes"},
    conform_class_violate_packets{YType::uint64, "conform-class-violate-packets"},
    conform_class_violate_rate{YType::uint32, "conform-class-violate-rate"},
    exceed_class_exceed_bytes{YType::uint64, "exceed-class-exceed-bytes"},
    exceed_class_exceed_packets{YType::uint64, "exceed-class-exceed-packets"},
    exceed_class_exceed_rate{YType::uint32, "exceed-class-exceed-rate"},
    exceed_class_violate_bytes{YType::uint64, "exceed-class-violate-bytes"},
    exceed_class_violate_packets{YType::uint64, "exceed-class-violate-packets"},
    exceed_class_violate_rate{YType::uint32, "exceed-class-violate-rate"},
    violate_class_violate_bytes{YType::uint64, "violate-class-violate-bytes"},
    violate_class_violate_packets{YType::uint64, "violate-class-violate-packets"},
    violate_class_violate_rate{YType::uint32, "violate-class-violate-rate"}
{
    yang_name = "color-class-stats"; yang_parent_name = "police-stats-array";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::~ColorClassStats()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_data() const
{
    return conform_class_conform_bytes.is_set
	|| conform_class_conform_packets.is_set
	|| conform_class_conform_rate.is_set
	|| conform_class_exceed_bytes.is_set
	|| conform_class_exceed_packets.is_set
	|| conform_class_exceed_rate.is_set
	|| conform_class_violate_bytes.is_set
	|| conform_class_violate_packets.is_set
	|| conform_class_violate_rate.is_set
	|| exceed_class_exceed_bytes.is_set
	|| exceed_class_exceed_packets.is_set
	|| exceed_class_exceed_rate.is_set
	|| exceed_class_violate_bytes.is_set
	|| exceed_class_violate_packets.is_set
	|| exceed_class_violate_rate.is_set
	|| violate_class_violate_bytes.is_set
	|| violate_class_violate_packets.is_set
	|| violate_class_violate_rate.is_set;
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_class_conform_bytes.operation)
	|| is_set(conform_class_conform_packets.operation)
	|| is_set(conform_class_conform_rate.operation)
	|| is_set(conform_class_exceed_bytes.operation)
	|| is_set(conform_class_exceed_packets.operation)
	|| is_set(conform_class_exceed_rate.operation)
	|| is_set(conform_class_violate_bytes.operation)
	|| is_set(conform_class_violate_packets.operation)
	|| is_set(conform_class_violate_rate.operation)
	|| is_set(exceed_class_exceed_bytes.operation)
	|| is_set(exceed_class_exceed_packets.operation)
	|| is_set(exceed_class_exceed_rate.operation)
	|| is_set(exceed_class_violate_bytes.operation)
	|| is_set(exceed_class_violate_packets.operation)
	|| is_set(exceed_class_violate_rate.operation)
	|| is_set(violate_class_violate_bytes.operation)
	|| is_set(violate_class_violate_packets.operation)
	|| is_set(violate_class_violate_rate.operation);
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ColorClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_class_conform_bytes.is_set || is_set(conform_class_conform_bytes.operation)) leaf_name_data.push_back(conform_class_conform_bytes.get_name_leafdata());
    if (conform_class_conform_packets.is_set || is_set(conform_class_conform_packets.operation)) leaf_name_data.push_back(conform_class_conform_packets.get_name_leafdata());
    if (conform_class_conform_rate.is_set || is_set(conform_class_conform_rate.operation)) leaf_name_data.push_back(conform_class_conform_rate.get_name_leafdata());
    if (conform_class_exceed_bytes.is_set || is_set(conform_class_exceed_bytes.operation)) leaf_name_data.push_back(conform_class_exceed_bytes.get_name_leafdata());
    if (conform_class_exceed_packets.is_set || is_set(conform_class_exceed_packets.operation)) leaf_name_data.push_back(conform_class_exceed_packets.get_name_leafdata());
    if (conform_class_exceed_rate.is_set || is_set(conform_class_exceed_rate.operation)) leaf_name_data.push_back(conform_class_exceed_rate.get_name_leafdata());
    if (conform_class_violate_bytes.is_set || is_set(conform_class_violate_bytes.operation)) leaf_name_data.push_back(conform_class_violate_bytes.get_name_leafdata());
    if (conform_class_violate_packets.is_set || is_set(conform_class_violate_packets.operation)) leaf_name_data.push_back(conform_class_violate_packets.get_name_leafdata());
    if (conform_class_violate_rate.is_set || is_set(conform_class_violate_rate.operation)) leaf_name_data.push_back(conform_class_violate_rate.get_name_leafdata());
    if (exceed_class_exceed_bytes.is_set || is_set(exceed_class_exceed_bytes.operation)) leaf_name_data.push_back(exceed_class_exceed_bytes.get_name_leafdata());
    if (exceed_class_exceed_packets.is_set || is_set(exceed_class_exceed_packets.operation)) leaf_name_data.push_back(exceed_class_exceed_packets.get_name_leafdata());
    if (exceed_class_exceed_rate.is_set || is_set(exceed_class_exceed_rate.operation)) leaf_name_data.push_back(exceed_class_exceed_rate.get_name_leafdata());
    if (exceed_class_violate_bytes.is_set || is_set(exceed_class_violate_bytes.operation)) leaf_name_data.push_back(exceed_class_violate_bytes.get_name_leafdata());
    if (exceed_class_violate_packets.is_set || is_set(exceed_class_violate_packets.operation)) leaf_name_data.push_back(exceed_class_violate_packets.get_name_leafdata());
    if (exceed_class_violate_rate.is_set || is_set(exceed_class_violate_rate.operation)) leaf_name_data.push_back(exceed_class_violate_rate.get_name_leafdata());
    if (violate_class_violate_bytes.is_set || is_set(violate_class_violate_bytes.operation)) leaf_name_data.push_back(violate_class_violate_bytes.get_name_leafdata());
    if (violate_class_violate_packets.is_set || is_set(violate_class_violate_packets.operation)) leaf_name_data.push_back(violate_class_violate_packets.get_name_leafdata());
    if (violate_class_violate_rate.is_set || is_set(violate_class_violate_rate.operation)) leaf_name_data.push_back(violate_class_violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-class-conform-bytes")
    {
        conform_class_conform_bytes = value;
    }
    if(value_path == "conform-class-conform-packets")
    {
        conform_class_conform_packets = value;
    }
    if(value_path == "conform-class-conform-rate")
    {
        conform_class_conform_rate = value;
    }
    if(value_path == "conform-class-exceed-bytes")
    {
        conform_class_exceed_bytes = value;
    }
    if(value_path == "conform-class-exceed-packets")
    {
        conform_class_exceed_packets = value;
    }
    if(value_path == "conform-class-exceed-rate")
    {
        conform_class_exceed_rate = value;
    }
    if(value_path == "conform-class-violate-bytes")
    {
        conform_class_violate_bytes = value;
    }
    if(value_path == "conform-class-violate-packets")
    {
        conform_class_violate_packets = value;
    }
    if(value_path == "conform-class-violate-rate")
    {
        conform_class_violate_rate = value;
    }
    if(value_path == "exceed-class-exceed-bytes")
    {
        exceed_class_exceed_bytes = value;
    }
    if(value_path == "exceed-class-exceed-packets")
    {
        exceed_class_exceed_packets = value;
    }
    if(value_path == "exceed-class-exceed-rate")
    {
        exceed_class_exceed_rate = value;
    }
    if(value_path == "exceed-class-violate-bytes")
    {
        exceed_class_violate_bytes = value;
    }
    if(value_path == "exceed-class-violate-packets")
    {
        exceed_class_violate_packets = value;
    }
    if(value_path == "exceed-class-violate-rate")
    {
        exceed_class_violate_rate = value;
    }
    if(value_path == "violate-class-violate-bytes")
    {
        violate_class_violate_bytes = value;
    }
    if(value_path == "violate-class-violate-packets")
    {
        violate_class_violate_packets = value;
    }
    if(value_path == "violate-class-violate-rate")
    {
        violate_class_violate_rate = value;
    }
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::WredStatsArray()
    :
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    profile_title{YType::str, "profile-title"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    red_ecn_marked_bytes{YType::uint64, "red-ecn-marked-bytes"},
    red_ecn_marked_packets{YType::uint64, "red-ecn-marked-packets"},
    red_transmit_bytes{YType::uint64, "red-transmit-bytes"},
    red_transmit_packets{YType::uint64, "red-transmit-packets"}
{
    yang_name = "wred-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::~WredStatsArray()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::has_data() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_data())
            return true;
    }
    return max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| profile_title.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| red_ecn_marked_bytes.is_set
	|| red_ecn_marked_packets.is_set
	|| red_transmit_bytes.is_set
	|| red_transmit_packets.is_set;
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::has_operation() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(profile_title.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(red_ecn_marked_bytes.operation)
	|| is_set(red_ecn_marked_packets.operation)
	|| is_set(red_transmit_bytes.operation)
	|| is_set(red_transmit_packets.operation);
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WredStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (profile_title.is_set || is_set(profile_title.operation)) leaf_name_data.push_back(profile_title.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (red_ecn_marked_bytes.is_set || is_set(red_ecn_marked_bytes.operation)) leaf_name_data.push_back(red_ecn_marked_bytes.get_name_leafdata());
    if (red_ecn_marked_packets.is_set || is_set(red_ecn_marked_packets.operation)) leaf_name_data.push_back(red_ecn_marked_packets.get_name_leafdata());
    if (red_transmit_bytes.is_set || is_set(red_transmit_bytes.operation)) leaf_name_data.push_back(red_transmit_bytes.get_name_leafdata());
    if (red_transmit_packets.is_set || is_set(red_transmit_packets.operation)) leaf_name_data.push_back(red_transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-label")
    {
        for(auto const & c : red_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel>();
        c->parent = this;
        red_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : red_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "profile-title")
    {
        profile_title = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "red-ecn-marked-bytes")
    {
        red_ecn_marked_bytes = value;
    }
    if(value_path == "red-ecn-marked-packets")
    {
        red_ecn_marked_packets = value;
    }
    if(value_path == "red-transmit-bytes")
    {
        red_transmit_bytes = value;
    }
    if(value_path == "red-transmit-packets")
    {
        red_transmit_packets = value;
    }
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::RedLabel()
    :
    value_{YType::uint8, "value"},
    wred_type{YType::enumeration, "wred-type"}
{
    yang_name = "red-label"; yang_parent_name = "wred-stats-array";
}

Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::~RedLabel()
{
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::has_data() const
{
    return value_.is_set
	|| wred_type.is_set;
}

bool Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| is_set(wred_type.operation);
}

std::string Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-label";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedLabel' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (wred_type.is_set || is_set(wred_type.operation)) leaf_name_data.push_back(wred_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "wred-type")
    {
        wred_type = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Output()
    :
    service_policy_names(std::make_shared<Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames>())
	,statistics(std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics>())
{
    service_policy_names->parent = this;

    statistics->parent = this;

    yang_name = "output"; yang_parent_name = "interface";
}

Qos::NvInterfaceTable::Interface::Output::~Output()
{
}

bool Qos::NvInterfaceTable::Interface::Output::has_data() const
{
    return (service_policy_names !=  nullptr && service_policy_names->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Qos::NvInterfaceTable::Interface::Output::has_operation() const
{
    return is_set(operation)
	|| (service_policy_names !=  nullptr && service_policy_names->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Qos::NvInterfaceTable::Interface::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-names")
    {
        if(service_policy_names == nullptr)
        {
            service_policy_names = std::make_shared<Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames>();
        }
        return service_policy_names;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy_names != nullptr)
    {
        children["service-policy-names"] = service_policy_names;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Qos::NvInterfaceTable::Interface::Output::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyNames()
{
    yang_name = "service-policy-names"; yang_parent_name = "output";
}

Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::~ServicePolicyNames()
{
}

bool Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::has_data() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::has_operation() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-names";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyNames' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-instance")
    {
        for(auto const & c : service_policy_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance>();
        c->parent = this;
        service_policy_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance::ServicePolicyInstance()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy-instance"; yang_parent_name = "service-policy-names";
}

Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance::~ServicePolicyInstance()
{
}

bool Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance::has_data() const
{
    return service_policy_name.is_set;
}

bool Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-instance" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyInstance' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Output::ServicePolicyNames::ServicePolicyInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Statistics::Statistics()
    :
    policy_name{YType::str, "policy-name"},
    satid{YType::uint32, "satid"},
    state{YType::enumeration, "state"},
    state_description{YType::str, "state-description"}
{
    yang_name = "statistics"; yang_parent_name = "output";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::~Statistics()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::has_data() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_data())
            return true;
    }
    return policy_name.is_set
	|| satid.is_set
	|| state.is_set
	|| state_description.is_set;
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::has_operation() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| is_set(satid.operation)
	|| is_set(state.operation)
	|| is_set(state_description.operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (satid.is_set || is_set(satid.operation)) leaf_name_data.push_back(satid.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_description.is_set || is_set(state_description.operation)) leaf_name_data.push_back(state_description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-stats")
    {
        for(auto const & c : class_stats)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats>();
        c->parent = this;
        class_stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_stats)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "satid")
    {
        satid = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "state-description")
    {
        state_description = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ClassStats()
    :
    cac_state{YType::enumeration, "cac-state"},
    class_name{YType::str, "class-name"},
    counter_validity_bitmask{YType::uint64, "counter-validity-bitmask"},
    queue_descr{YType::str, "queue-descr"},
    shared_queue_id{YType::uint32, "shared-queue-id"}
    	,
    cac_stats(std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats>())
	,child_policy(std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy>())
	,general_stats(std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats>())
	,iphc_stats(std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats>())
{
    cac_stats->parent = this;

    child_policy->parent = this;

    general_stats->parent = this;

    iphc_stats->parent = this;

    yang_name = "class-stats"; yang_parent_name = "statistics";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::~ClassStats()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::has_data() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_data())
            return true;
    }
    return cac_state.is_set
	|| class_name.is_set
	|| counter_validity_bitmask.is_set
	|| queue_descr.is_set
	|| shared_queue_id.is_set
	|| (cac_stats !=  nullptr && cac_stats->has_data())
	|| (child_policy !=  nullptr && child_policy->has_data())
	|| (general_stats !=  nullptr && general_stats->has_data())
	|| (iphc_stats !=  nullptr && iphc_stats->has_data());
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::has_operation() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cac_state.operation)
	|| is_set(class_name.operation)
	|| is_set(counter_validity_bitmask.operation)
	|| is_set(queue_descr.operation)
	|| is_set(shared_queue_id.operation)
	|| (cac_stats !=  nullptr && cac_stats->has_operation())
	|| (child_policy !=  nullptr && child_policy->has_operation())
	|| (general_stats !=  nullptr && general_stats->has_operation())
	|| (iphc_stats !=  nullptr && iphc_stats->has_operation());
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_state.is_set || is_set(cac_state.operation)) leaf_name_data.push_back(cac_state.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (counter_validity_bitmask.is_set || is_set(counter_validity_bitmask.operation)) leaf_name_data.push_back(counter_validity_bitmask.get_name_leafdata());
    if (queue_descr.is_set || is_set(queue_descr.operation)) leaf_name_data.push_back(queue_descr.get_name_leafdata());
    if (shared_queue_id.is_set || is_set(shared_queue_id.operation)) leaf_name_data.push_back(shared_queue_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cac-stats")
    {
        if(cac_stats == nullptr)
        {
            cac_stats = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats>();
        }
        return cac_stats;
    }

    if(child_yang_name == "child-policy")
    {
        if(child_policy == nullptr)
        {
            child_policy = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy>();
        }
        return child_policy;
    }

    if(child_yang_name == "general-stats")
    {
        if(general_stats == nullptr)
        {
            general_stats = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats>();
        }
        return general_stats;
    }

    if(child_yang_name == "iphc-stats")
    {
        if(iphc_stats == nullptr)
        {
            iphc_stats = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats>();
        }
        return iphc_stats;
    }

    if(child_yang_name == "police-stats-array")
    {
        for(auto const & c : police_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray>();
        c->parent = this;
        police_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-stats-array")
    {
        for(auto const & c : queue_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray>();
        c->parent = this;
        queue_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "wred-stats-array")
    {
        for(auto const & c : wred_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray>();
        c->parent = this;
        wred_stats_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cac_stats != nullptr)
    {
        children["cac-stats"] = cac_stats;
    }

    if(child_policy != nullptr)
    {
        children["child-policy"] = child_policy;
    }

    if(general_stats != nullptr)
    {
        children["general-stats"] = general_stats;
    }

    if(iphc_stats != nullptr)
    {
        children["iphc-stats"] = iphc_stats;
    }

    for (auto const & c : police_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wred_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cac-state")
    {
        cac_state = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "counter-validity-bitmask")
    {
        counter_validity_bitmask = value;
    }
    if(value_path == "queue-descr")
    {
        queue_descr = value;
    }
    if(value_path == "shared-queue-id")
    {
        shared_queue_id = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats::GeneralStats()
    :
    match_data_rate{YType::uint32, "match-data-rate"},
    pre_policy_matched_bytes{YType::uint64, "pre-policy-matched-bytes"},
    pre_policy_matched_packets{YType::uint64, "pre-policy-matched-packets"},
    total_drop_bytes{YType::uint64, "total-drop-bytes"},
    total_drop_packets{YType::uint64, "total-drop-packets"},
    total_drop_rate{YType::uint32, "total-drop-rate"},
    total_transmit_rate{YType::uint32, "total-transmit-rate"},
    transmit_bytes{YType::uint64, "transmit-bytes"},
    transmit_packets{YType::uint64, "transmit-packets"}
{
    yang_name = "general-stats"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats::~GeneralStats()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats::has_data() const
{
    return match_data_rate.is_set
	|| pre_policy_matched_bytes.is_set
	|| pre_policy_matched_packets.is_set
	|| total_drop_bytes.is_set
	|| total_drop_packets.is_set
	|| total_drop_rate.is_set
	|| total_transmit_rate.is_set
	|| transmit_bytes.is_set
	|| transmit_packets.is_set;
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats::has_operation() const
{
    return is_set(operation)
	|| is_set(match_data_rate.operation)
	|| is_set(pre_policy_matched_bytes.operation)
	|| is_set(pre_policy_matched_packets.operation)
	|| is_set(total_drop_bytes.operation)
	|| is_set(total_drop_packets.operation)
	|| is_set(total_drop_rate.operation)
	|| is_set(total_transmit_rate.operation)
	|| is_set(transmit_bytes.operation)
	|| is_set(transmit_packets.operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GeneralStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_data_rate.is_set || is_set(match_data_rate.operation)) leaf_name_data.push_back(match_data_rate.get_name_leafdata());
    if (pre_policy_matched_bytes.is_set || is_set(pre_policy_matched_bytes.operation)) leaf_name_data.push_back(pre_policy_matched_bytes.get_name_leafdata());
    if (pre_policy_matched_packets.is_set || is_set(pre_policy_matched_packets.operation)) leaf_name_data.push_back(pre_policy_matched_packets.get_name_leafdata());
    if (total_drop_bytes.is_set || is_set(total_drop_bytes.operation)) leaf_name_data.push_back(total_drop_bytes.get_name_leafdata());
    if (total_drop_packets.is_set || is_set(total_drop_packets.operation)) leaf_name_data.push_back(total_drop_packets.get_name_leafdata());
    if (total_drop_rate.is_set || is_set(total_drop_rate.operation)) leaf_name_data.push_back(total_drop_rate.get_name_leafdata());
    if (total_transmit_rate.is_set || is_set(total_transmit_rate.operation)) leaf_name_data.push_back(total_transmit_rate.get_name_leafdata());
    if (transmit_bytes.is_set || is_set(transmit_bytes.operation)) leaf_name_data.push_back(transmit_bytes.get_name_leafdata());
    if (transmit_packets.is_set || is_set(transmit_packets.operation)) leaf_name_data.push_back(transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::GeneralStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-data-rate")
    {
        match_data_rate = value;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes = value;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets = value;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes = value;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets = value;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate = value;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate = value;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes = value;
    }
    if(value_path == "transmit-packets")
    {
        transmit_packets = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats::IphcStats()
    :
    non_tcp_bytes_saved{YType::uint64, "non-tcp-bytes-saved"},
    non_tcp_bytes_sent_rate{YType::uint32, "non-tcp-bytes-sent-rate"},
    non_tcp_compressed_packets_out{YType::uint64, "non-tcp-compressed-packets-out"},
    non_tcp_full_header_packets_out{YType::uint64, "non-tcp-full-header-packets-out"},
    non_tcp_total_out_bytes{YType::uint64, "non-tcp-total-out-bytes"},
    non_tcp_total_out_packets{YType::uint64, "non-tcp-total-out-packets"},
    tcp_bytes_saved{YType::uint64, "tcp-bytes-saved"},
    tcp_bytes_sent_rate{YType::uint32, "tcp-bytes-sent-rate"},
    tcp_compressed_packets_out{YType::uint64, "tcp-compressed-packets-out"},
    tcp_full_header_packets_out{YType::uint64, "tcp-full-header-packets-out"},
    tcp_total_out_bytes{YType::uint64, "tcp-total-out-bytes"},
    tcp_total_out_packets{YType::uint64, "tcp-total-out-packets"}
{
    yang_name = "iphc-stats"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats::~IphcStats()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats::has_data() const
{
    return non_tcp_bytes_saved.is_set
	|| non_tcp_bytes_sent_rate.is_set
	|| non_tcp_compressed_packets_out.is_set
	|| non_tcp_full_header_packets_out.is_set
	|| non_tcp_total_out_bytes.is_set
	|| non_tcp_total_out_packets.is_set
	|| tcp_bytes_saved.is_set
	|| tcp_bytes_sent_rate.is_set
	|| tcp_compressed_packets_out.is_set
	|| tcp_full_header_packets_out.is_set
	|| tcp_total_out_bytes.is_set
	|| tcp_total_out_packets.is_set;
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(non_tcp_bytes_saved.operation)
	|| is_set(non_tcp_bytes_sent_rate.operation)
	|| is_set(non_tcp_compressed_packets_out.operation)
	|| is_set(non_tcp_full_header_packets_out.operation)
	|| is_set(non_tcp_total_out_bytes.operation)
	|| is_set(non_tcp_total_out_packets.operation)
	|| is_set(tcp_bytes_saved.operation)
	|| is_set(tcp_bytes_sent_rate.operation)
	|| is_set(tcp_compressed_packets_out.operation)
	|| is_set(tcp_full_header_packets_out.operation)
	|| is_set(tcp_total_out_bytes.operation)
	|| is_set(tcp_total_out_packets.operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iphc-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IphcStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_tcp_bytes_saved.is_set || is_set(non_tcp_bytes_saved.operation)) leaf_name_data.push_back(non_tcp_bytes_saved.get_name_leafdata());
    if (non_tcp_bytes_sent_rate.is_set || is_set(non_tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(non_tcp_bytes_sent_rate.get_name_leafdata());
    if (non_tcp_compressed_packets_out.is_set || is_set(non_tcp_compressed_packets_out.operation)) leaf_name_data.push_back(non_tcp_compressed_packets_out.get_name_leafdata());
    if (non_tcp_full_header_packets_out.is_set || is_set(non_tcp_full_header_packets_out.operation)) leaf_name_data.push_back(non_tcp_full_header_packets_out.get_name_leafdata());
    if (non_tcp_total_out_bytes.is_set || is_set(non_tcp_total_out_bytes.operation)) leaf_name_data.push_back(non_tcp_total_out_bytes.get_name_leafdata());
    if (non_tcp_total_out_packets.is_set || is_set(non_tcp_total_out_packets.operation)) leaf_name_data.push_back(non_tcp_total_out_packets.get_name_leafdata());
    if (tcp_bytes_saved.is_set || is_set(tcp_bytes_saved.operation)) leaf_name_data.push_back(tcp_bytes_saved.get_name_leafdata());
    if (tcp_bytes_sent_rate.is_set || is_set(tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(tcp_bytes_sent_rate.get_name_leafdata());
    if (tcp_compressed_packets_out.is_set || is_set(tcp_compressed_packets_out.operation)) leaf_name_data.push_back(tcp_compressed_packets_out.get_name_leafdata());
    if (tcp_full_header_packets_out.is_set || is_set(tcp_full_header_packets_out.operation)) leaf_name_data.push_back(tcp_full_header_packets_out.get_name_leafdata());
    if (tcp_total_out_bytes.is_set || is_set(tcp_total_out_bytes.operation)) leaf_name_data.push_back(tcp_total_out_bytes.get_name_leafdata());
    if (tcp_total_out_packets.is_set || is_set(tcp_total_out_packets.operation)) leaf_name_data.push_back(tcp_total_out_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::IphcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-tcp-bytes-saved")
    {
        non_tcp_bytes_saved = value;
    }
    if(value_path == "non-tcp-bytes-sent-rate")
    {
        non_tcp_bytes_sent_rate = value;
    }
    if(value_path == "non-tcp-compressed-packets-out")
    {
        non_tcp_compressed_packets_out = value;
    }
    if(value_path == "non-tcp-full-header-packets-out")
    {
        non_tcp_full_header_packets_out = value;
    }
    if(value_path == "non-tcp-total-out-bytes")
    {
        non_tcp_total_out_bytes = value;
    }
    if(value_path == "non-tcp-total-out-packets")
    {
        non_tcp_total_out_packets = value;
    }
    if(value_path == "tcp-bytes-saved")
    {
        tcp_bytes_saved = value;
    }
    if(value_path == "tcp-bytes-sent-rate")
    {
        tcp_bytes_sent_rate = value;
    }
    if(value_path == "tcp-compressed-packets-out")
    {
        tcp_compressed_packets_out = value;
    }
    if(value_path == "tcp-full-header-packets-out")
    {
        tcp_full_header_packets_out = value;
    }
    if(value_path == "tcp-total-out-bytes")
    {
        tcp_total_out_bytes = value;
    }
    if(value_path == "tcp-total-out-packets")
    {
        tcp_total_out_packets = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::ChildPolicy()
{
    yang_name = "child-policy"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::~ChildPolicy()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::has_data() const
{
    return false;
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::has_operation() const
{
    return is_set(operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-policy";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChildPolicy' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::ChildPolicy::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats::CacStats()
    :
    admit_bytes{YType::uint64, "admit-bytes"},
    admit_rates{YType::uint32, "admit-rates"},
    admitpackets{YType::uint64, "admitpackets"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    drop_rates{YType::uint32, "drop-rates"}
{
    yang_name = "cac-stats"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats::~CacStats()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats::has_data() const
{
    return admit_bytes.is_set
	|| admit_rates.is_set
	|| admitpackets.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| drop_rates.is_set;
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats::has_operation() const
{
    return is_set(operation)
	|| is_set(admit_bytes.operation)
	|| is_set(admit_rates.operation)
	|| is_set(admitpackets.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(drop_rates.operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CacStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admit_bytes.is_set || is_set(admit_bytes.operation)) leaf_name_data.push_back(admit_bytes.get_name_leafdata());
    if (admit_rates.is_set || is_set(admit_rates.operation)) leaf_name_data.push_back(admit_rates.get_name_leafdata());
    if (admitpackets.is_set || is_set(admitpackets.operation)) leaf_name_data.push_back(admitpackets.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (drop_rates.is_set || is_set(drop_rates.operation)) leaf_name_data.push_back(drop_rates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::CacStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admit-bytes")
    {
        admit_bytes = value;
    }
    if(value_path == "admit-rates")
    {
        admit_rates = value;
    }
    if(value_path == "admitpackets")
    {
        admitpackets = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "drop-rates")
    {
        drop_rates = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueStatsArray()
    :
    atm_clp0_drop_bytes{YType::uint64, "atm-clp0-drop-bytes"},
    atm_clp0_drop_packets{YType::uint64, "atm-clp0-drop-packets"},
    atm_clp1_drop_bytes{YType::uint64, "atm-clp1-drop-bytes"},
    atm_clp1_drop_packets{YType::uint64, "atm-clp1-drop-packets"},
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    forced_wred_stats_display{YType::boolean, "forced-wred-stats-display"},
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    queue_drop_threshold{YType::uint32, "queue-drop-threshold"},
    queue_id{YType::uint32, "queue-id"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    tail_drop_bytes{YType::uint64, "tail-drop-bytes"},
    tail_drop_packets{YType::uint64, "tail-drop-packets"}
{
    yang_name = "queue-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::~QueueStatsArray()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::has_data() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_data())
            return true;
    }
    return atm_clp0_drop_bytes.is_set
	|| atm_clp0_drop_packets.is_set
	|| atm_clp1_drop_bytes.is_set
	|| atm_clp1_drop_packets.is_set
	|| conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| forced_wred_stats_display.is_set
	|| max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| queue_drop_threshold.is_set
	|| queue_id.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| tail_drop_bytes.is_set
	|| tail_drop_packets.is_set;
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::has_operation() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(atm_clp0_drop_bytes.operation)
	|| is_set(atm_clp0_drop_packets.operation)
	|| is_set(atm_clp1_drop_bytes.operation)
	|| is_set(atm_clp1_drop_packets.operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(forced_wred_stats_display.operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(queue_drop_threshold.operation)
	|| is_set(queue_id.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(tail_drop_bytes.operation)
	|| is_set(tail_drop_packets.operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp0_drop_bytes.is_set || is_set(atm_clp0_drop_bytes.operation)) leaf_name_data.push_back(atm_clp0_drop_bytes.get_name_leafdata());
    if (atm_clp0_drop_packets.is_set || is_set(atm_clp0_drop_packets.operation)) leaf_name_data.push_back(atm_clp0_drop_packets.get_name_leafdata());
    if (atm_clp1_drop_bytes.is_set || is_set(atm_clp1_drop_bytes.operation)) leaf_name_data.push_back(atm_clp1_drop_bytes.get_name_leafdata());
    if (atm_clp1_drop_packets.is_set || is_set(atm_clp1_drop_packets.operation)) leaf_name_data.push_back(atm_clp1_drop_packets.get_name_leafdata());
    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (forced_wred_stats_display.is_set || is_set(forced_wred_stats_display.operation)) leaf_name_data.push_back(forced_wred_stats_display.get_name_leafdata());
    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (queue_drop_threshold.is_set || is_set(queue_drop_threshold.operation)) leaf_name_data.push_back(queue_drop_threshold.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (tail_drop_bytes.is_set || is_set(tail_drop_bytes.operation)) leaf_name_data.push_back(tail_drop_bytes.get_name_leafdata());
    if (tail_drop_packets.is_set || is_set(tail_drop_packets.operation)) leaf_name_data.push_back(tail_drop_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue-average-length")
    {
        for(auto const & c : queue_average_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength>();
        c->parent = this;
        queue_average_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-instance-length")
    {
        for(auto const & c : queue_instance_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength>();
        c->parent = this;
        queue_instance_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-max-length")
    {
        for(auto const & c : queue_max_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength>();
        c->parent = this;
        queue_max_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : queue_average_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_instance_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_max_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-clp0-drop-bytes")
    {
        atm_clp0_drop_bytes = value;
    }
    if(value_path == "atm-clp0-drop-packets")
    {
        atm_clp0_drop_packets = value;
    }
    if(value_path == "atm-clp1-drop-bytes")
    {
        atm_clp1_drop_bytes = value;
    }
    if(value_path == "atm-clp1-drop-packets")
    {
        atm_clp1_drop_packets = value;
    }
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "forced-wred-stats-display")
    {
        forced_wred_stats_display = value;
    }
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "queue-drop-threshold")
    {
        queue_drop_threshold = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes = value;
    }
    if(value_path == "tail-drop-packets")
    {
        tail_drop_packets = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::QueueInstanceLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-instance-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::~QueueInstanceLength()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-instance-length";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueInstanceLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::QueueAverageLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-average-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::~QueueAverageLength()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-average-length";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueAverageLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::QueueMaxLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-max-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::~QueueMaxLength()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-max-length";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueMaxLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::PoliceStatsArray()
    :
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    parent_drop_bytes{YType::uint64, "parent-drop-bytes"},
    parent_drop_packets{YType::uint64, "parent-drop-packets"},
    violate_bytes{YType::uint64, "violate-bytes"},
    violate_packets{YType::uint64, "violate-packets"},
    violate_rate{YType::uint32, "violate-rate"}
    	,
    color_class_stats(std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>())
{
    color_class_stats->parent = this;

    yang_name = "police-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::~PoliceStatsArray()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::has_data() const
{
    return conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| parent_drop_bytes.is_set
	|| parent_drop_packets.is_set
	|| violate_bytes.is_set
	|| violate_packets.is_set
	|| violate_rate.is_set
	|| (color_class_stats !=  nullptr && color_class_stats->has_data());
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(parent_drop_bytes.operation)
	|| is_set(parent_drop_packets.operation)
	|| is_set(violate_bytes.operation)
	|| is_set(violate_packets.operation)
	|| is_set(violate_rate.operation)
	|| (color_class_stats !=  nullptr && color_class_stats->has_operation());
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (parent_drop_bytes.is_set || is_set(parent_drop_bytes.operation)) leaf_name_data.push_back(parent_drop_bytes.get_name_leafdata());
    if (parent_drop_packets.is_set || is_set(parent_drop_packets.operation)) leaf_name_data.push_back(parent_drop_packets.get_name_leafdata());
    if (violate_bytes.is_set || is_set(violate_bytes.operation)) leaf_name_data.push_back(violate_bytes.get_name_leafdata());
    if (violate_packets.is_set || is_set(violate_packets.operation)) leaf_name_data.push_back(violate_packets.get_name_leafdata());
    if (violate_rate.is_set || is_set(violate_rate.operation)) leaf_name_data.push_back(violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "color-class-stats")
    {
        if(color_class_stats == nullptr)
        {
            color_class_stats = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>();
        }
        return color_class_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(color_class_stats != nullptr)
    {
        children["color-class-stats"] = color_class_stats;
    }

    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "parent-drop-bytes")
    {
        parent_drop_bytes = value;
    }
    if(value_path == "parent-drop-packets")
    {
        parent_drop_packets = value;
    }
    if(value_path == "violate-bytes")
    {
        violate_bytes = value;
    }
    if(value_path == "violate-packets")
    {
        violate_packets = value;
    }
    if(value_path == "violate-rate")
    {
        violate_rate = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::ColorClassStats()
    :
    conform_class_conform_bytes{YType::uint64, "conform-class-conform-bytes"},
    conform_class_conform_packets{YType::uint64, "conform-class-conform-packets"},
    conform_class_conform_rate{YType::uint32, "conform-class-conform-rate"},
    conform_class_exceed_bytes{YType::uint64, "conform-class-exceed-bytes"},
    conform_class_exceed_packets{YType::uint64, "conform-class-exceed-packets"},
    conform_class_exceed_rate{YType::uint32, "conform-class-exceed-rate"},
    conform_class_violate_bytes{YType::uint64, "conform-class-violate-bytes"},
    conform_class_violate_packets{YType::uint64, "conform-class-violate-packets"},
    conform_class_violate_rate{YType::uint32, "conform-class-violate-rate"},
    exceed_class_exceed_bytes{YType::uint64, "exceed-class-exceed-bytes"},
    exceed_class_exceed_packets{YType::uint64, "exceed-class-exceed-packets"},
    exceed_class_exceed_rate{YType::uint32, "exceed-class-exceed-rate"},
    exceed_class_violate_bytes{YType::uint64, "exceed-class-violate-bytes"},
    exceed_class_violate_packets{YType::uint64, "exceed-class-violate-packets"},
    exceed_class_violate_rate{YType::uint32, "exceed-class-violate-rate"},
    violate_class_violate_bytes{YType::uint64, "violate-class-violate-bytes"},
    violate_class_violate_packets{YType::uint64, "violate-class-violate-packets"},
    violate_class_violate_rate{YType::uint32, "violate-class-violate-rate"}
{
    yang_name = "color-class-stats"; yang_parent_name = "police-stats-array";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::~ColorClassStats()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_data() const
{
    return conform_class_conform_bytes.is_set
	|| conform_class_conform_packets.is_set
	|| conform_class_conform_rate.is_set
	|| conform_class_exceed_bytes.is_set
	|| conform_class_exceed_packets.is_set
	|| conform_class_exceed_rate.is_set
	|| conform_class_violate_bytes.is_set
	|| conform_class_violate_packets.is_set
	|| conform_class_violate_rate.is_set
	|| exceed_class_exceed_bytes.is_set
	|| exceed_class_exceed_packets.is_set
	|| exceed_class_exceed_rate.is_set
	|| exceed_class_violate_bytes.is_set
	|| exceed_class_violate_packets.is_set
	|| exceed_class_violate_rate.is_set
	|| violate_class_violate_bytes.is_set
	|| violate_class_violate_packets.is_set
	|| violate_class_violate_rate.is_set;
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_class_conform_bytes.operation)
	|| is_set(conform_class_conform_packets.operation)
	|| is_set(conform_class_conform_rate.operation)
	|| is_set(conform_class_exceed_bytes.operation)
	|| is_set(conform_class_exceed_packets.operation)
	|| is_set(conform_class_exceed_rate.operation)
	|| is_set(conform_class_violate_bytes.operation)
	|| is_set(conform_class_violate_packets.operation)
	|| is_set(conform_class_violate_rate.operation)
	|| is_set(exceed_class_exceed_bytes.operation)
	|| is_set(exceed_class_exceed_packets.operation)
	|| is_set(exceed_class_exceed_rate.operation)
	|| is_set(exceed_class_violate_bytes.operation)
	|| is_set(exceed_class_violate_packets.operation)
	|| is_set(exceed_class_violate_rate.operation)
	|| is_set(violate_class_violate_bytes.operation)
	|| is_set(violate_class_violate_packets.operation)
	|| is_set(violate_class_violate_rate.operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ColorClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_class_conform_bytes.is_set || is_set(conform_class_conform_bytes.operation)) leaf_name_data.push_back(conform_class_conform_bytes.get_name_leafdata());
    if (conform_class_conform_packets.is_set || is_set(conform_class_conform_packets.operation)) leaf_name_data.push_back(conform_class_conform_packets.get_name_leafdata());
    if (conform_class_conform_rate.is_set || is_set(conform_class_conform_rate.operation)) leaf_name_data.push_back(conform_class_conform_rate.get_name_leafdata());
    if (conform_class_exceed_bytes.is_set || is_set(conform_class_exceed_bytes.operation)) leaf_name_data.push_back(conform_class_exceed_bytes.get_name_leafdata());
    if (conform_class_exceed_packets.is_set || is_set(conform_class_exceed_packets.operation)) leaf_name_data.push_back(conform_class_exceed_packets.get_name_leafdata());
    if (conform_class_exceed_rate.is_set || is_set(conform_class_exceed_rate.operation)) leaf_name_data.push_back(conform_class_exceed_rate.get_name_leafdata());
    if (conform_class_violate_bytes.is_set || is_set(conform_class_violate_bytes.operation)) leaf_name_data.push_back(conform_class_violate_bytes.get_name_leafdata());
    if (conform_class_violate_packets.is_set || is_set(conform_class_violate_packets.operation)) leaf_name_data.push_back(conform_class_violate_packets.get_name_leafdata());
    if (conform_class_violate_rate.is_set || is_set(conform_class_violate_rate.operation)) leaf_name_data.push_back(conform_class_violate_rate.get_name_leafdata());
    if (exceed_class_exceed_bytes.is_set || is_set(exceed_class_exceed_bytes.operation)) leaf_name_data.push_back(exceed_class_exceed_bytes.get_name_leafdata());
    if (exceed_class_exceed_packets.is_set || is_set(exceed_class_exceed_packets.operation)) leaf_name_data.push_back(exceed_class_exceed_packets.get_name_leafdata());
    if (exceed_class_exceed_rate.is_set || is_set(exceed_class_exceed_rate.operation)) leaf_name_data.push_back(exceed_class_exceed_rate.get_name_leafdata());
    if (exceed_class_violate_bytes.is_set || is_set(exceed_class_violate_bytes.operation)) leaf_name_data.push_back(exceed_class_violate_bytes.get_name_leafdata());
    if (exceed_class_violate_packets.is_set || is_set(exceed_class_violate_packets.operation)) leaf_name_data.push_back(exceed_class_violate_packets.get_name_leafdata());
    if (exceed_class_violate_rate.is_set || is_set(exceed_class_violate_rate.operation)) leaf_name_data.push_back(exceed_class_violate_rate.get_name_leafdata());
    if (violate_class_violate_bytes.is_set || is_set(violate_class_violate_bytes.operation)) leaf_name_data.push_back(violate_class_violate_bytes.get_name_leafdata());
    if (violate_class_violate_packets.is_set || is_set(violate_class_violate_packets.operation)) leaf_name_data.push_back(violate_class_violate_packets.get_name_leafdata());
    if (violate_class_violate_rate.is_set || is_set(violate_class_violate_rate.operation)) leaf_name_data.push_back(violate_class_violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-class-conform-bytes")
    {
        conform_class_conform_bytes = value;
    }
    if(value_path == "conform-class-conform-packets")
    {
        conform_class_conform_packets = value;
    }
    if(value_path == "conform-class-conform-rate")
    {
        conform_class_conform_rate = value;
    }
    if(value_path == "conform-class-exceed-bytes")
    {
        conform_class_exceed_bytes = value;
    }
    if(value_path == "conform-class-exceed-packets")
    {
        conform_class_exceed_packets = value;
    }
    if(value_path == "conform-class-exceed-rate")
    {
        conform_class_exceed_rate = value;
    }
    if(value_path == "conform-class-violate-bytes")
    {
        conform_class_violate_bytes = value;
    }
    if(value_path == "conform-class-violate-packets")
    {
        conform_class_violate_packets = value;
    }
    if(value_path == "conform-class-violate-rate")
    {
        conform_class_violate_rate = value;
    }
    if(value_path == "exceed-class-exceed-bytes")
    {
        exceed_class_exceed_bytes = value;
    }
    if(value_path == "exceed-class-exceed-packets")
    {
        exceed_class_exceed_packets = value;
    }
    if(value_path == "exceed-class-exceed-rate")
    {
        exceed_class_exceed_rate = value;
    }
    if(value_path == "exceed-class-violate-bytes")
    {
        exceed_class_violate_bytes = value;
    }
    if(value_path == "exceed-class-violate-packets")
    {
        exceed_class_violate_packets = value;
    }
    if(value_path == "exceed-class-violate-rate")
    {
        exceed_class_violate_rate = value;
    }
    if(value_path == "violate-class-violate-bytes")
    {
        violate_class_violate_bytes = value;
    }
    if(value_path == "violate-class-violate-packets")
    {
        violate_class_violate_packets = value;
    }
    if(value_path == "violate-class-violate-rate")
    {
        violate_class_violate_rate = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::WredStatsArray()
    :
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    profile_title{YType::str, "profile-title"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    red_ecn_marked_bytes{YType::uint64, "red-ecn-marked-bytes"},
    red_ecn_marked_packets{YType::uint64, "red-ecn-marked-packets"},
    red_transmit_bytes{YType::uint64, "red-transmit-bytes"},
    red_transmit_packets{YType::uint64, "red-transmit-packets"}
{
    yang_name = "wred-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::~WredStatsArray()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::has_data() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_data())
            return true;
    }
    return max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| profile_title.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| red_ecn_marked_bytes.is_set
	|| red_ecn_marked_packets.is_set
	|| red_transmit_bytes.is_set
	|| red_transmit_packets.is_set;
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::has_operation() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(profile_title.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(red_ecn_marked_bytes.operation)
	|| is_set(red_ecn_marked_packets.operation)
	|| is_set(red_transmit_bytes.operation)
	|| is_set(red_transmit_packets.operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WredStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (profile_title.is_set || is_set(profile_title.operation)) leaf_name_data.push_back(profile_title.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (red_ecn_marked_bytes.is_set || is_set(red_ecn_marked_bytes.operation)) leaf_name_data.push_back(red_ecn_marked_bytes.get_name_leafdata());
    if (red_ecn_marked_packets.is_set || is_set(red_ecn_marked_packets.operation)) leaf_name_data.push_back(red_ecn_marked_packets.get_name_leafdata());
    if (red_transmit_bytes.is_set || is_set(red_transmit_bytes.operation)) leaf_name_data.push_back(red_transmit_bytes.get_name_leafdata());
    if (red_transmit_packets.is_set || is_set(red_transmit_packets.operation)) leaf_name_data.push_back(red_transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-label")
    {
        for(auto const & c : red_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel>();
        c->parent = this;
        red_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : red_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "profile-title")
    {
        profile_title = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "red-ecn-marked-bytes")
    {
        red_ecn_marked_bytes = value;
    }
    if(value_path == "red-ecn-marked-packets")
    {
        red_ecn_marked_packets = value;
    }
    if(value_path == "red-transmit-bytes")
    {
        red_transmit_bytes = value;
    }
    if(value_path == "red-transmit-packets")
    {
        red_transmit_packets = value;
    }
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::RedLabel()
    :
    value_{YType::uint8, "value"},
    wred_type{YType::enumeration, "wred-type"}
{
    yang_name = "red-label"; yang_parent_name = "wred-stats-array";
}

Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::~RedLabel()
{
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::has_data() const
{
    return value_.is_set
	|| wred_type.is_set;
}

bool Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| is_set(wred_type.operation);
}

std::string Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-label";

    return path_buffer.str();

}

const EntityPath Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedLabel' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (wred_type.is_set || is_set(wred_type.operation)) leaf_name_data.push_back(wred_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "wred-type")
    {
        wred_type = value;
    }
}

Qos::NvSatellite::NvSatellite()
    :
    nv_satellite_statistics(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics>())
	,nv_satellite_status(std::make_shared<Qos::NvSatellite::NvSatelliteStatus>())
{
    nv_satellite_statistics->parent = this;

    nv_satellite_status->parent = this;

    yang_name = "nv-satellite"; yang_parent_name = "qos";
}

Qos::NvSatellite::~NvSatellite()
{
}

bool Qos::NvSatellite::has_data() const
{
    return (nv_satellite_statistics !=  nullptr && nv_satellite_statistics->has_data())
	|| (nv_satellite_status !=  nullptr && nv_satellite_status->has_data());
}

bool Qos::NvSatellite::has_operation() const
{
    return is_set(operation)
	|| (nv_satellite_statistics !=  nullptr && nv_satellite_statistics->has_operation())
	|| (nv_satellite_status !=  nullptr && nv_satellite_status->has_operation());
}

std::string Qos::NvSatellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-qos-ma-oper:qos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nv-satellite-statistics")
    {
        if(nv_satellite_statistics == nullptr)
        {
            nv_satellite_statistics = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics>();
        }
        return nv_satellite_statistics;
    }

    if(child_yang_name == "nv-satellite-status")
    {
        if(nv_satellite_status == nullptr)
        {
            nv_satellite_status = std::make_shared<Qos::NvSatellite::NvSatelliteStatus>();
        }
        return nv_satellite_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nv_satellite_statistics != nullptr)
    {
        children["nv-satellite-statistics"] = nv_satellite_statistics;
    }

    if(nv_satellite_status != nullptr)
    {
        children["nv-satellite-status"] = nv_satellite_status;
    }

    return children;
}

void Qos::NvSatellite::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteStatistics()
    :
    nv_satellite_ids(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds>())
{
    nv_satellite_ids->parent = this;

    yang_name = "nv-satellite-statistics"; yang_parent_name = "nv-satellite";
}

Qos::NvSatellite::NvSatelliteStatistics::~NvSatelliteStatistics()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::has_data() const
{
    return (nv_satellite_ids !=  nullptr && nv_satellite_ids->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::has_operation() const
{
    return is_set(operation)
	|| (nv_satellite_ids !=  nullptr && nv_satellite_ids->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite-statistics";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-qos-ma-oper:qos/nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nv-satellite-ids")
    {
        if(nv_satellite_ids == nullptr)
        {
            nv_satellite_ids = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds>();
        }
        return nv_satellite_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nv_satellite_ids != nullptr)
    {
        children["nv-satellite-ids"] = nv_satellite_ids;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteIds()
{
    yang_name = "nv-satellite-ids"; yang_parent_name = "nv-satellite-statistics";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::~NvSatelliteIds()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::has_data() const
{
    for (std::size_t index=0; index<nv_satellite_id.size(); index++)
    {
        if(nv_satellite_id[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::has_operation() const
{
    for (std::size_t index=0; index<nv_satellite_id.size(); index++)
    {
        if(nv_satellite_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite-ids";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-qos-ma-oper:qos/nv-satellite/nv-satellite-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nv-satellite-id")
    {
        for(auto const & c : nv_satellite_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId>();
        c->parent = this;
        nv_satellite_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nv_satellite_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteId()
    :
    satellite_id{YType::int32, "satellite-id"}
    	,
    nv_satellite_interfaces(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces>())
{
    nv_satellite_interfaces->parent = this;

    yang_name = "nv-satellite-id"; yang_parent_name = "nv-satellite-ids";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::~NvSatelliteId()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::has_data() const
{
    return satellite_id.is_set
	|| (nv_satellite_interfaces !=  nullptr && nv_satellite_interfaces->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::has_operation() const
{
    return is_set(operation)
	|| is_set(satellite_id.operation)
	|| (nv_satellite_interfaces !=  nullptr && nv_satellite_interfaces->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite-id" <<"[satellite-id='" <<satellite_id <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-qos-ma-oper:qos/nv-satellite/nv-satellite-statistics/nv-satellite-ids/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nv-satellite-interfaces")
    {
        if(nv_satellite_interfaces == nullptr)
        {
            nv_satellite_interfaces = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces>();
        }
        return nv_satellite_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nv_satellite_interfaces != nullptr)
    {
        children["nv-satellite-interfaces"] = nv_satellite_interfaces;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterfaces()
{
    yang_name = "nv-satellite-interfaces"; yang_parent_name = "nv-satellite-id";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::~NvSatelliteInterfaces()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::has_data() const
{
    for (std::size_t index=0; index<nv_satellite_interface.size(); index++)
    {
        if(nv_satellite_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::has_operation() const
{
    for (std::size_t index=0; index<nv_satellite_interface.size(); index++)
    {
        if(nv_satellite_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite-interfaces";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NvSatelliteInterfaces' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nv-satellite-interface")
    {
        for(auto const & c : nv_satellite_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface>();
        c->parent = this;
        nv_satellite_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nv_satellite_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::NvSatelliteInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    input(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input>())
	,member_interfaces(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces>())
	,output(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output>())
{
    input->parent = this;

    member_interfaces->parent = this;

    output->parent = this;

    yang_name = "nv-satellite-interface"; yang_parent_name = "nv-satellite-interfaces";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::~NvSatelliteInterface()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::has_data() const
{
    return interface_name.is_set
	|| (input !=  nullptr && input->has_data())
	|| (member_interfaces !=  nullptr && member_interfaces->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (input !=  nullptr && input->has_operation())
	|| (member_interfaces !=  nullptr && member_interfaces->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NvSatelliteInterface' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input>();
        }
        return input;
    }

    if(child_yang_name == "member-interfaces")
    {
        if(member_interfaces == nullptr)
        {
            member_interfaces = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces>();
        }
        return member_interfaces;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(member_interfaces != nullptr)
    {
        children["member-interfaces"] = member_interfaces;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterfaces()
{
    yang_name = "member-interfaces"; yang_parent_name = "nv-satellite-interface";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::~MemberInterfaces()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::has_data() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::has_operation() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interfaces";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberInterfaces' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-interface")
    {
        for(auto const & c : member_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface>();
        c->parent = this;
        member_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::MemberInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    input(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input>())
	,output(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output>())
	,satellite_ids(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds>())
{
    input->parent = this;

    output->parent = this;

    satellite_ids->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member-interfaces";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::~MemberInterface()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::has_data() const
{
    return interface_name.is_set
	|| (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (satellite_ids !=  nullptr && satellite_ids->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (satellite_ids !=  nullptr && satellite_ids->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberInterface' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output>();
        }
        return output;
    }

    if(child_yang_name == "satellite-ids")
    {
        if(satellite_ids == nullptr)
        {
            satellite_ids = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds>();
        }
        return satellite_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(satellite_ids != nullptr)
    {
        children["satellite-ids"] = satellite_ids;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteIds()
{
    yang_name = "satellite-ids"; yang_parent_name = "member-interface";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::~SatelliteIds()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::has_data() const
{
    for (std::size_t index=0; index<satellite_id.size(); index++)
    {
        if(satellite_id[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::has_operation() const
{
    for (std::size_t index=0; index<satellite_id.size(); index++)
    {
        if(satellite_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-ids";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SatelliteIds' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "satellite-id")
    {
        for(auto const & c : satellite_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId>();
        c->parent = this;
        satellite_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : satellite_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::SatelliteId()
    :
    nv_satellite_id{YType::int32, "nv-satellite-id"}
    	,
    input(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input>())
	,output(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "satellite-id"; yang_parent_name = "satellite-ids";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::~SatelliteId()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::has_data() const
{
    return nv_satellite_id.is_set
	|| (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::has_operation() const
{
    return is_set(operation)
	|| is_set(nv_satellite_id.operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite-id" <<"[nv-satellite-id='" <<nv_satellite_id <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SatelliteId' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nv_satellite_id.is_set || is_set(nv_satellite_id.operation)) leaf_name_data.push_back(nv_satellite_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nv-satellite-id")
    {
        nv_satellite_id = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Input()
    :
    service_policy_names(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames>())
	,statistics(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics>())
{
    service_policy_names->parent = this;

    statistics->parent = this;

    yang_name = "input"; yang_parent_name = "satellite-id";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::~Input()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::has_data() const
{
    return (service_policy_names !=  nullptr && service_policy_names->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::has_operation() const
{
    return is_set(operation)
	|| (service_policy_names !=  nullptr && service_policy_names->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-names")
    {
        if(service_policy_names == nullptr)
        {
            service_policy_names = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames>();
        }
        return service_policy_names;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy_names != nullptr)
    {
        children["service-policy-names"] = service_policy_names;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyNames()
{
    yang_name = "service-policy-names"; yang_parent_name = "input";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::~ServicePolicyNames()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::has_data() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::has_operation() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-names";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyNames' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-instance")
    {
        for(auto const & c : service_policy_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance>();
        c->parent = this;
        service_policy_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance::ServicePolicyInstance()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy-instance"; yang_parent_name = "service-policy-names";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance::~ServicePolicyInstance()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance::has_data() const
{
    return service_policy_name.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-instance" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyInstance' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::Statistics()
    :
    policy_name{YType::str, "policy-name"},
    satid{YType::uint32, "satid"},
    state{YType::enumeration, "state"},
    state_description{YType::str, "state-description"}
{
    yang_name = "statistics"; yang_parent_name = "input";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::~Statistics()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::has_data() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_data())
            return true;
    }
    return policy_name.is_set
	|| satid.is_set
	|| state.is_set
	|| state_description.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::has_operation() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| is_set(satid.operation)
	|| is_set(state.operation)
	|| is_set(state_description.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (satid.is_set || is_set(satid.operation)) leaf_name_data.push_back(satid.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_description.is_set || is_set(state_description.operation)) leaf_name_data.push_back(state_description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-stats")
    {
        for(auto const & c : class_stats)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats>();
        c->parent = this;
        class_stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_stats)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "satid")
    {
        satid = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "state-description")
    {
        state_description = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ClassStats()
    :
    cac_state{YType::enumeration, "cac-state"},
    class_name{YType::str, "class-name"},
    counter_validity_bitmask{YType::uint64, "counter-validity-bitmask"},
    queue_descr{YType::str, "queue-descr"},
    shared_queue_id{YType::uint32, "shared-queue-id"}
    	,
    cac_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats>())
	,child_policy(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy>())
	,general_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats>())
	,iphc_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats>())
{
    cac_stats->parent = this;

    child_policy->parent = this;

    general_stats->parent = this;

    iphc_stats->parent = this;

    yang_name = "class-stats"; yang_parent_name = "statistics";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::~ClassStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::has_data() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_data())
            return true;
    }
    return cac_state.is_set
	|| class_name.is_set
	|| counter_validity_bitmask.is_set
	|| queue_descr.is_set
	|| shared_queue_id.is_set
	|| (cac_stats !=  nullptr && cac_stats->has_data())
	|| (child_policy !=  nullptr && child_policy->has_data())
	|| (general_stats !=  nullptr && general_stats->has_data())
	|| (iphc_stats !=  nullptr && iphc_stats->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::has_operation() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cac_state.operation)
	|| is_set(class_name.operation)
	|| is_set(counter_validity_bitmask.operation)
	|| is_set(queue_descr.operation)
	|| is_set(shared_queue_id.operation)
	|| (cac_stats !=  nullptr && cac_stats->has_operation())
	|| (child_policy !=  nullptr && child_policy->has_operation())
	|| (general_stats !=  nullptr && general_stats->has_operation())
	|| (iphc_stats !=  nullptr && iphc_stats->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_state.is_set || is_set(cac_state.operation)) leaf_name_data.push_back(cac_state.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (counter_validity_bitmask.is_set || is_set(counter_validity_bitmask.operation)) leaf_name_data.push_back(counter_validity_bitmask.get_name_leafdata());
    if (queue_descr.is_set || is_set(queue_descr.operation)) leaf_name_data.push_back(queue_descr.get_name_leafdata());
    if (shared_queue_id.is_set || is_set(shared_queue_id.operation)) leaf_name_data.push_back(shared_queue_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cac-stats")
    {
        if(cac_stats == nullptr)
        {
            cac_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats>();
        }
        return cac_stats;
    }

    if(child_yang_name == "child-policy")
    {
        if(child_policy == nullptr)
        {
            child_policy = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy>();
        }
        return child_policy;
    }

    if(child_yang_name == "general-stats")
    {
        if(general_stats == nullptr)
        {
            general_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats>();
        }
        return general_stats;
    }

    if(child_yang_name == "iphc-stats")
    {
        if(iphc_stats == nullptr)
        {
            iphc_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats>();
        }
        return iphc_stats;
    }

    if(child_yang_name == "police-stats-array")
    {
        for(auto const & c : police_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray>();
        c->parent = this;
        police_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-stats-array")
    {
        for(auto const & c : queue_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray>();
        c->parent = this;
        queue_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "wred-stats-array")
    {
        for(auto const & c : wred_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray>();
        c->parent = this;
        wred_stats_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cac_stats != nullptr)
    {
        children["cac-stats"] = cac_stats;
    }

    if(child_policy != nullptr)
    {
        children["child-policy"] = child_policy;
    }

    if(general_stats != nullptr)
    {
        children["general-stats"] = general_stats;
    }

    if(iphc_stats != nullptr)
    {
        children["iphc-stats"] = iphc_stats;
    }

    for (auto const & c : police_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wred_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cac-state")
    {
        cac_state = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "counter-validity-bitmask")
    {
        counter_validity_bitmask = value;
    }
    if(value_path == "queue-descr")
    {
        queue_descr = value;
    }
    if(value_path == "shared-queue-id")
    {
        shared_queue_id = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats::GeneralStats()
    :
    match_data_rate{YType::uint32, "match-data-rate"},
    pre_policy_matched_bytes{YType::uint64, "pre-policy-matched-bytes"},
    pre_policy_matched_packets{YType::uint64, "pre-policy-matched-packets"},
    total_drop_bytes{YType::uint64, "total-drop-bytes"},
    total_drop_packets{YType::uint64, "total-drop-packets"},
    total_drop_rate{YType::uint32, "total-drop-rate"},
    total_transmit_rate{YType::uint32, "total-transmit-rate"},
    transmit_bytes{YType::uint64, "transmit-bytes"},
    transmit_packets{YType::uint64, "transmit-packets"}
{
    yang_name = "general-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats::~GeneralStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats::has_data() const
{
    return match_data_rate.is_set
	|| pre_policy_matched_bytes.is_set
	|| pre_policy_matched_packets.is_set
	|| total_drop_bytes.is_set
	|| total_drop_packets.is_set
	|| total_drop_rate.is_set
	|| total_transmit_rate.is_set
	|| transmit_bytes.is_set
	|| transmit_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats::has_operation() const
{
    return is_set(operation)
	|| is_set(match_data_rate.operation)
	|| is_set(pre_policy_matched_bytes.operation)
	|| is_set(pre_policy_matched_packets.operation)
	|| is_set(total_drop_bytes.operation)
	|| is_set(total_drop_packets.operation)
	|| is_set(total_drop_rate.operation)
	|| is_set(total_transmit_rate.operation)
	|| is_set(transmit_bytes.operation)
	|| is_set(transmit_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GeneralStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_data_rate.is_set || is_set(match_data_rate.operation)) leaf_name_data.push_back(match_data_rate.get_name_leafdata());
    if (pre_policy_matched_bytes.is_set || is_set(pre_policy_matched_bytes.operation)) leaf_name_data.push_back(pre_policy_matched_bytes.get_name_leafdata());
    if (pre_policy_matched_packets.is_set || is_set(pre_policy_matched_packets.operation)) leaf_name_data.push_back(pre_policy_matched_packets.get_name_leafdata());
    if (total_drop_bytes.is_set || is_set(total_drop_bytes.operation)) leaf_name_data.push_back(total_drop_bytes.get_name_leafdata());
    if (total_drop_packets.is_set || is_set(total_drop_packets.operation)) leaf_name_data.push_back(total_drop_packets.get_name_leafdata());
    if (total_drop_rate.is_set || is_set(total_drop_rate.operation)) leaf_name_data.push_back(total_drop_rate.get_name_leafdata());
    if (total_transmit_rate.is_set || is_set(total_transmit_rate.operation)) leaf_name_data.push_back(total_transmit_rate.get_name_leafdata());
    if (transmit_bytes.is_set || is_set(transmit_bytes.operation)) leaf_name_data.push_back(transmit_bytes.get_name_leafdata());
    if (transmit_packets.is_set || is_set(transmit_packets.operation)) leaf_name_data.push_back(transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-data-rate")
    {
        match_data_rate = value;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes = value;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets = value;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes = value;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets = value;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate = value;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate = value;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes = value;
    }
    if(value_path == "transmit-packets")
    {
        transmit_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats::IphcStats()
    :
    non_tcp_bytes_saved{YType::uint64, "non-tcp-bytes-saved"},
    non_tcp_bytes_sent_rate{YType::uint32, "non-tcp-bytes-sent-rate"},
    non_tcp_compressed_packets_out{YType::uint64, "non-tcp-compressed-packets-out"},
    non_tcp_full_header_packets_out{YType::uint64, "non-tcp-full-header-packets-out"},
    non_tcp_total_out_bytes{YType::uint64, "non-tcp-total-out-bytes"},
    non_tcp_total_out_packets{YType::uint64, "non-tcp-total-out-packets"},
    tcp_bytes_saved{YType::uint64, "tcp-bytes-saved"},
    tcp_bytes_sent_rate{YType::uint32, "tcp-bytes-sent-rate"},
    tcp_compressed_packets_out{YType::uint64, "tcp-compressed-packets-out"},
    tcp_full_header_packets_out{YType::uint64, "tcp-full-header-packets-out"},
    tcp_total_out_bytes{YType::uint64, "tcp-total-out-bytes"},
    tcp_total_out_packets{YType::uint64, "tcp-total-out-packets"}
{
    yang_name = "iphc-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats::~IphcStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats::has_data() const
{
    return non_tcp_bytes_saved.is_set
	|| non_tcp_bytes_sent_rate.is_set
	|| non_tcp_compressed_packets_out.is_set
	|| non_tcp_full_header_packets_out.is_set
	|| non_tcp_total_out_bytes.is_set
	|| non_tcp_total_out_packets.is_set
	|| tcp_bytes_saved.is_set
	|| tcp_bytes_sent_rate.is_set
	|| tcp_compressed_packets_out.is_set
	|| tcp_full_header_packets_out.is_set
	|| tcp_total_out_bytes.is_set
	|| tcp_total_out_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(non_tcp_bytes_saved.operation)
	|| is_set(non_tcp_bytes_sent_rate.operation)
	|| is_set(non_tcp_compressed_packets_out.operation)
	|| is_set(non_tcp_full_header_packets_out.operation)
	|| is_set(non_tcp_total_out_bytes.operation)
	|| is_set(non_tcp_total_out_packets.operation)
	|| is_set(tcp_bytes_saved.operation)
	|| is_set(tcp_bytes_sent_rate.operation)
	|| is_set(tcp_compressed_packets_out.operation)
	|| is_set(tcp_full_header_packets_out.operation)
	|| is_set(tcp_total_out_bytes.operation)
	|| is_set(tcp_total_out_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iphc-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IphcStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_tcp_bytes_saved.is_set || is_set(non_tcp_bytes_saved.operation)) leaf_name_data.push_back(non_tcp_bytes_saved.get_name_leafdata());
    if (non_tcp_bytes_sent_rate.is_set || is_set(non_tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(non_tcp_bytes_sent_rate.get_name_leafdata());
    if (non_tcp_compressed_packets_out.is_set || is_set(non_tcp_compressed_packets_out.operation)) leaf_name_data.push_back(non_tcp_compressed_packets_out.get_name_leafdata());
    if (non_tcp_full_header_packets_out.is_set || is_set(non_tcp_full_header_packets_out.operation)) leaf_name_data.push_back(non_tcp_full_header_packets_out.get_name_leafdata());
    if (non_tcp_total_out_bytes.is_set || is_set(non_tcp_total_out_bytes.operation)) leaf_name_data.push_back(non_tcp_total_out_bytes.get_name_leafdata());
    if (non_tcp_total_out_packets.is_set || is_set(non_tcp_total_out_packets.operation)) leaf_name_data.push_back(non_tcp_total_out_packets.get_name_leafdata());
    if (tcp_bytes_saved.is_set || is_set(tcp_bytes_saved.operation)) leaf_name_data.push_back(tcp_bytes_saved.get_name_leafdata());
    if (tcp_bytes_sent_rate.is_set || is_set(tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(tcp_bytes_sent_rate.get_name_leafdata());
    if (tcp_compressed_packets_out.is_set || is_set(tcp_compressed_packets_out.operation)) leaf_name_data.push_back(tcp_compressed_packets_out.get_name_leafdata());
    if (tcp_full_header_packets_out.is_set || is_set(tcp_full_header_packets_out.operation)) leaf_name_data.push_back(tcp_full_header_packets_out.get_name_leafdata());
    if (tcp_total_out_bytes.is_set || is_set(tcp_total_out_bytes.operation)) leaf_name_data.push_back(tcp_total_out_bytes.get_name_leafdata());
    if (tcp_total_out_packets.is_set || is_set(tcp_total_out_packets.operation)) leaf_name_data.push_back(tcp_total_out_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-tcp-bytes-saved")
    {
        non_tcp_bytes_saved = value;
    }
    if(value_path == "non-tcp-bytes-sent-rate")
    {
        non_tcp_bytes_sent_rate = value;
    }
    if(value_path == "non-tcp-compressed-packets-out")
    {
        non_tcp_compressed_packets_out = value;
    }
    if(value_path == "non-tcp-full-header-packets-out")
    {
        non_tcp_full_header_packets_out = value;
    }
    if(value_path == "non-tcp-total-out-bytes")
    {
        non_tcp_total_out_bytes = value;
    }
    if(value_path == "non-tcp-total-out-packets")
    {
        non_tcp_total_out_packets = value;
    }
    if(value_path == "tcp-bytes-saved")
    {
        tcp_bytes_saved = value;
    }
    if(value_path == "tcp-bytes-sent-rate")
    {
        tcp_bytes_sent_rate = value;
    }
    if(value_path == "tcp-compressed-packets-out")
    {
        tcp_compressed_packets_out = value;
    }
    if(value_path == "tcp-full-header-packets-out")
    {
        tcp_full_header_packets_out = value;
    }
    if(value_path == "tcp-total-out-bytes")
    {
        tcp_total_out_bytes = value;
    }
    if(value_path == "tcp-total-out-packets")
    {
        tcp_total_out_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ChildPolicy()
{
    yang_name = "child-policy"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::~ChildPolicy()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::has_data() const
{
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::has_operation() const
{
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-policy";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChildPolicy' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats::CacStats()
    :
    admit_bytes{YType::uint64, "admit-bytes"},
    admit_rates{YType::uint32, "admit-rates"},
    admitpackets{YType::uint64, "admitpackets"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    drop_rates{YType::uint32, "drop-rates"}
{
    yang_name = "cac-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats::~CacStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats::has_data() const
{
    return admit_bytes.is_set
	|| admit_rates.is_set
	|| admitpackets.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| drop_rates.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats::has_operation() const
{
    return is_set(operation)
	|| is_set(admit_bytes.operation)
	|| is_set(admit_rates.operation)
	|| is_set(admitpackets.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(drop_rates.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CacStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admit_bytes.is_set || is_set(admit_bytes.operation)) leaf_name_data.push_back(admit_bytes.get_name_leafdata());
    if (admit_rates.is_set || is_set(admit_rates.operation)) leaf_name_data.push_back(admit_rates.get_name_leafdata());
    if (admitpackets.is_set || is_set(admitpackets.operation)) leaf_name_data.push_back(admitpackets.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (drop_rates.is_set || is_set(drop_rates.operation)) leaf_name_data.push_back(drop_rates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admit-bytes")
    {
        admit_bytes = value;
    }
    if(value_path == "admit-rates")
    {
        admit_rates = value;
    }
    if(value_path == "admitpackets")
    {
        admitpackets = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "drop-rates")
    {
        drop_rates = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueStatsArray()
    :
    atm_clp0_drop_bytes{YType::uint64, "atm-clp0-drop-bytes"},
    atm_clp0_drop_packets{YType::uint64, "atm-clp0-drop-packets"},
    atm_clp1_drop_bytes{YType::uint64, "atm-clp1-drop-bytes"},
    atm_clp1_drop_packets{YType::uint64, "atm-clp1-drop-packets"},
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    forced_wred_stats_display{YType::boolean, "forced-wred-stats-display"},
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    queue_drop_threshold{YType::uint32, "queue-drop-threshold"},
    queue_id{YType::uint32, "queue-id"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    tail_drop_bytes{YType::uint64, "tail-drop-bytes"},
    tail_drop_packets{YType::uint64, "tail-drop-packets"}
{
    yang_name = "queue-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::~QueueStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::has_data() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_data())
            return true;
    }
    return atm_clp0_drop_bytes.is_set
	|| atm_clp0_drop_packets.is_set
	|| atm_clp1_drop_bytes.is_set
	|| atm_clp1_drop_packets.is_set
	|| conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| forced_wred_stats_display.is_set
	|| max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| queue_drop_threshold.is_set
	|| queue_id.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| tail_drop_bytes.is_set
	|| tail_drop_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::has_operation() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(atm_clp0_drop_bytes.operation)
	|| is_set(atm_clp0_drop_packets.operation)
	|| is_set(atm_clp1_drop_bytes.operation)
	|| is_set(atm_clp1_drop_packets.operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(forced_wred_stats_display.operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(queue_drop_threshold.operation)
	|| is_set(queue_id.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(tail_drop_bytes.operation)
	|| is_set(tail_drop_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp0_drop_bytes.is_set || is_set(atm_clp0_drop_bytes.operation)) leaf_name_data.push_back(atm_clp0_drop_bytes.get_name_leafdata());
    if (atm_clp0_drop_packets.is_set || is_set(atm_clp0_drop_packets.operation)) leaf_name_data.push_back(atm_clp0_drop_packets.get_name_leafdata());
    if (atm_clp1_drop_bytes.is_set || is_set(atm_clp1_drop_bytes.operation)) leaf_name_data.push_back(atm_clp1_drop_bytes.get_name_leafdata());
    if (atm_clp1_drop_packets.is_set || is_set(atm_clp1_drop_packets.operation)) leaf_name_data.push_back(atm_clp1_drop_packets.get_name_leafdata());
    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (forced_wred_stats_display.is_set || is_set(forced_wred_stats_display.operation)) leaf_name_data.push_back(forced_wred_stats_display.get_name_leafdata());
    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (queue_drop_threshold.is_set || is_set(queue_drop_threshold.operation)) leaf_name_data.push_back(queue_drop_threshold.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (tail_drop_bytes.is_set || is_set(tail_drop_bytes.operation)) leaf_name_data.push_back(tail_drop_bytes.get_name_leafdata());
    if (tail_drop_packets.is_set || is_set(tail_drop_packets.operation)) leaf_name_data.push_back(tail_drop_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue-average-length")
    {
        for(auto const & c : queue_average_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength>();
        c->parent = this;
        queue_average_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-instance-length")
    {
        for(auto const & c : queue_instance_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength>();
        c->parent = this;
        queue_instance_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-max-length")
    {
        for(auto const & c : queue_max_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength>();
        c->parent = this;
        queue_max_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : queue_average_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_instance_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_max_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-clp0-drop-bytes")
    {
        atm_clp0_drop_bytes = value;
    }
    if(value_path == "atm-clp0-drop-packets")
    {
        atm_clp0_drop_packets = value;
    }
    if(value_path == "atm-clp1-drop-bytes")
    {
        atm_clp1_drop_bytes = value;
    }
    if(value_path == "atm-clp1-drop-packets")
    {
        atm_clp1_drop_packets = value;
    }
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "forced-wred-stats-display")
    {
        forced_wred_stats_display = value;
    }
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "queue-drop-threshold")
    {
        queue_drop_threshold = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes = value;
    }
    if(value_path == "tail-drop-packets")
    {
        tail_drop_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::QueueInstanceLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-instance-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::~QueueInstanceLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-instance-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueInstanceLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::QueueAverageLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-average-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::~QueueAverageLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-average-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueAverageLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::QueueMaxLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-max-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::~QueueMaxLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-max-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueMaxLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::PoliceStatsArray()
    :
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    parent_drop_bytes{YType::uint64, "parent-drop-bytes"},
    parent_drop_packets{YType::uint64, "parent-drop-packets"},
    violate_bytes{YType::uint64, "violate-bytes"},
    violate_packets{YType::uint64, "violate-packets"},
    violate_rate{YType::uint32, "violate-rate"}
    	,
    color_class_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>())
{
    color_class_stats->parent = this;

    yang_name = "police-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::~PoliceStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::has_data() const
{
    return conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| parent_drop_bytes.is_set
	|| parent_drop_packets.is_set
	|| violate_bytes.is_set
	|| violate_packets.is_set
	|| violate_rate.is_set
	|| (color_class_stats !=  nullptr && color_class_stats->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(parent_drop_bytes.operation)
	|| is_set(parent_drop_packets.operation)
	|| is_set(violate_bytes.operation)
	|| is_set(violate_packets.operation)
	|| is_set(violate_rate.operation)
	|| (color_class_stats !=  nullptr && color_class_stats->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (parent_drop_bytes.is_set || is_set(parent_drop_bytes.operation)) leaf_name_data.push_back(parent_drop_bytes.get_name_leafdata());
    if (parent_drop_packets.is_set || is_set(parent_drop_packets.operation)) leaf_name_data.push_back(parent_drop_packets.get_name_leafdata());
    if (violate_bytes.is_set || is_set(violate_bytes.operation)) leaf_name_data.push_back(violate_bytes.get_name_leafdata());
    if (violate_packets.is_set || is_set(violate_packets.operation)) leaf_name_data.push_back(violate_packets.get_name_leafdata());
    if (violate_rate.is_set || is_set(violate_rate.operation)) leaf_name_data.push_back(violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "color-class-stats")
    {
        if(color_class_stats == nullptr)
        {
            color_class_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>();
        }
        return color_class_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(color_class_stats != nullptr)
    {
        children["color-class-stats"] = color_class_stats;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "parent-drop-bytes")
    {
        parent_drop_bytes = value;
    }
    if(value_path == "parent-drop-packets")
    {
        parent_drop_packets = value;
    }
    if(value_path == "violate-bytes")
    {
        violate_bytes = value;
    }
    if(value_path == "violate-packets")
    {
        violate_packets = value;
    }
    if(value_path == "violate-rate")
    {
        violate_rate = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::ColorClassStats()
    :
    conform_class_conform_bytes{YType::uint64, "conform-class-conform-bytes"},
    conform_class_conform_packets{YType::uint64, "conform-class-conform-packets"},
    conform_class_conform_rate{YType::uint32, "conform-class-conform-rate"},
    conform_class_exceed_bytes{YType::uint64, "conform-class-exceed-bytes"},
    conform_class_exceed_packets{YType::uint64, "conform-class-exceed-packets"},
    conform_class_exceed_rate{YType::uint32, "conform-class-exceed-rate"},
    conform_class_violate_bytes{YType::uint64, "conform-class-violate-bytes"},
    conform_class_violate_packets{YType::uint64, "conform-class-violate-packets"},
    conform_class_violate_rate{YType::uint32, "conform-class-violate-rate"},
    exceed_class_exceed_bytes{YType::uint64, "exceed-class-exceed-bytes"},
    exceed_class_exceed_packets{YType::uint64, "exceed-class-exceed-packets"},
    exceed_class_exceed_rate{YType::uint32, "exceed-class-exceed-rate"},
    exceed_class_violate_bytes{YType::uint64, "exceed-class-violate-bytes"},
    exceed_class_violate_packets{YType::uint64, "exceed-class-violate-packets"},
    exceed_class_violate_rate{YType::uint32, "exceed-class-violate-rate"},
    violate_class_violate_bytes{YType::uint64, "violate-class-violate-bytes"},
    violate_class_violate_packets{YType::uint64, "violate-class-violate-packets"},
    violate_class_violate_rate{YType::uint32, "violate-class-violate-rate"}
{
    yang_name = "color-class-stats"; yang_parent_name = "police-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::~ColorClassStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_data() const
{
    return conform_class_conform_bytes.is_set
	|| conform_class_conform_packets.is_set
	|| conform_class_conform_rate.is_set
	|| conform_class_exceed_bytes.is_set
	|| conform_class_exceed_packets.is_set
	|| conform_class_exceed_rate.is_set
	|| conform_class_violate_bytes.is_set
	|| conform_class_violate_packets.is_set
	|| conform_class_violate_rate.is_set
	|| exceed_class_exceed_bytes.is_set
	|| exceed_class_exceed_packets.is_set
	|| exceed_class_exceed_rate.is_set
	|| exceed_class_violate_bytes.is_set
	|| exceed_class_violate_packets.is_set
	|| exceed_class_violate_rate.is_set
	|| violate_class_violate_bytes.is_set
	|| violate_class_violate_packets.is_set
	|| violate_class_violate_rate.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_class_conform_bytes.operation)
	|| is_set(conform_class_conform_packets.operation)
	|| is_set(conform_class_conform_rate.operation)
	|| is_set(conform_class_exceed_bytes.operation)
	|| is_set(conform_class_exceed_packets.operation)
	|| is_set(conform_class_exceed_rate.operation)
	|| is_set(conform_class_violate_bytes.operation)
	|| is_set(conform_class_violate_packets.operation)
	|| is_set(conform_class_violate_rate.operation)
	|| is_set(exceed_class_exceed_bytes.operation)
	|| is_set(exceed_class_exceed_packets.operation)
	|| is_set(exceed_class_exceed_rate.operation)
	|| is_set(exceed_class_violate_bytes.operation)
	|| is_set(exceed_class_violate_packets.operation)
	|| is_set(exceed_class_violate_rate.operation)
	|| is_set(violate_class_violate_bytes.operation)
	|| is_set(violate_class_violate_packets.operation)
	|| is_set(violate_class_violate_rate.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ColorClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_class_conform_bytes.is_set || is_set(conform_class_conform_bytes.operation)) leaf_name_data.push_back(conform_class_conform_bytes.get_name_leafdata());
    if (conform_class_conform_packets.is_set || is_set(conform_class_conform_packets.operation)) leaf_name_data.push_back(conform_class_conform_packets.get_name_leafdata());
    if (conform_class_conform_rate.is_set || is_set(conform_class_conform_rate.operation)) leaf_name_data.push_back(conform_class_conform_rate.get_name_leafdata());
    if (conform_class_exceed_bytes.is_set || is_set(conform_class_exceed_bytes.operation)) leaf_name_data.push_back(conform_class_exceed_bytes.get_name_leafdata());
    if (conform_class_exceed_packets.is_set || is_set(conform_class_exceed_packets.operation)) leaf_name_data.push_back(conform_class_exceed_packets.get_name_leafdata());
    if (conform_class_exceed_rate.is_set || is_set(conform_class_exceed_rate.operation)) leaf_name_data.push_back(conform_class_exceed_rate.get_name_leafdata());
    if (conform_class_violate_bytes.is_set || is_set(conform_class_violate_bytes.operation)) leaf_name_data.push_back(conform_class_violate_bytes.get_name_leafdata());
    if (conform_class_violate_packets.is_set || is_set(conform_class_violate_packets.operation)) leaf_name_data.push_back(conform_class_violate_packets.get_name_leafdata());
    if (conform_class_violate_rate.is_set || is_set(conform_class_violate_rate.operation)) leaf_name_data.push_back(conform_class_violate_rate.get_name_leafdata());
    if (exceed_class_exceed_bytes.is_set || is_set(exceed_class_exceed_bytes.operation)) leaf_name_data.push_back(exceed_class_exceed_bytes.get_name_leafdata());
    if (exceed_class_exceed_packets.is_set || is_set(exceed_class_exceed_packets.operation)) leaf_name_data.push_back(exceed_class_exceed_packets.get_name_leafdata());
    if (exceed_class_exceed_rate.is_set || is_set(exceed_class_exceed_rate.operation)) leaf_name_data.push_back(exceed_class_exceed_rate.get_name_leafdata());
    if (exceed_class_violate_bytes.is_set || is_set(exceed_class_violate_bytes.operation)) leaf_name_data.push_back(exceed_class_violate_bytes.get_name_leafdata());
    if (exceed_class_violate_packets.is_set || is_set(exceed_class_violate_packets.operation)) leaf_name_data.push_back(exceed_class_violate_packets.get_name_leafdata());
    if (exceed_class_violate_rate.is_set || is_set(exceed_class_violate_rate.operation)) leaf_name_data.push_back(exceed_class_violate_rate.get_name_leafdata());
    if (violate_class_violate_bytes.is_set || is_set(violate_class_violate_bytes.operation)) leaf_name_data.push_back(violate_class_violate_bytes.get_name_leafdata());
    if (violate_class_violate_packets.is_set || is_set(violate_class_violate_packets.operation)) leaf_name_data.push_back(violate_class_violate_packets.get_name_leafdata());
    if (violate_class_violate_rate.is_set || is_set(violate_class_violate_rate.operation)) leaf_name_data.push_back(violate_class_violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-class-conform-bytes")
    {
        conform_class_conform_bytes = value;
    }
    if(value_path == "conform-class-conform-packets")
    {
        conform_class_conform_packets = value;
    }
    if(value_path == "conform-class-conform-rate")
    {
        conform_class_conform_rate = value;
    }
    if(value_path == "conform-class-exceed-bytes")
    {
        conform_class_exceed_bytes = value;
    }
    if(value_path == "conform-class-exceed-packets")
    {
        conform_class_exceed_packets = value;
    }
    if(value_path == "conform-class-exceed-rate")
    {
        conform_class_exceed_rate = value;
    }
    if(value_path == "conform-class-violate-bytes")
    {
        conform_class_violate_bytes = value;
    }
    if(value_path == "conform-class-violate-packets")
    {
        conform_class_violate_packets = value;
    }
    if(value_path == "conform-class-violate-rate")
    {
        conform_class_violate_rate = value;
    }
    if(value_path == "exceed-class-exceed-bytes")
    {
        exceed_class_exceed_bytes = value;
    }
    if(value_path == "exceed-class-exceed-packets")
    {
        exceed_class_exceed_packets = value;
    }
    if(value_path == "exceed-class-exceed-rate")
    {
        exceed_class_exceed_rate = value;
    }
    if(value_path == "exceed-class-violate-bytes")
    {
        exceed_class_violate_bytes = value;
    }
    if(value_path == "exceed-class-violate-packets")
    {
        exceed_class_violate_packets = value;
    }
    if(value_path == "exceed-class-violate-rate")
    {
        exceed_class_violate_rate = value;
    }
    if(value_path == "violate-class-violate-bytes")
    {
        violate_class_violate_bytes = value;
    }
    if(value_path == "violate-class-violate-packets")
    {
        violate_class_violate_packets = value;
    }
    if(value_path == "violate-class-violate-rate")
    {
        violate_class_violate_rate = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::WredStatsArray()
    :
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    profile_title{YType::str, "profile-title"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    red_ecn_marked_bytes{YType::uint64, "red-ecn-marked-bytes"},
    red_ecn_marked_packets{YType::uint64, "red-ecn-marked-packets"},
    red_transmit_bytes{YType::uint64, "red-transmit-bytes"},
    red_transmit_packets{YType::uint64, "red-transmit-packets"}
{
    yang_name = "wred-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::~WredStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::has_data() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_data())
            return true;
    }
    return max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| profile_title.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| red_ecn_marked_bytes.is_set
	|| red_ecn_marked_packets.is_set
	|| red_transmit_bytes.is_set
	|| red_transmit_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::has_operation() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(profile_title.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(red_ecn_marked_bytes.operation)
	|| is_set(red_ecn_marked_packets.operation)
	|| is_set(red_transmit_bytes.operation)
	|| is_set(red_transmit_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WredStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (profile_title.is_set || is_set(profile_title.operation)) leaf_name_data.push_back(profile_title.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (red_ecn_marked_bytes.is_set || is_set(red_ecn_marked_bytes.operation)) leaf_name_data.push_back(red_ecn_marked_bytes.get_name_leafdata());
    if (red_ecn_marked_packets.is_set || is_set(red_ecn_marked_packets.operation)) leaf_name_data.push_back(red_ecn_marked_packets.get_name_leafdata());
    if (red_transmit_bytes.is_set || is_set(red_transmit_bytes.operation)) leaf_name_data.push_back(red_transmit_bytes.get_name_leafdata());
    if (red_transmit_packets.is_set || is_set(red_transmit_packets.operation)) leaf_name_data.push_back(red_transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-label")
    {
        for(auto const & c : red_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel>();
        c->parent = this;
        red_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : red_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "profile-title")
    {
        profile_title = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "red-ecn-marked-bytes")
    {
        red_ecn_marked_bytes = value;
    }
    if(value_path == "red-ecn-marked-packets")
    {
        red_ecn_marked_packets = value;
    }
    if(value_path == "red-transmit-bytes")
    {
        red_transmit_bytes = value;
    }
    if(value_path == "red-transmit-packets")
    {
        red_transmit_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel::RedLabel()
    :
    value_{YType::uint8, "value"},
    wred_type{YType::enumeration, "wred-type"}
{
    yang_name = "red-label"; yang_parent_name = "wred-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel::~RedLabel()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel::has_data() const
{
    return value_.is_set
	|| wred_type.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| is_set(wred_type.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-label";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedLabel' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (wred_type.is_set || is_set(wred_type.operation)) leaf_name_data.push_back(wred_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "wred-type")
    {
        wred_type = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Output()
    :
    service_policy_names(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames>())
	,statistics(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics>())
{
    service_policy_names->parent = this;

    statistics->parent = this;

    yang_name = "output"; yang_parent_name = "satellite-id";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::~Output()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::has_data() const
{
    return (service_policy_names !=  nullptr && service_policy_names->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::has_operation() const
{
    return is_set(operation)
	|| (service_policy_names !=  nullptr && service_policy_names->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-names")
    {
        if(service_policy_names == nullptr)
        {
            service_policy_names = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames>();
        }
        return service_policy_names;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy_names != nullptr)
    {
        children["service-policy-names"] = service_policy_names;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyNames()
{
    yang_name = "service-policy-names"; yang_parent_name = "output";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::~ServicePolicyNames()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::has_data() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::has_operation() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-names";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyNames' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-instance")
    {
        for(auto const & c : service_policy_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance>();
        c->parent = this;
        service_policy_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance::ServicePolicyInstance()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy-instance"; yang_parent_name = "service-policy-names";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance::~ServicePolicyInstance()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance::has_data() const
{
    return service_policy_name.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-instance" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyInstance' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::Statistics()
    :
    policy_name{YType::str, "policy-name"},
    satid{YType::uint32, "satid"},
    state{YType::enumeration, "state"},
    state_description{YType::str, "state-description"}
{
    yang_name = "statistics"; yang_parent_name = "output";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::~Statistics()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::has_data() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_data())
            return true;
    }
    return policy_name.is_set
	|| satid.is_set
	|| state.is_set
	|| state_description.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::has_operation() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| is_set(satid.operation)
	|| is_set(state.operation)
	|| is_set(state_description.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (satid.is_set || is_set(satid.operation)) leaf_name_data.push_back(satid.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_description.is_set || is_set(state_description.operation)) leaf_name_data.push_back(state_description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-stats")
    {
        for(auto const & c : class_stats)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats>();
        c->parent = this;
        class_stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_stats)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "satid")
    {
        satid = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "state-description")
    {
        state_description = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ClassStats()
    :
    cac_state{YType::enumeration, "cac-state"},
    class_name{YType::str, "class-name"},
    counter_validity_bitmask{YType::uint64, "counter-validity-bitmask"},
    queue_descr{YType::str, "queue-descr"},
    shared_queue_id{YType::uint32, "shared-queue-id"}
    	,
    cac_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats>())
	,child_policy(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy>())
	,general_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats>())
	,iphc_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats>())
{
    cac_stats->parent = this;

    child_policy->parent = this;

    general_stats->parent = this;

    iphc_stats->parent = this;

    yang_name = "class-stats"; yang_parent_name = "statistics";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::~ClassStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::has_data() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_data())
            return true;
    }
    return cac_state.is_set
	|| class_name.is_set
	|| counter_validity_bitmask.is_set
	|| queue_descr.is_set
	|| shared_queue_id.is_set
	|| (cac_stats !=  nullptr && cac_stats->has_data())
	|| (child_policy !=  nullptr && child_policy->has_data())
	|| (general_stats !=  nullptr && general_stats->has_data())
	|| (iphc_stats !=  nullptr && iphc_stats->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::has_operation() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cac_state.operation)
	|| is_set(class_name.operation)
	|| is_set(counter_validity_bitmask.operation)
	|| is_set(queue_descr.operation)
	|| is_set(shared_queue_id.operation)
	|| (cac_stats !=  nullptr && cac_stats->has_operation())
	|| (child_policy !=  nullptr && child_policy->has_operation())
	|| (general_stats !=  nullptr && general_stats->has_operation())
	|| (iphc_stats !=  nullptr && iphc_stats->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_state.is_set || is_set(cac_state.operation)) leaf_name_data.push_back(cac_state.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (counter_validity_bitmask.is_set || is_set(counter_validity_bitmask.operation)) leaf_name_data.push_back(counter_validity_bitmask.get_name_leafdata());
    if (queue_descr.is_set || is_set(queue_descr.operation)) leaf_name_data.push_back(queue_descr.get_name_leafdata());
    if (shared_queue_id.is_set || is_set(shared_queue_id.operation)) leaf_name_data.push_back(shared_queue_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cac-stats")
    {
        if(cac_stats == nullptr)
        {
            cac_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats>();
        }
        return cac_stats;
    }

    if(child_yang_name == "child-policy")
    {
        if(child_policy == nullptr)
        {
            child_policy = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy>();
        }
        return child_policy;
    }

    if(child_yang_name == "general-stats")
    {
        if(general_stats == nullptr)
        {
            general_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats>();
        }
        return general_stats;
    }

    if(child_yang_name == "iphc-stats")
    {
        if(iphc_stats == nullptr)
        {
            iphc_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats>();
        }
        return iphc_stats;
    }

    if(child_yang_name == "police-stats-array")
    {
        for(auto const & c : police_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray>();
        c->parent = this;
        police_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-stats-array")
    {
        for(auto const & c : queue_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray>();
        c->parent = this;
        queue_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "wred-stats-array")
    {
        for(auto const & c : wred_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray>();
        c->parent = this;
        wred_stats_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cac_stats != nullptr)
    {
        children["cac-stats"] = cac_stats;
    }

    if(child_policy != nullptr)
    {
        children["child-policy"] = child_policy;
    }

    if(general_stats != nullptr)
    {
        children["general-stats"] = general_stats;
    }

    if(iphc_stats != nullptr)
    {
        children["iphc-stats"] = iphc_stats;
    }

    for (auto const & c : police_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wred_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cac-state")
    {
        cac_state = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "counter-validity-bitmask")
    {
        counter_validity_bitmask = value;
    }
    if(value_path == "queue-descr")
    {
        queue_descr = value;
    }
    if(value_path == "shared-queue-id")
    {
        shared_queue_id = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats::GeneralStats()
    :
    match_data_rate{YType::uint32, "match-data-rate"},
    pre_policy_matched_bytes{YType::uint64, "pre-policy-matched-bytes"},
    pre_policy_matched_packets{YType::uint64, "pre-policy-matched-packets"},
    total_drop_bytes{YType::uint64, "total-drop-bytes"},
    total_drop_packets{YType::uint64, "total-drop-packets"},
    total_drop_rate{YType::uint32, "total-drop-rate"},
    total_transmit_rate{YType::uint32, "total-transmit-rate"},
    transmit_bytes{YType::uint64, "transmit-bytes"},
    transmit_packets{YType::uint64, "transmit-packets"}
{
    yang_name = "general-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats::~GeneralStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats::has_data() const
{
    return match_data_rate.is_set
	|| pre_policy_matched_bytes.is_set
	|| pre_policy_matched_packets.is_set
	|| total_drop_bytes.is_set
	|| total_drop_packets.is_set
	|| total_drop_rate.is_set
	|| total_transmit_rate.is_set
	|| transmit_bytes.is_set
	|| transmit_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats::has_operation() const
{
    return is_set(operation)
	|| is_set(match_data_rate.operation)
	|| is_set(pre_policy_matched_bytes.operation)
	|| is_set(pre_policy_matched_packets.operation)
	|| is_set(total_drop_bytes.operation)
	|| is_set(total_drop_packets.operation)
	|| is_set(total_drop_rate.operation)
	|| is_set(total_transmit_rate.operation)
	|| is_set(transmit_bytes.operation)
	|| is_set(transmit_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GeneralStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_data_rate.is_set || is_set(match_data_rate.operation)) leaf_name_data.push_back(match_data_rate.get_name_leafdata());
    if (pre_policy_matched_bytes.is_set || is_set(pre_policy_matched_bytes.operation)) leaf_name_data.push_back(pre_policy_matched_bytes.get_name_leafdata());
    if (pre_policy_matched_packets.is_set || is_set(pre_policy_matched_packets.operation)) leaf_name_data.push_back(pre_policy_matched_packets.get_name_leafdata());
    if (total_drop_bytes.is_set || is_set(total_drop_bytes.operation)) leaf_name_data.push_back(total_drop_bytes.get_name_leafdata());
    if (total_drop_packets.is_set || is_set(total_drop_packets.operation)) leaf_name_data.push_back(total_drop_packets.get_name_leafdata());
    if (total_drop_rate.is_set || is_set(total_drop_rate.operation)) leaf_name_data.push_back(total_drop_rate.get_name_leafdata());
    if (total_transmit_rate.is_set || is_set(total_transmit_rate.operation)) leaf_name_data.push_back(total_transmit_rate.get_name_leafdata());
    if (transmit_bytes.is_set || is_set(transmit_bytes.operation)) leaf_name_data.push_back(transmit_bytes.get_name_leafdata());
    if (transmit_packets.is_set || is_set(transmit_packets.operation)) leaf_name_data.push_back(transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-data-rate")
    {
        match_data_rate = value;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes = value;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets = value;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes = value;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets = value;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate = value;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate = value;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes = value;
    }
    if(value_path == "transmit-packets")
    {
        transmit_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats::IphcStats()
    :
    non_tcp_bytes_saved{YType::uint64, "non-tcp-bytes-saved"},
    non_tcp_bytes_sent_rate{YType::uint32, "non-tcp-bytes-sent-rate"},
    non_tcp_compressed_packets_out{YType::uint64, "non-tcp-compressed-packets-out"},
    non_tcp_full_header_packets_out{YType::uint64, "non-tcp-full-header-packets-out"},
    non_tcp_total_out_bytes{YType::uint64, "non-tcp-total-out-bytes"},
    non_tcp_total_out_packets{YType::uint64, "non-tcp-total-out-packets"},
    tcp_bytes_saved{YType::uint64, "tcp-bytes-saved"},
    tcp_bytes_sent_rate{YType::uint32, "tcp-bytes-sent-rate"},
    tcp_compressed_packets_out{YType::uint64, "tcp-compressed-packets-out"},
    tcp_full_header_packets_out{YType::uint64, "tcp-full-header-packets-out"},
    tcp_total_out_bytes{YType::uint64, "tcp-total-out-bytes"},
    tcp_total_out_packets{YType::uint64, "tcp-total-out-packets"}
{
    yang_name = "iphc-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats::~IphcStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats::has_data() const
{
    return non_tcp_bytes_saved.is_set
	|| non_tcp_bytes_sent_rate.is_set
	|| non_tcp_compressed_packets_out.is_set
	|| non_tcp_full_header_packets_out.is_set
	|| non_tcp_total_out_bytes.is_set
	|| non_tcp_total_out_packets.is_set
	|| tcp_bytes_saved.is_set
	|| tcp_bytes_sent_rate.is_set
	|| tcp_compressed_packets_out.is_set
	|| tcp_full_header_packets_out.is_set
	|| tcp_total_out_bytes.is_set
	|| tcp_total_out_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(non_tcp_bytes_saved.operation)
	|| is_set(non_tcp_bytes_sent_rate.operation)
	|| is_set(non_tcp_compressed_packets_out.operation)
	|| is_set(non_tcp_full_header_packets_out.operation)
	|| is_set(non_tcp_total_out_bytes.operation)
	|| is_set(non_tcp_total_out_packets.operation)
	|| is_set(tcp_bytes_saved.operation)
	|| is_set(tcp_bytes_sent_rate.operation)
	|| is_set(tcp_compressed_packets_out.operation)
	|| is_set(tcp_full_header_packets_out.operation)
	|| is_set(tcp_total_out_bytes.operation)
	|| is_set(tcp_total_out_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iphc-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IphcStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_tcp_bytes_saved.is_set || is_set(non_tcp_bytes_saved.operation)) leaf_name_data.push_back(non_tcp_bytes_saved.get_name_leafdata());
    if (non_tcp_bytes_sent_rate.is_set || is_set(non_tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(non_tcp_bytes_sent_rate.get_name_leafdata());
    if (non_tcp_compressed_packets_out.is_set || is_set(non_tcp_compressed_packets_out.operation)) leaf_name_data.push_back(non_tcp_compressed_packets_out.get_name_leafdata());
    if (non_tcp_full_header_packets_out.is_set || is_set(non_tcp_full_header_packets_out.operation)) leaf_name_data.push_back(non_tcp_full_header_packets_out.get_name_leafdata());
    if (non_tcp_total_out_bytes.is_set || is_set(non_tcp_total_out_bytes.operation)) leaf_name_data.push_back(non_tcp_total_out_bytes.get_name_leafdata());
    if (non_tcp_total_out_packets.is_set || is_set(non_tcp_total_out_packets.operation)) leaf_name_data.push_back(non_tcp_total_out_packets.get_name_leafdata());
    if (tcp_bytes_saved.is_set || is_set(tcp_bytes_saved.operation)) leaf_name_data.push_back(tcp_bytes_saved.get_name_leafdata());
    if (tcp_bytes_sent_rate.is_set || is_set(tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(tcp_bytes_sent_rate.get_name_leafdata());
    if (tcp_compressed_packets_out.is_set || is_set(tcp_compressed_packets_out.operation)) leaf_name_data.push_back(tcp_compressed_packets_out.get_name_leafdata());
    if (tcp_full_header_packets_out.is_set || is_set(tcp_full_header_packets_out.operation)) leaf_name_data.push_back(tcp_full_header_packets_out.get_name_leafdata());
    if (tcp_total_out_bytes.is_set || is_set(tcp_total_out_bytes.operation)) leaf_name_data.push_back(tcp_total_out_bytes.get_name_leafdata());
    if (tcp_total_out_packets.is_set || is_set(tcp_total_out_packets.operation)) leaf_name_data.push_back(tcp_total_out_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-tcp-bytes-saved")
    {
        non_tcp_bytes_saved = value;
    }
    if(value_path == "non-tcp-bytes-sent-rate")
    {
        non_tcp_bytes_sent_rate = value;
    }
    if(value_path == "non-tcp-compressed-packets-out")
    {
        non_tcp_compressed_packets_out = value;
    }
    if(value_path == "non-tcp-full-header-packets-out")
    {
        non_tcp_full_header_packets_out = value;
    }
    if(value_path == "non-tcp-total-out-bytes")
    {
        non_tcp_total_out_bytes = value;
    }
    if(value_path == "non-tcp-total-out-packets")
    {
        non_tcp_total_out_packets = value;
    }
    if(value_path == "tcp-bytes-saved")
    {
        tcp_bytes_saved = value;
    }
    if(value_path == "tcp-bytes-sent-rate")
    {
        tcp_bytes_sent_rate = value;
    }
    if(value_path == "tcp-compressed-packets-out")
    {
        tcp_compressed_packets_out = value;
    }
    if(value_path == "tcp-full-header-packets-out")
    {
        tcp_full_header_packets_out = value;
    }
    if(value_path == "tcp-total-out-bytes")
    {
        tcp_total_out_bytes = value;
    }
    if(value_path == "tcp-total-out-packets")
    {
        tcp_total_out_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ChildPolicy()
{
    yang_name = "child-policy"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::~ChildPolicy()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::has_data() const
{
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::has_operation() const
{
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-policy";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChildPolicy' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats::CacStats()
    :
    admit_bytes{YType::uint64, "admit-bytes"},
    admit_rates{YType::uint32, "admit-rates"},
    admitpackets{YType::uint64, "admitpackets"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    drop_rates{YType::uint32, "drop-rates"}
{
    yang_name = "cac-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats::~CacStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats::has_data() const
{
    return admit_bytes.is_set
	|| admit_rates.is_set
	|| admitpackets.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| drop_rates.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats::has_operation() const
{
    return is_set(operation)
	|| is_set(admit_bytes.operation)
	|| is_set(admit_rates.operation)
	|| is_set(admitpackets.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(drop_rates.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CacStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admit_bytes.is_set || is_set(admit_bytes.operation)) leaf_name_data.push_back(admit_bytes.get_name_leafdata());
    if (admit_rates.is_set || is_set(admit_rates.operation)) leaf_name_data.push_back(admit_rates.get_name_leafdata());
    if (admitpackets.is_set || is_set(admitpackets.operation)) leaf_name_data.push_back(admitpackets.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (drop_rates.is_set || is_set(drop_rates.operation)) leaf_name_data.push_back(drop_rates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admit-bytes")
    {
        admit_bytes = value;
    }
    if(value_path == "admit-rates")
    {
        admit_rates = value;
    }
    if(value_path == "admitpackets")
    {
        admitpackets = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "drop-rates")
    {
        drop_rates = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueStatsArray()
    :
    atm_clp0_drop_bytes{YType::uint64, "atm-clp0-drop-bytes"},
    atm_clp0_drop_packets{YType::uint64, "atm-clp0-drop-packets"},
    atm_clp1_drop_bytes{YType::uint64, "atm-clp1-drop-bytes"},
    atm_clp1_drop_packets{YType::uint64, "atm-clp1-drop-packets"},
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    forced_wred_stats_display{YType::boolean, "forced-wred-stats-display"},
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    queue_drop_threshold{YType::uint32, "queue-drop-threshold"},
    queue_id{YType::uint32, "queue-id"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    tail_drop_bytes{YType::uint64, "tail-drop-bytes"},
    tail_drop_packets{YType::uint64, "tail-drop-packets"}
{
    yang_name = "queue-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::~QueueStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::has_data() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_data())
            return true;
    }
    return atm_clp0_drop_bytes.is_set
	|| atm_clp0_drop_packets.is_set
	|| atm_clp1_drop_bytes.is_set
	|| atm_clp1_drop_packets.is_set
	|| conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| forced_wred_stats_display.is_set
	|| max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| queue_drop_threshold.is_set
	|| queue_id.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| tail_drop_bytes.is_set
	|| tail_drop_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::has_operation() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(atm_clp0_drop_bytes.operation)
	|| is_set(atm_clp0_drop_packets.operation)
	|| is_set(atm_clp1_drop_bytes.operation)
	|| is_set(atm_clp1_drop_packets.operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(forced_wred_stats_display.operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(queue_drop_threshold.operation)
	|| is_set(queue_id.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(tail_drop_bytes.operation)
	|| is_set(tail_drop_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp0_drop_bytes.is_set || is_set(atm_clp0_drop_bytes.operation)) leaf_name_data.push_back(atm_clp0_drop_bytes.get_name_leafdata());
    if (atm_clp0_drop_packets.is_set || is_set(atm_clp0_drop_packets.operation)) leaf_name_data.push_back(atm_clp0_drop_packets.get_name_leafdata());
    if (atm_clp1_drop_bytes.is_set || is_set(atm_clp1_drop_bytes.operation)) leaf_name_data.push_back(atm_clp1_drop_bytes.get_name_leafdata());
    if (atm_clp1_drop_packets.is_set || is_set(atm_clp1_drop_packets.operation)) leaf_name_data.push_back(atm_clp1_drop_packets.get_name_leafdata());
    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (forced_wred_stats_display.is_set || is_set(forced_wred_stats_display.operation)) leaf_name_data.push_back(forced_wred_stats_display.get_name_leafdata());
    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (queue_drop_threshold.is_set || is_set(queue_drop_threshold.operation)) leaf_name_data.push_back(queue_drop_threshold.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (tail_drop_bytes.is_set || is_set(tail_drop_bytes.operation)) leaf_name_data.push_back(tail_drop_bytes.get_name_leafdata());
    if (tail_drop_packets.is_set || is_set(tail_drop_packets.operation)) leaf_name_data.push_back(tail_drop_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue-average-length")
    {
        for(auto const & c : queue_average_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength>();
        c->parent = this;
        queue_average_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-instance-length")
    {
        for(auto const & c : queue_instance_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength>();
        c->parent = this;
        queue_instance_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-max-length")
    {
        for(auto const & c : queue_max_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength>();
        c->parent = this;
        queue_max_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : queue_average_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_instance_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_max_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-clp0-drop-bytes")
    {
        atm_clp0_drop_bytes = value;
    }
    if(value_path == "atm-clp0-drop-packets")
    {
        atm_clp0_drop_packets = value;
    }
    if(value_path == "atm-clp1-drop-bytes")
    {
        atm_clp1_drop_bytes = value;
    }
    if(value_path == "atm-clp1-drop-packets")
    {
        atm_clp1_drop_packets = value;
    }
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "forced-wred-stats-display")
    {
        forced_wred_stats_display = value;
    }
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "queue-drop-threshold")
    {
        queue_drop_threshold = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes = value;
    }
    if(value_path == "tail-drop-packets")
    {
        tail_drop_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::QueueInstanceLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-instance-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::~QueueInstanceLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-instance-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueInstanceLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::QueueAverageLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-average-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::~QueueAverageLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-average-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueAverageLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::QueueMaxLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-max-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::~QueueMaxLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-max-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueMaxLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::PoliceStatsArray()
    :
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    parent_drop_bytes{YType::uint64, "parent-drop-bytes"},
    parent_drop_packets{YType::uint64, "parent-drop-packets"},
    violate_bytes{YType::uint64, "violate-bytes"},
    violate_packets{YType::uint64, "violate-packets"},
    violate_rate{YType::uint32, "violate-rate"}
    	,
    color_class_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>())
{
    color_class_stats->parent = this;

    yang_name = "police-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::~PoliceStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::has_data() const
{
    return conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| parent_drop_bytes.is_set
	|| parent_drop_packets.is_set
	|| violate_bytes.is_set
	|| violate_packets.is_set
	|| violate_rate.is_set
	|| (color_class_stats !=  nullptr && color_class_stats->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(parent_drop_bytes.operation)
	|| is_set(parent_drop_packets.operation)
	|| is_set(violate_bytes.operation)
	|| is_set(violate_packets.operation)
	|| is_set(violate_rate.operation)
	|| (color_class_stats !=  nullptr && color_class_stats->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (parent_drop_bytes.is_set || is_set(parent_drop_bytes.operation)) leaf_name_data.push_back(parent_drop_bytes.get_name_leafdata());
    if (parent_drop_packets.is_set || is_set(parent_drop_packets.operation)) leaf_name_data.push_back(parent_drop_packets.get_name_leafdata());
    if (violate_bytes.is_set || is_set(violate_bytes.operation)) leaf_name_data.push_back(violate_bytes.get_name_leafdata());
    if (violate_packets.is_set || is_set(violate_packets.operation)) leaf_name_data.push_back(violate_packets.get_name_leafdata());
    if (violate_rate.is_set || is_set(violate_rate.operation)) leaf_name_data.push_back(violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "color-class-stats")
    {
        if(color_class_stats == nullptr)
        {
            color_class_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>();
        }
        return color_class_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(color_class_stats != nullptr)
    {
        children["color-class-stats"] = color_class_stats;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "parent-drop-bytes")
    {
        parent_drop_bytes = value;
    }
    if(value_path == "parent-drop-packets")
    {
        parent_drop_packets = value;
    }
    if(value_path == "violate-bytes")
    {
        violate_bytes = value;
    }
    if(value_path == "violate-packets")
    {
        violate_packets = value;
    }
    if(value_path == "violate-rate")
    {
        violate_rate = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::ColorClassStats()
    :
    conform_class_conform_bytes{YType::uint64, "conform-class-conform-bytes"},
    conform_class_conform_packets{YType::uint64, "conform-class-conform-packets"},
    conform_class_conform_rate{YType::uint32, "conform-class-conform-rate"},
    conform_class_exceed_bytes{YType::uint64, "conform-class-exceed-bytes"},
    conform_class_exceed_packets{YType::uint64, "conform-class-exceed-packets"},
    conform_class_exceed_rate{YType::uint32, "conform-class-exceed-rate"},
    conform_class_violate_bytes{YType::uint64, "conform-class-violate-bytes"},
    conform_class_violate_packets{YType::uint64, "conform-class-violate-packets"},
    conform_class_violate_rate{YType::uint32, "conform-class-violate-rate"},
    exceed_class_exceed_bytes{YType::uint64, "exceed-class-exceed-bytes"},
    exceed_class_exceed_packets{YType::uint64, "exceed-class-exceed-packets"},
    exceed_class_exceed_rate{YType::uint32, "exceed-class-exceed-rate"},
    exceed_class_violate_bytes{YType::uint64, "exceed-class-violate-bytes"},
    exceed_class_violate_packets{YType::uint64, "exceed-class-violate-packets"},
    exceed_class_violate_rate{YType::uint32, "exceed-class-violate-rate"},
    violate_class_violate_bytes{YType::uint64, "violate-class-violate-bytes"},
    violate_class_violate_packets{YType::uint64, "violate-class-violate-packets"},
    violate_class_violate_rate{YType::uint32, "violate-class-violate-rate"}
{
    yang_name = "color-class-stats"; yang_parent_name = "police-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::~ColorClassStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_data() const
{
    return conform_class_conform_bytes.is_set
	|| conform_class_conform_packets.is_set
	|| conform_class_conform_rate.is_set
	|| conform_class_exceed_bytes.is_set
	|| conform_class_exceed_packets.is_set
	|| conform_class_exceed_rate.is_set
	|| conform_class_violate_bytes.is_set
	|| conform_class_violate_packets.is_set
	|| conform_class_violate_rate.is_set
	|| exceed_class_exceed_bytes.is_set
	|| exceed_class_exceed_packets.is_set
	|| exceed_class_exceed_rate.is_set
	|| exceed_class_violate_bytes.is_set
	|| exceed_class_violate_packets.is_set
	|| exceed_class_violate_rate.is_set
	|| violate_class_violate_bytes.is_set
	|| violate_class_violate_packets.is_set
	|| violate_class_violate_rate.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_class_conform_bytes.operation)
	|| is_set(conform_class_conform_packets.operation)
	|| is_set(conform_class_conform_rate.operation)
	|| is_set(conform_class_exceed_bytes.operation)
	|| is_set(conform_class_exceed_packets.operation)
	|| is_set(conform_class_exceed_rate.operation)
	|| is_set(conform_class_violate_bytes.operation)
	|| is_set(conform_class_violate_packets.operation)
	|| is_set(conform_class_violate_rate.operation)
	|| is_set(exceed_class_exceed_bytes.operation)
	|| is_set(exceed_class_exceed_packets.operation)
	|| is_set(exceed_class_exceed_rate.operation)
	|| is_set(exceed_class_violate_bytes.operation)
	|| is_set(exceed_class_violate_packets.operation)
	|| is_set(exceed_class_violate_rate.operation)
	|| is_set(violate_class_violate_bytes.operation)
	|| is_set(violate_class_violate_packets.operation)
	|| is_set(violate_class_violate_rate.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ColorClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_class_conform_bytes.is_set || is_set(conform_class_conform_bytes.operation)) leaf_name_data.push_back(conform_class_conform_bytes.get_name_leafdata());
    if (conform_class_conform_packets.is_set || is_set(conform_class_conform_packets.operation)) leaf_name_data.push_back(conform_class_conform_packets.get_name_leafdata());
    if (conform_class_conform_rate.is_set || is_set(conform_class_conform_rate.operation)) leaf_name_data.push_back(conform_class_conform_rate.get_name_leafdata());
    if (conform_class_exceed_bytes.is_set || is_set(conform_class_exceed_bytes.operation)) leaf_name_data.push_back(conform_class_exceed_bytes.get_name_leafdata());
    if (conform_class_exceed_packets.is_set || is_set(conform_class_exceed_packets.operation)) leaf_name_data.push_back(conform_class_exceed_packets.get_name_leafdata());
    if (conform_class_exceed_rate.is_set || is_set(conform_class_exceed_rate.operation)) leaf_name_data.push_back(conform_class_exceed_rate.get_name_leafdata());
    if (conform_class_violate_bytes.is_set || is_set(conform_class_violate_bytes.operation)) leaf_name_data.push_back(conform_class_violate_bytes.get_name_leafdata());
    if (conform_class_violate_packets.is_set || is_set(conform_class_violate_packets.operation)) leaf_name_data.push_back(conform_class_violate_packets.get_name_leafdata());
    if (conform_class_violate_rate.is_set || is_set(conform_class_violate_rate.operation)) leaf_name_data.push_back(conform_class_violate_rate.get_name_leafdata());
    if (exceed_class_exceed_bytes.is_set || is_set(exceed_class_exceed_bytes.operation)) leaf_name_data.push_back(exceed_class_exceed_bytes.get_name_leafdata());
    if (exceed_class_exceed_packets.is_set || is_set(exceed_class_exceed_packets.operation)) leaf_name_data.push_back(exceed_class_exceed_packets.get_name_leafdata());
    if (exceed_class_exceed_rate.is_set || is_set(exceed_class_exceed_rate.operation)) leaf_name_data.push_back(exceed_class_exceed_rate.get_name_leafdata());
    if (exceed_class_violate_bytes.is_set || is_set(exceed_class_violate_bytes.operation)) leaf_name_data.push_back(exceed_class_violate_bytes.get_name_leafdata());
    if (exceed_class_violate_packets.is_set || is_set(exceed_class_violate_packets.operation)) leaf_name_data.push_back(exceed_class_violate_packets.get_name_leafdata());
    if (exceed_class_violate_rate.is_set || is_set(exceed_class_violate_rate.operation)) leaf_name_data.push_back(exceed_class_violate_rate.get_name_leafdata());
    if (violate_class_violate_bytes.is_set || is_set(violate_class_violate_bytes.operation)) leaf_name_data.push_back(violate_class_violate_bytes.get_name_leafdata());
    if (violate_class_violate_packets.is_set || is_set(violate_class_violate_packets.operation)) leaf_name_data.push_back(violate_class_violate_packets.get_name_leafdata());
    if (violate_class_violate_rate.is_set || is_set(violate_class_violate_rate.operation)) leaf_name_data.push_back(violate_class_violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-class-conform-bytes")
    {
        conform_class_conform_bytes = value;
    }
    if(value_path == "conform-class-conform-packets")
    {
        conform_class_conform_packets = value;
    }
    if(value_path == "conform-class-conform-rate")
    {
        conform_class_conform_rate = value;
    }
    if(value_path == "conform-class-exceed-bytes")
    {
        conform_class_exceed_bytes = value;
    }
    if(value_path == "conform-class-exceed-packets")
    {
        conform_class_exceed_packets = value;
    }
    if(value_path == "conform-class-exceed-rate")
    {
        conform_class_exceed_rate = value;
    }
    if(value_path == "conform-class-violate-bytes")
    {
        conform_class_violate_bytes = value;
    }
    if(value_path == "conform-class-violate-packets")
    {
        conform_class_violate_packets = value;
    }
    if(value_path == "conform-class-violate-rate")
    {
        conform_class_violate_rate = value;
    }
    if(value_path == "exceed-class-exceed-bytes")
    {
        exceed_class_exceed_bytes = value;
    }
    if(value_path == "exceed-class-exceed-packets")
    {
        exceed_class_exceed_packets = value;
    }
    if(value_path == "exceed-class-exceed-rate")
    {
        exceed_class_exceed_rate = value;
    }
    if(value_path == "exceed-class-violate-bytes")
    {
        exceed_class_violate_bytes = value;
    }
    if(value_path == "exceed-class-violate-packets")
    {
        exceed_class_violate_packets = value;
    }
    if(value_path == "exceed-class-violate-rate")
    {
        exceed_class_violate_rate = value;
    }
    if(value_path == "violate-class-violate-bytes")
    {
        violate_class_violate_bytes = value;
    }
    if(value_path == "violate-class-violate-packets")
    {
        violate_class_violate_packets = value;
    }
    if(value_path == "violate-class-violate-rate")
    {
        violate_class_violate_rate = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::WredStatsArray()
    :
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    profile_title{YType::str, "profile-title"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    red_ecn_marked_bytes{YType::uint64, "red-ecn-marked-bytes"},
    red_ecn_marked_packets{YType::uint64, "red-ecn-marked-packets"},
    red_transmit_bytes{YType::uint64, "red-transmit-bytes"},
    red_transmit_packets{YType::uint64, "red-transmit-packets"}
{
    yang_name = "wred-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::~WredStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::has_data() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_data())
            return true;
    }
    return max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| profile_title.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| red_ecn_marked_bytes.is_set
	|| red_ecn_marked_packets.is_set
	|| red_transmit_bytes.is_set
	|| red_transmit_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::has_operation() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(profile_title.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(red_ecn_marked_bytes.operation)
	|| is_set(red_ecn_marked_packets.operation)
	|| is_set(red_transmit_bytes.operation)
	|| is_set(red_transmit_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WredStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (profile_title.is_set || is_set(profile_title.operation)) leaf_name_data.push_back(profile_title.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (red_ecn_marked_bytes.is_set || is_set(red_ecn_marked_bytes.operation)) leaf_name_data.push_back(red_ecn_marked_bytes.get_name_leafdata());
    if (red_ecn_marked_packets.is_set || is_set(red_ecn_marked_packets.operation)) leaf_name_data.push_back(red_ecn_marked_packets.get_name_leafdata());
    if (red_transmit_bytes.is_set || is_set(red_transmit_bytes.operation)) leaf_name_data.push_back(red_transmit_bytes.get_name_leafdata());
    if (red_transmit_packets.is_set || is_set(red_transmit_packets.operation)) leaf_name_data.push_back(red_transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-label")
    {
        for(auto const & c : red_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel>();
        c->parent = this;
        red_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : red_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "profile-title")
    {
        profile_title = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "red-ecn-marked-bytes")
    {
        red_ecn_marked_bytes = value;
    }
    if(value_path == "red-ecn-marked-packets")
    {
        red_ecn_marked_packets = value;
    }
    if(value_path == "red-transmit-bytes")
    {
        red_transmit_bytes = value;
    }
    if(value_path == "red-transmit-packets")
    {
        red_transmit_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel::RedLabel()
    :
    value_{YType::uint8, "value"},
    wred_type{YType::enumeration, "wred-type"}
{
    yang_name = "red-label"; yang_parent_name = "wred-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel::~RedLabel()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel::has_data() const
{
    return value_.is_set
	|| wred_type.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| is_set(wred_type.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-label";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedLabel' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (wred_type.is_set || is_set(wred_type.operation)) leaf_name_data.push_back(wred_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "wred-type")
    {
        wred_type = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Input()
    :
    service_policy_names(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames>())
	,statistics(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics>())
{
    service_policy_names->parent = this;

    statistics->parent = this;

    yang_name = "input"; yang_parent_name = "member-interface";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::~Input()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::has_data() const
{
    return (service_policy_names !=  nullptr && service_policy_names->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::has_operation() const
{
    return is_set(operation)
	|| (service_policy_names !=  nullptr && service_policy_names->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-names")
    {
        if(service_policy_names == nullptr)
        {
            service_policy_names = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames>();
        }
        return service_policy_names;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy_names != nullptr)
    {
        children["service-policy-names"] = service_policy_names;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyNames()
{
    yang_name = "service-policy-names"; yang_parent_name = "input";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::~ServicePolicyNames()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::has_data() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::has_operation() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-names";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyNames' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-instance")
    {
        for(auto const & c : service_policy_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance>();
        c->parent = this;
        service_policy_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance::ServicePolicyInstance()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy-instance"; yang_parent_name = "service-policy-names";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance::~ServicePolicyInstance()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance::has_data() const
{
    return service_policy_name.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-instance" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyInstance' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::Statistics()
    :
    policy_name{YType::str, "policy-name"},
    satid{YType::uint32, "satid"},
    state{YType::enumeration, "state"},
    state_description{YType::str, "state-description"}
{
    yang_name = "statistics"; yang_parent_name = "input";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::~Statistics()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::has_data() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_data())
            return true;
    }
    return policy_name.is_set
	|| satid.is_set
	|| state.is_set
	|| state_description.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::has_operation() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| is_set(satid.operation)
	|| is_set(state.operation)
	|| is_set(state_description.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (satid.is_set || is_set(satid.operation)) leaf_name_data.push_back(satid.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_description.is_set || is_set(state_description.operation)) leaf_name_data.push_back(state_description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-stats")
    {
        for(auto const & c : class_stats)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats>();
        c->parent = this;
        class_stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_stats)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "satid")
    {
        satid = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "state-description")
    {
        state_description = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ClassStats()
    :
    cac_state{YType::enumeration, "cac-state"},
    class_name{YType::str, "class-name"},
    counter_validity_bitmask{YType::uint64, "counter-validity-bitmask"},
    queue_descr{YType::str, "queue-descr"},
    shared_queue_id{YType::uint32, "shared-queue-id"}
    	,
    cac_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats>())
	,child_policy(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy>())
	,general_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats>())
	,iphc_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats>())
{
    cac_stats->parent = this;

    child_policy->parent = this;

    general_stats->parent = this;

    iphc_stats->parent = this;

    yang_name = "class-stats"; yang_parent_name = "statistics";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::~ClassStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::has_data() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_data())
            return true;
    }
    return cac_state.is_set
	|| class_name.is_set
	|| counter_validity_bitmask.is_set
	|| queue_descr.is_set
	|| shared_queue_id.is_set
	|| (cac_stats !=  nullptr && cac_stats->has_data())
	|| (child_policy !=  nullptr && child_policy->has_data())
	|| (general_stats !=  nullptr && general_stats->has_data())
	|| (iphc_stats !=  nullptr && iphc_stats->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::has_operation() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cac_state.operation)
	|| is_set(class_name.operation)
	|| is_set(counter_validity_bitmask.operation)
	|| is_set(queue_descr.operation)
	|| is_set(shared_queue_id.operation)
	|| (cac_stats !=  nullptr && cac_stats->has_operation())
	|| (child_policy !=  nullptr && child_policy->has_operation())
	|| (general_stats !=  nullptr && general_stats->has_operation())
	|| (iphc_stats !=  nullptr && iphc_stats->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_state.is_set || is_set(cac_state.operation)) leaf_name_data.push_back(cac_state.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (counter_validity_bitmask.is_set || is_set(counter_validity_bitmask.operation)) leaf_name_data.push_back(counter_validity_bitmask.get_name_leafdata());
    if (queue_descr.is_set || is_set(queue_descr.operation)) leaf_name_data.push_back(queue_descr.get_name_leafdata());
    if (shared_queue_id.is_set || is_set(shared_queue_id.operation)) leaf_name_data.push_back(shared_queue_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cac-stats")
    {
        if(cac_stats == nullptr)
        {
            cac_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats>();
        }
        return cac_stats;
    }

    if(child_yang_name == "child-policy")
    {
        if(child_policy == nullptr)
        {
            child_policy = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy>();
        }
        return child_policy;
    }

    if(child_yang_name == "general-stats")
    {
        if(general_stats == nullptr)
        {
            general_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats>();
        }
        return general_stats;
    }

    if(child_yang_name == "iphc-stats")
    {
        if(iphc_stats == nullptr)
        {
            iphc_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats>();
        }
        return iphc_stats;
    }

    if(child_yang_name == "police-stats-array")
    {
        for(auto const & c : police_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray>();
        c->parent = this;
        police_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-stats-array")
    {
        for(auto const & c : queue_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray>();
        c->parent = this;
        queue_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "wred-stats-array")
    {
        for(auto const & c : wred_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray>();
        c->parent = this;
        wred_stats_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cac_stats != nullptr)
    {
        children["cac-stats"] = cac_stats;
    }

    if(child_policy != nullptr)
    {
        children["child-policy"] = child_policy;
    }

    if(general_stats != nullptr)
    {
        children["general-stats"] = general_stats;
    }

    if(iphc_stats != nullptr)
    {
        children["iphc-stats"] = iphc_stats;
    }

    for (auto const & c : police_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wred_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cac-state")
    {
        cac_state = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "counter-validity-bitmask")
    {
        counter_validity_bitmask = value;
    }
    if(value_path == "queue-descr")
    {
        queue_descr = value;
    }
    if(value_path == "shared-queue-id")
    {
        shared_queue_id = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats::GeneralStats()
    :
    match_data_rate{YType::uint32, "match-data-rate"},
    pre_policy_matched_bytes{YType::uint64, "pre-policy-matched-bytes"},
    pre_policy_matched_packets{YType::uint64, "pre-policy-matched-packets"},
    total_drop_bytes{YType::uint64, "total-drop-bytes"},
    total_drop_packets{YType::uint64, "total-drop-packets"},
    total_drop_rate{YType::uint32, "total-drop-rate"},
    total_transmit_rate{YType::uint32, "total-transmit-rate"},
    transmit_bytes{YType::uint64, "transmit-bytes"},
    transmit_packets{YType::uint64, "transmit-packets"}
{
    yang_name = "general-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats::~GeneralStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats::has_data() const
{
    return match_data_rate.is_set
	|| pre_policy_matched_bytes.is_set
	|| pre_policy_matched_packets.is_set
	|| total_drop_bytes.is_set
	|| total_drop_packets.is_set
	|| total_drop_rate.is_set
	|| total_transmit_rate.is_set
	|| transmit_bytes.is_set
	|| transmit_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats::has_operation() const
{
    return is_set(operation)
	|| is_set(match_data_rate.operation)
	|| is_set(pre_policy_matched_bytes.operation)
	|| is_set(pre_policy_matched_packets.operation)
	|| is_set(total_drop_bytes.operation)
	|| is_set(total_drop_packets.operation)
	|| is_set(total_drop_rate.operation)
	|| is_set(total_transmit_rate.operation)
	|| is_set(transmit_bytes.operation)
	|| is_set(transmit_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GeneralStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_data_rate.is_set || is_set(match_data_rate.operation)) leaf_name_data.push_back(match_data_rate.get_name_leafdata());
    if (pre_policy_matched_bytes.is_set || is_set(pre_policy_matched_bytes.operation)) leaf_name_data.push_back(pre_policy_matched_bytes.get_name_leafdata());
    if (pre_policy_matched_packets.is_set || is_set(pre_policy_matched_packets.operation)) leaf_name_data.push_back(pre_policy_matched_packets.get_name_leafdata());
    if (total_drop_bytes.is_set || is_set(total_drop_bytes.operation)) leaf_name_data.push_back(total_drop_bytes.get_name_leafdata());
    if (total_drop_packets.is_set || is_set(total_drop_packets.operation)) leaf_name_data.push_back(total_drop_packets.get_name_leafdata());
    if (total_drop_rate.is_set || is_set(total_drop_rate.operation)) leaf_name_data.push_back(total_drop_rate.get_name_leafdata());
    if (total_transmit_rate.is_set || is_set(total_transmit_rate.operation)) leaf_name_data.push_back(total_transmit_rate.get_name_leafdata());
    if (transmit_bytes.is_set || is_set(transmit_bytes.operation)) leaf_name_data.push_back(transmit_bytes.get_name_leafdata());
    if (transmit_packets.is_set || is_set(transmit_packets.operation)) leaf_name_data.push_back(transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-data-rate")
    {
        match_data_rate = value;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes = value;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets = value;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes = value;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets = value;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate = value;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate = value;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes = value;
    }
    if(value_path == "transmit-packets")
    {
        transmit_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats::IphcStats()
    :
    non_tcp_bytes_saved{YType::uint64, "non-tcp-bytes-saved"},
    non_tcp_bytes_sent_rate{YType::uint32, "non-tcp-bytes-sent-rate"},
    non_tcp_compressed_packets_out{YType::uint64, "non-tcp-compressed-packets-out"},
    non_tcp_full_header_packets_out{YType::uint64, "non-tcp-full-header-packets-out"},
    non_tcp_total_out_bytes{YType::uint64, "non-tcp-total-out-bytes"},
    non_tcp_total_out_packets{YType::uint64, "non-tcp-total-out-packets"},
    tcp_bytes_saved{YType::uint64, "tcp-bytes-saved"},
    tcp_bytes_sent_rate{YType::uint32, "tcp-bytes-sent-rate"},
    tcp_compressed_packets_out{YType::uint64, "tcp-compressed-packets-out"},
    tcp_full_header_packets_out{YType::uint64, "tcp-full-header-packets-out"},
    tcp_total_out_bytes{YType::uint64, "tcp-total-out-bytes"},
    tcp_total_out_packets{YType::uint64, "tcp-total-out-packets"}
{
    yang_name = "iphc-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats::~IphcStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats::has_data() const
{
    return non_tcp_bytes_saved.is_set
	|| non_tcp_bytes_sent_rate.is_set
	|| non_tcp_compressed_packets_out.is_set
	|| non_tcp_full_header_packets_out.is_set
	|| non_tcp_total_out_bytes.is_set
	|| non_tcp_total_out_packets.is_set
	|| tcp_bytes_saved.is_set
	|| tcp_bytes_sent_rate.is_set
	|| tcp_compressed_packets_out.is_set
	|| tcp_full_header_packets_out.is_set
	|| tcp_total_out_bytes.is_set
	|| tcp_total_out_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(non_tcp_bytes_saved.operation)
	|| is_set(non_tcp_bytes_sent_rate.operation)
	|| is_set(non_tcp_compressed_packets_out.operation)
	|| is_set(non_tcp_full_header_packets_out.operation)
	|| is_set(non_tcp_total_out_bytes.operation)
	|| is_set(non_tcp_total_out_packets.operation)
	|| is_set(tcp_bytes_saved.operation)
	|| is_set(tcp_bytes_sent_rate.operation)
	|| is_set(tcp_compressed_packets_out.operation)
	|| is_set(tcp_full_header_packets_out.operation)
	|| is_set(tcp_total_out_bytes.operation)
	|| is_set(tcp_total_out_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iphc-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IphcStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_tcp_bytes_saved.is_set || is_set(non_tcp_bytes_saved.operation)) leaf_name_data.push_back(non_tcp_bytes_saved.get_name_leafdata());
    if (non_tcp_bytes_sent_rate.is_set || is_set(non_tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(non_tcp_bytes_sent_rate.get_name_leafdata());
    if (non_tcp_compressed_packets_out.is_set || is_set(non_tcp_compressed_packets_out.operation)) leaf_name_data.push_back(non_tcp_compressed_packets_out.get_name_leafdata());
    if (non_tcp_full_header_packets_out.is_set || is_set(non_tcp_full_header_packets_out.operation)) leaf_name_data.push_back(non_tcp_full_header_packets_out.get_name_leafdata());
    if (non_tcp_total_out_bytes.is_set || is_set(non_tcp_total_out_bytes.operation)) leaf_name_data.push_back(non_tcp_total_out_bytes.get_name_leafdata());
    if (non_tcp_total_out_packets.is_set || is_set(non_tcp_total_out_packets.operation)) leaf_name_data.push_back(non_tcp_total_out_packets.get_name_leafdata());
    if (tcp_bytes_saved.is_set || is_set(tcp_bytes_saved.operation)) leaf_name_data.push_back(tcp_bytes_saved.get_name_leafdata());
    if (tcp_bytes_sent_rate.is_set || is_set(tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(tcp_bytes_sent_rate.get_name_leafdata());
    if (tcp_compressed_packets_out.is_set || is_set(tcp_compressed_packets_out.operation)) leaf_name_data.push_back(tcp_compressed_packets_out.get_name_leafdata());
    if (tcp_full_header_packets_out.is_set || is_set(tcp_full_header_packets_out.operation)) leaf_name_data.push_back(tcp_full_header_packets_out.get_name_leafdata());
    if (tcp_total_out_bytes.is_set || is_set(tcp_total_out_bytes.operation)) leaf_name_data.push_back(tcp_total_out_bytes.get_name_leafdata());
    if (tcp_total_out_packets.is_set || is_set(tcp_total_out_packets.operation)) leaf_name_data.push_back(tcp_total_out_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-tcp-bytes-saved")
    {
        non_tcp_bytes_saved = value;
    }
    if(value_path == "non-tcp-bytes-sent-rate")
    {
        non_tcp_bytes_sent_rate = value;
    }
    if(value_path == "non-tcp-compressed-packets-out")
    {
        non_tcp_compressed_packets_out = value;
    }
    if(value_path == "non-tcp-full-header-packets-out")
    {
        non_tcp_full_header_packets_out = value;
    }
    if(value_path == "non-tcp-total-out-bytes")
    {
        non_tcp_total_out_bytes = value;
    }
    if(value_path == "non-tcp-total-out-packets")
    {
        non_tcp_total_out_packets = value;
    }
    if(value_path == "tcp-bytes-saved")
    {
        tcp_bytes_saved = value;
    }
    if(value_path == "tcp-bytes-sent-rate")
    {
        tcp_bytes_sent_rate = value;
    }
    if(value_path == "tcp-compressed-packets-out")
    {
        tcp_compressed_packets_out = value;
    }
    if(value_path == "tcp-full-header-packets-out")
    {
        tcp_full_header_packets_out = value;
    }
    if(value_path == "tcp-total-out-bytes")
    {
        tcp_total_out_bytes = value;
    }
    if(value_path == "tcp-total-out-packets")
    {
        tcp_total_out_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ChildPolicy()
{
    yang_name = "child-policy"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::~ChildPolicy()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::has_data() const
{
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::has_operation() const
{
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-policy";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChildPolicy' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats::CacStats()
    :
    admit_bytes{YType::uint64, "admit-bytes"},
    admit_rates{YType::uint32, "admit-rates"},
    admitpackets{YType::uint64, "admitpackets"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    drop_rates{YType::uint32, "drop-rates"}
{
    yang_name = "cac-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats::~CacStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats::has_data() const
{
    return admit_bytes.is_set
	|| admit_rates.is_set
	|| admitpackets.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| drop_rates.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats::has_operation() const
{
    return is_set(operation)
	|| is_set(admit_bytes.operation)
	|| is_set(admit_rates.operation)
	|| is_set(admitpackets.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(drop_rates.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CacStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admit_bytes.is_set || is_set(admit_bytes.operation)) leaf_name_data.push_back(admit_bytes.get_name_leafdata());
    if (admit_rates.is_set || is_set(admit_rates.operation)) leaf_name_data.push_back(admit_rates.get_name_leafdata());
    if (admitpackets.is_set || is_set(admitpackets.operation)) leaf_name_data.push_back(admitpackets.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (drop_rates.is_set || is_set(drop_rates.operation)) leaf_name_data.push_back(drop_rates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admit-bytes")
    {
        admit_bytes = value;
    }
    if(value_path == "admit-rates")
    {
        admit_rates = value;
    }
    if(value_path == "admitpackets")
    {
        admitpackets = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "drop-rates")
    {
        drop_rates = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueStatsArray()
    :
    atm_clp0_drop_bytes{YType::uint64, "atm-clp0-drop-bytes"},
    atm_clp0_drop_packets{YType::uint64, "atm-clp0-drop-packets"},
    atm_clp1_drop_bytes{YType::uint64, "atm-clp1-drop-bytes"},
    atm_clp1_drop_packets{YType::uint64, "atm-clp1-drop-packets"},
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    forced_wred_stats_display{YType::boolean, "forced-wred-stats-display"},
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    queue_drop_threshold{YType::uint32, "queue-drop-threshold"},
    queue_id{YType::uint32, "queue-id"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    tail_drop_bytes{YType::uint64, "tail-drop-bytes"},
    tail_drop_packets{YType::uint64, "tail-drop-packets"}
{
    yang_name = "queue-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::~QueueStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::has_data() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_data())
            return true;
    }
    return atm_clp0_drop_bytes.is_set
	|| atm_clp0_drop_packets.is_set
	|| atm_clp1_drop_bytes.is_set
	|| atm_clp1_drop_packets.is_set
	|| conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| forced_wred_stats_display.is_set
	|| max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| queue_drop_threshold.is_set
	|| queue_id.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| tail_drop_bytes.is_set
	|| tail_drop_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::has_operation() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(atm_clp0_drop_bytes.operation)
	|| is_set(atm_clp0_drop_packets.operation)
	|| is_set(atm_clp1_drop_bytes.operation)
	|| is_set(atm_clp1_drop_packets.operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(forced_wred_stats_display.operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(queue_drop_threshold.operation)
	|| is_set(queue_id.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(tail_drop_bytes.operation)
	|| is_set(tail_drop_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp0_drop_bytes.is_set || is_set(atm_clp0_drop_bytes.operation)) leaf_name_data.push_back(atm_clp0_drop_bytes.get_name_leafdata());
    if (atm_clp0_drop_packets.is_set || is_set(atm_clp0_drop_packets.operation)) leaf_name_data.push_back(atm_clp0_drop_packets.get_name_leafdata());
    if (atm_clp1_drop_bytes.is_set || is_set(atm_clp1_drop_bytes.operation)) leaf_name_data.push_back(atm_clp1_drop_bytes.get_name_leafdata());
    if (atm_clp1_drop_packets.is_set || is_set(atm_clp1_drop_packets.operation)) leaf_name_data.push_back(atm_clp1_drop_packets.get_name_leafdata());
    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (forced_wred_stats_display.is_set || is_set(forced_wred_stats_display.operation)) leaf_name_data.push_back(forced_wred_stats_display.get_name_leafdata());
    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (queue_drop_threshold.is_set || is_set(queue_drop_threshold.operation)) leaf_name_data.push_back(queue_drop_threshold.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (tail_drop_bytes.is_set || is_set(tail_drop_bytes.operation)) leaf_name_data.push_back(tail_drop_bytes.get_name_leafdata());
    if (tail_drop_packets.is_set || is_set(tail_drop_packets.operation)) leaf_name_data.push_back(tail_drop_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue-average-length")
    {
        for(auto const & c : queue_average_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength>();
        c->parent = this;
        queue_average_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-instance-length")
    {
        for(auto const & c : queue_instance_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength>();
        c->parent = this;
        queue_instance_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-max-length")
    {
        for(auto const & c : queue_max_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength>();
        c->parent = this;
        queue_max_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : queue_average_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_instance_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_max_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-clp0-drop-bytes")
    {
        atm_clp0_drop_bytes = value;
    }
    if(value_path == "atm-clp0-drop-packets")
    {
        atm_clp0_drop_packets = value;
    }
    if(value_path == "atm-clp1-drop-bytes")
    {
        atm_clp1_drop_bytes = value;
    }
    if(value_path == "atm-clp1-drop-packets")
    {
        atm_clp1_drop_packets = value;
    }
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "forced-wred-stats-display")
    {
        forced_wred_stats_display = value;
    }
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "queue-drop-threshold")
    {
        queue_drop_threshold = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes = value;
    }
    if(value_path == "tail-drop-packets")
    {
        tail_drop_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::QueueInstanceLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-instance-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::~QueueInstanceLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-instance-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueInstanceLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::QueueAverageLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-average-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::~QueueAverageLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-average-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueAverageLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::QueueMaxLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-max-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::~QueueMaxLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-max-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueMaxLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::PoliceStatsArray()
    :
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    parent_drop_bytes{YType::uint64, "parent-drop-bytes"},
    parent_drop_packets{YType::uint64, "parent-drop-packets"},
    violate_bytes{YType::uint64, "violate-bytes"},
    violate_packets{YType::uint64, "violate-packets"},
    violate_rate{YType::uint32, "violate-rate"}
    	,
    color_class_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>())
{
    color_class_stats->parent = this;

    yang_name = "police-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::~PoliceStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::has_data() const
{
    return conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| parent_drop_bytes.is_set
	|| parent_drop_packets.is_set
	|| violate_bytes.is_set
	|| violate_packets.is_set
	|| violate_rate.is_set
	|| (color_class_stats !=  nullptr && color_class_stats->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(parent_drop_bytes.operation)
	|| is_set(parent_drop_packets.operation)
	|| is_set(violate_bytes.operation)
	|| is_set(violate_packets.operation)
	|| is_set(violate_rate.operation)
	|| (color_class_stats !=  nullptr && color_class_stats->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (parent_drop_bytes.is_set || is_set(parent_drop_bytes.operation)) leaf_name_data.push_back(parent_drop_bytes.get_name_leafdata());
    if (parent_drop_packets.is_set || is_set(parent_drop_packets.operation)) leaf_name_data.push_back(parent_drop_packets.get_name_leafdata());
    if (violate_bytes.is_set || is_set(violate_bytes.operation)) leaf_name_data.push_back(violate_bytes.get_name_leafdata());
    if (violate_packets.is_set || is_set(violate_packets.operation)) leaf_name_data.push_back(violate_packets.get_name_leafdata());
    if (violate_rate.is_set || is_set(violate_rate.operation)) leaf_name_data.push_back(violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "color-class-stats")
    {
        if(color_class_stats == nullptr)
        {
            color_class_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>();
        }
        return color_class_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(color_class_stats != nullptr)
    {
        children["color-class-stats"] = color_class_stats;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "parent-drop-bytes")
    {
        parent_drop_bytes = value;
    }
    if(value_path == "parent-drop-packets")
    {
        parent_drop_packets = value;
    }
    if(value_path == "violate-bytes")
    {
        violate_bytes = value;
    }
    if(value_path == "violate-packets")
    {
        violate_packets = value;
    }
    if(value_path == "violate-rate")
    {
        violate_rate = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::ColorClassStats()
    :
    conform_class_conform_bytes{YType::uint64, "conform-class-conform-bytes"},
    conform_class_conform_packets{YType::uint64, "conform-class-conform-packets"},
    conform_class_conform_rate{YType::uint32, "conform-class-conform-rate"},
    conform_class_exceed_bytes{YType::uint64, "conform-class-exceed-bytes"},
    conform_class_exceed_packets{YType::uint64, "conform-class-exceed-packets"},
    conform_class_exceed_rate{YType::uint32, "conform-class-exceed-rate"},
    conform_class_violate_bytes{YType::uint64, "conform-class-violate-bytes"},
    conform_class_violate_packets{YType::uint64, "conform-class-violate-packets"},
    conform_class_violate_rate{YType::uint32, "conform-class-violate-rate"},
    exceed_class_exceed_bytes{YType::uint64, "exceed-class-exceed-bytes"},
    exceed_class_exceed_packets{YType::uint64, "exceed-class-exceed-packets"},
    exceed_class_exceed_rate{YType::uint32, "exceed-class-exceed-rate"},
    exceed_class_violate_bytes{YType::uint64, "exceed-class-violate-bytes"},
    exceed_class_violate_packets{YType::uint64, "exceed-class-violate-packets"},
    exceed_class_violate_rate{YType::uint32, "exceed-class-violate-rate"},
    violate_class_violate_bytes{YType::uint64, "violate-class-violate-bytes"},
    violate_class_violate_packets{YType::uint64, "violate-class-violate-packets"},
    violate_class_violate_rate{YType::uint32, "violate-class-violate-rate"}
{
    yang_name = "color-class-stats"; yang_parent_name = "police-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::~ColorClassStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_data() const
{
    return conform_class_conform_bytes.is_set
	|| conform_class_conform_packets.is_set
	|| conform_class_conform_rate.is_set
	|| conform_class_exceed_bytes.is_set
	|| conform_class_exceed_packets.is_set
	|| conform_class_exceed_rate.is_set
	|| conform_class_violate_bytes.is_set
	|| conform_class_violate_packets.is_set
	|| conform_class_violate_rate.is_set
	|| exceed_class_exceed_bytes.is_set
	|| exceed_class_exceed_packets.is_set
	|| exceed_class_exceed_rate.is_set
	|| exceed_class_violate_bytes.is_set
	|| exceed_class_violate_packets.is_set
	|| exceed_class_violate_rate.is_set
	|| violate_class_violate_bytes.is_set
	|| violate_class_violate_packets.is_set
	|| violate_class_violate_rate.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_class_conform_bytes.operation)
	|| is_set(conform_class_conform_packets.operation)
	|| is_set(conform_class_conform_rate.operation)
	|| is_set(conform_class_exceed_bytes.operation)
	|| is_set(conform_class_exceed_packets.operation)
	|| is_set(conform_class_exceed_rate.operation)
	|| is_set(conform_class_violate_bytes.operation)
	|| is_set(conform_class_violate_packets.operation)
	|| is_set(conform_class_violate_rate.operation)
	|| is_set(exceed_class_exceed_bytes.operation)
	|| is_set(exceed_class_exceed_packets.operation)
	|| is_set(exceed_class_exceed_rate.operation)
	|| is_set(exceed_class_violate_bytes.operation)
	|| is_set(exceed_class_violate_packets.operation)
	|| is_set(exceed_class_violate_rate.operation)
	|| is_set(violate_class_violate_bytes.operation)
	|| is_set(violate_class_violate_packets.operation)
	|| is_set(violate_class_violate_rate.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ColorClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_class_conform_bytes.is_set || is_set(conform_class_conform_bytes.operation)) leaf_name_data.push_back(conform_class_conform_bytes.get_name_leafdata());
    if (conform_class_conform_packets.is_set || is_set(conform_class_conform_packets.operation)) leaf_name_data.push_back(conform_class_conform_packets.get_name_leafdata());
    if (conform_class_conform_rate.is_set || is_set(conform_class_conform_rate.operation)) leaf_name_data.push_back(conform_class_conform_rate.get_name_leafdata());
    if (conform_class_exceed_bytes.is_set || is_set(conform_class_exceed_bytes.operation)) leaf_name_data.push_back(conform_class_exceed_bytes.get_name_leafdata());
    if (conform_class_exceed_packets.is_set || is_set(conform_class_exceed_packets.operation)) leaf_name_data.push_back(conform_class_exceed_packets.get_name_leafdata());
    if (conform_class_exceed_rate.is_set || is_set(conform_class_exceed_rate.operation)) leaf_name_data.push_back(conform_class_exceed_rate.get_name_leafdata());
    if (conform_class_violate_bytes.is_set || is_set(conform_class_violate_bytes.operation)) leaf_name_data.push_back(conform_class_violate_bytes.get_name_leafdata());
    if (conform_class_violate_packets.is_set || is_set(conform_class_violate_packets.operation)) leaf_name_data.push_back(conform_class_violate_packets.get_name_leafdata());
    if (conform_class_violate_rate.is_set || is_set(conform_class_violate_rate.operation)) leaf_name_data.push_back(conform_class_violate_rate.get_name_leafdata());
    if (exceed_class_exceed_bytes.is_set || is_set(exceed_class_exceed_bytes.operation)) leaf_name_data.push_back(exceed_class_exceed_bytes.get_name_leafdata());
    if (exceed_class_exceed_packets.is_set || is_set(exceed_class_exceed_packets.operation)) leaf_name_data.push_back(exceed_class_exceed_packets.get_name_leafdata());
    if (exceed_class_exceed_rate.is_set || is_set(exceed_class_exceed_rate.operation)) leaf_name_data.push_back(exceed_class_exceed_rate.get_name_leafdata());
    if (exceed_class_violate_bytes.is_set || is_set(exceed_class_violate_bytes.operation)) leaf_name_data.push_back(exceed_class_violate_bytes.get_name_leafdata());
    if (exceed_class_violate_packets.is_set || is_set(exceed_class_violate_packets.operation)) leaf_name_data.push_back(exceed_class_violate_packets.get_name_leafdata());
    if (exceed_class_violate_rate.is_set || is_set(exceed_class_violate_rate.operation)) leaf_name_data.push_back(exceed_class_violate_rate.get_name_leafdata());
    if (violate_class_violate_bytes.is_set || is_set(violate_class_violate_bytes.operation)) leaf_name_data.push_back(violate_class_violate_bytes.get_name_leafdata());
    if (violate_class_violate_packets.is_set || is_set(violate_class_violate_packets.operation)) leaf_name_data.push_back(violate_class_violate_packets.get_name_leafdata());
    if (violate_class_violate_rate.is_set || is_set(violate_class_violate_rate.operation)) leaf_name_data.push_back(violate_class_violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-class-conform-bytes")
    {
        conform_class_conform_bytes = value;
    }
    if(value_path == "conform-class-conform-packets")
    {
        conform_class_conform_packets = value;
    }
    if(value_path == "conform-class-conform-rate")
    {
        conform_class_conform_rate = value;
    }
    if(value_path == "conform-class-exceed-bytes")
    {
        conform_class_exceed_bytes = value;
    }
    if(value_path == "conform-class-exceed-packets")
    {
        conform_class_exceed_packets = value;
    }
    if(value_path == "conform-class-exceed-rate")
    {
        conform_class_exceed_rate = value;
    }
    if(value_path == "conform-class-violate-bytes")
    {
        conform_class_violate_bytes = value;
    }
    if(value_path == "conform-class-violate-packets")
    {
        conform_class_violate_packets = value;
    }
    if(value_path == "conform-class-violate-rate")
    {
        conform_class_violate_rate = value;
    }
    if(value_path == "exceed-class-exceed-bytes")
    {
        exceed_class_exceed_bytes = value;
    }
    if(value_path == "exceed-class-exceed-packets")
    {
        exceed_class_exceed_packets = value;
    }
    if(value_path == "exceed-class-exceed-rate")
    {
        exceed_class_exceed_rate = value;
    }
    if(value_path == "exceed-class-violate-bytes")
    {
        exceed_class_violate_bytes = value;
    }
    if(value_path == "exceed-class-violate-packets")
    {
        exceed_class_violate_packets = value;
    }
    if(value_path == "exceed-class-violate-rate")
    {
        exceed_class_violate_rate = value;
    }
    if(value_path == "violate-class-violate-bytes")
    {
        violate_class_violate_bytes = value;
    }
    if(value_path == "violate-class-violate-packets")
    {
        violate_class_violate_packets = value;
    }
    if(value_path == "violate-class-violate-rate")
    {
        violate_class_violate_rate = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::WredStatsArray()
    :
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    profile_title{YType::str, "profile-title"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    red_ecn_marked_bytes{YType::uint64, "red-ecn-marked-bytes"},
    red_ecn_marked_packets{YType::uint64, "red-ecn-marked-packets"},
    red_transmit_bytes{YType::uint64, "red-transmit-bytes"},
    red_transmit_packets{YType::uint64, "red-transmit-packets"}
{
    yang_name = "wred-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::~WredStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::has_data() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_data())
            return true;
    }
    return max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| profile_title.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| red_ecn_marked_bytes.is_set
	|| red_ecn_marked_packets.is_set
	|| red_transmit_bytes.is_set
	|| red_transmit_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::has_operation() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(profile_title.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(red_ecn_marked_bytes.operation)
	|| is_set(red_ecn_marked_packets.operation)
	|| is_set(red_transmit_bytes.operation)
	|| is_set(red_transmit_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WredStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (profile_title.is_set || is_set(profile_title.operation)) leaf_name_data.push_back(profile_title.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (red_ecn_marked_bytes.is_set || is_set(red_ecn_marked_bytes.operation)) leaf_name_data.push_back(red_ecn_marked_bytes.get_name_leafdata());
    if (red_ecn_marked_packets.is_set || is_set(red_ecn_marked_packets.operation)) leaf_name_data.push_back(red_ecn_marked_packets.get_name_leafdata());
    if (red_transmit_bytes.is_set || is_set(red_transmit_bytes.operation)) leaf_name_data.push_back(red_transmit_bytes.get_name_leafdata());
    if (red_transmit_packets.is_set || is_set(red_transmit_packets.operation)) leaf_name_data.push_back(red_transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-label")
    {
        for(auto const & c : red_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel>();
        c->parent = this;
        red_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : red_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "profile-title")
    {
        profile_title = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "red-ecn-marked-bytes")
    {
        red_ecn_marked_bytes = value;
    }
    if(value_path == "red-ecn-marked-packets")
    {
        red_ecn_marked_packets = value;
    }
    if(value_path == "red-transmit-bytes")
    {
        red_transmit_bytes = value;
    }
    if(value_path == "red-transmit-packets")
    {
        red_transmit_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::RedLabel()
    :
    value_{YType::uint8, "value"},
    wred_type{YType::enumeration, "wred-type"}
{
    yang_name = "red-label"; yang_parent_name = "wred-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::~RedLabel()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::has_data() const
{
    return value_.is_set
	|| wred_type.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| is_set(wred_type.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-label";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedLabel' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (wred_type.is_set || is_set(wred_type.operation)) leaf_name_data.push_back(wred_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "wred-type")
    {
        wred_type = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Output()
    :
    service_policy_names(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames>())
	,statistics(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics>())
{
    service_policy_names->parent = this;

    statistics->parent = this;

    yang_name = "output"; yang_parent_name = "member-interface";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::~Output()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::has_data() const
{
    return (service_policy_names !=  nullptr && service_policy_names->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::has_operation() const
{
    return is_set(operation)
	|| (service_policy_names !=  nullptr && service_policy_names->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-names")
    {
        if(service_policy_names == nullptr)
        {
            service_policy_names = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames>();
        }
        return service_policy_names;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy_names != nullptr)
    {
        children["service-policy-names"] = service_policy_names;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyNames()
{
    yang_name = "service-policy-names"; yang_parent_name = "output";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::~ServicePolicyNames()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::has_data() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::has_operation() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-names";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyNames' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-instance")
    {
        for(auto const & c : service_policy_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance>();
        c->parent = this;
        service_policy_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance::ServicePolicyInstance()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy-instance"; yang_parent_name = "service-policy-names";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance::~ServicePolicyInstance()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance::has_data() const
{
    return service_policy_name.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-instance" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyInstance' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::Statistics()
    :
    policy_name{YType::str, "policy-name"},
    satid{YType::uint32, "satid"},
    state{YType::enumeration, "state"},
    state_description{YType::str, "state-description"}
{
    yang_name = "statistics"; yang_parent_name = "output";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::~Statistics()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::has_data() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_data())
            return true;
    }
    return policy_name.is_set
	|| satid.is_set
	|| state.is_set
	|| state_description.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::has_operation() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| is_set(satid.operation)
	|| is_set(state.operation)
	|| is_set(state_description.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (satid.is_set || is_set(satid.operation)) leaf_name_data.push_back(satid.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_description.is_set || is_set(state_description.operation)) leaf_name_data.push_back(state_description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-stats")
    {
        for(auto const & c : class_stats)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats>();
        c->parent = this;
        class_stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_stats)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "satid")
    {
        satid = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "state-description")
    {
        state_description = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ClassStats()
    :
    cac_state{YType::enumeration, "cac-state"},
    class_name{YType::str, "class-name"},
    counter_validity_bitmask{YType::uint64, "counter-validity-bitmask"},
    queue_descr{YType::str, "queue-descr"},
    shared_queue_id{YType::uint32, "shared-queue-id"}
    	,
    cac_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats>())
	,child_policy(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy>())
	,general_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats>())
	,iphc_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats>())
{
    cac_stats->parent = this;

    child_policy->parent = this;

    general_stats->parent = this;

    iphc_stats->parent = this;

    yang_name = "class-stats"; yang_parent_name = "statistics";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::~ClassStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::has_data() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_data())
            return true;
    }
    return cac_state.is_set
	|| class_name.is_set
	|| counter_validity_bitmask.is_set
	|| queue_descr.is_set
	|| shared_queue_id.is_set
	|| (cac_stats !=  nullptr && cac_stats->has_data())
	|| (child_policy !=  nullptr && child_policy->has_data())
	|| (general_stats !=  nullptr && general_stats->has_data())
	|| (iphc_stats !=  nullptr && iphc_stats->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::has_operation() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cac_state.operation)
	|| is_set(class_name.operation)
	|| is_set(counter_validity_bitmask.operation)
	|| is_set(queue_descr.operation)
	|| is_set(shared_queue_id.operation)
	|| (cac_stats !=  nullptr && cac_stats->has_operation())
	|| (child_policy !=  nullptr && child_policy->has_operation())
	|| (general_stats !=  nullptr && general_stats->has_operation())
	|| (iphc_stats !=  nullptr && iphc_stats->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_state.is_set || is_set(cac_state.operation)) leaf_name_data.push_back(cac_state.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (counter_validity_bitmask.is_set || is_set(counter_validity_bitmask.operation)) leaf_name_data.push_back(counter_validity_bitmask.get_name_leafdata());
    if (queue_descr.is_set || is_set(queue_descr.operation)) leaf_name_data.push_back(queue_descr.get_name_leafdata());
    if (shared_queue_id.is_set || is_set(shared_queue_id.operation)) leaf_name_data.push_back(shared_queue_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cac-stats")
    {
        if(cac_stats == nullptr)
        {
            cac_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats>();
        }
        return cac_stats;
    }

    if(child_yang_name == "child-policy")
    {
        if(child_policy == nullptr)
        {
            child_policy = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy>();
        }
        return child_policy;
    }

    if(child_yang_name == "general-stats")
    {
        if(general_stats == nullptr)
        {
            general_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats>();
        }
        return general_stats;
    }

    if(child_yang_name == "iphc-stats")
    {
        if(iphc_stats == nullptr)
        {
            iphc_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats>();
        }
        return iphc_stats;
    }

    if(child_yang_name == "police-stats-array")
    {
        for(auto const & c : police_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray>();
        c->parent = this;
        police_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-stats-array")
    {
        for(auto const & c : queue_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray>();
        c->parent = this;
        queue_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "wred-stats-array")
    {
        for(auto const & c : wred_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray>();
        c->parent = this;
        wred_stats_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cac_stats != nullptr)
    {
        children["cac-stats"] = cac_stats;
    }

    if(child_policy != nullptr)
    {
        children["child-policy"] = child_policy;
    }

    if(general_stats != nullptr)
    {
        children["general-stats"] = general_stats;
    }

    if(iphc_stats != nullptr)
    {
        children["iphc-stats"] = iphc_stats;
    }

    for (auto const & c : police_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wred_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cac-state")
    {
        cac_state = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "counter-validity-bitmask")
    {
        counter_validity_bitmask = value;
    }
    if(value_path == "queue-descr")
    {
        queue_descr = value;
    }
    if(value_path == "shared-queue-id")
    {
        shared_queue_id = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats::GeneralStats()
    :
    match_data_rate{YType::uint32, "match-data-rate"},
    pre_policy_matched_bytes{YType::uint64, "pre-policy-matched-bytes"},
    pre_policy_matched_packets{YType::uint64, "pre-policy-matched-packets"},
    total_drop_bytes{YType::uint64, "total-drop-bytes"},
    total_drop_packets{YType::uint64, "total-drop-packets"},
    total_drop_rate{YType::uint32, "total-drop-rate"},
    total_transmit_rate{YType::uint32, "total-transmit-rate"},
    transmit_bytes{YType::uint64, "transmit-bytes"},
    transmit_packets{YType::uint64, "transmit-packets"}
{
    yang_name = "general-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats::~GeneralStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats::has_data() const
{
    return match_data_rate.is_set
	|| pre_policy_matched_bytes.is_set
	|| pre_policy_matched_packets.is_set
	|| total_drop_bytes.is_set
	|| total_drop_packets.is_set
	|| total_drop_rate.is_set
	|| total_transmit_rate.is_set
	|| transmit_bytes.is_set
	|| transmit_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats::has_operation() const
{
    return is_set(operation)
	|| is_set(match_data_rate.operation)
	|| is_set(pre_policy_matched_bytes.operation)
	|| is_set(pre_policy_matched_packets.operation)
	|| is_set(total_drop_bytes.operation)
	|| is_set(total_drop_packets.operation)
	|| is_set(total_drop_rate.operation)
	|| is_set(total_transmit_rate.operation)
	|| is_set(transmit_bytes.operation)
	|| is_set(transmit_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GeneralStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_data_rate.is_set || is_set(match_data_rate.operation)) leaf_name_data.push_back(match_data_rate.get_name_leafdata());
    if (pre_policy_matched_bytes.is_set || is_set(pre_policy_matched_bytes.operation)) leaf_name_data.push_back(pre_policy_matched_bytes.get_name_leafdata());
    if (pre_policy_matched_packets.is_set || is_set(pre_policy_matched_packets.operation)) leaf_name_data.push_back(pre_policy_matched_packets.get_name_leafdata());
    if (total_drop_bytes.is_set || is_set(total_drop_bytes.operation)) leaf_name_data.push_back(total_drop_bytes.get_name_leafdata());
    if (total_drop_packets.is_set || is_set(total_drop_packets.operation)) leaf_name_data.push_back(total_drop_packets.get_name_leafdata());
    if (total_drop_rate.is_set || is_set(total_drop_rate.operation)) leaf_name_data.push_back(total_drop_rate.get_name_leafdata());
    if (total_transmit_rate.is_set || is_set(total_transmit_rate.operation)) leaf_name_data.push_back(total_transmit_rate.get_name_leafdata());
    if (transmit_bytes.is_set || is_set(transmit_bytes.operation)) leaf_name_data.push_back(transmit_bytes.get_name_leafdata());
    if (transmit_packets.is_set || is_set(transmit_packets.operation)) leaf_name_data.push_back(transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-data-rate")
    {
        match_data_rate = value;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes = value;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets = value;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes = value;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets = value;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate = value;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate = value;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes = value;
    }
    if(value_path == "transmit-packets")
    {
        transmit_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats::IphcStats()
    :
    non_tcp_bytes_saved{YType::uint64, "non-tcp-bytes-saved"},
    non_tcp_bytes_sent_rate{YType::uint32, "non-tcp-bytes-sent-rate"},
    non_tcp_compressed_packets_out{YType::uint64, "non-tcp-compressed-packets-out"},
    non_tcp_full_header_packets_out{YType::uint64, "non-tcp-full-header-packets-out"},
    non_tcp_total_out_bytes{YType::uint64, "non-tcp-total-out-bytes"},
    non_tcp_total_out_packets{YType::uint64, "non-tcp-total-out-packets"},
    tcp_bytes_saved{YType::uint64, "tcp-bytes-saved"},
    tcp_bytes_sent_rate{YType::uint32, "tcp-bytes-sent-rate"},
    tcp_compressed_packets_out{YType::uint64, "tcp-compressed-packets-out"},
    tcp_full_header_packets_out{YType::uint64, "tcp-full-header-packets-out"},
    tcp_total_out_bytes{YType::uint64, "tcp-total-out-bytes"},
    tcp_total_out_packets{YType::uint64, "tcp-total-out-packets"}
{
    yang_name = "iphc-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats::~IphcStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats::has_data() const
{
    return non_tcp_bytes_saved.is_set
	|| non_tcp_bytes_sent_rate.is_set
	|| non_tcp_compressed_packets_out.is_set
	|| non_tcp_full_header_packets_out.is_set
	|| non_tcp_total_out_bytes.is_set
	|| non_tcp_total_out_packets.is_set
	|| tcp_bytes_saved.is_set
	|| tcp_bytes_sent_rate.is_set
	|| tcp_compressed_packets_out.is_set
	|| tcp_full_header_packets_out.is_set
	|| tcp_total_out_bytes.is_set
	|| tcp_total_out_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(non_tcp_bytes_saved.operation)
	|| is_set(non_tcp_bytes_sent_rate.operation)
	|| is_set(non_tcp_compressed_packets_out.operation)
	|| is_set(non_tcp_full_header_packets_out.operation)
	|| is_set(non_tcp_total_out_bytes.operation)
	|| is_set(non_tcp_total_out_packets.operation)
	|| is_set(tcp_bytes_saved.operation)
	|| is_set(tcp_bytes_sent_rate.operation)
	|| is_set(tcp_compressed_packets_out.operation)
	|| is_set(tcp_full_header_packets_out.operation)
	|| is_set(tcp_total_out_bytes.operation)
	|| is_set(tcp_total_out_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iphc-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IphcStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_tcp_bytes_saved.is_set || is_set(non_tcp_bytes_saved.operation)) leaf_name_data.push_back(non_tcp_bytes_saved.get_name_leafdata());
    if (non_tcp_bytes_sent_rate.is_set || is_set(non_tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(non_tcp_bytes_sent_rate.get_name_leafdata());
    if (non_tcp_compressed_packets_out.is_set || is_set(non_tcp_compressed_packets_out.operation)) leaf_name_data.push_back(non_tcp_compressed_packets_out.get_name_leafdata());
    if (non_tcp_full_header_packets_out.is_set || is_set(non_tcp_full_header_packets_out.operation)) leaf_name_data.push_back(non_tcp_full_header_packets_out.get_name_leafdata());
    if (non_tcp_total_out_bytes.is_set || is_set(non_tcp_total_out_bytes.operation)) leaf_name_data.push_back(non_tcp_total_out_bytes.get_name_leafdata());
    if (non_tcp_total_out_packets.is_set || is_set(non_tcp_total_out_packets.operation)) leaf_name_data.push_back(non_tcp_total_out_packets.get_name_leafdata());
    if (tcp_bytes_saved.is_set || is_set(tcp_bytes_saved.operation)) leaf_name_data.push_back(tcp_bytes_saved.get_name_leafdata());
    if (tcp_bytes_sent_rate.is_set || is_set(tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(tcp_bytes_sent_rate.get_name_leafdata());
    if (tcp_compressed_packets_out.is_set || is_set(tcp_compressed_packets_out.operation)) leaf_name_data.push_back(tcp_compressed_packets_out.get_name_leafdata());
    if (tcp_full_header_packets_out.is_set || is_set(tcp_full_header_packets_out.operation)) leaf_name_data.push_back(tcp_full_header_packets_out.get_name_leafdata());
    if (tcp_total_out_bytes.is_set || is_set(tcp_total_out_bytes.operation)) leaf_name_data.push_back(tcp_total_out_bytes.get_name_leafdata());
    if (tcp_total_out_packets.is_set || is_set(tcp_total_out_packets.operation)) leaf_name_data.push_back(tcp_total_out_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-tcp-bytes-saved")
    {
        non_tcp_bytes_saved = value;
    }
    if(value_path == "non-tcp-bytes-sent-rate")
    {
        non_tcp_bytes_sent_rate = value;
    }
    if(value_path == "non-tcp-compressed-packets-out")
    {
        non_tcp_compressed_packets_out = value;
    }
    if(value_path == "non-tcp-full-header-packets-out")
    {
        non_tcp_full_header_packets_out = value;
    }
    if(value_path == "non-tcp-total-out-bytes")
    {
        non_tcp_total_out_bytes = value;
    }
    if(value_path == "non-tcp-total-out-packets")
    {
        non_tcp_total_out_packets = value;
    }
    if(value_path == "tcp-bytes-saved")
    {
        tcp_bytes_saved = value;
    }
    if(value_path == "tcp-bytes-sent-rate")
    {
        tcp_bytes_sent_rate = value;
    }
    if(value_path == "tcp-compressed-packets-out")
    {
        tcp_compressed_packets_out = value;
    }
    if(value_path == "tcp-full-header-packets-out")
    {
        tcp_full_header_packets_out = value;
    }
    if(value_path == "tcp-total-out-bytes")
    {
        tcp_total_out_bytes = value;
    }
    if(value_path == "tcp-total-out-packets")
    {
        tcp_total_out_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ChildPolicy()
{
    yang_name = "child-policy"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::~ChildPolicy()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::has_data() const
{
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::has_operation() const
{
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-policy";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChildPolicy' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats::CacStats()
    :
    admit_bytes{YType::uint64, "admit-bytes"},
    admit_rates{YType::uint32, "admit-rates"},
    admitpackets{YType::uint64, "admitpackets"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    drop_rates{YType::uint32, "drop-rates"}
{
    yang_name = "cac-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats::~CacStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats::has_data() const
{
    return admit_bytes.is_set
	|| admit_rates.is_set
	|| admitpackets.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| drop_rates.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats::has_operation() const
{
    return is_set(operation)
	|| is_set(admit_bytes.operation)
	|| is_set(admit_rates.operation)
	|| is_set(admitpackets.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(drop_rates.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CacStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admit_bytes.is_set || is_set(admit_bytes.operation)) leaf_name_data.push_back(admit_bytes.get_name_leafdata());
    if (admit_rates.is_set || is_set(admit_rates.operation)) leaf_name_data.push_back(admit_rates.get_name_leafdata());
    if (admitpackets.is_set || is_set(admitpackets.operation)) leaf_name_data.push_back(admitpackets.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (drop_rates.is_set || is_set(drop_rates.operation)) leaf_name_data.push_back(drop_rates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admit-bytes")
    {
        admit_bytes = value;
    }
    if(value_path == "admit-rates")
    {
        admit_rates = value;
    }
    if(value_path == "admitpackets")
    {
        admitpackets = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "drop-rates")
    {
        drop_rates = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueStatsArray()
    :
    atm_clp0_drop_bytes{YType::uint64, "atm-clp0-drop-bytes"},
    atm_clp0_drop_packets{YType::uint64, "atm-clp0-drop-packets"},
    atm_clp1_drop_bytes{YType::uint64, "atm-clp1-drop-bytes"},
    atm_clp1_drop_packets{YType::uint64, "atm-clp1-drop-packets"},
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    forced_wred_stats_display{YType::boolean, "forced-wred-stats-display"},
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    queue_drop_threshold{YType::uint32, "queue-drop-threshold"},
    queue_id{YType::uint32, "queue-id"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    tail_drop_bytes{YType::uint64, "tail-drop-bytes"},
    tail_drop_packets{YType::uint64, "tail-drop-packets"}
{
    yang_name = "queue-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::~QueueStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::has_data() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_data())
            return true;
    }
    return atm_clp0_drop_bytes.is_set
	|| atm_clp0_drop_packets.is_set
	|| atm_clp1_drop_bytes.is_set
	|| atm_clp1_drop_packets.is_set
	|| conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| forced_wred_stats_display.is_set
	|| max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| queue_drop_threshold.is_set
	|| queue_id.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| tail_drop_bytes.is_set
	|| tail_drop_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::has_operation() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(atm_clp0_drop_bytes.operation)
	|| is_set(atm_clp0_drop_packets.operation)
	|| is_set(atm_clp1_drop_bytes.operation)
	|| is_set(atm_clp1_drop_packets.operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(forced_wred_stats_display.operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(queue_drop_threshold.operation)
	|| is_set(queue_id.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(tail_drop_bytes.operation)
	|| is_set(tail_drop_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp0_drop_bytes.is_set || is_set(atm_clp0_drop_bytes.operation)) leaf_name_data.push_back(atm_clp0_drop_bytes.get_name_leafdata());
    if (atm_clp0_drop_packets.is_set || is_set(atm_clp0_drop_packets.operation)) leaf_name_data.push_back(atm_clp0_drop_packets.get_name_leafdata());
    if (atm_clp1_drop_bytes.is_set || is_set(atm_clp1_drop_bytes.operation)) leaf_name_data.push_back(atm_clp1_drop_bytes.get_name_leafdata());
    if (atm_clp1_drop_packets.is_set || is_set(atm_clp1_drop_packets.operation)) leaf_name_data.push_back(atm_clp1_drop_packets.get_name_leafdata());
    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (forced_wred_stats_display.is_set || is_set(forced_wred_stats_display.operation)) leaf_name_data.push_back(forced_wred_stats_display.get_name_leafdata());
    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (queue_drop_threshold.is_set || is_set(queue_drop_threshold.operation)) leaf_name_data.push_back(queue_drop_threshold.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (tail_drop_bytes.is_set || is_set(tail_drop_bytes.operation)) leaf_name_data.push_back(tail_drop_bytes.get_name_leafdata());
    if (tail_drop_packets.is_set || is_set(tail_drop_packets.operation)) leaf_name_data.push_back(tail_drop_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue-average-length")
    {
        for(auto const & c : queue_average_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength>();
        c->parent = this;
        queue_average_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-instance-length")
    {
        for(auto const & c : queue_instance_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength>();
        c->parent = this;
        queue_instance_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-max-length")
    {
        for(auto const & c : queue_max_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength>();
        c->parent = this;
        queue_max_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : queue_average_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_instance_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_max_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-clp0-drop-bytes")
    {
        atm_clp0_drop_bytes = value;
    }
    if(value_path == "atm-clp0-drop-packets")
    {
        atm_clp0_drop_packets = value;
    }
    if(value_path == "atm-clp1-drop-bytes")
    {
        atm_clp1_drop_bytes = value;
    }
    if(value_path == "atm-clp1-drop-packets")
    {
        atm_clp1_drop_packets = value;
    }
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "forced-wred-stats-display")
    {
        forced_wred_stats_display = value;
    }
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "queue-drop-threshold")
    {
        queue_drop_threshold = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes = value;
    }
    if(value_path == "tail-drop-packets")
    {
        tail_drop_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::QueueInstanceLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-instance-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::~QueueInstanceLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-instance-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueInstanceLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::QueueAverageLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-average-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::~QueueAverageLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-average-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueAverageLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::QueueMaxLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-max-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::~QueueMaxLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-max-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueMaxLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::PoliceStatsArray()
    :
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    parent_drop_bytes{YType::uint64, "parent-drop-bytes"},
    parent_drop_packets{YType::uint64, "parent-drop-packets"},
    violate_bytes{YType::uint64, "violate-bytes"},
    violate_packets{YType::uint64, "violate-packets"},
    violate_rate{YType::uint32, "violate-rate"}
    	,
    color_class_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>())
{
    color_class_stats->parent = this;

    yang_name = "police-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::~PoliceStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::has_data() const
{
    return conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| parent_drop_bytes.is_set
	|| parent_drop_packets.is_set
	|| violate_bytes.is_set
	|| violate_packets.is_set
	|| violate_rate.is_set
	|| (color_class_stats !=  nullptr && color_class_stats->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(parent_drop_bytes.operation)
	|| is_set(parent_drop_packets.operation)
	|| is_set(violate_bytes.operation)
	|| is_set(violate_packets.operation)
	|| is_set(violate_rate.operation)
	|| (color_class_stats !=  nullptr && color_class_stats->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (parent_drop_bytes.is_set || is_set(parent_drop_bytes.operation)) leaf_name_data.push_back(parent_drop_bytes.get_name_leafdata());
    if (parent_drop_packets.is_set || is_set(parent_drop_packets.operation)) leaf_name_data.push_back(parent_drop_packets.get_name_leafdata());
    if (violate_bytes.is_set || is_set(violate_bytes.operation)) leaf_name_data.push_back(violate_bytes.get_name_leafdata());
    if (violate_packets.is_set || is_set(violate_packets.operation)) leaf_name_data.push_back(violate_packets.get_name_leafdata());
    if (violate_rate.is_set || is_set(violate_rate.operation)) leaf_name_data.push_back(violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "color-class-stats")
    {
        if(color_class_stats == nullptr)
        {
            color_class_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>();
        }
        return color_class_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(color_class_stats != nullptr)
    {
        children["color-class-stats"] = color_class_stats;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "parent-drop-bytes")
    {
        parent_drop_bytes = value;
    }
    if(value_path == "parent-drop-packets")
    {
        parent_drop_packets = value;
    }
    if(value_path == "violate-bytes")
    {
        violate_bytes = value;
    }
    if(value_path == "violate-packets")
    {
        violate_packets = value;
    }
    if(value_path == "violate-rate")
    {
        violate_rate = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::ColorClassStats()
    :
    conform_class_conform_bytes{YType::uint64, "conform-class-conform-bytes"},
    conform_class_conform_packets{YType::uint64, "conform-class-conform-packets"},
    conform_class_conform_rate{YType::uint32, "conform-class-conform-rate"},
    conform_class_exceed_bytes{YType::uint64, "conform-class-exceed-bytes"},
    conform_class_exceed_packets{YType::uint64, "conform-class-exceed-packets"},
    conform_class_exceed_rate{YType::uint32, "conform-class-exceed-rate"},
    conform_class_violate_bytes{YType::uint64, "conform-class-violate-bytes"},
    conform_class_violate_packets{YType::uint64, "conform-class-violate-packets"},
    conform_class_violate_rate{YType::uint32, "conform-class-violate-rate"},
    exceed_class_exceed_bytes{YType::uint64, "exceed-class-exceed-bytes"},
    exceed_class_exceed_packets{YType::uint64, "exceed-class-exceed-packets"},
    exceed_class_exceed_rate{YType::uint32, "exceed-class-exceed-rate"},
    exceed_class_violate_bytes{YType::uint64, "exceed-class-violate-bytes"},
    exceed_class_violate_packets{YType::uint64, "exceed-class-violate-packets"},
    exceed_class_violate_rate{YType::uint32, "exceed-class-violate-rate"},
    violate_class_violate_bytes{YType::uint64, "violate-class-violate-bytes"},
    violate_class_violate_packets{YType::uint64, "violate-class-violate-packets"},
    violate_class_violate_rate{YType::uint32, "violate-class-violate-rate"}
{
    yang_name = "color-class-stats"; yang_parent_name = "police-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::~ColorClassStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_data() const
{
    return conform_class_conform_bytes.is_set
	|| conform_class_conform_packets.is_set
	|| conform_class_conform_rate.is_set
	|| conform_class_exceed_bytes.is_set
	|| conform_class_exceed_packets.is_set
	|| conform_class_exceed_rate.is_set
	|| conform_class_violate_bytes.is_set
	|| conform_class_violate_packets.is_set
	|| conform_class_violate_rate.is_set
	|| exceed_class_exceed_bytes.is_set
	|| exceed_class_exceed_packets.is_set
	|| exceed_class_exceed_rate.is_set
	|| exceed_class_violate_bytes.is_set
	|| exceed_class_violate_packets.is_set
	|| exceed_class_violate_rate.is_set
	|| violate_class_violate_bytes.is_set
	|| violate_class_violate_packets.is_set
	|| violate_class_violate_rate.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_class_conform_bytes.operation)
	|| is_set(conform_class_conform_packets.operation)
	|| is_set(conform_class_conform_rate.operation)
	|| is_set(conform_class_exceed_bytes.operation)
	|| is_set(conform_class_exceed_packets.operation)
	|| is_set(conform_class_exceed_rate.operation)
	|| is_set(conform_class_violate_bytes.operation)
	|| is_set(conform_class_violate_packets.operation)
	|| is_set(conform_class_violate_rate.operation)
	|| is_set(exceed_class_exceed_bytes.operation)
	|| is_set(exceed_class_exceed_packets.operation)
	|| is_set(exceed_class_exceed_rate.operation)
	|| is_set(exceed_class_violate_bytes.operation)
	|| is_set(exceed_class_violate_packets.operation)
	|| is_set(exceed_class_violate_rate.operation)
	|| is_set(violate_class_violate_bytes.operation)
	|| is_set(violate_class_violate_packets.operation)
	|| is_set(violate_class_violate_rate.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ColorClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_class_conform_bytes.is_set || is_set(conform_class_conform_bytes.operation)) leaf_name_data.push_back(conform_class_conform_bytes.get_name_leafdata());
    if (conform_class_conform_packets.is_set || is_set(conform_class_conform_packets.operation)) leaf_name_data.push_back(conform_class_conform_packets.get_name_leafdata());
    if (conform_class_conform_rate.is_set || is_set(conform_class_conform_rate.operation)) leaf_name_data.push_back(conform_class_conform_rate.get_name_leafdata());
    if (conform_class_exceed_bytes.is_set || is_set(conform_class_exceed_bytes.operation)) leaf_name_data.push_back(conform_class_exceed_bytes.get_name_leafdata());
    if (conform_class_exceed_packets.is_set || is_set(conform_class_exceed_packets.operation)) leaf_name_data.push_back(conform_class_exceed_packets.get_name_leafdata());
    if (conform_class_exceed_rate.is_set || is_set(conform_class_exceed_rate.operation)) leaf_name_data.push_back(conform_class_exceed_rate.get_name_leafdata());
    if (conform_class_violate_bytes.is_set || is_set(conform_class_violate_bytes.operation)) leaf_name_data.push_back(conform_class_violate_bytes.get_name_leafdata());
    if (conform_class_violate_packets.is_set || is_set(conform_class_violate_packets.operation)) leaf_name_data.push_back(conform_class_violate_packets.get_name_leafdata());
    if (conform_class_violate_rate.is_set || is_set(conform_class_violate_rate.operation)) leaf_name_data.push_back(conform_class_violate_rate.get_name_leafdata());
    if (exceed_class_exceed_bytes.is_set || is_set(exceed_class_exceed_bytes.operation)) leaf_name_data.push_back(exceed_class_exceed_bytes.get_name_leafdata());
    if (exceed_class_exceed_packets.is_set || is_set(exceed_class_exceed_packets.operation)) leaf_name_data.push_back(exceed_class_exceed_packets.get_name_leafdata());
    if (exceed_class_exceed_rate.is_set || is_set(exceed_class_exceed_rate.operation)) leaf_name_data.push_back(exceed_class_exceed_rate.get_name_leafdata());
    if (exceed_class_violate_bytes.is_set || is_set(exceed_class_violate_bytes.operation)) leaf_name_data.push_back(exceed_class_violate_bytes.get_name_leafdata());
    if (exceed_class_violate_packets.is_set || is_set(exceed_class_violate_packets.operation)) leaf_name_data.push_back(exceed_class_violate_packets.get_name_leafdata());
    if (exceed_class_violate_rate.is_set || is_set(exceed_class_violate_rate.operation)) leaf_name_data.push_back(exceed_class_violate_rate.get_name_leafdata());
    if (violate_class_violate_bytes.is_set || is_set(violate_class_violate_bytes.operation)) leaf_name_data.push_back(violate_class_violate_bytes.get_name_leafdata());
    if (violate_class_violate_packets.is_set || is_set(violate_class_violate_packets.operation)) leaf_name_data.push_back(violate_class_violate_packets.get_name_leafdata());
    if (violate_class_violate_rate.is_set || is_set(violate_class_violate_rate.operation)) leaf_name_data.push_back(violate_class_violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-class-conform-bytes")
    {
        conform_class_conform_bytes = value;
    }
    if(value_path == "conform-class-conform-packets")
    {
        conform_class_conform_packets = value;
    }
    if(value_path == "conform-class-conform-rate")
    {
        conform_class_conform_rate = value;
    }
    if(value_path == "conform-class-exceed-bytes")
    {
        conform_class_exceed_bytes = value;
    }
    if(value_path == "conform-class-exceed-packets")
    {
        conform_class_exceed_packets = value;
    }
    if(value_path == "conform-class-exceed-rate")
    {
        conform_class_exceed_rate = value;
    }
    if(value_path == "conform-class-violate-bytes")
    {
        conform_class_violate_bytes = value;
    }
    if(value_path == "conform-class-violate-packets")
    {
        conform_class_violate_packets = value;
    }
    if(value_path == "conform-class-violate-rate")
    {
        conform_class_violate_rate = value;
    }
    if(value_path == "exceed-class-exceed-bytes")
    {
        exceed_class_exceed_bytes = value;
    }
    if(value_path == "exceed-class-exceed-packets")
    {
        exceed_class_exceed_packets = value;
    }
    if(value_path == "exceed-class-exceed-rate")
    {
        exceed_class_exceed_rate = value;
    }
    if(value_path == "exceed-class-violate-bytes")
    {
        exceed_class_violate_bytes = value;
    }
    if(value_path == "exceed-class-violate-packets")
    {
        exceed_class_violate_packets = value;
    }
    if(value_path == "exceed-class-violate-rate")
    {
        exceed_class_violate_rate = value;
    }
    if(value_path == "violate-class-violate-bytes")
    {
        violate_class_violate_bytes = value;
    }
    if(value_path == "violate-class-violate-packets")
    {
        violate_class_violate_packets = value;
    }
    if(value_path == "violate-class-violate-rate")
    {
        violate_class_violate_rate = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::WredStatsArray()
    :
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    profile_title{YType::str, "profile-title"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    red_ecn_marked_bytes{YType::uint64, "red-ecn-marked-bytes"},
    red_ecn_marked_packets{YType::uint64, "red-ecn-marked-packets"},
    red_transmit_bytes{YType::uint64, "red-transmit-bytes"},
    red_transmit_packets{YType::uint64, "red-transmit-packets"}
{
    yang_name = "wred-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::~WredStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::has_data() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_data())
            return true;
    }
    return max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| profile_title.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| red_ecn_marked_bytes.is_set
	|| red_ecn_marked_packets.is_set
	|| red_transmit_bytes.is_set
	|| red_transmit_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::has_operation() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(profile_title.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(red_ecn_marked_bytes.operation)
	|| is_set(red_ecn_marked_packets.operation)
	|| is_set(red_transmit_bytes.operation)
	|| is_set(red_transmit_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WredStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (profile_title.is_set || is_set(profile_title.operation)) leaf_name_data.push_back(profile_title.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (red_ecn_marked_bytes.is_set || is_set(red_ecn_marked_bytes.operation)) leaf_name_data.push_back(red_ecn_marked_bytes.get_name_leafdata());
    if (red_ecn_marked_packets.is_set || is_set(red_ecn_marked_packets.operation)) leaf_name_data.push_back(red_ecn_marked_packets.get_name_leafdata());
    if (red_transmit_bytes.is_set || is_set(red_transmit_bytes.operation)) leaf_name_data.push_back(red_transmit_bytes.get_name_leafdata());
    if (red_transmit_packets.is_set || is_set(red_transmit_packets.operation)) leaf_name_data.push_back(red_transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-label")
    {
        for(auto const & c : red_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel>();
        c->parent = this;
        red_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : red_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "profile-title")
    {
        profile_title = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "red-ecn-marked-bytes")
    {
        red_ecn_marked_bytes = value;
    }
    if(value_path == "red-ecn-marked-packets")
    {
        red_ecn_marked_packets = value;
    }
    if(value_path == "red-transmit-bytes")
    {
        red_transmit_bytes = value;
    }
    if(value_path == "red-transmit-packets")
    {
        red_transmit_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::RedLabel()
    :
    value_{YType::uint8, "value"},
    wred_type{YType::enumeration, "wred-type"}
{
    yang_name = "red-label"; yang_parent_name = "wred-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::~RedLabel()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::has_data() const
{
    return value_.is_set
	|| wred_type.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| is_set(wred_type.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-label";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedLabel' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (wred_type.is_set || is_set(wred_type.operation)) leaf_name_data.push_back(wred_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "wred-type")
    {
        wred_type = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Input()
    :
    service_policy_names(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames>())
	,statistics(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics>())
{
    service_policy_names->parent = this;

    statistics->parent = this;

    yang_name = "input"; yang_parent_name = "nv-satellite-interface";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::~Input()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::has_data() const
{
    return (service_policy_names !=  nullptr && service_policy_names->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::has_operation() const
{
    return is_set(operation)
	|| (service_policy_names !=  nullptr && service_policy_names->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-names")
    {
        if(service_policy_names == nullptr)
        {
            service_policy_names = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames>();
        }
        return service_policy_names;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy_names != nullptr)
    {
        children["service-policy-names"] = service_policy_names;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyNames()
{
    yang_name = "service-policy-names"; yang_parent_name = "input";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::~ServicePolicyNames()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::has_data() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::has_operation() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-names";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyNames' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-instance")
    {
        for(auto const & c : service_policy_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance>();
        c->parent = this;
        service_policy_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance::ServicePolicyInstance()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy-instance"; yang_parent_name = "service-policy-names";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance::~ServicePolicyInstance()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance::has_data() const
{
    return service_policy_name.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-instance" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyInstance' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::Statistics()
    :
    policy_name{YType::str, "policy-name"},
    satid{YType::uint32, "satid"},
    state{YType::enumeration, "state"},
    state_description{YType::str, "state-description"}
{
    yang_name = "statistics"; yang_parent_name = "input";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::~Statistics()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::has_data() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_data())
            return true;
    }
    return policy_name.is_set
	|| satid.is_set
	|| state.is_set
	|| state_description.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::has_operation() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| is_set(satid.operation)
	|| is_set(state.operation)
	|| is_set(state_description.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (satid.is_set || is_set(satid.operation)) leaf_name_data.push_back(satid.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_description.is_set || is_set(state_description.operation)) leaf_name_data.push_back(state_description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-stats")
    {
        for(auto const & c : class_stats)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats>();
        c->parent = this;
        class_stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_stats)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "satid")
    {
        satid = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "state-description")
    {
        state_description = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ClassStats()
    :
    cac_state{YType::enumeration, "cac-state"},
    class_name{YType::str, "class-name"},
    counter_validity_bitmask{YType::uint64, "counter-validity-bitmask"},
    queue_descr{YType::str, "queue-descr"},
    shared_queue_id{YType::uint32, "shared-queue-id"}
    	,
    cac_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats>())
	,child_policy(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy>())
	,general_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats>())
	,iphc_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats>())
{
    cac_stats->parent = this;

    child_policy->parent = this;

    general_stats->parent = this;

    iphc_stats->parent = this;

    yang_name = "class-stats"; yang_parent_name = "statistics";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::~ClassStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::has_data() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_data())
            return true;
    }
    return cac_state.is_set
	|| class_name.is_set
	|| counter_validity_bitmask.is_set
	|| queue_descr.is_set
	|| shared_queue_id.is_set
	|| (cac_stats !=  nullptr && cac_stats->has_data())
	|| (child_policy !=  nullptr && child_policy->has_data())
	|| (general_stats !=  nullptr && general_stats->has_data())
	|| (iphc_stats !=  nullptr && iphc_stats->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::has_operation() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cac_state.operation)
	|| is_set(class_name.operation)
	|| is_set(counter_validity_bitmask.operation)
	|| is_set(queue_descr.operation)
	|| is_set(shared_queue_id.operation)
	|| (cac_stats !=  nullptr && cac_stats->has_operation())
	|| (child_policy !=  nullptr && child_policy->has_operation())
	|| (general_stats !=  nullptr && general_stats->has_operation())
	|| (iphc_stats !=  nullptr && iphc_stats->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_state.is_set || is_set(cac_state.operation)) leaf_name_data.push_back(cac_state.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (counter_validity_bitmask.is_set || is_set(counter_validity_bitmask.operation)) leaf_name_data.push_back(counter_validity_bitmask.get_name_leafdata());
    if (queue_descr.is_set || is_set(queue_descr.operation)) leaf_name_data.push_back(queue_descr.get_name_leafdata());
    if (shared_queue_id.is_set || is_set(shared_queue_id.operation)) leaf_name_data.push_back(shared_queue_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cac-stats")
    {
        if(cac_stats == nullptr)
        {
            cac_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats>();
        }
        return cac_stats;
    }

    if(child_yang_name == "child-policy")
    {
        if(child_policy == nullptr)
        {
            child_policy = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy>();
        }
        return child_policy;
    }

    if(child_yang_name == "general-stats")
    {
        if(general_stats == nullptr)
        {
            general_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats>();
        }
        return general_stats;
    }

    if(child_yang_name == "iphc-stats")
    {
        if(iphc_stats == nullptr)
        {
            iphc_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats>();
        }
        return iphc_stats;
    }

    if(child_yang_name == "police-stats-array")
    {
        for(auto const & c : police_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray>();
        c->parent = this;
        police_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-stats-array")
    {
        for(auto const & c : queue_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray>();
        c->parent = this;
        queue_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "wred-stats-array")
    {
        for(auto const & c : wred_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray>();
        c->parent = this;
        wred_stats_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cac_stats != nullptr)
    {
        children["cac-stats"] = cac_stats;
    }

    if(child_policy != nullptr)
    {
        children["child-policy"] = child_policy;
    }

    if(general_stats != nullptr)
    {
        children["general-stats"] = general_stats;
    }

    if(iphc_stats != nullptr)
    {
        children["iphc-stats"] = iphc_stats;
    }

    for (auto const & c : police_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wred_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cac-state")
    {
        cac_state = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "counter-validity-bitmask")
    {
        counter_validity_bitmask = value;
    }
    if(value_path == "queue-descr")
    {
        queue_descr = value;
    }
    if(value_path == "shared-queue-id")
    {
        shared_queue_id = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats::GeneralStats()
    :
    match_data_rate{YType::uint32, "match-data-rate"},
    pre_policy_matched_bytes{YType::uint64, "pre-policy-matched-bytes"},
    pre_policy_matched_packets{YType::uint64, "pre-policy-matched-packets"},
    total_drop_bytes{YType::uint64, "total-drop-bytes"},
    total_drop_packets{YType::uint64, "total-drop-packets"},
    total_drop_rate{YType::uint32, "total-drop-rate"},
    total_transmit_rate{YType::uint32, "total-transmit-rate"},
    transmit_bytes{YType::uint64, "transmit-bytes"},
    transmit_packets{YType::uint64, "transmit-packets"}
{
    yang_name = "general-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats::~GeneralStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats::has_data() const
{
    return match_data_rate.is_set
	|| pre_policy_matched_bytes.is_set
	|| pre_policy_matched_packets.is_set
	|| total_drop_bytes.is_set
	|| total_drop_packets.is_set
	|| total_drop_rate.is_set
	|| total_transmit_rate.is_set
	|| transmit_bytes.is_set
	|| transmit_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats::has_operation() const
{
    return is_set(operation)
	|| is_set(match_data_rate.operation)
	|| is_set(pre_policy_matched_bytes.operation)
	|| is_set(pre_policy_matched_packets.operation)
	|| is_set(total_drop_bytes.operation)
	|| is_set(total_drop_packets.operation)
	|| is_set(total_drop_rate.operation)
	|| is_set(total_transmit_rate.operation)
	|| is_set(transmit_bytes.operation)
	|| is_set(transmit_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GeneralStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_data_rate.is_set || is_set(match_data_rate.operation)) leaf_name_data.push_back(match_data_rate.get_name_leafdata());
    if (pre_policy_matched_bytes.is_set || is_set(pre_policy_matched_bytes.operation)) leaf_name_data.push_back(pre_policy_matched_bytes.get_name_leafdata());
    if (pre_policy_matched_packets.is_set || is_set(pre_policy_matched_packets.operation)) leaf_name_data.push_back(pre_policy_matched_packets.get_name_leafdata());
    if (total_drop_bytes.is_set || is_set(total_drop_bytes.operation)) leaf_name_data.push_back(total_drop_bytes.get_name_leafdata());
    if (total_drop_packets.is_set || is_set(total_drop_packets.operation)) leaf_name_data.push_back(total_drop_packets.get_name_leafdata());
    if (total_drop_rate.is_set || is_set(total_drop_rate.operation)) leaf_name_data.push_back(total_drop_rate.get_name_leafdata());
    if (total_transmit_rate.is_set || is_set(total_transmit_rate.operation)) leaf_name_data.push_back(total_transmit_rate.get_name_leafdata());
    if (transmit_bytes.is_set || is_set(transmit_bytes.operation)) leaf_name_data.push_back(transmit_bytes.get_name_leafdata());
    if (transmit_packets.is_set || is_set(transmit_packets.operation)) leaf_name_data.push_back(transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-data-rate")
    {
        match_data_rate = value;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes = value;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets = value;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes = value;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets = value;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate = value;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate = value;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes = value;
    }
    if(value_path == "transmit-packets")
    {
        transmit_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats::IphcStats()
    :
    non_tcp_bytes_saved{YType::uint64, "non-tcp-bytes-saved"},
    non_tcp_bytes_sent_rate{YType::uint32, "non-tcp-bytes-sent-rate"},
    non_tcp_compressed_packets_out{YType::uint64, "non-tcp-compressed-packets-out"},
    non_tcp_full_header_packets_out{YType::uint64, "non-tcp-full-header-packets-out"},
    non_tcp_total_out_bytes{YType::uint64, "non-tcp-total-out-bytes"},
    non_tcp_total_out_packets{YType::uint64, "non-tcp-total-out-packets"},
    tcp_bytes_saved{YType::uint64, "tcp-bytes-saved"},
    tcp_bytes_sent_rate{YType::uint32, "tcp-bytes-sent-rate"},
    tcp_compressed_packets_out{YType::uint64, "tcp-compressed-packets-out"},
    tcp_full_header_packets_out{YType::uint64, "tcp-full-header-packets-out"},
    tcp_total_out_bytes{YType::uint64, "tcp-total-out-bytes"},
    tcp_total_out_packets{YType::uint64, "tcp-total-out-packets"}
{
    yang_name = "iphc-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats::~IphcStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats::has_data() const
{
    return non_tcp_bytes_saved.is_set
	|| non_tcp_bytes_sent_rate.is_set
	|| non_tcp_compressed_packets_out.is_set
	|| non_tcp_full_header_packets_out.is_set
	|| non_tcp_total_out_bytes.is_set
	|| non_tcp_total_out_packets.is_set
	|| tcp_bytes_saved.is_set
	|| tcp_bytes_sent_rate.is_set
	|| tcp_compressed_packets_out.is_set
	|| tcp_full_header_packets_out.is_set
	|| tcp_total_out_bytes.is_set
	|| tcp_total_out_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(non_tcp_bytes_saved.operation)
	|| is_set(non_tcp_bytes_sent_rate.operation)
	|| is_set(non_tcp_compressed_packets_out.operation)
	|| is_set(non_tcp_full_header_packets_out.operation)
	|| is_set(non_tcp_total_out_bytes.operation)
	|| is_set(non_tcp_total_out_packets.operation)
	|| is_set(tcp_bytes_saved.operation)
	|| is_set(tcp_bytes_sent_rate.operation)
	|| is_set(tcp_compressed_packets_out.operation)
	|| is_set(tcp_full_header_packets_out.operation)
	|| is_set(tcp_total_out_bytes.operation)
	|| is_set(tcp_total_out_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iphc-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IphcStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_tcp_bytes_saved.is_set || is_set(non_tcp_bytes_saved.operation)) leaf_name_data.push_back(non_tcp_bytes_saved.get_name_leafdata());
    if (non_tcp_bytes_sent_rate.is_set || is_set(non_tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(non_tcp_bytes_sent_rate.get_name_leafdata());
    if (non_tcp_compressed_packets_out.is_set || is_set(non_tcp_compressed_packets_out.operation)) leaf_name_data.push_back(non_tcp_compressed_packets_out.get_name_leafdata());
    if (non_tcp_full_header_packets_out.is_set || is_set(non_tcp_full_header_packets_out.operation)) leaf_name_data.push_back(non_tcp_full_header_packets_out.get_name_leafdata());
    if (non_tcp_total_out_bytes.is_set || is_set(non_tcp_total_out_bytes.operation)) leaf_name_data.push_back(non_tcp_total_out_bytes.get_name_leafdata());
    if (non_tcp_total_out_packets.is_set || is_set(non_tcp_total_out_packets.operation)) leaf_name_data.push_back(non_tcp_total_out_packets.get_name_leafdata());
    if (tcp_bytes_saved.is_set || is_set(tcp_bytes_saved.operation)) leaf_name_data.push_back(tcp_bytes_saved.get_name_leafdata());
    if (tcp_bytes_sent_rate.is_set || is_set(tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(tcp_bytes_sent_rate.get_name_leafdata());
    if (tcp_compressed_packets_out.is_set || is_set(tcp_compressed_packets_out.operation)) leaf_name_data.push_back(tcp_compressed_packets_out.get_name_leafdata());
    if (tcp_full_header_packets_out.is_set || is_set(tcp_full_header_packets_out.operation)) leaf_name_data.push_back(tcp_full_header_packets_out.get_name_leafdata());
    if (tcp_total_out_bytes.is_set || is_set(tcp_total_out_bytes.operation)) leaf_name_data.push_back(tcp_total_out_bytes.get_name_leafdata());
    if (tcp_total_out_packets.is_set || is_set(tcp_total_out_packets.operation)) leaf_name_data.push_back(tcp_total_out_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-tcp-bytes-saved")
    {
        non_tcp_bytes_saved = value;
    }
    if(value_path == "non-tcp-bytes-sent-rate")
    {
        non_tcp_bytes_sent_rate = value;
    }
    if(value_path == "non-tcp-compressed-packets-out")
    {
        non_tcp_compressed_packets_out = value;
    }
    if(value_path == "non-tcp-full-header-packets-out")
    {
        non_tcp_full_header_packets_out = value;
    }
    if(value_path == "non-tcp-total-out-bytes")
    {
        non_tcp_total_out_bytes = value;
    }
    if(value_path == "non-tcp-total-out-packets")
    {
        non_tcp_total_out_packets = value;
    }
    if(value_path == "tcp-bytes-saved")
    {
        tcp_bytes_saved = value;
    }
    if(value_path == "tcp-bytes-sent-rate")
    {
        tcp_bytes_sent_rate = value;
    }
    if(value_path == "tcp-compressed-packets-out")
    {
        tcp_compressed_packets_out = value;
    }
    if(value_path == "tcp-full-header-packets-out")
    {
        tcp_full_header_packets_out = value;
    }
    if(value_path == "tcp-total-out-bytes")
    {
        tcp_total_out_bytes = value;
    }
    if(value_path == "tcp-total-out-packets")
    {
        tcp_total_out_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ChildPolicy()
{
    yang_name = "child-policy"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::~ChildPolicy()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::has_data() const
{
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::has_operation() const
{
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-policy";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChildPolicy' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats::CacStats()
    :
    admit_bytes{YType::uint64, "admit-bytes"},
    admit_rates{YType::uint32, "admit-rates"},
    admitpackets{YType::uint64, "admitpackets"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    drop_rates{YType::uint32, "drop-rates"}
{
    yang_name = "cac-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats::~CacStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats::has_data() const
{
    return admit_bytes.is_set
	|| admit_rates.is_set
	|| admitpackets.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| drop_rates.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats::has_operation() const
{
    return is_set(operation)
	|| is_set(admit_bytes.operation)
	|| is_set(admit_rates.operation)
	|| is_set(admitpackets.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(drop_rates.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CacStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admit_bytes.is_set || is_set(admit_bytes.operation)) leaf_name_data.push_back(admit_bytes.get_name_leafdata());
    if (admit_rates.is_set || is_set(admit_rates.operation)) leaf_name_data.push_back(admit_rates.get_name_leafdata());
    if (admitpackets.is_set || is_set(admitpackets.operation)) leaf_name_data.push_back(admitpackets.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (drop_rates.is_set || is_set(drop_rates.operation)) leaf_name_data.push_back(drop_rates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admit-bytes")
    {
        admit_bytes = value;
    }
    if(value_path == "admit-rates")
    {
        admit_rates = value;
    }
    if(value_path == "admitpackets")
    {
        admitpackets = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "drop-rates")
    {
        drop_rates = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueStatsArray()
    :
    atm_clp0_drop_bytes{YType::uint64, "atm-clp0-drop-bytes"},
    atm_clp0_drop_packets{YType::uint64, "atm-clp0-drop-packets"},
    atm_clp1_drop_bytes{YType::uint64, "atm-clp1-drop-bytes"},
    atm_clp1_drop_packets{YType::uint64, "atm-clp1-drop-packets"},
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    forced_wred_stats_display{YType::boolean, "forced-wred-stats-display"},
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    queue_drop_threshold{YType::uint32, "queue-drop-threshold"},
    queue_id{YType::uint32, "queue-id"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    tail_drop_bytes{YType::uint64, "tail-drop-bytes"},
    tail_drop_packets{YType::uint64, "tail-drop-packets"}
{
    yang_name = "queue-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::~QueueStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::has_data() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_data())
            return true;
    }
    return atm_clp0_drop_bytes.is_set
	|| atm_clp0_drop_packets.is_set
	|| atm_clp1_drop_bytes.is_set
	|| atm_clp1_drop_packets.is_set
	|| conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| forced_wred_stats_display.is_set
	|| max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| queue_drop_threshold.is_set
	|| queue_id.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| tail_drop_bytes.is_set
	|| tail_drop_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::has_operation() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(atm_clp0_drop_bytes.operation)
	|| is_set(atm_clp0_drop_packets.operation)
	|| is_set(atm_clp1_drop_bytes.operation)
	|| is_set(atm_clp1_drop_packets.operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(forced_wred_stats_display.operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(queue_drop_threshold.operation)
	|| is_set(queue_id.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(tail_drop_bytes.operation)
	|| is_set(tail_drop_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp0_drop_bytes.is_set || is_set(atm_clp0_drop_bytes.operation)) leaf_name_data.push_back(atm_clp0_drop_bytes.get_name_leafdata());
    if (atm_clp0_drop_packets.is_set || is_set(atm_clp0_drop_packets.operation)) leaf_name_data.push_back(atm_clp0_drop_packets.get_name_leafdata());
    if (atm_clp1_drop_bytes.is_set || is_set(atm_clp1_drop_bytes.operation)) leaf_name_data.push_back(atm_clp1_drop_bytes.get_name_leafdata());
    if (atm_clp1_drop_packets.is_set || is_set(atm_clp1_drop_packets.operation)) leaf_name_data.push_back(atm_clp1_drop_packets.get_name_leafdata());
    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (forced_wred_stats_display.is_set || is_set(forced_wred_stats_display.operation)) leaf_name_data.push_back(forced_wred_stats_display.get_name_leafdata());
    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (queue_drop_threshold.is_set || is_set(queue_drop_threshold.operation)) leaf_name_data.push_back(queue_drop_threshold.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (tail_drop_bytes.is_set || is_set(tail_drop_bytes.operation)) leaf_name_data.push_back(tail_drop_bytes.get_name_leafdata());
    if (tail_drop_packets.is_set || is_set(tail_drop_packets.operation)) leaf_name_data.push_back(tail_drop_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue-average-length")
    {
        for(auto const & c : queue_average_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength>();
        c->parent = this;
        queue_average_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-instance-length")
    {
        for(auto const & c : queue_instance_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength>();
        c->parent = this;
        queue_instance_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-max-length")
    {
        for(auto const & c : queue_max_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength>();
        c->parent = this;
        queue_max_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : queue_average_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_instance_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_max_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-clp0-drop-bytes")
    {
        atm_clp0_drop_bytes = value;
    }
    if(value_path == "atm-clp0-drop-packets")
    {
        atm_clp0_drop_packets = value;
    }
    if(value_path == "atm-clp1-drop-bytes")
    {
        atm_clp1_drop_bytes = value;
    }
    if(value_path == "atm-clp1-drop-packets")
    {
        atm_clp1_drop_packets = value;
    }
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "forced-wred-stats-display")
    {
        forced_wred_stats_display = value;
    }
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "queue-drop-threshold")
    {
        queue_drop_threshold = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes = value;
    }
    if(value_path == "tail-drop-packets")
    {
        tail_drop_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::QueueInstanceLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-instance-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::~QueueInstanceLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-instance-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueInstanceLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::QueueAverageLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-average-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::~QueueAverageLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-average-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueAverageLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::QueueMaxLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-max-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::~QueueMaxLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-max-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueMaxLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::PoliceStatsArray()
    :
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    parent_drop_bytes{YType::uint64, "parent-drop-bytes"},
    parent_drop_packets{YType::uint64, "parent-drop-packets"},
    violate_bytes{YType::uint64, "violate-bytes"},
    violate_packets{YType::uint64, "violate-packets"},
    violate_rate{YType::uint32, "violate-rate"}
    	,
    color_class_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>())
{
    color_class_stats->parent = this;

    yang_name = "police-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::~PoliceStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::has_data() const
{
    return conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| parent_drop_bytes.is_set
	|| parent_drop_packets.is_set
	|| violate_bytes.is_set
	|| violate_packets.is_set
	|| violate_rate.is_set
	|| (color_class_stats !=  nullptr && color_class_stats->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(parent_drop_bytes.operation)
	|| is_set(parent_drop_packets.operation)
	|| is_set(violate_bytes.operation)
	|| is_set(violate_packets.operation)
	|| is_set(violate_rate.operation)
	|| (color_class_stats !=  nullptr && color_class_stats->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (parent_drop_bytes.is_set || is_set(parent_drop_bytes.operation)) leaf_name_data.push_back(parent_drop_bytes.get_name_leafdata());
    if (parent_drop_packets.is_set || is_set(parent_drop_packets.operation)) leaf_name_data.push_back(parent_drop_packets.get_name_leafdata());
    if (violate_bytes.is_set || is_set(violate_bytes.operation)) leaf_name_data.push_back(violate_bytes.get_name_leafdata());
    if (violate_packets.is_set || is_set(violate_packets.operation)) leaf_name_data.push_back(violate_packets.get_name_leafdata());
    if (violate_rate.is_set || is_set(violate_rate.operation)) leaf_name_data.push_back(violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "color-class-stats")
    {
        if(color_class_stats == nullptr)
        {
            color_class_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>();
        }
        return color_class_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(color_class_stats != nullptr)
    {
        children["color-class-stats"] = color_class_stats;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "parent-drop-bytes")
    {
        parent_drop_bytes = value;
    }
    if(value_path == "parent-drop-packets")
    {
        parent_drop_packets = value;
    }
    if(value_path == "violate-bytes")
    {
        violate_bytes = value;
    }
    if(value_path == "violate-packets")
    {
        violate_packets = value;
    }
    if(value_path == "violate-rate")
    {
        violate_rate = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::ColorClassStats()
    :
    conform_class_conform_bytes{YType::uint64, "conform-class-conform-bytes"},
    conform_class_conform_packets{YType::uint64, "conform-class-conform-packets"},
    conform_class_conform_rate{YType::uint32, "conform-class-conform-rate"},
    conform_class_exceed_bytes{YType::uint64, "conform-class-exceed-bytes"},
    conform_class_exceed_packets{YType::uint64, "conform-class-exceed-packets"},
    conform_class_exceed_rate{YType::uint32, "conform-class-exceed-rate"},
    conform_class_violate_bytes{YType::uint64, "conform-class-violate-bytes"},
    conform_class_violate_packets{YType::uint64, "conform-class-violate-packets"},
    conform_class_violate_rate{YType::uint32, "conform-class-violate-rate"},
    exceed_class_exceed_bytes{YType::uint64, "exceed-class-exceed-bytes"},
    exceed_class_exceed_packets{YType::uint64, "exceed-class-exceed-packets"},
    exceed_class_exceed_rate{YType::uint32, "exceed-class-exceed-rate"},
    exceed_class_violate_bytes{YType::uint64, "exceed-class-violate-bytes"},
    exceed_class_violate_packets{YType::uint64, "exceed-class-violate-packets"},
    exceed_class_violate_rate{YType::uint32, "exceed-class-violate-rate"},
    violate_class_violate_bytes{YType::uint64, "violate-class-violate-bytes"},
    violate_class_violate_packets{YType::uint64, "violate-class-violate-packets"},
    violate_class_violate_rate{YType::uint32, "violate-class-violate-rate"}
{
    yang_name = "color-class-stats"; yang_parent_name = "police-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::~ColorClassStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_data() const
{
    return conform_class_conform_bytes.is_set
	|| conform_class_conform_packets.is_set
	|| conform_class_conform_rate.is_set
	|| conform_class_exceed_bytes.is_set
	|| conform_class_exceed_packets.is_set
	|| conform_class_exceed_rate.is_set
	|| conform_class_violate_bytes.is_set
	|| conform_class_violate_packets.is_set
	|| conform_class_violate_rate.is_set
	|| exceed_class_exceed_bytes.is_set
	|| exceed_class_exceed_packets.is_set
	|| exceed_class_exceed_rate.is_set
	|| exceed_class_violate_bytes.is_set
	|| exceed_class_violate_packets.is_set
	|| exceed_class_violate_rate.is_set
	|| violate_class_violate_bytes.is_set
	|| violate_class_violate_packets.is_set
	|| violate_class_violate_rate.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_class_conform_bytes.operation)
	|| is_set(conform_class_conform_packets.operation)
	|| is_set(conform_class_conform_rate.operation)
	|| is_set(conform_class_exceed_bytes.operation)
	|| is_set(conform_class_exceed_packets.operation)
	|| is_set(conform_class_exceed_rate.operation)
	|| is_set(conform_class_violate_bytes.operation)
	|| is_set(conform_class_violate_packets.operation)
	|| is_set(conform_class_violate_rate.operation)
	|| is_set(exceed_class_exceed_bytes.operation)
	|| is_set(exceed_class_exceed_packets.operation)
	|| is_set(exceed_class_exceed_rate.operation)
	|| is_set(exceed_class_violate_bytes.operation)
	|| is_set(exceed_class_violate_packets.operation)
	|| is_set(exceed_class_violate_rate.operation)
	|| is_set(violate_class_violate_bytes.operation)
	|| is_set(violate_class_violate_packets.operation)
	|| is_set(violate_class_violate_rate.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ColorClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_class_conform_bytes.is_set || is_set(conform_class_conform_bytes.operation)) leaf_name_data.push_back(conform_class_conform_bytes.get_name_leafdata());
    if (conform_class_conform_packets.is_set || is_set(conform_class_conform_packets.operation)) leaf_name_data.push_back(conform_class_conform_packets.get_name_leafdata());
    if (conform_class_conform_rate.is_set || is_set(conform_class_conform_rate.operation)) leaf_name_data.push_back(conform_class_conform_rate.get_name_leafdata());
    if (conform_class_exceed_bytes.is_set || is_set(conform_class_exceed_bytes.operation)) leaf_name_data.push_back(conform_class_exceed_bytes.get_name_leafdata());
    if (conform_class_exceed_packets.is_set || is_set(conform_class_exceed_packets.operation)) leaf_name_data.push_back(conform_class_exceed_packets.get_name_leafdata());
    if (conform_class_exceed_rate.is_set || is_set(conform_class_exceed_rate.operation)) leaf_name_data.push_back(conform_class_exceed_rate.get_name_leafdata());
    if (conform_class_violate_bytes.is_set || is_set(conform_class_violate_bytes.operation)) leaf_name_data.push_back(conform_class_violate_bytes.get_name_leafdata());
    if (conform_class_violate_packets.is_set || is_set(conform_class_violate_packets.operation)) leaf_name_data.push_back(conform_class_violate_packets.get_name_leafdata());
    if (conform_class_violate_rate.is_set || is_set(conform_class_violate_rate.operation)) leaf_name_data.push_back(conform_class_violate_rate.get_name_leafdata());
    if (exceed_class_exceed_bytes.is_set || is_set(exceed_class_exceed_bytes.operation)) leaf_name_data.push_back(exceed_class_exceed_bytes.get_name_leafdata());
    if (exceed_class_exceed_packets.is_set || is_set(exceed_class_exceed_packets.operation)) leaf_name_data.push_back(exceed_class_exceed_packets.get_name_leafdata());
    if (exceed_class_exceed_rate.is_set || is_set(exceed_class_exceed_rate.operation)) leaf_name_data.push_back(exceed_class_exceed_rate.get_name_leafdata());
    if (exceed_class_violate_bytes.is_set || is_set(exceed_class_violate_bytes.operation)) leaf_name_data.push_back(exceed_class_violate_bytes.get_name_leafdata());
    if (exceed_class_violate_packets.is_set || is_set(exceed_class_violate_packets.operation)) leaf_name_data.push_back(exceed_class_violate_packets.get_name_leafdata());
    if (exceed_class_violate_rate.is_set || is_set(exceed_class_violate_rate.operation)) leaf_name_data.push_back(exceed_class_violate_rate.get_name_leafdata());
    if (violate_class_violate_bytes.is_set || is_set(violate_class_violate_bytes.operation)) leaf_name_data.push_back(violate_class_violate_bytes.get_name_leafdata());
    if (violate_class_violate_packets.is_set || is_set(violate_class_violate_packets.operation)) leaf_name_data.push_back(violate_class_violate_packets.get_name_leafdata());
    if (violate_class_violate_rate.is_set || is_set(violate_class_violate_rate.operation)) leaf_name_data.push_back(violate_class_violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-class-conform-bytes")
    {
        conform_class_conform_bytes = value;
    }
    if(value_path == "conform-class-conform-packets")
    {
        conform_class_conform_packets = value;
    }
    if(value_path == "conform-class-conform-rate")
    {
        conform_class_conform_rate = value;
    }
    if(value_path == "conform-class-exceed-bytes")
    {
        conform_class_exceed_bytes = value;
    }
    if(value_path == "conform-class-exceed-packets")
    {
        conform_class_exceed_packets = value;
    }
    if(value_path == "conform-class-exceed-rate")
    {
        conform_class_exceed_rate = value;
    }
    if(value_path == "conform-class-violate-bytes")
    {
        conform_class_violate_bytes = value;
    }
    if(value_path == "conform-class-violate-packets")
    {
        conform_class_violate_packets = value;
    }
    if(value_path == "conform-class-violate-rate")
    {
        conform_class_violate_rate = value;
    }
    if(value_path == "exceed-class-exceed-bytes")
    {
        exceed_class_exceed_bytes = value;
    }
    if(value_path == "exceed-class-exceed-packets")
    {
        exceed_class_exceed_packets = value;
    }
    if(value_path == "exceed-class-exceed-rate")
    {
        exceed_class_exceed_rate = value;
    }
    if(value_path == "exceed-class-violate-bytes")
    {
        exceed_class_violate_bytes = value;
    }
    if(value_path == "exceed-class-violate-packets")
    {
        exceed_class_violate_packets = value;
    }
    if(value_path == "exceed-class-violate-rate")
    {
        exceed_class_violate_rate = value;
    }
    if(value_path == "violate-class-violate-bytes")
    {
        violate_class_violate_bytes = value;
    }
    if(value_path == "violate-class-violate-packets")
    {
        violate_class_violate_packets = value;
    }
    if(value_path == "violate-class-violate-rate")
    {
        violate_class_violate_rate = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::WredStatsArray()
    :
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    profile_title{YType::str, "profile-title"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    red_ecn_marked_bytes{YType::uint64, "red-ecn-marked-bytes"},
    red_ecn_marked_packets{YType::uint64, "red-ecn-marked-packets"},
    red_transmit_bytes{YType::uint64, "red-transmit-bytes"},
    red_transmit_packets{YType::uint64, "red-transmit-packets"}
{
    yang_name = "wred-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::~WredStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::has_data() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_data())
            return true;
    }
    return max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| profile_title.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| red_ecn_marked_bytes.is_set
	|| red_ecn_marked_packets.is_set
	|| red_transmit_bytes.is_set
	|| red_transmit_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::has_operation() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(profile_title.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(red_ecn_marked_bytes.operation)
	|| is_set(red_ecn_marked_packets.operation)
	|| is_set(red_transmit_bytes.operation)
	|| is_set(red_transmit_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WredStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (profile_title.is_set || is_set(profile_title.operation)) leaf_name_data.push_back(profile_title.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (red_ecn_marked_bytes.is_set || is_set(red_ecn_marked_bytes.operation)) leaf_name_data.push_back(red_ecn_marked_bytes.get_name_leafdata());
    if (red_ecn_marked_packets.is_set || is_set(red_ecn_marked_packets.operation)) leaf_name_data.push_back(red_ecn_marked_packets.get_name_leafdata());
    if (red_transmit_bytes.is_set || is_set(red_transmit_bytes.operation)) leaf_name_data.push_back(red_transmit_bytes.get_name_leafdata());
    if (red_transmit_packets.is_set || is_set(red_transmit_packets.operation)) leaf_name_data.push_back(red_transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-label")
    {
        for(auto const & c : red_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel>();
        c->parent = this;
        red_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : red_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "profile-title")
    {
        profile_title = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "red-ecn-marked-bytes")
    {
        red_ecn_marked_bytes = value;
    }
    if(value_path == "red-ecn-marked-packets")
    {
        red_ecn_marked_packets = value;
    }
    if(value_path == "red-transmit-bytes")
    {
        red_transmit_bytes = value;
    }
    if(value_path == "red-transmit-packets")
    {
        red_transmit_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::RedLabel()
    :
    value_{YType::uint8, "value"},
    wred_type{YType::enumeration, "wred-type"}
{
    yang_name = "red-label"; yang_parent_name = "wred-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::~RedLabel()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::has_data() const
{
    return value_.is_set
	|| wred_type.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| is_set(wred_type.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-label";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedLabel' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (wred_type.is_set || is_set(wred_type.operation)) leaf_name_data.push_back(wred_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "wred-type")
    {
        wred_type = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Output()
    :
    service_policy_names(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames>())
	,statistics(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics>())
{
    service_policy_names->parent = this;

    statistics->parent = this;

    yang_name = "output"; yang_parent_name = "nv-satellite-interface";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::~Output()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::has_data() const
{
    return (service_policy_names !=  nullptr && service_policy_names->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::has_operation() const
{
    return is_set(operation)
	|| (service_policy_names !=  nullptr && service_policy_names->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-names")
    {
        if(service_policy_names == nullptr)
        {
            service_policy_names = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames>();
        }
        return service_policy_names;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy_names != nullptr)
    {
        children["service-policy-names"] = service_policy_names;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyNames()
{
    yang_name = "service-policy-names"; yang_parent_name = "output";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::~ServicePolicyNames()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::has_data() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::has_operation() const
{
    for (std::size_t index=0; index<service_policy_instance.size(); index++)
    {
        if(service_policy_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-names";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyNames' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy-instance")
    {
        for(auto const & c : service_policy_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance>();
        c->parent = this;
        service_policy_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance::ServicePolicyInstance()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy-instance"; yang_parent_name = "service-policy-names";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance::~ServicePolicyInstance()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance::has_data() const
{
    return service_policy_name.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-instance" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyInstance' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::ServicePolicyNames::ServicePolicyInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::Statistics()
    :
    policy_name{YType::str, "policy-name"},
    satid{YType::uint32, "satid"},
    state{YType::enumeration, "state"},
    state_description{YType::str, "state-description"}
{
    yang_name = "statistics"; yang_parent_name = "output";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::~Statistics()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::has_data() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_data())
            return true;
    }
    return policy_name.is_set
	|| satid.is_set
	|| state.is_set
	|| state_description.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::has_operation() const
{
    for (std::size_t index=0; index<class_stats.size(); index++)
    {
        if(class_stats[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| is_set(satid.operation)
	|| is_set(state.operation)
	|| is_set(state_description.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (satid.is_set || is_set(satid.operation)) leaf_name_data.push_back(satid.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_description.is_set || is_set(state_description.operation)) leaf_name_data.push_back(state_description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-stats")
    {
        for(auto const & c : class_stats)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats>();
        c->parent = this;
        class_stats.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_stats)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "satid")
    {
        satid = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "state-description")
    {
        state_description = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ClassStats()
    :
    cac_state{YType::enumeration, "cac-state"},
    class_name{YType::str, "class-name"},
    counter_validity_bitmask{YType::uint64, "counter-validity-bitmask"},
    queue_descr{YType::str, "queue-descr"},
    shared_queue_id{YType::uint32, "shared-queue-id"}
    	,
    cac_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats>())
	,child_policy(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy>())
	,general_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats>())
	,iphc_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats>())
{
    cac_stats->parent = this;

    child_policy->parent = this;

    general_stats->parent = this;

    iphc_stats->parent = this;

    yang_name = "class-stats"; yang_parent_name = "statistics";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::~ClassStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::has_data() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_data())
            return true;
    }
    return cac_state.is_set
	|| class_name.is_set
	|| counter_validity_bitmask.is_set
	|| queue_descr.is_set
	|| shared_queue_id.is_set
	|| (cac_stats !=  nullptr && cac_stats->has_data())
	|| (child_policy !=  nullptr && child_policy->has_data())
	|| (general_stats !=  nullptr && general_stats->has_data())
	|| (iphc_stats !=  nullptr && iphc_stats->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::has_operation() const
{
    for (std::size_t index=0; index<police_stats_array.size(); index++)
    {
        if(police_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_stats_array.size(); index++)
    {
        if(queue_stats_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wred_stats_array.size(); index++)
    {
        if(wred_stats_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cac_state.operation)
	|| is_set(class_name.operation)
	|| is_set(counter_validity_bitmask.operation)
	|| is_set(queue_descr.operation)
	|| is_set(shared_queue_id.operation)
	|| (cac_stats !=  nullptr && cac_stats->has_operation())
	|| (child_policy !=  nullptr && child_policy->has_operation())
	|| (general_stats !=  nullptr && general_stats->has_operation())
	|| (iphc_stats !=  nullptr && iphc_stats->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_state.is_set || is_set(cac_state.operation)) leaf_name_data.push_back(cac_state.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (counter_validity_bitmask.is_set || is_set(counter_validity_bitmask.operation)) leaf_name_data.push_back(counter_validity_bitmask.get_name_leafdata());
    if (queue_descr.is_set || is_set(queue_descr.operation)) leaf_name_data.push_back(queue_descr.get_name_leafdata());
    if (shared_queue_id.is_set || is_set(shared_queue_id.operation)) leaf_name_data.push_back(shared_queue_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cac-stats")
    {
        if(cac_stats == nullptr)
        {
            cac_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats>();
        }
        return cac_stats;
    }

    if(child_yang_name == "child-policy")
    {
        if(child_policy == nullptr)
        {
            child_policy = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy>();
        }
        return child_policy;
    }

    if(child_yang_name == "general-stats")
    {
        if(general_stats == nullptr)
        {
            general_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats>();
        }
        return general_stats;
    }

    if(child_yang_name == "iphc-stats")
    {
        if(iphc_stats == nullptr)
        {
            iphc_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats>();
        }
        return iphc_stats;
    }

    if(child_yang_name == "police-stats-array")
    {
        for(auto const & c : police_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray>();
        c->parent = this;
        police_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-stats-array")
    {
        for(auto const & c : queue_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray>();
        c->parent = this;
        queue_stats_array.push_back(c);
        return c;
    }

    if(child_yang_name == "wred-stats-array")
    {
        for(auto const & c : wred_stats_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray>();
        c->parent = this;
        wred_stats_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cac_stats != nullptr)
    {
        children["cac-stats"] = cac_stats;
    }

    if(child_policy != nullptr)
    {
        children["child-policy"] = child_policy;
    }

    if(general_stats != nullptr)
    {
        children["general-stats"] = general_stats;
    }

    if(iphc_stats != nullptr)
    {
        children["iphc-stats"] = iphc_stats;
    }

    for (auto const & c : police_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wred_stats_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cac-state")
    {
        cac_state = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "counter-validity-bitmask")
    {
        counter_validity_bitmask = value;
    }
    if(value_path == "queue-descr")
    {
        queue_descr = value;
    }
    if(value_path == "shared-queue-id")
    {
        shared_queue_id = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats::GeneralStats()
    :
    match_data_rate{YType::uint32, "match-data-rate"},
    pre_policy_matched_bytes{YType::uint64, "pre-policy-matched-bytes"},
    pre_policy_matched_packets{YType::uint64, "pre-policy-matched-packets"},
    total_drop_bytes{YType::uint64, "total-drop-bytes"},
    total_drop_packets{YType::uint64, "total-drop-packets"},
    total_drop_rate{YType::uint32, "total-drop-rate"},
    total_transmit_rate{YType::uint32, "total-transmit-rate"},
    transmit_bytes{YType::uint64, "transmit-bytes"},
    transmit_packets{YType::uint64, "transmit-packets"}
{
    yang_name = "general-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats::~GeneralStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats::has_data() const
{
    return match_data_rate.is_set
	|| pre_policy_matched_bytes.is_set
	|| pre_policy_matched_packets.is_set
	|| total_drop_bytes.is_set
	|| total_drop_packets.is_set
	|| total_drop_rate.is_set
	|| total_transmit_rate.is_set
	|| transmit_bytes.is_set
	|| transmit_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats::has_operation() const
{
    return is_set(operation)
	|| is_set(match_data_rate.operation)
	|| is_set(pre_policy_matched_bytes.operation)
	|| is_set(pre_policy_matched_packets.operation)
	|| is_set(total_drop_bytes.operation)
	|| is_set(total_drop_packets.operation)
	|| is_set(total_drop_rate.operation)
	|| is_set(total_transmit_rate.operation)
	|| is_set(transmit_bytes.operation)
	|| is_set(transmit_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "general-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GeneralStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_data_rate.is_set || is_set(match_data_rate.operation)) leaf_name_data.push_back(match_data_rate.get_name_leafdata());
    if (pre_policy_matched_bytes.is_set || is_set(pre_policy_matched_bytes.operation)) leaf_name_data.push_back(pre_policy_matched_bytes.get_name_leafdata());
    if (pre_policy_matched_packets.is_set || is_set(pre_policy_matched_packets.operation)) leaf_name_data.push_back(pre_policy_matched_packets.get_name_leafdata());
    if (total_drop_bytes.is_set || is_set(total_drop_bytes.operation)) leaf_name_data.push_back(total_drop_bytes.get_name_leafdata());
    if (total_drop_packets.is_set || is_set(total_drop_packets.operation)) leaf_name_data.push_back(total_drop_packets.get_name_leafdata());
    if (total_drop_rate.is_set || is_set(total_drop_rate.operation)) leaf_name_data.push_back(total_drop_rate.get_name_leafdata());
    if (total_transmit_rate.is_set || is_set(total_transmit_rate.operation)) leaf_name_data.push_back(total_transmit_rate.get_name_leafdata());
    if (transmit_bytes.is_set || is_set(transmit_bytes.operation)) leaf_name_data.push_back(transmit_bytes.get_name_leafdata());
    if (transmit_packets.is_set || is_set(transmit_packets.operation)) leaf_name_data.push_back(transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::GeneralStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-data-rate")
    {
        match_data_rate = value;
    }
    if(value_path == "pre-policy-matched-bytes")
    {
        pre_policy_matched_bytes = value;
    }
    if(value_path == "pre-policy-matched-packets")
    {
        pre_policy_matched_packets = value;
    }
    if(value_path == "total-drop-bytes")
    {
        total_drop_bytes = value;
    }
    if(value_path == "total-drop-packets")
    {
        total_drop_packets = value;
    }
    if(value_path == "total-drop-rate")
    {
        total_drop_rate = value;
    }
    if(value_path == "total-transmit-rate")
    {
        total_transmit_rate = value;
    }
    if(value_path == "transmit-bytes")
    {
        transmit_bytes = value;
    }
    if(value_path == "transmit-packets")
    {
        transmit_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats::IphcStats()
    :
    non_tcp_bytes_saved{YType::uint64, "non-tcp-bytes-saved"},
    non_tcp_bytes_sent_rate{YType::uint32, "non-tcp-bytes-sent-rate"},
    non_tcp_compressed_packets_out{YType::uint64, "non-tcp-compressed-packets-out"},
    non_tcp_full_header_packets_out{YType::uint64, "non-tcp-full-header-packets-out"},
    non_tcp_total_out_bytes{YType::uint64, "non-tcp-total-out-bytes"},
    non_tcp_total_out_packets{YType::uint64, "non-tcp-total-out-packets"},
    tcp_bytes_saved{YType::uint64, "tcp-bytes-saved"},
    tcp_bytes_sent_rate{YType::uint32, "tcp-bytes-sent-rate"},
    tcp_compressed_packets_out{YType::uint64, "tcp-compressed-packets-out"},
    tcp_full_header_packets_out{YType::uint64, "tcp-full-header-packets-out"},
    tcp_total_out_bytes{YType::uint64, "tcp-total-out-bytes"},
    tcp_total_out_packets{YType::uint64, "tcp-total-out-packets"}
{
    yang_name = "iphc-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats::~IphcStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats::has_data() const
{
    return non_tcp_bytes_saved.is_set
	|| non_tcp_bytes_sent_rate.is_set
	|| non_tcp_compressed_packets_out.is_set
	|| non_tcp_full_header_packets_out.is_set
	|| non_tcp_total_out_bytes.is_set
	|| non_tcp_total_out_packets.is_set
	|| tcp_bytes_saved.is_set
	|| tcp_bytes_sent_rate.is_set
	|| tcp_compressed_packets_out.is_set
	|| tcp_full_header_packets_out.is_set
	|| tcp_total_out_bytes.is_set
	|| tcp_total_out_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats::has_operation() const
{
    return is_set(operation)
	|| is_set(non_tcp_bytes_saved.operation)
	|| is_set(non_tcp_bytes_sent_rate.operation)
	|| is_set(non_tcp_compressed_packets_out.operation)
	|| is_set(non_tcp_full_header_packets_out.operation)
	|| is_set(non_tcp_total_out_bytes.operation)
	|| is_set(non_tcp_total_out_packets.operation)
	|| is_set(tcp_bytes_saved.operation)
	|| is_set(tcp_bytes_sent_rate.operation)
	|| is_set(tcp_compressed_packets_out.operation)
	|| is_set(tcp_full_header_packets_out.operation)
	|| is_set(tcp_total_out_bytes.operation)
	|| is_set(tcp_total_out_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iphc-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IphcStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_tcp_bytes_saved.is_set || is_set(non_tcp_bytes_saved.operation)) leaf_name_data.push_back(non_tcp_bytes_saved.get_name_leafdata());
    if (non_tcp_bytes_sent_rate.is_set || is_set(non_tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(non_tcp_bytes_sent_rate.get_name_leafdata());
    if (non_tcp_compressed_packets_out.is_set || is_set(non_tcp_compressed_packets_out.operation)) leaf_name_data.push_back(non_tcp_compressed_packets_out.get_name_leafdata());
    if (non_tcp_full_header_packets_out.is_set || is_set(non_tcp_full_header_packets_out.operation)) leaf_name_data.push_back(non_tcp_full_header_packets_out.get_name_leafdata());
    if (non_tcp_total_out_bytes.is_set || is_set(non_tcp_total_out_bytes.operation)) leaf_name_data.push_back(non_tcp_total_out_bytes.get_name_leafdata());
    if (non_tcp_total_out_packets.is_set || is_set(non_tcp_total_out_packets.operation)) leaf_name_data.push_back(non_tcp_total_out_packets.get_name_leafdata());
    if (tcp_bytes_saved.is_set || is_set(tcp_bytes_saved.operation)) leaf_name_data.push_back(tcp_bytes_saved.get_name_leafdata());
    if (tcp_bytes_sent_rate.is_set || is_set(tcp_bytes_sent_rate.operation)) leaf_name_data.push_back(tcp_bytes_sent_rate.get_name_leafdata());
    if (tcp_compressed_packets_out.is_set || is_set(tcp_compressed_packets_out.operation)) leaf_name_data.push_back(tcp_compressed_packets_out.get_name_leafdata());
    if (tcp_full_header_packets_out.is_set || is_set(tcp_full_header_packets_out.operation)) leaf_name_data.push_back(tcp_full_header_packets_out.get_name_leafdata());
    if (tcp_total_out_bytes.is_set || is_set(tcp_total_out_bytes.operation)) leaf_name_data.push_back(tcp_total_out_bytes.get_name_leafdata());
    if (tcp_total_out_packets.is_set || is_set(tcp_total_out_packets.operation)) leaf_name_data.push_back(tcp_total_out_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::IphcStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-tcp-bytes-saved")
    {
        non_tcp_bytes_saved = value;
    }
    if(value_path == "non-tcp-bytes-sent-rate")
    {
        non_tcp_bytes_sent_rate = value;
    }
    if(value_path == "non-tcp-compressed-packets-out")
    {
        non_tcp_compressed_packets_out = value;
    }
    if(value_path == "non-tcp-full-header-packets-out")
    {
        non_tcp_full_header_packets_out = value;
    }
    if(value_path == "non-tcp-total-out-bytes")
    {
        non_tcp_total_out_bytes = value;
    }
    if(value_path == "non-tcp-total-out-packets")
    {
        non_tcp_total_out_packets = value;
    }
    if(value_path == "tcp-bytes-saved")
    {
        tcp_bytes_saved = value;
    }
    if(value_path == "tcp-bytes-sent-rate")
    {
        tcp_bytes_sent_rate = value;
    }
    if(value_path == "tcp-compressed-packets-out")
    {
        tcp_compressed_packets_out = value;
    }
    if(value_path == "tcp-full-header-packets-out")
    {
        tcp_full_header_packets_out = value;
    }
    if(value_path == "tcp-total-out-bytes")
    {
        tcp_total_out_bytes = value;
    }
    if(value_path == "tcp-total-out-packets")
    {
        tcp_total_out_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy::ChildPolicy()
{
    yang_name = "child-policy"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy::~ChildPolicy()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy::has_data() const
{
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy::has_operation() const
{
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-policy";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChildPolicy' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::ChildPolicy::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats::CacStats()
    :
    admit_bytes{YType::uint64, "admit-bytes"},
    admit_rates{YType::uint32, "admit-rates"},
    admitpackets{YType::uint64, "admitpackets"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    drop_rates{YType::uint32, "drop-rates"}
{
    yang_name = "cac-stats"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats::~CacStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats::has_data() const
{
    return admit_bytes.is_set
	|| admit_rates.is_set
	|| admitpackets.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| drop_rates.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats::has_operation() const
{
    return is_set(operation)
	|| is_set(admit_bytes.operation)
	|| is_set(admit_rates.operation)
	|| is_set(admitpackets.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(drop_rates.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CacStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admit_bytes.is_set || is_set(admit_bytes.operation)) leaf_name_data.push_back(admit_bytes.get_name_leafdata());
    if (admit_rates.is_set || is_set(admit_rates.operation)) leaf_name_data.push_back(admit_rates.get_name_leafdata());
    if (admitpackets.is_set || is_set(admitpackets.operation)) leaf_name_data.push_back(admitpackets.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (drop_rates.is_set || is_set(drop_rates.operation)) leaf_name_data.push_back(drop_rates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::CacStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admit-bytes")
    {
        admit_bytes = value;
    }
    if(value_path == "admit-rates")
    {
        admit_rates = value;
    }
    if(value_path == "admitpackets")
    {
        admitpackets = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "drop-rates")
    {
        drop_rates = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueStatsArray()
    :
    atm_clp0_drop_bytes{YType::uint64, "atm-clp0-drop-bytes"},
    atm_clp0_drop_packets{YType::uint64, "atm-clp0-drop-packets"},
    atm_clp1_drop_bytes{YType::uint64, "atm-clp1-drop-bytes"},
    atm_clp1_drop_packets{YType::uint64, "atm-clp1-drop-packets"},
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    forced_wred_stats_display{YType::boolean, "forced-wred-stats-display"},
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    queue_drop_threshold{YType::uint32, "queue-drop-threshold"},
    queue_id{YType::uint32, "queue-id"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    tail_drop_bytes{YType::uint64, "tail-drop-bytes"},
    tail_drop_packets{YType::uint64, "tail-drop-packets"}
{
    yang_name = "queue-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::~QueueStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::has_data() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_data())
            return true;
    }
    return atm_clp0_drop_bytes.is_set
	|| atm_clp0_drop_packets.is_set
	|| atm_clp1_drop_bytes.is_set
	|| atm_clp1_drop_packets.is_set
	|| conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| forced_wred_stats_display.is_set
	|| max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| queue_drop_threshold.is_set
	|| queue_id.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| tail_drop_bytes.is_set
	|| tail_drop_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::has_operation() const
{
    for (std::size_t index=0; index<queue_average_length.size(); index++)
    {
        if(queue_average_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_instance_length.size(); index++)
    {
        if(queue_instance_length[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<queue_max_length.size(); index++)
    {
        if(queue_max_length[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(atm_clp0_drop_bytes.operation)
	|| is_set(atm_clp0_drop_packets.operation)
	|| is_set(atm_clp1_drop_bytes.operation)
	|| is_set(atm_clp1_drop_packets.operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(forced_wred_stats_display.operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(queue_drop_threshold.operation)
	|| is_set(queue_id.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(tail_drop_bytes.operation)
	|| is_set(tail_drop_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp0_drop_bytes.is_set || is_set(atm_clp0_drop_bytes.operation)) leaf_name_data.push_back(atm_clp0_drop_bytes.get_name_leafdata());
    if (atm_clp0_drop_packets.is_set || is_set(atm_clp0_drop_packets.operation)) leaf_name_data.push_back(atm_clp0_drop_packets.get_name_leafdata());
    if (atm_clp1_drop_bytes.is_set || is_set(atm_clp1_drop_bytes.operation)) leaf_name_data.push_back(atm_clp1_drop_bytes.get_name_leafdata());
    if (atm_clp1_drop_packets.is_set || is_set(atm_clp1_drop_packets.operation)) leaf_name_data.push_back(atm_clp1_drop_packets.get_name_leafdata());
    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (forced_wred_stats_display.is_set || is_set(forced_wred_stats_display.operation)) leaf_name_data.push_back(forced_wred_stats_display.get_name_leafdata());
    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (queue_drop_threshold.is_set || is_set(queue_drop_threshold.operation)) leaf_name_data.push_back(queue_drop_threshold.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (tail_drop_bytes.is_set || is_set(tail_drop_bytes.operation)) leaf_name_data.push_back(tail_drop_bytes.get_name_leafdata());
    if (tail_drop_packets.is_set || is_set(tail_drop_packets.operation)) leaf_name_data.push_back(tail_drop_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue-average-length")
    {
        for(auto const & c : queue_average_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength>();
        c->parent = this;
        queue_average_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-instance-length")
    {
        for(auto const & c : queue_instance_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength>();
        c->parent = this;
        queue_instance_length.push_back(c);
        return c;
    }

    if(child_yang_name == "queue-max-length")
    {
        for(auto const & c : queue_max_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength>();
        c->parent = this;
        queue_max_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : queue_average_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_instance_length)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : queue_max_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-clp0-drop-bytes")
    {
        atm_clp0_drop_bytes = value;
    }
    if(value_path == "atm-clp0-drop-packets")
    {
        atm_clp0_drop_packets = value;
    }
    if(value_path == "atm-clp1-drop-bytes")
    {
        atm_clp1_drop_bytes = value;
    }
    if(value_path == "atm-clp1-drop-packets")
    {
        atm_clp1_drop_packets = value;
    }
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "forced-wred-stats-display")
    {
        forced_wred_stats_display = value;
    }
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "queue-drop-threshold")
    {
        queue_drop_threshold = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "tail-drop-bytes")
    {
        tail_drop_bytes = value;
    }
    if(value_path == "tail-drop-packets")
    {
        tail_drop_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::QueueInstanceLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-instance-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::~QueueInstanceLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-instance-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueInstanceLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::QueueAverageLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-average-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::~QueueAverageLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-average-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueAverageLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::QueueMaxLength()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-max-length"; yang_parent_name = "queue-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::~QueueMaxLength()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-max-length";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueMaxLength' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::PoliceStatsArray()
    :
    conform_bytes{YType::uint64, "conform-bytes"},
    conform_packets{YType::uint64, "conform-packets"},
    conform_rate{YType::uint32, "conform-rate"},
    drop_bytes{YType::uint64, "drop-bytes"},
    drop_packets{YType::uint64, "drop-packets"},
    exceed_bytes{YType::uint64, "exceed-bytes"},
    exceed_packets{YType::uint64, "exceed-packets"},
    exceed_rate{YType::uint32, "exceed-rate"},
    parent_drop_bytes{YType::uint64, "parent-drop-bytes"},
    parent_drop_packets{YType::uint64, "parent-drop-packets"},
    violate_bytes{YType::uint64, "violate-bytes"},
    violate_packets{YType::uint64, "violate-packets"},
    violate_rate{YType::uint32, "violate-rate"}
    	,
    color_class_stats(std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>())
{
    color_class_stats->parent = this;

    yang_name = "police-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::~PoliceStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::has_data() const
{
    return conform_bytes.is_set
	|| conform_packets.is_set
	|| conform_rate.is_set
	|| drop_bytes.is_set
	|| drop_packets.is_set
	|| exceed_bytes.is_set
	|| exceed_packets.is_set
	|| exceed_rate.is_set
	|| parent_drop_bytes.is_set
	|| parent_drop_packets.is_set
	|| violate_bytes.is_set
	|| violate_packets.is_set
	|| violate_rate.is_set
	|| (color_class_stats !=  nullptr && color_class_stats->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_bytes.operation)
	|| is_set(conform_packets.operation)
	|| is_set(conform_rate.operation)
	|| is_set(drop_bytes.operation)
	|| is_set(drop_packets.operation)
	|| is_set(exceed_bytes.operation)
	|| is_set(exceed_packets.operation)
	|| is_set(exceed_rate.operation)
	|| is_set(parent_drop_bytes.operation)
	|| is_set(parent_drop_packets.operation)
	|| is_set(violate_bytes.operation)
	|| is_set(violate_packets.operation)
	|| is_set(violate_rate.operation)
	|| (color_class_stats !=  nullptr && color_class_stats->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_bytes.is_set || is_set(conform_bytes.operation)) leaf_name_data.push_back(conform_bytes.get_name_leafdata());
    if (conform_packets.is_set || is_set(conform_packets.operation)) leaf_name_data.push_back(conform_packets.get_name_leafdata());
    if (conform_rate.is_set || is_set(conform_rate.operation)) leaf_name_data.push_back(conform_rate.get_name_leafdata());
    if (drop_bytes.is_set || is_set(drop_bytes.operation)) leaf_name_data.push_back(drop_bytes.get_name_leafdata());
    if (drop_packets.is_set || is_set(drop_packets.operation)) leaf_name_data.push_back(drop_packets.get_name_leafdata());
    if (exceed_bytes.is_set || is_set(exceed_bytes.operation)) leaf_name_data.push_back(exceed_bytes.get_name_leafdata());
    if (exceed_packets.is_set || is_set(exceed_packets.operation)) leaf_name_data.push_back(exceed_packets.get_name_leafdata());
    if (exceed_rate.is_set || is_set(exceed_rate.operation)) leaf_name_data.push_back(exceed_rate.get_name_leafdata());
    if (parent_drop_bytes.is_set || is_set(parent_drop_bytes.operation)) leaf_name_data.push_back(parent_drop_bytes.get_name_leafdata());
    if (parent_drop_packets.is_set || is_set(parent_drop_packets.operation)) leaf_name_data.push_back(parent_drop_packets.get_name_leafdata());
    if (violate_bytes.is_set || is_set(violate_bytes.operation)) leaf_name_data.push_back(violate_bytes.get_name_leafdata());
    if (violate_packets.is_set || is_set(violate_packets.operation)) leaf_name_data.push_back(violate_packets.get_name_leafdata());
    if (violate_rate.is_set || is_set(violate_rate.operation)) leaf_name_data.push_back(violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "color-class-stats")
    {
        if(color_class_stats == nullptr)
        {
            color_class_stats = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats>();
        }
        return color_class_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(color_class_stats != nullptr)
    {
        children["color-class-stats"] = color_class_stats;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-bytes")
    {
        conform_bytes = value;
    }
    if(value_path == "conform-packets")
    {
        conform_packets = value;
    }
    if(value_path == "conform-rate")
    {
        conform_rate = value;
    }
    if(value_path == "drop-bytes")
    {
        drop_bytes = value;
    }
    if(value_path == "drop-packets")
    {
        drop_packets = value;
    }
    if(value_path == "exceed-bytes")
    {
        exceed_bytes = value;
    }
    if(value_path == "exceed-packets")
    {
        exceed_packets = value;
    }
    if(value_path == "exceed-rate")
    {
        exceed_rate = value;
    }
    if(value_path == "parent-drop-bytes")
    {
        parent_drop_bytes = value;
    }
    if(value_path == "parent-drop-packets")
    {
        parent_drop_packets = value;
    }
    if(value_path == "violate-bytes")
    {
        violate_bytes = value;
    }
    if(value_path == "violate-packets")
    {
        violate_packets = value;
    }
    if(value_path == "violate-rate")
    {
        violate_rate = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::ColorClassStats()
    :
    conform_class_conform_bytes{YType::uint64, "conform-class-conform-bytes"},
    conform_class_conform_packets{YType::uint64, "conform-class-conform-packets"},
    conform_class_conform_rate{YType::uint32, "conform-class-conform-rate"},
    conform_class_exceed_bytes{YType::uint64, "conform-class-exceed-bytes"},
    conform_class_exceed_packets{YType::uint64, "conform-class-exceed-packets"},
    conform_class_exceed_rate{YType::uint32, "conform-class-exceed-rate"},
    conform_class_violate_bytes{YType::uint64, "conform-class-violate-bytes"},
    conform_class_violate_packets{YType::uint64, "conform-class-violate-packets"},
    conform_class_violate_rate{YType::uint32, "conform-class-violate-rate"},
    exceed_class_exceed_bytes{YType::uint64, "exceed-class-exceed-bytes"},
    exceed_class_exceed_packets{YType::uint64, "exceed-class-exceed-packets"},
    exceed_class_exceed_rate{YType::uint32, "exceed-class-exceed-rate"},
    exceed_class_violate_bytes{YType::uint64, "exceed-class-violate-bytes"},
    exceed_class_violate_packets{YType::uint64, "exceed-class-violate-packets"},
    exceed_class_violate_rate{YType::uint32, "exceed-class-violate-rate"},
    violate_class_violate_bytes{YType::uint64, "violate-class-violate-bytes"},
    violate_class_violate_packets{YType::uint64, "violate-class-violate-packets"},
    violate_class_violate_rate{YType::uint32, "violate-class-violate-rate"}
{
    yang_name = "color-class-stats"; yang_parent_name = "police-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::~ColorClassStats()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_data() const
{
    return conform_class_conform_bytes.is_set
	|| conform_class_conform_packets.is_set
	|| conform_class_conform_rate.is_set
	|| conform_class_exceed_bytes.is_set
	|| conform_class_exceed_packets.is_set
	|| conform_class_exceed_rate.is_set
	|| conform_class_violate_bytes.is_set
	|| conform_class_violate_packets.is_set
	|| conform_class_violate_rate.is_set
	|| exceed_class_exceed_bytes.is_set
	|| exceed_class_exceed_packets.is_set
	|| exceed_class_exceed_rate.is_set
	|| exceed_class_violate_bytes.is_set
	|| exceed_class_violate_packets.is_set
	|| exceed_class_violate_rate.is_set
	|| violate_class_violate_bytes.is_set
	|| violate_class_violate_packets.is_set
	|| violate_class_violate_rate.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::has_operation() const
{
    return is_set(operation)
	|| is_set(conform_class_conform_bytes.operation)
	|| is_set(conform_class_conform_packets.operation)
	|| is_set(conform_class_conform_rate.operation)
	|| is_set(conform_class_exceed_bytes.operation)
	|| is_set(conform_class_exceed_packets.operation)
	|| is_set(conform_class_exceed_rate.operation)
	|| is_set(conform_class_violate_bytes.operation)
	|| is_set(conform_class_violate_packets.operation)
	|| is_set(conform_class_violate_rate.operation)
	|| is_set(exceed_class_exceed_bytes.operation)
	|| is_set(exceed_class_exceed_packets.operation)
	|| is_set(exceed_class_exceed_rate.operation)
	|| is_set(exceed_class_violate_bytes.operation)
	|| is_set(exceed_class_violate_packets.operation)
	|| is_set(exceed_class_violate_rate.operation)
	|| is_set(violate_class_violate_bytes.operation)
	|| is_set(violate_class_violate_packets.operation)
	|| is_set(violate_class_violate_rate.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-class-stats";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ColorClassStats' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform_class_conform_bytes.is_set || is_set(conform_class_conform_bytes.operation)) leaf_name_data.push_back(conform_class_conform_bytes.get_name_leafdata());
    if (conform_class_conform_packets.is_set || is_set(conform_class_conform_packets.operation)) leaf_name_data.push_back(conform_class_conform_packets.get_name_leafdata());
    if (conform_class_conform_rate.is_set || is_set(conform_class_conform_rate.operation)) leaf_name_data.push_back(conform_class_conform_rate.get_name_leafdata());
    if (conform_class_exceed_bytes.is_set || is_set(conform_class_exceed_bytes.operation)) leaf_name_data.push_back(conform_class_exceed_bytes.get_name_leafdata());
    if (conform_class_exceed_packets.is_set || is_set(conform_class_exceed_packets.operation)) leaf_name_data.push_back(conform_class_exceed_packets.get_name_leafdata());
    if (conform_class_exceed_rate.is_set || is_set(conform_class_exceed_rate.operation)) leaf_name_data.push_back(conform_class_exceed_rate.get_name_leafdata());
    if (conform_class_violate_bytes.is_set || is_set(conform_class_violate_bytes.operation)) leaf_name_data.push_back(conform_class_violate_bytes.get_name_leafdata());
    if (conform_class_violate_packets.is_set || is_set(conform_class_violate_packets.operation)) leaf_name_data.push_back(conform_class_violate_packets.get_name_leafdata());
    if (conform_class_violate_rate.is_set || is_set(conform_class_violate_rate.operation)) leaf_name_data.push_back(conform_class_violate_rate.get_name_leafdata());
    if (exceed_class_exceed_bytes.is_set || is_set(exceed_class_exceed_bytes.operation)) leaf_name_data.push_back(exceed_class_exceed_bytes.get_name_leafdata());
    if (exceed_class_exceed_packets.is_set || is_set(exceed_class_exceed_packets.operation)) leaf_name_data.push_back(exceed_class_exceed_packets.get_name_leafdata());
    if (exceed_class_exceed_rate.is_set || is_set(exceed_class_exceed_rate.operation)) leaf_name_data.push_back(exceed_class_exceed_rate.get_name_leafdata());
    if (exceed_class_violate_bytes.is_set || is_set(exceed_class_violate_bytes.operation)) leaf_name_data.push_back(exceed_class_violate_bytes.get_name_leafdata());
    if (exceed_class_violate_packets.is_set || is_set(exceed_class_violate_packets.operation)) leaf_name_data.push_back(exceed_class_violate_packets.get_name_leafdata());
    if (exceed_class_violate_rate.is_set || is_set(exceed_class_violate_rate.operation)) leaf_name_data.push_back(exceed_class_violate_rate.get_name_leafdata());
    if (violate_class_violate_bytes.is_set || is_set(violate_class_violate_bytes.operation)) leaf_name_data.push_back(violate_class_violate_bytes.get_name_leafdata());
    if (violate_class_violate_packets.is_set || is_set(violate_class_violate_packets.operation)) leaf_name_data.push_back(violate_class_violate_packets.get_name_leafdata());
    if (violate_class_violate_rate.is_set || is_set(violate_class_violate_rate.operation)) leaf_name_data.push_back(violate_class_violate_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform-class-conform-bytes")
    {
        conform_class_conform_bytes = value;
    }
    if(value_path == "conform-class-conform-packets")
    {
        conform_class_conform_packets = value;
    }
    if(value_path == "conform-class-conform-rate")
    {
        conform_class_conform_rate = value;
    }
    if(value_path == "conform-class-exceed-bytes")
    {
        conform_class_exceed_bytes = value;
    }
    if(value_path == "conform-class-exceed-packets")
    {
        conform_class_exceed_packets = value;
    }
    if(value_path == "conform-class-exceed-rate")
    {
        conform_class_exceed_rate = value;
    }
    if(value_path == "conform-class-violate-bytes")
    {
        conform_class_violate_bytes = value;
    }
    if(value_path == "conform-class-violate-packets")
    {
        conform_class_violate_packets = value;
    }
    if(value_path == "conform-class-violate-rate")
    {
        conform_class_violate_rate = value;
    }
    if(value_path == "exceed-class-exceed-bytes")
    {
        exceed_class_exceed_bytes = value;
    }
    if(value_path == "exceed-class-exceed-packets")
    {
        exceed_class_exceed_packets = value;
    }
    if(value_path == "exceed-class-exceed-rate")
    {
        exceed_class_exceed_rate = value;
    }
    if(value_path == "exceed-class-violate-bytes")
    {
        exceed_class_violate_bytes = value;
    }
    if(value_path == "exceed-class-violate-packets")
    {
        exceed_class_violate_packets = value;
    }
    if(value_path == "exceed-class-violate-rate")
    {
        exceed_class_violate_rate = value;
    }
    if(value_path == "violate-class-violate-bytes")
    {
        violate_class_violate_bytes = value;
    }
    if(value_path == "violate-class-violate-packets")
    {
        violate_class_violate_packets = value;
    }
    if(value_path == "violate-class-violate-rate")
    {
        violate_class_violate_rate = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::WredStatsArray()
    :
    max_threshold_bytes{YType::uint64, "max-threshold-bytes"},
    max_threshold_packets{YType::uint64, "max-threshold-packets"},
    profile_title{YType::str, "profile-title"},
    random_drop_bytes{YType::uint64, "random-drop-bytes"},
    random_drop_packets{YType::uint64, "random-drop-packets"},
    red_ecn_marked_bytes{YType::uint64, "red-ecn-marked-bytes"},
    red_ecn_marked_packets{YType::uint64, "red-ecn-marked-packets"},
    red_transmit_bytes{YType::uint64, "red-transmit-bytes"},
    red_transmit_packets{YType::uint64, "red-transmit-packets"}
{
    yang_name = "wred-stats-array"; yang_parent_name = "class-stats";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::~WredStatsArray()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::has_data() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_data())
            return true;
    }
    return max_threshold_bytes.is_set
	|| max_threshold_packets.is_set
	|| profile_title.is_set
	|| random_drop_bytes.is_set
	|| random_drop_packets.is_set
	|| red_ecn_marked_bytes.is_set
	|| red_ecn_marked_packets.is_set
	|| red_transmit_bytes.is_set
	|| red_transmit_packets.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::has_operation() const
{
    for (std::size_t index=0; index<red_label.size(); index++)
    {
        if(red_label[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(max_threshold_bytes.operation)
	|| is_set(max_threshold_packets.operation)
	|| is_set(profile_title.operation)
	|| is_set(random_drop_bytes.operation)
	|| is_set(random_drop_packets.operation)
	|| is_set(red_ecn_marked_bytes.operation)
	|| is_set(red_ecn_marked_packets.operation)
	|| is_set(red_transmit_bytes.operation)
	|| is_set(red_transmit_packets.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred-stats-array";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WredStatsArray' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold_bytes.is_set || is_set(max_threshold_bytes.operation)) leaf_name_data.push_back(max_threshold_bytes.get_name_leafdata());
    if (max_threshold_packets.is_set || is_set(max_threshold_packets.operation)) leaf_name_data.push_back(max_threshold_packets.get_name_leafdata());
    if (profile_title.is_set || is_set(profile_title.operation)) leaf_name_data.push_back(profile_title.get_name_leafdata());
    if (random_drop_bytes.is_set || is_set(random_drop_bytes.operation)) leaf_name_data.push_back(random_drop_bytes.get_name_leafdata());
    if (random_drop_packets.is_set || is_set(random_drop_packets.operation)) leaf_name_data.push_back(random_drop_packets.get_name_leafdata());
    if (red_ecn_marked_bytes.is_set || is_set(red_ecn_marked_bytes.operation)) leaf_name_data.push_back(red_ecn_marked_bytes.get_name_leafdata());
    if (red_ecn_marked_packets.is_set || is_set(red_ecn_marked_packets.operation)) leaf_name_data.push_back(red_ecn_marked_packets.get_name_leafdata());
    if (red_transmit_bytes.is_set || is_set(red_transmit_bytes.operation)) leaf_name_data.push_back(red_transmit_bytes.get_name_leafdata());
    if (red_transmit_packets.is_set || is_set(red_transmit_packets.operation)) leaf_name_data.push_back(red_transmit_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "red-label")
    {
        for(auto const & c : red_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel>();
        c->parent = this;
        red_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : red_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-threshold-bytes")
    {
        max_threshold_bytes = value;
    }
    if(value_path == "max-threshold-packets")
    {
        max_threshold_packets = value;
    }
    if(value_path == "profile-title")
    {
        profile_title = value;
    }
    if(value_path == "random-drop-bytes")
    {
        random_drop_bytes = value;
    }
    if(value_path == "random-drop-packets")
    {
        random_drop_packets = value;
    }
    if(value_path == "red-ecn-marked-bytes")
    {
        red_ecn_marked_bytes = value;
    }
    if(value_path == "red-ecn-marked-packets")
    {
        red_ecn_marked_packets = value;
    }
    if(value_path == "red-transmit-bytes")
    {
        red_transmit_bytes = value;
    }
    if(value_path == "red-transmit-packets")
    {
        red_transmit_packets = value;
    }
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::RedLabel()
    :
    value_{YType::uint8, "value"},
    wred_type{YType::enumeration, "wred-type"}
{
    yang_name = "red-label"; yang_parent_name = "wred-stats-array";
}

Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::~RedLabel()
{
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::has_data() const
{
    return value_.is_set
	|| wred_type.is_set;
}

bool Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| is_set(wred_type.operation);
}

std::string Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-label";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedLabel' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (wred_type.is_set || is_set(wred_type.operation)) leaf_name_data.push_back(wred_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "wred-type")
    {
        wred_type = value;
    }
}

Qos::NvSatellite::NvSatelliteStatus::NvSatelliteStatus()
    :
    nv_satellite_ids(std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds>())
{
    nv_satellite_ids->parent = this;

    yang_name = "nv-satellite-status"; yang_parent_name = "nv-satellite";
}

Qos::NvSatellite::NvSatelliteStatus::~NvSatelliteStatus()
{
}

bool Qos::NvSatellite::NvSatelliteStatus::has_data() const
{
    return (nv_satellite_ids !=  nullptr && nv_satellite_ids->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatus::has_operation() const
{
    return is_set(operation)
	|| (nv_satellite_ids !=  nullptr && nv_satellite_ids->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite-status";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-qos-ma-oper:qos/nv-satellite/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nv-satellite-ids")
    {
        if(nv_satellite_ids == nullptr)
        {
            nv_satellite_ids = std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds>();
        }
        return nv_satellite_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nv_satellite_ids != nullptr)
    {
        children["nv-satellite-ids"] = nv_satellite_ids;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatus::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteIds()
{
    yang_name = "nv-satellite-ids"; yang_parent_name = "nv-satellite-status";
}

Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::~NvSatelliteIds()
{
}

bool Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::has_data() const
{
    for (std::size_t index=0; index<nv_satellite_id.size(); index++)
    {
        if(nv_satellite_id[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::has_operation() const
{
    for (std::size_t index=0; index<nv_satellite_id.size(); index++)
    {
        if(nv_satellite_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite-ids";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-qos-ma-oper:qos/nv-satellite/nv-satellite-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nv-satellite-id")
    {
        for(auto const & c : nv_satellite_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId>();
        c->parent = this;
        nv_satellite_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nv_satellite_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteId()
    :
    satellite_id{YType::int32, "satellite-id"}
    	,
    nv_satellite_interfaces(std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces>())
{
    nv_satellite_interfaces->parent = this;

    yang_name = "nv-satellite-id"; yang_parent_name = "nv-satellite-ids";
}

Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::~NvSatelliteId()
{
}

bool Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::has_data() const
{
    return satellite_id.is_set
	|| (nv_satellite_interfaces !=  nullptr && nv_satellite_interfaces->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::has_operation() const
{
    return is_set(operation)
	|| is_set(satellite_id.operation)
	|| (nv_satellite_interfaces !=  nullptr && nv_satellite_interfaces->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite-id" <<"[satellite-id='" <<satellite_id <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-qos-ma-oper:qos/nv-satellite/nv-satellite-status/nv-satellite-ids/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nv-satellite-interfaces")
    {
        if(nv_satellite_interfaces == nullptr)
        {
            nv_satellite_interfaces = std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces>();
        }
        return nv_satellite_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nv_satellite_interfaces != nullptr)
    {
        children["nv-satellite-interfaces"] = nv_satellite_interfaces;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
}

Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterfaces()
{
    yang_name = "nv-satellite-interfaces"; yang_parent_name = "nv-satellite-id";
}

Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::~NvSatelliteInterfaces()
{
}

bool Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::has_data() const
{
    for (std::size_t index=0; index<nv_satellite_interface.size(); index++)
    {
        if(nv_satellite_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::has_operation() const
{
    for (std::size_t index=0; index<nv_satellite_interface.size(); index++)
    {
        if(nv_satellite_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite-interfaces";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NvSatelliteInterfaces' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nv-satellite-interface")
    {
        for(auto const & c : nv_satellite_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface>();
        c->parent = this;
        nv_satellite_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nv_satellite_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::NvSatelliteInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    input(std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input>())
	,member_interfaces(std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces>())
	,output(std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output>())
	,status(std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Status>())
{
    input->parent = this;

    member_interfaces->parent = this;

    output->parent = this;

    status->parent = this;

    yang_name = "nv-satellite-interface"; yang_parent_name = "nv-satellite-interfaces";
}

Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::~NvSatelliteInterface()
{
}

bool Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::has_data() const
{
    return interface_name.is_set
	|| (input !=  nullptr && input->has_data())
	|| (member_interfaces !=  nullptr && member_interfaces->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (input !=  nullptr && input->has_operation())
	|| (member_interfaces !=  nullptr && member_interfaces->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NvSatelliteInterface' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input>();
        }
        return input;
    }

    if(child_yang_name == "member-interfaces")
    {
        if(member_interfaces == nullptr)
        {
            member_interfaces = std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces>();
        }
        return member_interfaces;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output>();
        }
        return output;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(member_interfaces != nullptr)
    {
        children["member-interfaces"] = member_interfaces;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterfaces()
{
    yang_name = "member-interfaces"; yang_parent_name = "nv-satellite-interface";
}

Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::~MemberInterfaces()
{
}

bool Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::has_data() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::has_operation() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interfaces";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberInterfaces' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-interface")
    {
        for(auto const & c : member_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface>();
        c->parent = this;
        member_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::MemberInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    input(std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input>())
	,output(std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member-interfaces";
}

Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::~MemberInterface()
{
}

bool Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::has_data() const
{
    return interface_name.is_set
	|| (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberInterface' in Cisco_IOS_XR_qos_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Qos::NvSatellite::NvSatelliteStatus::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}


}
}

