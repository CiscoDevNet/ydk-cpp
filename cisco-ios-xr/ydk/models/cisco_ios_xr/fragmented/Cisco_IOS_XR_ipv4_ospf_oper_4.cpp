
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_4.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_5.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{
    yang_name = "nsr-thd-sched"; yang_parent_name = "issu-stats";
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::~NsrThdSched()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_bad_pulses_rx.operation)
	|| is_set(nsr_events_in_q.operation)
	|| is_set(nsr_events_rx.operation)
	|| is_set(nsr_events_tx.operation)
	|| is_set(nsr_good_pulses_rx.operation)
	|| is_set(nsr_pulse_quant.operation)
	|| is_set(nsr_pulse_tx_fails.operation)
	|| is_set(nsr_pulses_tx.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-sched";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrThdSched' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.operation)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.operation)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.operation)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.operation)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.operation)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.operation)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.operation)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.operation)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(std::move(c));
        children[segment_path] = nsr_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::get_children()
{
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{
    yang_name = "nsr-pri"; yang_parent_name = "nsr-thd-sched";
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_sched_enq_fails.operation)
	|| is_set(nsr_sched_evs_deqd.operation)
	|| is_set(nsr_sched_evs_in_q.operation)
	|| is_set(nsr_sched_evs_qd.operation)
	|| is_set(nsr_sched_max_evs.operation)
	|| is_set(nsr_sched_peak_q_len.operation)
	|| is_set(nsr_sched_pri.operation)
	|| is_set(nsr_sched_quant.operation)
	|| is_set(nsr_sched_remain_quant.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPri' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.operation)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.operation)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.operation)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.operation)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.operation)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.operation)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.operation)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.operation)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.operation)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrRtrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{
    yang_name = "nsr-rtr-thd-sched"; yang_parent_name = "issu-stats";
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_bad_pulses_rx.operation)
	|| is_set(nsr_events_in_q.operation)
	|| is_set(nsr_events_rx.operation)
	|| is_set(nsr_events_tx.operation)
	|| is_set(nsr_good_pulses_rx.operation)
	|| is_set(nsr_pulse_quant.operation)
	|| is_set(nsr_pulse_tx_fails.operation)
	|| is_set(nsr_pulses_tx.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrRtrThdSched' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.operation)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.operation)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.operation)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.operation)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.operation)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.operation)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.operation)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.operation)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(std::move(c));
        children[segment_path] = nsr_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::get_children()
{
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{
    yang_name = "nsr-pri"; yang_parent_name = "nsr-rtr-thd-sched";
}

Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_sched_enq_fails.operation)
	|| is_set(nsr_sched_evs_deqd.operation)
	|| is_set(nsr_sched_evs_in_q.operation)
	|| is_set(nsr_sched_evs_qd.operation)
	|| is_set(nsr_sched_max_evs.operation)
	|| is_set(nsr_sched_peak_q_len.operation)
	|| is_set(nsr_sched_pri.operation)
	|| is_set(nsr_sched_quant.operation)
	|| is_set(nsr_sched_remain_quant.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPri' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.operation)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.operation)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.operation)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.operation)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.operation)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.operation)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.operation)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.operation)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.operation)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::RibThreadStats()
    :
    internalwq(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq>())
{
    internalwq->parent = this;
    children["internalwq"] = internalwq;

    yang_name = "rib-thread-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::~RibThreadStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::has_data() const
{
    for (std::size_t index=0; index<ribqueue.size(); index++)
    {
        if(ribqueue[index]->has_data())
            return true;
    }
    return (internalwq !=  nullptr && internalwq->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::has_operation() const
{
    for (std::size_t index=0; index<ribqueue.size(); index++)
    {
        if(ribqueue[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (internalwq !=  nullptr && internalwq->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-thread-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibThreadStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "internalwq")
    {
        if(internalwq != nullptr)
        {
            children["internalwq"] = internalwq;
        }
        else
        {
            internalwq = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq>();
            internalwq->parent = this;
            children["internalwq"] = internalwq;
        }
        return children.at("internalwq");
    }

    if(child_yang_name == "ribqueue")
    {
        for(auto const & c : ribqueue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue>();
        c->parent = this;
        ribqueue.push_back(std::move(c));
        children[segment_path] = ribqueue.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::get_children()
{
    if(children.find("internalwq") == children.end())
    {
        if(internalwq != nullptr)
        {
            children["internalwq"] = internalwq;
        }
    }

    for (auto const & c : ribqueue)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::Internalwq()
    :
    priority_level{YType::str, "priority-level"},
    rib_base_clock{YType::uint64, "rib-base-clock"},
    rib_dequeue_errs{YType::uint32, "rib-dequeue-errs"},
    rib_drop_after{YType::uint32, "rib-drop-after"},
    rib_drop_before{YType::uint32, "rib-drop-before"},
    rib_drop_conn{YType::uint32, "rib-drop-conn"},
    rib_empty_batches{YType::uint32, "rib-empty-batches"},
    rib_pfx_limit_errs{YType::uint32, "rib-pfx-limit-errs"},
    rib_pkts_sent{YType::uint32, "rib-pkts-sent"},
    rib_queue_errs{YType::uint32, "rib-queue-errs"},
    rib_send_errs{YType::uint32, "rib-send-errs"},
    rib_signals{YType::uint32, "rib-signals"},
    rib_table_not_created{YType::uint32, "rib-table-not-created"},
    rib_version{YType::uint32, "rib-version"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_thread_active{YType::boolean, "wq-thread-active"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    wq_total_queued{YType::uint32, "wq-total-queued"},
    wqe_qtime{YType::uint64, "wqe-qtime"}
    	,
    rib_base_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime>())
{
    rib_base_time->parent = this;
    children["rib-base-time"] = rib_base_time;

    yang_name = "internalwq"; yang_parent_name = "rib-thread-stats";
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::~Internalwq()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::has_data() const
{
    return priority_level.is_set
	|| rib_base_clock.is_set
	|| rib_dequeue_errs.is_set
	|| rib_drop_after.is_set
	|| rib_drop_before.is_set
	|| rib_drop_conn.is_set
	|| rib_empty_batches.is_set
	|| rib_pfx_limit_errs.is_set
	|| rib_pkts_sent.is_set
	|| rib_queue_errs.is_set
	|| rib_send_errs.is_set
	|| rib_signals.is_set
	|| rib_table_not_created.is_set
	|| rib_version.is_set
	|| wq_dqtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_thread_active.is_set
	|| wq_total_dequeued.is_set
	|| wq_total_queued.is_set
	|| wqe_qtime.is_set
	|| (rib_base_time !=  nullptr && rib_base_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_level.operation)
	|| is_set(rib_base_clock.operation)
	|| is_set(rib_dequeue_errs.operation)
	|| is_set(rib_drop_after.operation)
	|| is_set(rib_drop_before.operation)
	|| is_set(rib_drop_conn.operation)
	|| is_set(rib_empty_batches.operation)
	|| is_set(rib_pfx_limit_errs.operation)
	|| is_set(rib_pkts_sent.operation)
	|| is_set(rib_queue_errs.operation)
	|| is_set(rib_send_errs.operation)
	|| is_set(rib_signals.operation)
	|| is_set(rib_table_not_created.operation)
	|| is_set(rib_version.operation)
	|| is_set(wq_dqtime.operation)
	|| is_set(wq_len_cur.operation)
	|| is_set(wq_len_max.operation)
	|| is_set(wq_thread_active.operation)
	|| is_set(wq_total_dequeued.operation)
	|| is_set(wq_total_queued.operation)
	|| is_set(wqe_qtime.operation)
	|| (rib_base_time !=  nullptr && rib_base_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internalwq";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internalwq' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_level.is_set || is_set(priority_level.operation)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (rib_base_clock.is_set || is_set(rib_base_clock.operation)) leaf_name_data.push_back(rib_base_clock.get_name_leafdata());
    if (rib_dequeue_errs.is_set || is_set(rib_dequeue_errs.operation)) leaf_name_data.push_back(rib_dequeue_errs.get_name_leafdata());
    if (rib_drop_after.is_set || is_set(rib_drop_after.operation)) leaf_name_data.push_back(rib_drop_after.get_name_leafdata());
    if (rib_drop_before.is_set || is_set(rib_drop_before.operation)) leaf_name_data.push_back(rib_drop_before.get_name_leafdata());
    if (rib_drop_conn.is_set || is_set(rib_drop_conn.operation)) leaf_name_data.push_back(rib_drop_conn.get_name_leafdata());
    if (rib_empty_batches.is_set || is_set(rib_empty_batches.operation)) leaf_name_data.push_back(rib_empty_batches.get_name_leafdata());
    if (rib_pfx_limit_errs.is_set || is_set(rib_pfx_limit_errs.operation)) leaf_name_data.push_back(rib_pfx_limit_errs.get_name_leafdata());
    if (rib_pkts_sent.is_set || is_set(rib_pkts_sent.operation)) leaf_name_data.push_back(rib_pkts_sent.get_name_leafdata());
    if (rib_queue_errs.is_set || is_set(rib_queue_errs.operation)) leaf_name_data.push_back(rib_queue_errs.get_name_leafdata());
    if (rib_send_errs.is_set || is_set(rib_send_errs.operation)) leaf_name_data.push_back(rib_send_errs.get_name_leafdata());
    if (rib_signals.is_set || is_set(rib_signals.operation)) leaf_name_data.push_back(rib_signals.get_name_leafdata());
    if (rib_table_not_created.is_set || is_set(rib_table_not_created.operation)) leaf_name_data.push_back(rib_table_not_created.get_name_leafdata());
    if (rib_version.is_set || is_set(rib_version.operation)) leaf_name_data.push_back(rib_version.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.operation)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.operation)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.operation)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_thread_active.is_set || is_set(wq_thread_active.operation)) leaf_name_data.push_back(wq_thread_active.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.operation)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (wq_total_queued.is_set || is_set(wq_total_queued.operation)) leaf_name_data.push_back(wq_total_queued.get_name_leafdata());
    if (wqe_qtime.is_set || is_set(wqe_qtime.operation)) leaf_name_data.push_back(wqe_qtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rib-base-time")
    {
        if(rib_base_time != nullptr)
        {
            children["rib-base-time"] = rib_base_time;
        }
        else
        {
            rib_base_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime>();
            rib_base_time->parent = this;
            children["rib-base-time"] = rib_base_time;
        }
        return children.at("rib-base-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::get_children()
{
    if(children.find("rib-base-time") == children.end())
    {
        if(rib_base_time != nullptr)
        {
            children["rib-base-time"] = rib_base_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-level")
    {
        priority_level = value;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock = value;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs = value;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after = value;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before = value;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn = value;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches = value;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs = value;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent = value;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs = value;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs = value;
    }
    if(value_path == "rib-signals")
    {
        rib_signals = value;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created = value;
    }
    if(value_path == "rib-version")
    {
        rib_version = value;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
    }
    if(value_path == "wq-thread-active")
    {
        wq_thread_active = value;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued = value;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::RibBaseTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "rib-base-time"; yang_parent_name = "internalwq";
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::~RibBaseTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-base-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibBaseTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::Ribqueue()
    :
    priority_level{YType::str, "priority-level"},
    rib_base_clock{YType::uint64, "rib-base-clock"},
    rib_dequeue_errs{YType::uint32, "rib-dequeue-errs"},
    rib_drop_after{YType::uint32, "rib-drop-after"},
    rib_drop_before{YType::uint32, "rib-drop-before"},
    rib_drop_conn{YType::uint32, "rib-drop-conn"},
    rib_empty_batches{YType::uint32, "rib-empty-batches"},
    rib_pfx_limit_errs{YType::uint32, "rib-pfx-limit-errs"},
    rib_pkts_sent{YType::uint32, "rib-pkts-sent"},
    rib_queue_errs{YType::uint32, "rib-queue-errs"},
    rib_send_errs{YType::uint32, "rib-send-errs"},
    rib_signals{YType::uint32, "rib-signals"},
    rib_table_not_created{YType::uint32, "rib-table-not-created"},
    rib_version{YType::uint32, "rib-version"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_thread_active{YType::boolean, "wq-thread-active"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    wq_total_queued{YType::uint32, "wq-total-queued"},
    wqe_qtime{YType::uint64, "wqe-qtime"}
    	,
    rib_base_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime>())
{
    rib_base_time->parent = this;
    children["rib-base-time"] = rib_base_time;

    yang_name = "ribqueue"; yang_parent_name = "rib-thread-stats";
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::~Ribqueue()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::has_data() const
{
    return priority_level.is_set
	|| rib_base_clock.is_set
	|| rib_dequeue_errs.is_set
	|| rib_drop_after.is_set
	|| rib_drop_before.is_set
	|| rib_drop_conn.is_set
	|| rib_empty_batches.is_set
	|| rib_pfx_limit_errs.is_set
	|| rib_pkts_sent.is_set
	|| rib_queue_errs.is_set
	|| rib_send_errs.is_set
	|| rib_signals.is_set
	|| rib_table_not_created.is_set
	|| rib_version.is_set
	|| wq_dqtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_thread_active.is_set
	|| wq_total_dequeued.is_set
	|| wq_total_queued.is_set
	|| wqe_qtime.is_set
	|| (rib_base_time !=  nullptr && rib_base_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_level.operation)
	|| is_set(rib_base_clock.operation)
	|| is_set(rib_dequeue_errs.operation)
	|| is_set(rib_drop_after.operation)
	|| is_set(rib_drop_before.operation)
	|| is_set(rib_drop_conn.operation)
	|| is_set(rib_empty_batches.operation)
	|| is_set(rib_pfx_limit_errs.operation)
	|| is_set(rib_pkts_sent.operation)
	|| is_set(rib_queue_errs.operation)
	|| is_set(rib_send_errs.operation)
	|| is_set(rib_signals.operation)
	|| is_set(rib_table_not_created.operation)
	|| is_set(rib_version.operation)
	|| is_set(wq_dqtime.operation)
	|| is_set(wq_len_cur.operation)
	|| is_set(wq_len_max.operation)
	|| is_set(wq_thread_active.operation)
	|| is_set(wq_total_dequeued.operation)
	|| is_set(wq_total_queued.operation)
	|| is_set(wqe_qtime.operation)
	|| (rib_base_time !=  nullptr && rib_base_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribqueue";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ribqueue' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_level.is_set || is_set(priority_level.operation)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (rib_base_clock.is_set || is_set(rib_base_clock.operation)) leaf_name_data.push_back(rib_base_clock.get_name_leafdata());
    if (rib_dequeue_errs.is_set || is_set(rib_dequeue_errs.operation)) leaf_name_data.push_back(rib_dequeue_errs.get_name_leafdata());
    if (rib_drop_after.is_set || is_set(rib_drop_after.operation)) leaf_name_data.push_back(rib_drop_after.get_name_leafdata());
    if (rib_drop_before.is_set || is_set(rib_drop_before.operation)) leaf_name_data.push_back(rib_drop_before.get_name_leafdata());
    if (rib_drop_conn.is_set || is_set(rib_drop_conn.operation)) leaf_name_data.push_back(rib_drop_conn.get_name_leafdata());
    if (rib_empty_batches.is_set || is_set(rib_empty_batches.operation)) leaf_name_data.push_back(rib_empty_batches.get_name_leafdata());
    if (rib_pfx_limit_errs.is_set || is_set(rib_pfx_limit_errs.operation)) leaf_name_data.push_back(rib_pfx_limit_errs.get_name_leafdata());
    if (rib_pkts_sent.is_set || is_set(rib_pkts_sent.operation)) leaf_name_data.push_back(rib_pkts_sent.get_name_leafdata());
    if (rib_queue_errs.is_set || is_set(rib_queue_errs.operation)) leaf_name_data.push_back(rib_queue_errs.get_name_leafdata());
    if (rib_send_errs.is_set || is_set(rib_send_errs.operation)) leaf_name_data.push_back(rib_send_errs.get_name_leafdata());
    if (rib_signals.is_set || is_set(rib_signals.operation)) leaf_name_data.push_back(rib_signals.get_name_leafdata());
    if (rib_table_not_created.is_set || is_set(rib_table_not_created.operation)) leaf_name_data.push_back(rib_table_not_created.get_name_leafdata());
    if (rib_version.is_set || is_set(rib_version.operation)) leaf_name_data.push_back(rib_version.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.operation)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.operation)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.operation)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_thread_active.is_set || is_set(wq_thread_active.operation)) leaf_name_data.push_back(wq_thread_active.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.operation)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (wq_total_queued.is_set || is_set(wq_total_queued.operation)) leaf_name_data.push_back(wq_total_queued.get_name_leafdata());
    if (wqe_qtime.is_set || is_set(wqe_qtime.operation)) leaf_name_data.push_back(wqe_qtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rib-base-time")
    {
        if(rib_base_time != nullptr)
        {
            children["rib-base-time"] = rib_base_time;
        }
        else
        {
            rib_base_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime>();
            rib_base_time->parent = this;
            children["rib-base-time"] = rib_base_time;
        }
        return children.at("rib-base-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::get_children()
{
    if(children.find("rib-base-time") == children.end())
    {
        if(rib_base_time != nullptr)
        {
            children["rib-base-time"] = rib_base_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-level")
    {
        priority_level = value;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock = value;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs = value;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after = value;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before = value;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn = value;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches = value;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs = value;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent = value;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs = value;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs = value;
    }
    if(value_path == "rib-signals")
    {
        rib_signals = value;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created = value;
    }
    if(value_path == "rib-version")
    {
        rib_version = value;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
    }
    if(value_path == "wq-thread-active")
    {
        wq_thread_active = value;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued = value;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::RibBaseTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "rib-base-time"; yang_parent_name = "ribqueue";
}

Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::~RibBaseTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-base-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibBaseTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NsrPlStats()
{
    yang_name = "nsr-pl-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::~NsrPlStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::has_data() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::has_operation() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPlStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ncd-pri")
    {
        for(auto const & c : ncd_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri>();
        c->parent = this;
        ncd_pri.push_back(std::move(c));
        children[segment_path] = ncd_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::get_children()
{
    for (auto const & c : ncd_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NcdPri()
    :
    num_recv{YType::uint64, "num-recv"},
    num_sent{YType::uint64, "num-sent"}
{
    yang_name = "ncd-pri"; yang_parent_name = "nsr-pl-stats";
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::~NcdPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::has_data() const
{
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_data())
            return true;
    }
    for (auto const & leaf : num_recv.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : num_sent.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::has_operation() const
{
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_operation())
            return true;
    }
    for (auto const & leaf : num_recv.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : num_sent.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(num_recv.operation)
	|| is_set(num_sent.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncd-pri";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NcdPri' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto num_recv_name_datas = num_recv.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), num_recv_name_datas.begin(), num_recv_name_datas.end());
    auto num_sent_name_datas = num_sent.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), num_sent_name_datas.begin(), num_sent_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "num-recv-drop")
    {
        for(auto const & c : num_recv_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop>();
        c->parent = this;
        num_recv_drop.push_back(std::move(c));
        children[segment_path] = num_recv_drop.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "num-sent-drop")
    {
        for(auto const & c : num_sent_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop>();
        c->parent = this;
        num_sent_drop.push_back(std::move(c));
        children[segment_path] = num_sent_drop.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::get_children()
{
    for (auto const & c : num_recv_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : num_sent_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-recv")
    {
        num_recv.append(value);
    }
    if(value_path == "num-sent")
    {
        num_sent.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NumSentDrop()
    :
    nsr_pl_send_drop_array{YType::uint32, "nsr-pl-send-drop-array"}
{
    yang_name = "num-sent-drop"; yang_parent_name = "ncd-pri";
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::~NumSentDrop()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_data() const
{
    for (auto const & leaf : nsr_pl_send_drop_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_operation() const
{
    for (auto const & leaf : nsr_pl_send_drop_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_pl_send_drop_array.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent-drop";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumSentDrop' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto nsr_pl_send_drop_array_name_datas = nsr_pl_send_drop_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nsr_pl_send_drop_array_name_datas.begin(), nsr_pl_send_drop_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-pl-send-drop-array")
    {
        nsr_pl_send_drop_array.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NumRecvDrop()
    :
    nsr_pl_recv_drop_array{YType::uint32, "nsr-pl-recv-drop-array"}
{
    yang_name = "num-recv-drop"; yang_parent_name = "ncd-pri";
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::~NumRecvDrop()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_data() const
{
    for (auto const & leaf : nsr_pl_recv_drop_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_operation() const
{
    for (auto const & leaf : nsr_pl_recv_drop_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_pl_recv_drop_array.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv-drop";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumRecvDrop' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto nsr_pl_recv_drop_array_name_datas = nsr_pl_recv_drop_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nsr_pl_recv_drop_array_name_datas.begin(), nsr_pl_recv_drop_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-pl-recv-drop-array")
    {
        nsr_pl_recv_drop_array.append(value);
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrStats()
    :
    nsr_conn_to_active_attempts{YType::uint64, "nsr-conn-to-active-attempts"},
    nsr_conn_to_active_closes{YType::uint64, "nsr-conn-to-active-closes"},
    nsr_conn_to_active_errors{YType::uint64, "nsr-conn-to-active-errors"},
    nsr_conn_to_active_fails{YType::uint64, "nsr-conn-to-active-fails"},
    nsr_conn_to_active_opens{YType::uint64, "nsr-conn-to-active-opens"},
    nsr_fsm_state{YType::int32, "nsr-fsm-state"},
    nsr_intf_seq_no{YType::uint32, "nsr-intf-seq-no"},
    nsr_lsa_init_sync_pend_count{YType::int32, "nsr-lsa-init-sync-pend-count"},
    nsr_lsa_qad_mdata_count{YType::uint32, "nsr-lsa-qad-mdata-count"},
    nsr_lsa_qad_qid{YType::uint32, "nsr-lsa-qad-qid"},
    nsr_mtu{YType::uint32, "nsr-mtu"},
    nsr_nbr_init_sync_pend_count{YType::int32, "nsr-nbr-init-sync-pend-count"},
    nsr_nbr_qad_mdata_count{YType::uint32, "nsr-nbr-qad-mdata-count"},
    nsr_nbr_qad_qid{YType::uint32, "nsr-nbr-qad-qid"},
    nsr_nbr_seq_no{YType::uint32, "nsr-nbr-seq-no"},
    nsr_nodeid{YType::uint32, "nsr-nodeid"},
    nsr_peer_nodeid{YType::uint32, "nsr-peer-nodeid"},
    nsr_peer_version{YType::uint32, "nsr-peer-version"},
    nsr_rev{YType::int32, "nsr-rev"},
    nsr_tmr_quant{YType::int32, "nsr-tmr-quant"},
    nsr_version{YType::uint32, "nsr-version"}
    	,
    nsr_rtr_thd_sched(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched>())
	,nsr_thd_sched(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched>())
{
    nsr_rtr_thd_sched->parent = this;
    children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;

    nsr_thd_sched->parent = this;
    children["nsr-thd-sched"] = nsr_thd_sched;

    yang_name = "nsr-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::~NsrStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::has_data() const
{
    return nsr_conn_to_active_attempts.is_set
	|| nsr_conn_to_active_closes.is_set
	|| nsr_conn_to_active_errors.is_set
	|| nsr_conn_to_active_fails.is_set
	|| nsr_conn_to_active_opens.is_set
	|| nsr_fsm_state.is_set
	|| nsr_intf_seq_no.is_set
	|| nsr_lsa_init_sync_pend_count.is_set
	|| nsr_lsa_qad_mdata_count.is_set
	|| nsr_lsa_qad_qid.is_set
	|| nsr_mtu.is_set
	|| nsr_nbr_init_sync_pend_count.is_set
	|| nsr_nbr_qad_mdata_count.is_set
	|| nsr_nbr_qad_qid.is_set
	|| nsr_nbr_seq_no.is_set
	|| nsr_nodeid.is_set
	|| nsr_peer_nodeid.is_set
	|| nsr_peer_version.is_set
	|| nsr_rev.is_set
	|| nsr_tmr_quant.is_set
	|| nsr_version.is_set
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_data())
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_conn_to_active_attempts.operation)
	|| is_set(nsr_conn_to_active_closes.operation)
	|| is_set(nsr_conn_to_active_errors.operation)
	|| is_set(nsr_conn_to_active_fails.operation)
	|| is_set(nsr_conn_to_active_opens.operation)
	|| is_set(nsr_fsm_state.operation)
	|| is_set(nsr_intf_seq_no.operation)
	|| is_set(nsr_lsa_init_sync_pend_count.operation)
	|| is_set(nsr_lsa_qad_mdata_count.operation)
	|| is_set(nsr_lsa_qad_qid.operation)
	|| is_set(nsr_mtu.operation)
	|| is_set(nsr_nbr_init_sync_pend_count.operation)
	|| is_set(nsr_nbr_qad_mdata_count.operation)
	|| is_set(nsr_nbr_qad_qid.operation)
	|| is_set(nsr_nbr_seq_no.operation)
	|| is_set(nsr_nodeid.operation)
	|| is_set(nsr_peer_nodeid.operation)
	|| is_set(nsr_peer_version.operation)
	|| is_set(nsr_rev.operation)
	|| is_set(nsr_tmr_quant.operation)
	|| is_set(nsr_version.operation)
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_operation())
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_conn_to_active_attempts.is_set || is_set(nsr_conn_to_active_attempts.operation)) leaf_name_data.push_back(nsr_conn_to_active_attempts.get_name_leafdata());
    if (nsr_conn_to_active_closes.is_set || is_set(nsr_conn_to_active_closes.operation)) leaf_name_data.push_back(nsr_conn_to_active_closes.get_name_leafdata());
    if (nsr_conn_to_active_errors.is_set || is_set(nsr_conn_to_active_errors.operation)) leaf_name_data.push_back(nsr_conn_to_active_errors.get_name_leafdata());
    if (nsr_conn_to_active_fails.is_set || is_set(nsr_conn_to_active_fails.operation)) leaf_name_data.push_back(nsr_conn_to_active_fails.get_name_leafdata());
    if (nsr_conn_to_active_opens.is_set || is_set(nsr_conn_to_active_opens.operation)) leaf_name_data.push_back(nsr_conn_to_active_opens.get_name_leafdata());
    if (nsr_fsm_state.is_set || is_set(nsr_fsm_state.operation)) leaf_name_data.push_back(nsr_fsm_state.get_name_leafdata());
    if (nsr_intf_seq_no.is_set || is_set(nsr_intf_seq_no.operation)) leaf_name_data.push_back(nsr_intf_seq_no.get_name_leafdata());
    if (nsr_lsa_init_sync_pend_count.is_set || is_set(nsr_lsa_init_sync_pend_count.operation)) leaf_name_data.push_back(nsr_lsa_init_sync_pend_count.get_name_leafdata());
    if (nsr_lsa_qad_mdata_count.is_set || is_set(nsr_lsa_qad_mdata_count.operation)) leaf_name_data.push_back(nsr_lsa_qad_mdata_count.get_name_leafdata());
    if (nsr_lsa_qad_qid.is_set || is_set(nsr_lsa_qad_qid.operation)) leaf_name_data.push_back(nsr_lsa_qad_qid.get_name_leafdata());
    if (nsr_mtu.is_set || is_set(nsr_mtu.operation)) leaf_name_data.push_back(nsr_mtu.get_name_leafdata());
    if (nsr_nbr_init_sync_pend_count.is_set || is_set(nsr_nbr_init_sync_pend_count.operation)) leaf_name_data.push_back(nsr_nbr_init_sync_pend_count.get_name_leafdata());
    if (nsr_nbr_qad_mdata_count.is_set || is_set(nsr_nbr_qad_mdata_count.operation)) leaf_name_data.push_back(nsr_nbr_qad_mdata_count.get_name_leafdata());
    if (nsr_nbr_qad_qid.is_set || is_set(nsr_nbr_qad_qid.operation)) leaf_name_data.push_back(nsr_nbr_qad_qid.get_name_leafdata());
    if (nsr_nbr_seq_no.is_set || is_set(nsr_nbr_seq_no.operation)) leaf_name_data.push_back(nsr_nbr_seq_no.get_name_leafdata());
    if (nsr_nodeid.is_set || is_set(nsr_nodeid.operation)) leaf_name_data.push_back(nsr_nodeid.get_name_leafdata());
    if (nsr_peer_nodeid.is_set || is_set(nsr_peer_nodeid.operation)) leaf_name_data.push_back(nsr_peer_nodeid.get_name_leafdata());
    if (nsr_peer_version.is_set || is_set(nsr_peer_version.operation)) leaf_name_data.push_back(nsr_peer_version.get_name_leafdata());
    if (nsr_rev.is_set || is_set(nsr_rev.operation)) leaf_name_data.push_back(nsr_rev.get_name_leafdata());
    if (nsr_tmr_quant.is_set || is_set(nsr_tmr_quant.operation)) leaf_name_data.push_back(nsr_tmr_quant.get_name_leafdata());
    if (nsr_version.is_set || is_set(nsr_version.operation)) leaf_name_data.push_back(nsr_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched != nullptr)
        {
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
        else
        {
            nsr_rtr_thd_sched = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched>();
            nsr_rtr_thd_sched->parent = this;
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
        return children.at("nsr-rtr-thd-sched");
    }

    if(child_yang_name == "nsr-thd-sched")
    {
        if(nsr_thd_sched != nullptr)
        {
            children["nsr-thd-sched"] = nsr_thd_sched;
        }
        else
        {
            nsr_thd_sched = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched>();
            nsr_thd_sched->parent = this;
            children["nsr-thd-sched"] = nsr_thd_sched;
        }
        return children.at("nsr-thd-sched");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::get_children()
{
    if(children.find("nsr-rtr-thd-sched") == children.end())
    {
        if(nsr_rtr_thd_sched != nullptr)
        {
            children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
        }
    }

    if(children.find("nsr-thd-sched") == children.end())
    {
        if(nsr_thd_sched != nullptr)
        {
            children["nsr-thd-sched"] = nsr_thd_sched;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts = value;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes = value;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors = value;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails = value;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens = value;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state = value;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no = value;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count = value;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count = value;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid = value;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu = value;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count = value;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count = value;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid = value;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no = value;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid = value;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid = value;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version = value;
    }
    if(value_path == "nsr-rev")
    {
        nsr_rev = value;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant = value;
    }
    if(value_path == "nsr-version")
    {
        nsr_version = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{
    yang_name = "nsr-thd-sched"; yang_parent_name = "nsr-stats";
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::~NsrThdSched()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_bad_pulses_rx.operation)
	|| is_set(nsr_events_in_q.operation)
	|| is_set(nsr_events_rx.operation)
	|| is_set(nsr_events_tx.operation)
	|| is_set(nsr_good_pulses_rx.operation)
	|| is_set(nsr_pulse_quant.operation)
	|| is_set(nsr_pulse_tx_fails.operation)
	|| is_set(nsr_pulses_tx.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-sched";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrThdSched' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.operation)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.operation)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.operation)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.operation)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.operation)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.operation)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.operation)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.operation)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(std::move(c));
        children[segment_path] = nsr_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::get_children()
{
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{
    yang_name = "nsr-pri"; yang_parent_name = "nsr-thd-sched";
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_sched_enq_fails.operation)
	|| is_set(nsr_sched_evs_deqd.operation)
	|| is_set(nsr_sched_evs_in_q.operation)
	|| is_set(nsr_sched_evs_qd.operation)
	|| is_set(nsr_sched_max_evs.operation)
	|| is_set(nsr_sched_peak_q_len.operation)
	|| is_set(nsr_sched_pri.operation)
	|| is_set(nsr_sched_quant.operation)
	|| is_set(nsr_sched_remain_quant.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPri' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.operation)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.operation)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.operation)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.operation)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.operation)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.operation)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.operation)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.operation)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.operation)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrRtrThdSched()
    :
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"}
{
    yang_name = "nsr-rtr-thd-sched"; yang_parent_name = "nsr-stats";
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_bad_pulses_rx.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_rx.is_set
	|| nsr_events_tx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulse_quant.is_set
	|| nsr_pulse_tx_fails.is_set
	|| nsr_pulses_tx.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nsr_bad_pulses_rx.operation)
	|| is_set(nsr_events_in_q.operation)
	|| is_set(nsr_events_rx.operation)
	|| is_set(nsr_events_tx.operation)
	|| is_set(nsr_good_pulses_rx.operation)
	|| is_set(nsr_pulse_quant.operation)
	|| is_set(nsr_pulse_tx_fails.operation)
	|| is_set(nsr_pulses_tx.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrRtrThdSched' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.operation)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.operation)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.operation)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.operation)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.operation)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.operation)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.operation)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.operation)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pri")
    {
        for(auto const & c : nsr_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(std::move(c));
        children[segment_path] = nsr_pri.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::get_children()
{
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
    }
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"}
{
    yang_name = "nsr-pri"; yang_parent_name = "nsr-rtr-thd-sched";
}

Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_data() const
{
    return nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_sched_enq_fails.operation)
	|| is_set(nsr_sched_evs_deqd.operation)
	|| is_set(nsr_sched_evs_in_q.operation)
	|| is_set(nsr_sched_evs_qd.operation)
	|| is_set(nsr_sched_max_evs.operation)
	|| is_set(nsr_sched_peak_q_len.operation)
	|| is_set(nsr_sched_pri.operation)
	|| is_set(nsr_sched_quant.operation)
	|| is_set(nsr_sched_remain_quant.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPri' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.operation)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.operation)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.operation)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.operation)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.operation)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.operation)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.operation)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.operation)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.operation)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
    }
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::FrrStats()
    :
    fs_paths{YType::uint32, "fs-paths"},
    fs_paths_eligible{YType::uint32, "fs-paths-eligible"},
    fs_paths_protected{YType::uint32, "fs-paths-protected"}
{
    yang_name = "frr-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::~FrrStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::has_data() const
{
    return fs_paths.is_set
	|| fs_paths_eligible.is_set
	|| fs_paths_protected.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::has_operation() const
{
    return is_set(operation)
	|| is_set(fs_paths.operation)
	|| is_set(fs_paths_eligible.operation)
	|| is_set(fs_paths_protected.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fs_paths.is_set || is_set(fs_paths.operation)) leaf_name_data.push_back(fs_paths.get_name_leafdata());
    if (fs_paths_eligible.is_set || is_set(fs_paths_eligible.operation)) leaf_name_data.push_back(fs_paths_eligible.get_name_leafdata());
    if (fs_paths_protected.is_set || is_set(fs_paths_protected.operation)) leaf_name_data.push_back(fs_paths_protected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fs-paths")
    {
        fs_paths = value;
    }
    if(value_path == "fs-paths-eligible")
    {
        fs_paths_eligible = value;
    }
    if(value_path == "fs-paths-protected")
    {
        fs_paths_protected = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::TeStats()
    :
    adj_changes{YType::uint32, "adj-changes"},
    adj_gets{YType::uint32, "adj-gets"},
    control_batch_reads{YType::uint32, "control-batch-reads"},
    control_batch_writes{YType::uint32, "control-batch-writes"},
    control_disconnects{YType::uint32, "control-disconnects"},
    data_trans_completes{YType::uint32, "data-trans-completes"},
    fragment_announces{YType::uint32, "fragment-announces"},
    fragment_deletes{YType::uint32, "fragment-deletes"},
    link_batch_reads{YType::uint32, "link-batch-reads"},
    link_batch_writes{YType::uint32, "link-batch-writes"},
    link_floods{YType::uint32, "link-floods"},
    link_fragment_floods{YType::uint32, "link-fragment-floods"},
    lsp_gets{YType::uint32, "lsp-gets"},
    pce_br_lkup_num_dests{YType::uint32, "pce-br-lkup-num-dests"},
    pce_br_lookup{YType::uint32, "pce-br-lookup"},
    pce_br_resp_fails{YType::uint32, "pce-br-resp-fails"},
    pce_flood{YType::uint32, "pce-flood"},
    pce_get{YType::uint32, "pce-get"},
    pce_listen{YType::uint32, "pce-listen"},
    pce_node_announce_batches{YType::uint32, "pce-node-announce-batches"},
    pce_node_delete_batches{YType::uint32, "pce-node-delete-batches"},
    pce_node_send_fails{YType::uint32, "pce-node-send-fails"},
    pce_num_node_announce{YType::uint32, "pce-num-node-announce"},
    pce_num_node_delete{YType::uint32, "pce-num-node-delete"},
    pce_stoplisten{YType::uint32, "pce-stoplisten"},
    sr_num_area_enabled{YType::uint32, "sr-num-area-enabled"},
    te_connected{YType::boolean, "te-connected"},
    te_disconnects{YType::uint32, "te-disconnects"},
    te_sr_idt_sent{YType::boolean, "te-sr-idt-sent"},
    te_sr_path_reg_idt_recvd{YType::boolean, "te-sr-path-reg-idt-recvd"},
    total_tunnels{YType::uint32, "total-tunnels"},
    tunnel_announces{YType::uint32, "tunnel-announces"}
{
    yang_name = "te-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::~TeStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::has_data() const
{
    return adj_changes.is_set
	|| adj_gets.is_set
	|| control_batch_reads.is_set
	|| control_batch_writes.is_set
	|| control_disconnects.is_set
	|| data_trans_completes.is_set
	|| fragment_announces.is_set
	|| fragment_deletes.is_set
	|| link_batch_reads.is_set
	|| link_batch_writes.is_set
	|| link_floods.is_set
	|| link_fragment_floods.is_set
	|| lsp_gets.is_set
	|| pce_br_lkup_num_dests.is_set
	|| pce_br_lookup.is_set
	|| pce_br_resp_fails.is_set
	|| pce_flood.is_set
	|| pce_get.is_set
	|| pce_listen.is_set
	|| pce_node_announce_batches.is_set
	|| pce_node_delete_batches.is_set
	|| pce_node_send_fails.is_set
	|| pce_num_node_announce.is_set
	|| pce_num_node_delete.is_set
	|| pce_stoplisten.is_set
	|| sr_num_area_enabled.is_set
	|| te_connected.is_set
	|| te_disconnects.is_set
	|| te_sr_idt_sent.is_set
	|| te_sr_path_reg_idt_recvd.is_set
	|| total_tunnels.is_set
	|| tunnel_announces.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::has_operation() const
{
    return is_set(operation)
	|| is_set(adj_changes.operation)
	|| is_set(adj_gets.operation)
	|| is_set(control_batch_reads.operation)
	|| is_set(control_batch_writes.operation)
	|| is_set(control_disconnects.operation)
	|| is_set(data_trans_completes.operation)
	|| is_set(fragment_announces.operation)
	|| is_set(fragment_deletes.operation)
	|| is_set(link_batch_reads.operation)
	|| is_set(link_batch_writes.operation)
	|| is_set(link_floods.operation)
	|| is_set(link_fragment_floods.operation)
	|| is_set(lsp_gets.operation)
	|| is_set(pce_br_lkup_num_dests.operation)
	|| is_set(pce_br_lookup.operation)
	|| is_set(pce_br_resp_fails.operation)
	|| is_set(pce_flood.operation)
	|| is_set(pce_get.operation)
	|| is_set(pce_listen.operation)
	|| is_set(pce_node_announce_batches.operation)
	|| is_set(pce_node_delete_batches.operation)
	|| is_set(pce_node_send_fails.operation)
	|| is_set(pce_num_node_announce.operation)
	|| is_set(pce_num_node_delete.operation)
	|| is_set(pce_stoplisten.operation)
	|| is_set(sr_num_area_enabled.operation)
	|| is_set(te_connected.operation)
	|| is_set(te_disconnects.operation)
	|| is_set(te_sr_idt_sent.operation)
	|| is_set(te_sr_path_reg_idt_recvd.operation)
	|| is_set(total_tunnels.operation)
	|| is_set(tunnel_announces.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_changes.is_set || is_set(adj_changes.operation)) leaf_name_data.push_back(adj_changes.get_name_leafdata());
    if (adj_gets.is_set || is_set(adj_gets.operation)) leaf_name_data.push_back(adj_gets.get_name_leafdata());
    if (control_batch_reads.is_set || is_set(control_batch_reads.operation)) leaf_name_data.push_back(control_batch_reads.get_name_leafdata());
    if (control_batch_writes.is_set || is_set(control_batch_writes.operation)) leaf_name_data.push_back(control_batch_writes.get_name_leafdata());
    if (control_disconnects.is_set || is_set(control_disconnects.operation)) leaf_name_data.push_back(control_disconnects.get_name_leafdata());
    if (data_trans_completes.is_set || is_set(data_trans_completes.operation)) leaf_name_data.push_back(data_trans_completes.get_name_leafdata());
    if (fragment_announces.is_set || is_set(fragment_announces.operation)) leaf_name_data.push_back(fragment_announces.get_name_leafdata());
    if (fragment_deletes.is_set || is_set(fragment_deletes.operation)) leaf_name_data.push_back(fragment_deletes.get_name_leafdata());
    if (link_batch_reads.is_set || is_set(link_batch_reads.operation)) leaf_name_data.push_back(link_batch_reads.get_name_leafdata());
    if (link_batch_writes.is_set || is_set(link_batch_writes.operation)) leaf_name_data.push_back(link_batch_writes.get_name_leafdata());
    if (link_floods.is_set || is_set(link_floods.operation)) leaf_name_data.push_back(link_floods.get_name_leafdata());
    if (link_fragment_floods.is_set || is_set(link_fragment_floods.operation)) leaf_name_data.push_back(link_fragment_floods.get_name_leafdata());
    if (lsp_gets.is_set || is_set(lsp_gets.operation)) leaf_name_data.push_back(lsp_gets.get_name_leafdata());
    if (pce_br_lkup_num_dests.is_set || is_set(pce_br_lkup_num_dests.operation)) leaf_name_data.push_back(pce_br_lkup_num_dests.get_name_leafdata());
    if (pce_br_lookup.is_set || is_set(pce_br_lookup.operation)) leaf_name_data.push_back(pce_br_lookup.get_name_leafdata());
    if (pce_br_resp_fails.is_set || is_set(pce_br_resp_fails.operation)) leaf_name_data.push_back(pce_br_resp_fails.get_name_leafdata());
    if (pce_flood.is_set || is_set(pce_flood.operation)) leaf_name_data.push_back(pce_flood.get_name_leafdata());
    if (pce_get.is_set || is_set(pce_get.operation)) leaf_name_data.push_back(pce_get.get_name_leafdata());
    if (pce_listen.is_set || is_set(pce_listen.operation)) leaf_name_data.push_back(pce_listen.get_name_leafdata());
    if (pce_node_announce_batches.is_set || is_set(pce_node_announce_batches.operation)) leaf_name_data.push_back(pce_node_announce_batches.get_name_leafdata());
    if (pce_node_delete_batches.is_set || is_set(pce_node_delete_batches.operation)) leaf_name_data.push_back(pce_node_delete_batches.get_name_leafdata());
    if (pce_node_send_fails.is_set || is_set(pce_node_send_fails.operation)) leaf_name_data.push_back(pce_node_send_fails.get_name_leafdata());
    if (pce_num_node_announce.is_set || is_set(pce_num_node_announce.operation)) leaf_name_data.push_back(pce_num_node_announce.get_name_leafdata());
    if (pce_num_node_delete.is_set || is_set(pce_num_node_delete.operation)) leaf_name_data.push_back(pce_num_node_delete.get_name_leafdata());
    if (pce_stoplisten.is_set || is_set(pce_stoplisten.operation)) leaf_name_data.push_back(pce_stoplisten.get_name_leafdata());
    if (sr_num_area_enabled.is_set || is_set(sr_num_area_enabled.operation)) leaf_name_data.push_back(sr_num_area_enabled.get_name_leafdata());
    if (te_connected.is_set || is_set(te_connected.operation)) leaf_name_data.push_back(te_connected.get_name_leafdata());
    if (te_disconnects.is_set || is_set(te_disconnects.operation)) leaf_name_data.push_back(te_disconnects.get_name_leafdata());
    if (te_sr_idt_sent.is_set || is_set(te_sr_idt_sent.operation)) leaf_name_data.push_back(te_sr_idt_sent.get_name_leafdata());
    if (te_sr_path_reg_idt_recvd.is_set || is_set(te_sr_path_reg_idt_recvd.operation)) leaf_name_data.push_back(te_sr_path_reg_idt_recvd.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (tunnel_announces.is_set || is_set(tunnel_announces.operation)) leaf_name_data.push_back(tunnel_announces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::TeStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adj-changes")
    {
        adj_changes = value;
    }
    if(value_path == "adj-gets")
    {
        adj_gets = value;
    }
    if(value_path == "control-batch-reads")
    {
        control_batch_reads = value;
    }
    if(value_path == "control-batch-writes")
    {
        control_batch_writes = value;
    }
    if(value_path == "control-disconnects")
    {
        control_disconnects = value;
    }
    if(value_path == "data-trans-completes")
    {
        data_trans_completes = value;
    }
    if(value_path == "fragment-announces")
    {
        fragment_announces = value;
    }
    if(value_path == "fragment-deletes")
    {
        fragment_deletes = value;
    }
    if(value_path == "link-batch-reads")
    {
        link_batch_reads = value;
    }
    if(value_path == "link-batch-writes")
    {
        link_batch_writes = value;
    }
    if(value_path == "link-floods")
    {
        link_floods = value;
    }
    if(value_path == "link-fragment-floods")
    {
        link_fragment_floods = value;
    }
    if(value_path == "lsp-gets")
    {
        lsp_gets = value;
    }
    if(value_path == "pce-br-lkup-num-dests")
    {
        pce_br_lkup_num_dests = value;
    }
    if(value_path == "pce-br-lookup")
    {
        pce_br_lookup = value;
    }
    if(value_path == "pce-br-resp-fails")
    {
        pce_br_resp_fails = value;
    }
    if(value_path == "pce-flood")
    {
        pce_flood = value;
    }
    if(value_path == "pce-get")
    {
        pce_get = value;
    }
    if(value_path == "pce-listen")
    {
        pce_listen = value;
    }
    if(value_path == "pce-node-announce-batches")
    {
        pce_node_announce_batches = value;
    }
    if(value_path == "pce-node-delete-batches")
    {
        pce_node_delete_batches = value;
    }
    if(value_path == "pce-node-send-fails")
    {
        pce_node_send_fails = value;
    }
    if(value_path == "pce-num-node-announce")
    {
        pce_num_node_announce = value;
    }
    if(value_path == "pce-num-node-delete")
    {
        pce_num_node_delete = value;
    }
    if(value_path == "pce-stoplisten")
    {
        pce_stoplisten = value;
    }
    if(value_path == "sr-num-area-enabled")
    {
        sr_num_area_enabled = value;
    }
    if(value_path == "te-connected")
    {
        te_connected = value;
    }
    if(value_path == "te-disconnects")
    {
        te_disconnects = value;
    }
    if(value_path == "te-sr-idt-sent")
    {
        te_sr_idt_sent = value;
    }
    if(value_path == "te-sr-path-reg-idt-recvd")
    {
        te_sr_path_reg_idt_recvd = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
    if(value_path == "tunnel-announces")
    {
        tunnel_announces = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::ProtocolStats()
    :
    checksumerr{YType::uint32, "checksumerr"},
    h_input_ack{YType::uint32, "h-input-ack"},
    h_input_dbdes{YType::uint32, "h-input-dbdes"},
    h_input_lsupd{YType::uint32, "h-input-lsupd"},
    h_input_req{YType::uint32, "h-input-req"},
    input_ack{YType::uint32, "input-ack"},
    input_ack_lsa{YType::uint32, "input-ack-lsa"},
    input_autherr{YType::uint32, "input-autherr"},
    input_dbdes{YType::uint32, "input-dbdes"},
    input_dbdes_lsa{YType::uint32, "input-dbdes-lsa"},
    input_hello{YType::uint32, "input-hello"},
    input_lsupd{YType::uint32, "input-lsupd"},
    input_lsupd_lsa{YType::uint32, "input-lsupd-lsa"},
    input_req{YType::uint32, "input-req"},
    input_req_lsa{YType::uint32, "input-req-lsa"},
    inputs{YType::uint32, "inputs"},
    output_ack{YType::uint32, "output-ack"},
    output_ack_lsa{YType::uint32, "output-ack-lsa"},
    output_autherr{YType::uint32, "output-autherr"},
    output_dbdes{YType::uint32, "output-dbdes"},
    output_dbdes_lsa{YType::uint32, "output-dbdes-lsa"},
    output_hello{YType::uint32, "output-hello"},
    output_lsupd{YType::uint32, "output-lsupd"},
    output_lsupd_lsa{YType::uint32, "output-lsupd-lsa"},
    output_req{YType::uint32, "output-req"},
    output_req_lsa{YType::uint32, "output-req-lsa"},
    outputs{YType::uint32, "outputs"}
{
    yang_name = "protocol-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::~ProtocolStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::has_data() const
{
    return checksumerr.is_set
	|| h_input_ack.is_set
	|| h_input_dbdes.is_set
	|| h_input_lsupd.is_set
	|| h_input_req.is_set
	|| input_ack.is_set
	|| input_ack_lsa.is_set
	|| input_autherr.is_set
	|| input_dbdes.is_set
	|| input_dbdes_lsa.is_set
	|| input_hello.is_set
	|| input_lsupd.is_set
	|| input_lsupd_lsa.is_set
	|| input_req.is_set
	|| input_req_lsa.is_set
	|| inputs.is_set
	|| output_ack.is_set
	|| output_ack_lsa.is_set
	|| output_autherr.is_set
	|| output_dbdes.is_set
	|| output_dbdes_lsa.is_set
	|| output_hello.is_set
	|| output_lsupd.is_set
	|| output_lsupd_lsa.is_set
	|| output_req.is_set
	|| output_req_lsa.is_set
	|| outputs.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::has_operation() const
{
    return is_set(operation)
	|| is_set(checksumerr.operation)
	|| is_set(h_input_ack.operation)
	|| is_set(h_input_dbdes.operation)
	|| is_set(h_input_lsupd.operation)
	|| is_set(h_input_req.operation)
	|| is_set(input_ack.operation)
	|| is_set(input_ack_lsa.operation)
	|| is_set(input_autherr.operation)
	|| is_set(input_dbdes.operation)
	|| is_set(input_dbdes_lsa.operation)
	|| is_set(input_hello.operation)
	|| is_set(input_lsupd.operation)
	|| is_set(input_lsupd_lsa.operation)
	|| is_set(input_req.operation)
	|| is_set(input_req_lsa.operation)
	|| is_set(inputs.operation)
	|| is_set(output_ack.operation)
	|| is_set(output_ack_lsa.operation)
	|| is_set(output_autherr.operation)
	|| is_set(output_dbdes.operation)
	|| is_set(output_dbdes_lsa.operation)
	|| is_set(output_hello.operation)
	|| is_set(output_lsupd.operation)
	|| is_set(output_lsupd_lsa.operation)
	|| is_set(output_req.operation)
	|| is_set(output_req_lsa.operation)
	|| is_set(outputs.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checksumerr.is_set || is_set(checksumerr.operation)) leaf_name_data.push_back(checksumerr.get_name_leafdata());
    if (h_input_ack.is_set || is_set(h_input_ack.operation)) leaf_name_data.push_back(h_input_ack.get_name_leafdata());
    if (h_input_dbdes.is_set || is_set(h_input_dbdes.operation)) leaf_name_data.push_back(h_input_dbdes.get_name_leafdata());
    if (h_input_lsupd.is_set || is_set(h_input_lsupd.operation)) leaf_name_data.push_back(h_input_lsupd.get_name_leafdata());
    if (h_input_req.is_set || is_set(h_input_req.operation)) leaf_name_data.push_back(h_input_req.get_name_leafdata());
    if (input_ack.is_set || is_set(input_ack.operation)) leaf_name_data.push_back(input_ack.get_name_leafdata());
    if (input_ack_lsa.is_set || is_set(input_ack_lsa.operation)) leaf_name_data.push_back(input_ack_lsa.get_name_leafdata());
    if (input_autherr.is_set || is_set(input_autherr.operation)) leaf_name_data.push_back(input_autherr.get_name_leafdata());
    if (input_dbdes.is_set || is_set(input_dbdes.operation)) leaf_name_data.push_back(input_dbdes.get_name_leafdata());
    if (input_dbdes_lsa.is_set || is_set(input_dbdes_lsa.operation)) leaf_name_data.push_back(input_dbdes_lsa.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.operation)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_lsupd.is_set || is_set(input_lsupd.operation)) leaf_name_data.push_back(input_lsupd.get_name_leafdata());
    if (input_lsupd_lsa.is_set || is_set(input_lsupd_lsa.operation)) leaf_name_data.push_back(input_lsupd_lsa.get_name_leafdata());
    if (input_req.is_set || is_set(input_req.operation)) leaf_name_data.push_back(input_req.get_name_leafdata());
    if (input_req_lsa.is_set || is_set(input_req_lsa.operation)) leaf_name_data.push_back(input_req_lsa.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.operation)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (output_ack.is_set || is_set(output_ack.operation)) leaf_name_data.push_back(output_ack.get_name_leafdata());
    if (output_ack_lsa.is_set || is_set(output_ack_lsa.operation)) leaf_name_data.push_back(output_ack_lsa.get_name_leafdata());
    if (output_autherr.is_set || is_set(output_autherr.operation)) leaf_name_data.push_back(output_autherr.get_name_leafdata());
    if (output_dbdes.is_set || is_set(output_dbdes.operation)) leaf_name_data.push_back(output_dbdes.get_name_leafdata());
    if (output_dbdes_lsa.is_set || is_set(output_dbdes_lsa.operation)) leaf_name_data.push_back(output_dbdes_lsa.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.operation)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_lsupd.is_set || is_set(output_lsupd.operation)) leaf_name_data.push_back(output_lsupd.get_name_leafdata());
    if (output_lsupd_lsa.is_set || is_set(output_lsupd_lsa.operation)) leaf_name_data.push_back(output_lsupd_lsa.get_name_leafdata());
    if (output_req.is_set || is_set(output_req.operation)) leaf_name_data.push_back(output_req.get_name_leafdata());
    if (output_req_lsa.is_set || is_set(output_req_lsa.operation)) leaf_name_data.push_back(output_req_lsa.get_name_leafdata());
    if (outputs.is_set || is_set(outputs.operation)) leaf_name_data.push_back(outputs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "checksumerr")
    {
        checksumerr = value;
    }
    if(value_path == "h-input-ack")
    {
        h_input_ack = value;
    }
    if(value_path == "h-input-dbdes")
    {
        h_input_dbdes = value;
    }
    if(value_path == "h-input-lsupd")
    {
        h_input_lsupd = value;
    }
    if(value_path == "h-input-req")
    {
        h_input_req = value;
    }
    if(value_path == "input-ack")
    {
        input_ack = value;
    }
    if(value_path == "input-ack-lsa")
    {
        input_ack_lsa = value;
    }
    if(value_path == "input-autherr")
    {
        input_autherr = value;
    }
    if(value_path == "input-dbdes")
    {
        input_dbdes = value;
    }
    if(value_path == "input-dbdes-lsa")
    {
        input_dbdes_lsa = value;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
    }
    if(value_path == "input-lsupd")
    {
        input_lsupd = value;
    }
    if(value_path == "input-lsupd-lsa")
    {
        input_lsupd_lsa = value;
    }
    if(value_path == "input-req")
    {
        input_req = value;
    }
    if(value_path == "input-req-lsa")
    {
        input_req_lsa = value;
    }
    if(value_path == "inputs")
    {
        inputs = value;
    }
    if(value_path == "output-ack")
    {
        output_ack = value;
    }
    if(value_path == "output-ack-lsa")
    {
        output_ack_lsa = value;
    }
    if(value_path == "output-autherr")
    {
        output_autherr = value;
    }
    if(value_path == "output-dbdes")
    {
        output_dbdes = value;
    }
    if(value_path == "output-dbdes-lsa")
    {
        output_dbdes_lsa = value;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
    }
    if(value_path == "output-lsupd")
    {
        output_lsupd = value;
    }
    if(value_path == "output-lsupd-lsa")
    {
        output_lsupd_lsa = value;
    }
    if(value_path == "output-req")
    {
        output_req = value;
    }
    if(value_path == "output-req-lsa")
    {
        output_req_lsa = value;
    }
    if(value_path == "outputs")
    {
        outputs = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::RawIoStats()
    :
    disconnects{YType::uint32, "disconnects"},
    in_bytes_rcv{YType::uint32, "in-bytes-rcv"},
    in_no_mem_discarded{YType::uint32, "in-no-mem-discarded"},
    in_raw_event{YType::uint32, "in-raw-event"},
    in_rcv{YType::uint32, "in-rcv"},
    in_short_msg_discarded{YType::uint32, "in-short-msg-discarded"},
    in_standby_discarded{YType::uint32, "in-standby-discarded"},
    nsr_not_ready_discarded{YType::uint32, "nsr-not-ready-discarded"},
    out_bytes_sent{YType::uint32, "out-bytes-sent"},
    out_ipv4_hdr_err_discarded{YType::uint32, "out-ipv4-hdr-err-discarded"},
    out_no_conn_discarded{YType::uint32, "out-no-conn-discarded"},
    out_no_pak_discarded{YType::uint32, "out-no-pak-discarded"},
    out_null_src_discarded{YType::uint32, "out-null-src-discarded"},
    out_send_pak_err_discarded{YType::uint32, "out-send-pak-err-discarded"},
    out_sent{YType::uint32, "out-sent"},
    raw_connected{YType::boolean, "raw-connected"},
    sl_raw_connected{YType::boolean, "sl-raw-connected"}
{
    yang_name = "raw-io-stats"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::~RawIoStats()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::has_data() const
{
    return disconnects.is_set
	|| in_bytes_rcv.is_set
	|| in_no_mem_discarded.is_set
	|| in_raw_event.is_set
	|| in_rcv.is_set
	|| in_short_msg_discarded.is_set
	|| in_standby_discarded.is_set
	|| nsr_not_ready_discarded.is_set
	|| out_bytes_sent.is_set
	|| out_ipv4_hdr_err_discarded.is_set
	|| out_no_conn_discarded.is_set
	|| out_no_pak_discarded.is_set
	|| out_null_src_discarded.is_set
	|| out_send_pak_err_discarded.is_set
	|| out_sent.is_set
	|| raw_connected.is_set
	|| sl_raw_connected.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::has_operation() const
{
    return is_set(operation)
	|| is_set(disconnects.operation)
	|| is_set(in_bytes_rcv.operation)
	|| is_set(in_no_mem_discarded.operation)
	|| is_set(in_raw_event.operation)
	|| is_set(in_rcv.operation)
	|| is_set(in_short_msg_discarded.operation)
	|| is_set(in_standby_discarded.operation)
	|| is_set(nsr_not_ready_discarded.operation)
	|| is_set(out_bytes_sent.operation)
	|| is_set(out_ipv4_hdr_err_discarded.operation)
	|| is_set(out_no_conn_discarded.operation)
	|| is_set(out_no_pak_discarded.operation)
	|| is_set(out_null_src_discarded.operation)
	|| is_set(out_send_pak_err_discarded.operation)
	|| is_set(out_sent.operation)
	|| is_set(raw_connected.operation)
	|| is_set(sl_raw_connected.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raw-io-stats";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RawIoStats' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disconnects.is_set || is_set(disconnects.operation)) leaf_name_data.push_back(disconnects.get_name_leafdata());
    if (in_bytes_rcv.is_set || is_set(in_bytes_rcv.operation)) leaf_name_data.push_back(in_bytes_rcv.get_name_leafdata());
    if (in_no_mem_discarded.is_set || is_set(in_no_mem_discarded.operation)) leaf_name_data.push_back(in_no_mem_discarded.get_name_leafdata());
    if (in_raw_event.is_set || is_set(in_raw_event.operation)) leaf_name_data.push_back(in_raw_event.get_name_leafdata());
    if (in_rcv.is_set || is_set(in_rcv.operation)) leaf_name_data.push_back(in_rcv.get_name_leafdata());
    if (in_short_msg_discarded.is_set || is_set(in_short_msg_discarded.operation)) leaf_name_data.push_back(in_short_msg_discarded.get_name_leafdata());
    if (in_standby_discarded.is_set || is_set(in_standby_discarded.operation)) leaf_name_data.push_back(in_standby_discarded.get_name_leafdata());
    if (nsr_not_ready_discarded.is_set || is_set(nsr_not_ready_discarded.operation)) leaf_name_data.push_back(nsr_not_ready_discarded.get_name_leafdata());
    if (out_bytes_sent.is_set || is_set(out_bytes_sent.operation)) leaf_name_data.push_back(out_bytes_sent.get_name_leafdata());
    if (out_ipv4_hdr_err_discarded.is_set || is_set(out_ipv4_hdr_err_discarded.operation)) leaf_name_data.push_back(out_ipv4_hdr_err_discarded.get_name_leafdata());
    if (out_no_conn_discarded.is_set || is_set(out_no_conn_discarded.operation)) leaf_name_data.push_back(out_no_conn_discarded.get_name_leafdata());
    if (out_no_pak_discarded.is_set || is_set(out_no_pak_discarded.operation)) leaf_name_data.push_back(out_no_pak_discarded.get_name_leafdata());
    if (out_null_src_discarded.is_set || is_set(out_null_src_discarded.operation)) leaf_name_data.push_back(out_null_src_discarded.get_name_leafdata());
    if (out_send_pak_err_discarded.is_set || is_set(out_send_pak_err_discarded.operation)) leaf_name_data.push_back(out_send_pak_err_discarded.get_name_leafdata());
    if (out_sent.is_set || is_set(out_sent.operation)) leaf_name_data.push_back(out_sent.get_name_leafdata());
    if (raw_connected.is_set || is_set(raw_connected.operation)) leaf_name_data.push_back(raw_connected.get_name_leafdata());
    if (sl_raw_connected.is_set || is_set(sl_raw_connected.operation)) leaf_name_data.push_back(sl_raw_connected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disconnects")
    {
        disconnects = value;
    }
    if(value_path == "in-bytes-rcv")
    {
        in_bytes_rcv = value;
    }
    if(value_path == "in-no-mem-discarded")
    {
        in_no_mem_discarded = value;
    }
    if(value_path == "in-raw-event")
    {
        in_raw_event = value;
    }
    if(value_path == "in-rcv")
    {
        in_rcv = value;
    }
    if(value_path == "in-short-msg-discarded")
    {
        in_short_msg_discarded = value;
    }
    if(value_path == "in-standby-discarded")
    {
        in_standby_discarded = value;
    }
    if(value_path == "nsr-not-ready-discarded")
    {
        nsr_not_ready_discarded = value;
    }
    if(value_path == "out-bytes-sent")
    {
        out_bytes_sent = value;
    }
    if(value_path == "out-ipv4-hdr-err-discarded")
    {
        out_ipv4_hdr_err_discarded = value;
    }
    if(value_path == "out-no-conn-discarded")
    {
        out_no_conn_discarded = value;
    }
    if(value_path == "out-no-pak-discarded")
    {
        out_no_pak_discarded = value;
    }
    if(value_path == "out-null-src-discarded")
    {
        out_null_src_discarded = value;
    }
    if(value_path == "out-send-pak-err-discarded")
    {
        out_send_pak_err_discarded = value;
    }
    if(value_path == "out-sent")
    {
        out_sent = value;
    }
    if(value_path == "raw-connected")
    {
        raw_connected = value;
    }
    if(value_path == "sl-raw-connected")
    {
        sl_raw_connected = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntries()
{
    yang_name = "interface-stats-entries"; yang_parent_name = "statistics";
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatsEntries' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-stats-entry")
    {
        for(auto const & c : interface_stats_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(std::move(c));
        children[segment_path] = interface_stats_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::get_children()
{
    for (auto const & c : interface_stats_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{
    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries";
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| handle.is_set
	|| if_name_str.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(handle.operation)
	|| is_set(if_name_str.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatsEntry' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.operation)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.operation)) leaf_name_data.push_back(if_name_str.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "if-entry")
    {
        for(auto const & c : if_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(std::move(c));
        children[segment_path] = if_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children()
{
    for (auto const & c : if_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "handle")
    {
        handle = value;
    }
    if(value_path == "if-name-str")
    {
        if_name_str = value;
    }
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"},
    if_stat{YType::uint32, "if-stat"},
    madj_intf{YType::boolean, "madj-intf"}
{
    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry";
}

Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
{
    for (auto const & leaf : if_stat.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return area_id.is_set
	|| area_id_str.is_set
	|| madj_intf.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
{
    for (auto const & leaf : if_stat.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(area_id_str.operation)
	|| is_set(if_stat.operation)
	|| is_set(madj_intf.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfEntry' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.operation)) leaf_name_data.push_back(area_id_str.get_name_leafdata());
    if (madj_intf.is_set || is_set(madj_intf.operation)) leaf_name_data.push_back(madj_intf.get_name_leafdata());

    auto if_stat_name_datas = if_stat.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), if_stat_name_datas.begin(), if_stat_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "area-id-str")
    {
        area_id_str = value;
    }
    if(value_path == "if-stat")
    {
        if_stat.append(value);
    }
    if(value_path == "madj-intf")
    {
        madj_intf = value;
    }
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::AdjacencyInformation()
    :
    neighbor_details(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails>())
	,neighbors(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors>())
	,requests(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests>())
	,retransmissions(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions>())
{
    neighbor_details->parent = this;
    children["neighbor-details"] = neighbor_details;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    requests->parent = this;
    children["requests"] = requests;

    retransmissions->parent = this;
    children["retransmissions"] = retransmissions;

    yang_name = "adjacency-information"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::~AdjacencyInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::has_data() const
{
    return (neighbor_details !=  nullptr && neighbor_details->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (requests !=  nullptr && requests->has_data())
	|| (retransmissions !=  nullptr && retransmissions->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::has_operation() const
{
    return is_set(operation)
	|| (neighbor_details !=  nullptr && neighbor_details->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (requests !=  nullptr && requests->has_operation())
	|| (retransmissions !=  nullptr && retransmissions->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-information";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-details")
    {
        if(neighbor_details != nullptr)
        {
            children["neighbor-details"] = neighbor_details;
        }
        else
        {
            neighbor_details = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails>();
            neighbor_details->parent = this;
            children["neighbor-details"] = neighbor_details;
        }
        return children.at("neighbor-details");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "requests")
    {
        if(requests != nullptr)
        {
            children["requests"] = requests;
        }
        else
        {
            requests = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests>();
            requests->parent = this;
            children["requests"] = requests;
        }
        return children.at("requests");
    }

    if(child_yang_name == "retransmissions")
    {
        if(retransmissions != nullptr)
        {
            children["retransmissions"] = retransmissions;
        }
        else
        {
            retransmissions = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions>();
            retransmissions->parent = this;
            children["retransmissions"] = retransmissions;
        }
        return children.at("retransmissions");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::get_children()
{
    if(children.find("neighbor-details") == children.end())
    {
        if(neighbor_details != nullptr)
        {
            children["neighbor-details"] = neighbor_details;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("requests") == children.end())
    {
        if(requests != nullptr)
        {
            children["requests"] = requests;
        }
    }

    if(children.find("retransmissions") == children.end())
    {
        if(retransmissions != nullptr)
        {
            children["retransmissions"] = retransmissions;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "adjacency-information";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::Neighbor()
    :
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;
    children["neighbor-bfd-information"] = neighbor_bfd_information;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::has_data() const
{
    return dr_bdr_state.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_id.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_madj_interface.is_set
	|| neighbor_state.is_set
	|| neighbor_up_time.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(dr_bdr_state.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_address_xr.operation)
	|| is_set(neighbor_dead_timer.operation)
	|| is_set(neighbor_dr_priority.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_interface_name.operation)
	|| is_set(neighbor_madj_interface.operation)
	|| is_set(neighbor_state.operation)
	|| is_set(neighbor_up_time.operation)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.operation)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.operation)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.operation)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.operation)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.operation)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.operation)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.operation)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.operation)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information != nullptr)
        {
            children["neighbor-bfd-information"] = neighbor_bfd_information;
        }
        else
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation>();
            neighbor_bfd_information->parent = this;
            children["neighbor-bfd-information"] = neighbor_bfd_information;
        }
        return children.at("neighbor-bfd-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::get_children()
{
    if(children.find("neighbor-bfd-information") == children.end())
    {
        if(neighbor_bfd_information != nullptr)
        {
            children["neighbor-bfd-information"] = neighbor_bfd_information;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
    }
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{
    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(bfd_status_flag.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBfdInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.operation)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
    }
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Requests()
{
    yang_name = "requests"; yang_parent_name = "adjacency-information";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::~Requests()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Requests' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request>();
        c->parent = this;
        request.push_back(std::move(c));
        children[segment_path] = request.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::get_children()
{
    for (auto const & c : request)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    request_interface_name{YType::str, "request-interface-name"},
    request_neighbor_address{YType::str, "request-neighbor-address"},
    request_neighbor_id{YType::str, "request-neighbor-id"}
{
    yang_name = "request"; yang_parent_name = "requests";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::~Request()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| request_interface_name.is_set
	|| request_neighbor_address.is_set
	|| request_neighbor_id.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(request_interface_name.operation)
	|| is_set(request_neighbor_address.operation)
	|| is_set(request_neighbor_id.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (request_interface_name.is_set || is_set(request_interface_name.operation)) leaf_name_data.push_back(request_interface_name.get_name_leafdata());
    if (request_neighbor_address.is_set || is_set(request_neighbor_address.operation)) leaf_name_data.push_back(request_neighbor_address.get_name_leafdata());
    if (request_neighbor_id.is_set || is_set(request_neighbor_id.operation)) leaf_name_data.push_back(request_neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_>();
        c->parent = this;
        request.push_back(std::move(c));
        children[segment_path] = request.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::get_children()
{
    for (auto const & c : request)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name = value;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address = value;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id = value;
    }
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::Request_()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "request"; yang_parent_name = "request";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::~Request_()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request_' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.operation)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.operation)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmissions()
{
    yang_name = "retransmissions"; yang_parent_name = "adjacency-information";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::~Retransmissions()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::has_data() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::has_operation() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissions";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmissions' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "retransmission")
    {
        for(auto const & c : retransmission)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission>();
        c->parent = this;
        retransmission.push_back(std::move(c));
        children[segment_path] = retransmission.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::get_children()
{
    for (auto const & c : retransmission)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::Retransmission()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    retransmission_count{YType::uint32, "retransmission-count"},
    retransmission_interface_name{YType::str, "retransmission-interface-name"},
    retransmission_neighbor_id{YType::str, "retransmission-neighbor-id"},
    retransmission_neighbor_ip_address{YType::str, "retransmission-neighbor-ip-address"},
    retransmission_timer{YType::uint32, "retransmission-timer"}
{
    yang_name = "retransmission"; yang_parent_name = "retransmissions";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::~Retransmission()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::has_data() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| retransmission_count.is_set
	|| retransmission_interface_name.is_set
	|| retransmission_neighbor_id.is_set
	|| retransmission_neighbor_ip_address.is_set
	|| retransmission_timer.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::has_operation() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(retransmission_count.operation)
	|| is_set(retransmission_interface_name.operation)
	|| is_set(retransmission_neighbor_id.operation)
	|| is_set(retransmission_neighbor_ip_address.operation)
	|| is_set(retransmission_timer.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmission' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (retransmission_count.is_set || is_set(retransmission_count.operation)) leaf_name_data.push_back(retransmission_count.get_name_leafdata());
    if (retransmission_interface_name.is_set || is_set(retransmission_interface_name.operation)) leaf_name_data.push_back(retransmission_interface_name.get_name_leafdata());
    if (retransmission_neighbor_id.is_set || is_set(retransmission_neighbor_id.operation)) leaf_name_data.push_back(retransmission_neighbor_id.get_name_leafdata());
    if (retransmission_neighbor_ip_address.is_set || is_set(retransmission_neighbor_ip_address.operation)) leaf_name_data.push_back(retransmission_neighbor_ip_address.get_name_leafdata());
    if (retransmission_timer.is_set || is_set(retransmission_timer.operation)) leaf_name_data.push_back(retransmission_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "retransmission-area-db")
    {
        for(auto const & c : retransmission_area_db)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb>();
        c->parent = this;
        retransmission_area_db.push_back(std::move(c));
        children[segment_path] = retransmission_area_db.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "retransmission-asdb")
    {
        for(auto const & c : retransmission_asdb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb>();
        c->parent = this;
        retransmission_asdb.push_back(std::move(c));
        children[segment_path] = retransmission_asdb.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::get_children()
{
    for (auto const & c : retransmission_area_db)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : retransmission_asdb)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count = value;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name = value;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id = value;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address = value;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer = value;
    }
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::RetransmissionAreaDb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "retransmission-area-db"; yang_parent_name = "retransmission";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::~RetransmissionAreaDb()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-area-db";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionAreaDb' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.operation)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.operation)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::RetransmissionAsdb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "retransmission-asdb"; yang_parent_name = "retransmission";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::~RetransmissionAsdb()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-asdb";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionAsdb' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.operation)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.operation)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetails()
{
    yang_name = "neighbor-details"; yang_parent_name = "adjacency-information";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::~NeighborDetails()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::has_data() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-details";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborDetails' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-detail")
    {
        for(auto const & c : neighbor_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail>();
        c->parent = this;
        neighbor_detail.push_back(std::move(c));
        children[segment_path] = neighbor_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::get_children()
{
    for (auto const & c : neighbor_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborDetail()
    :
    adjacency_sid_label{YType::uint32, "adjacency-sid-label"},
    adjacency_sid_protected{YType::boolean, "adjacency-sid-protected"},
    adjacency_sid_unprotected_label{YType::uint32, "adjacency-sid-unprotected-label"},
    interface_name{YType::str, "interface-name"},
    interface_type{YType::enumeration, "interface-type"},
    last_oob_time{YType::uint32, "last-oob-time"},
    lfa_interface{YType::str, "lfa-interface"},
    lfa_neighbor_id{YType::str, "lfa-neighbor-id"},
    lfa_neighbor_revision{YType::uint32, "lfa-neighbor-revision"},
    lfa_next_hop{YType::str, "lfa-next-hop"},
    neighbor_ack_list_count{YType::uint32, "neighbor-ack-list-count"},
    neighbor_ack_list_high_watermark{YType::uint32, "neighbor-ack-list-high-watermark"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_area_id{YType::str, "neighbor-area-id"},
    neighbor_backup_designated_router_address{YType::str, "neighbor-backup-designated-router-address"},
    neighbor_cost{YType::uint16, "neighbor-cost"},
    neighbor_designated_router_address{YType::str, "neighbor-designated-router-address"},
    neighbor_filter{YType::boolean, "neighbor-filter"},
    neighbor_lls_option{YType::uint16, "neighbor-lls-option"},
    neighbor_option{YType::uint8, "neighbor-option"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    nsf_router_state{YType::enumeration, "nsf-router-state"},
    oob_resynchronization{YType::boolean, "oob-resynchronization"},
    pending_events{YType::uint16, "pending-events"},
    poll_interval{YType::uint32, "poll-interval"},
    state_change_count{YType::uint16, "state-change-count"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation>())
	,neighbor_retransmission_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>())
	,neighbor_summary(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary>())
{
    neighbor_bfd_information->parent = this;
    children["neighbor-bfd-information"] = neighbor_bfd_information;

    neighbor_retransmission_information->parent = this;
    children["neighbor-retransmission-information"] = neighbor_retransmission_information;

    neighbor_summary->parent = this;
    children["neighbor-summary"] = neighbor_summary;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-details";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::~NeighborDetail()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_data() const
{
    return adjacency_sid_label.is_set
	|| adjacency_sid_protected.is_set
	|| adjacency_sid_unprotected_label.is_set
	|| interface_name.is_set
	|| interface_type.is_set
	|| last_oob_time.is_set
	|| lfa_interface.is_set
	|| lfa_neighbor_id.is_set
	|| lfa_neighbor_revision.is_set
	|| lfa_next_hop.is_set
	|| neighbor_ack_list_count.is_set
	|| neighbor_ack_list_high_watermark.is_set
	|| neighbor_address.is_set
	|| neighbor_area_id.is_set
	|| neighbor_backup_designated_router_address.is_set
	|| neighbor_cost.is_set
	|| neighbor_designated_router_address.is_set
	|| neighbor_filter.is_set
	|| neighbor_lls_option.is_set
	|| neighbor_option.is_set
	|| next_poll_interval.is_set
	|| nsf_router_state.is_set
	|| oob_resynchronization.is_set
	|| pending_events.is_set
	|| poll_interval.is_set
	|| state_change_count.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_data())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_sid_label.operation)
	|| is_set(adjacency_sid_protected.operation)
	|| is_set(adjacency_sid_unprotected_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_type.operation)
	|| is_set(last_oob_time.operation)
	|| is_set(lfa_interface.operation)
	|| is_set(lfa_neighbor_id.operation)
	|| is_set(lfa_neighbor_revision.operation)
	|| is_set(lfa_next_hop.operation)
	|| is_set(neighbor_ack_list_count.operation)
	|| is_set(neighbor_ack_list_high_watermark.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_area_id.operation)
	|| is_set(neighbor_backup_designated_router_address.operation)
	|| is_set(neighbor_cost.operation)
	|| is_set(neighbor_designated_router_address.operation)
	|| is_set(neighbor_filter.operation)
	|| is_set(neighbor_lls_option.operation)
	|| is_set(neighbor_option.operation)
	|| is_set(next_poll_interval.operation)
	|| is_set(nsf_router_state.operation)
	|| is_set(oob_resynchronization.operation)
	|| is_set(pending_events.operation)
	|| is_set(poll_interval.operation)
	|| is_set(state_change_count.operation)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_operation())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborDetail' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_label.is_set || is_set(adjacency_sid_label.operation)) leaf_name_data.push_back(adjacency_sid_label.get_name_leafdata());
    if (adjacency_sid_protected.is_set || is_set(adjacency_sid_protected.operation)) leaf_name_data.push_back(adjacency_sid_protected.get_name_leafdata());
    if (adjacency_sid_unprotected_label.is_set || is_set(adjacency_sid_unprotected_label.operation)) leaf_name_data.push_back(adjacency_sid_unprotected_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (last_oob_time.is_set || is_set(last_oob_time.operation)) leaf_name_data.push_back(last_oob_time.get_name_leafdata());
    if (lfa_interface.is_set || is_set(lfa_interface.operation)) leaf_name_data.push_back(lfa_interface.get_name_leafdata());
    if (lfa_neighbor_id.is_set || is_set(lfa_neighbor_id.operation)) leaf_name_data.push_back(lfa_neighbor_id.get_name_leafdata());
    if (lfa_neighbor_revision.is_set || is_set(lfa_neighbor_revision.operation)) leaf_name_data.push_back(lfa_neighbor_revision.get_name_leafdata());
    if (lfa_next_hop.is_set || is_set(lfa_next_hop.operation)) leaf_name_data.push_back(lfa_next_hop.get_name_leafdata());
    if (neighbor_ack_list_count.is_set || is_set(neighbor_ack_list_count.operation)) leaf_name_data.push_back(neighbor_ack_list_count.get_name_leafdata());
    if (neighbor_ack_list_high_watermark.is_set || is_set(neighbor_ack_list_high_watermark.operation)) leaf_name_data.push_back(neighbor_ack_list_high_watermark.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_area_id.is_set || is_set(neighbor_area_id.operation)) leaf_name_data.push_back(neighbor_area_id.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.operation)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.operation)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.operation)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.operation)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (neighbor_lls_option.is_set || is_set(neighbor_lls_option.operation)) leaf_name_data.push_back(neighbor_lls_option.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.operation)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.operation)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (nsf_router_state.is_set || is_set(nsf_router_state.operation)) leaf_name_data.push_back(nsf_router_state.get_name_leafdata());
    if (oob_resynchronization.is_set || is_set(oob_resynchronization.operation)) leaf_name_data.push_back(oob_resynchronization.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.operation)) leaf_name_data.push_back(pending_events.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.operation)) leaf_name_data.push_back(state_change_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information != nullptr)
        {
            children["neighbor-bfd-information"] = neighbor_bfd_information;
        }
        else
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation>();
            neighbor_bfd_information->parent = this;
            children["neighbor-bfd-information"] = neighbor_bfd_information;
        }
        return children.at("neighbor-bfd-information");
    }

    if(child_yang_name == "neighbor-retransmission-information")
    {
        if(neighbor_retransmission_information != nullptr)
        {
            children["neighbor-retransmission-information"] = neighbor_retransmission_information;
        }
        else
        {
            neighbor_retransmission_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>();
            neighbor_retransmission_information->parent = this;
            children["neighbor-retransmission-information"] = neighbor_retransmission_information;
        }
        return children.at("neighbor-retransmission-information");
    }

    if(child_yang_name == "neighbor-summary")
    {
        if(neighbor_summary != nullptr)
        {
            children["neighbor-summary"] = neighbor_summary;
        }
        else
        {
            neighbor_summary = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary>();
            neighbor_summary->parent = this;
            children["neighbor-summary"] = neighbor_summary;
        }
        return children.at("neighbor-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_children()
{
    if(children.find("neighbor-bfd-information") == children.end())
    {
        if(neighbor_bfd_information != nullptr)
        {
            children["neighbor-bfd-information"] = neighbor_bfd_information;
        }
    }

    if(children.find("neighbor-retransmission-information") == children.end())
    {
        if(neighbor_retransmission_information != nullptr)
        {
            children["neighbor-retransmission-information"] = neighbor_retransmission_information;
        }
    }

    if(children.find("neighbor-summary") == children.end())
    {
        if(neighbor_summary != nullptr)
        {
            children["neighbor-summary"] = neighbor_summary;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label = value;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected = value;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time = value;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface = value;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id = value;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision = value;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop = value;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count = value;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id = value;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option = value;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state = value;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization = value;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
    }
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborSummary()
    :
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;
    children["neighbor-bfd-information"] = neighbor_bfd_information;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-detail";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::~NeighborSummary()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_data() const
{
    return dr_bdr_state.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_id.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_madj_interface.is_set
	|| neighbor_state.is_set
	|| neighbor_up_time.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(dr_bdr_state.operation)
	|| is_set(neighbor_address_xr.operation)
	|| is_set(neighbor_dead_timer.operation)
	|| is_set(neighbor_dr_priority.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_interface_name.operation)
	|| is_set(neighbor_madj_interface.operation)
	|| is_set(neighbor_state.operation)
	|| is_set(neighbor_up_time.operation)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborSummary' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.operation)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.operation)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.operation)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.operation)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.operation)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.operation)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.operation)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.operation)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information != nullptr)
        {
            children["neighbor-bfd-information"] = neighbor_bfd_information;
        }
        else
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>();
            neighbor_bfd_information->parent = this;
            children["neighbor-bfd-information"] = neighbor_bfd_information;
        }
        return children.at("neighbor-bfd-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_children()
{
    if(children.find("neighbor-bfd-information") == children.end())
    {
        if(neighbor_bfd_information != nullptr)
        {
            children["neighbor-bfd-information"] = neighbor_bfd_information;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
    }
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{
    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-summary";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(bfd_status_flag.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBfdInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.operation)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
    }
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{
    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-detail";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(bfd_status_flag.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBfdInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.operation)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
    }
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::NeighborRetransmissionInformation()
    :
    area_first_flood_information{YType::uint32, "area-first-flood-information"},
    area_first_flood_information_index{YType::uint32, "area-first-flood-information-index"},
    area_flooding_index{YType::uint32, "area-flooding-index"},
    area_next_flood_information{YType::uint32, "area-next-flood-information"},
    area_next_flood_information_index{YType::uint32, "area-next-flood-information-index"},
    as_first_flood_information{YType::uint32, "as-first-flood-information"},
    as_first_flood_information_index{YType::uint32, "as-first-flood-information-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    as_next_flood_information{YType::uint32, "as-next-flood-information"},
    as_next_flood_information_index{YType::uint32, "as-next-flood-information-index"},
    dbd_retransmission_count{YType::uint32, "dbd-retransmission-count"},
    dbd_retransmission_total_count{YType::uint32, "dbd-retransmission-total-count"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    neighbor_retransmission_count{YType::uint32, "neighbor-retransmission-count"},
    number_of_retransmissions{YType::uint32, "number-of-retransmissions"}
{
    yang_name = "neighbor-retransmission-information"; yang_parent_name = "neighbor-detail";
}

Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::~NeighborRetransmissionInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_data() const
{
    return area_first_flood_information.is_set
	|| area_first_flood_information_index.is_set
	|| area_flooding_index.is_set
	|| area_next_flood_information.is_set
	|| area_next_flood_information_index.is_set
	|| as_first_flood_information.is_set
	|| as_first_flood_information_index.is_set
	|| as_flood_index.is_set
	|| as_next_flood_information.is_set
	|| as_next_flood_information_index.is_set
	|| dbd_retransmission_count.is_set
	|| dbd_retransmission_total_count.is_set
	|| last_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| lsa_retransmission_timer.is_set
	|| maximum_retransmission_length.is_set
	|| maximum_retransmission_time.is_set
	|| neighbor_retransmission_count.is_set
	|| number_of_retransmissions.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(area_first_flood_information.operation)
	|| is_set(area_first_flood_information_index.operation)
	|| is_set(area_flooding_index.operation)
	|| is_set(area_next_flood_information.operation)
	|| is_set(area_next_flood_information_index.operation)
	|| is_set(as_first_flood_information.operation)
	|| is_set(as_first_flood_information_index.operation)
	|| is_set(as_flood_index.operation)
	|| is_set(as_next_flood_information.operation)
	|| is_set(as_next_flood_information_index.operation)
	|| is_set(dbd_retransmission_count.operation)
	|| is_set(dbd_retransmission_total_count.operation)
	|| is_set(last_retransmission_length.operation)
	|| is_set(last_retransmission_time.operation)
	|| is_set(lsa_retransmission_timer.operation)
	|| is_set(maximum_retransmission_length.operation)
	|| is_set(maximum_retransmission_time.operation)
	|| is_set(neighbor_retransmission_count.operation)
	|| is_set(number_of_retransmissions.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission-information";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborRetransmissionInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_first_flood_information.is_set || is_set(area_first_flood_information.operation)) leaf_name_data.push_back(area_first_flood_information.get_name_leafdata());
    if (area_first_flood_information_index.is_set || is_set(area_first_flood_information_index.operation)) leaf_name_data.push_back(area_first_flood_information_index.get_name_leafdata());
    if (area_flooding_index.is_set || is_set(area_flooding_index.operation)) leaf_name_data.push_back(area_flooding_index.get_name_leafdata());
    if (area_next_flood_information.is_set || is_set(area_next_flood_information.operation)) leaf_name_data.push_back(area_next_flood_information.get_name_leafdata());
    if (area_next_flood_information_index.is_set || is_set(area_next_flood_information_index.operation)) leaf_name_data.push_back(area_next_flood_information_index.get_name_leafdata());
    if (as_first_flood_information.is_set || is_set(as_first_flood_information.operation)) leaf_name_data.push_back(as_first_flood_information.get_name_leafdata());
    if (as_first_flood_information_index.is_set || is_set(as_first_flood_information_index.operation)) leaf_name_data.push_back(as_first_flood_information_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.operation)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (as_next_flood_information.is_set || is_set(as_next_flood_information.operation)) leaf_name_data.push_back(as_next_flood_information.get_name_leafdata());
    if (as_next_flood_information_index.is_set || is_set(as_next_flood_information_index.operation)) leaf_name_data.push_back(as_next_flood_information_index.get_name_leafdata());
    if (dbd_retransmission_count.is_set || is_set(dbd_retransmission_count.operation)) leaf_name_data.push_back(dbd_retransmission_count.get_name_leafdata());
    if (dbd_retransmission_total_count.is_set || is_set(dbd_retransmission_total_count.operation)) leaf_name_data.push_back(dbd_retransmission_total_count.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.operation)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.operation)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.operation)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.operation)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.operation)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (neighbor_retransmission_count.is_set || is_set(neighbor_retransmission_count.operation)) leaf_name_data.push_back(neighbor_retransmission_count.get_name_leafdata());
    if (number_of_retransmissions.is_set || is_set(number_of_retransmissions.operation)) leaf_name_data.push_back(number_of_retransmissions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information = value;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index = value;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index = value;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information = value;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index = value;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information = value;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index = value;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information = value;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index = value;
    }
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count = value;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count = value;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count = value;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteInformation()
    :
    backup_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes>())
	,connected_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes>())
	,external_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes>())
	,local_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes>())
	,multicast_intact_backup_routes(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes>())
	,multicast_intact_route_table(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable>())
	,route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas>())
	,route_table(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable>())
	,summary_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation>())
{
    backup_routes->parent = this;
    children["backup-routes"] = backup_routes;

    connected_routes->parent = this;
    children["connected-routes"] = connected_routes;

    external_routes->parent = this;
    children["external-routes"] = external_routes;

    local_routes->parent = this;
    children["local-routes"] = local_routes;

    multicast_intact_backup_routes->parent = this;
    children["multicast-intact-backup-routes"] = multicast_intact_backup_routes;

    multicast_intact_route_table->parent = this;
    children["multicast-intact-route-table"] = multicast_intact_route_table;

    route_areas->parent = this;
    children["route-areas"] = route_areas;

    route_table->parent = this;
    children["route-table"] = route_table;

    summary_information->parent = this;
    children["summary-information"] = summary_information;

    yang_name = "route-information"; yang_parent_name = "default-vrf";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::~RouteInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::has_data() const
{
    return (backup_routes !=  nullptr && backup_routes->has_data())
	|| (connected_routes !=  nullptr && connected_routes->has_data())
	|| (external_routes !=  nullptr && external_routes->has_data())
	|| (local_routes !=  nullptr && local_routes->has_data())
	|| (multicast_intact_backup_routes !=  nullptr && multicast_intact_backup_routes->has_data())
	|| (multicast_intact_route_table !=  nullptr && multicast_intact_route_table->has_data())
	|| (route_areas !=  nullptr && route_areas->has_data())
	|| (route_table !=  nullptr && route_table->has_data())
	|| (summary_information !=  nullptr && summary_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::has_operation() const
{
    return is_set(operation)
	|| (backup_routes !=  nullptr && backup_routes->has_operation())
	|| (connected_routes !=  nullptr && connected_routes->has_operation())
	|| (external_routes !=  nullptr && external_routes->has_operation())
	|| (local_routes !=  nullptr && local_routes->has_operation())
	|| (multicast_intact_backup_routes !=  nullptr && multicast_intact_backup_routes->has_operation())
	|| (multicast_intact_route_table !=  nullptr && multicast_intact_route_table->has_operation())
	|| (route_areas !=  nullptr && route_areas->has_operation())
	|| (route_table !=  nullptr && route_table->has_operation())
	|| (summary_information !=  nullptr && summary_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-information";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-routes")
    {
        if(backup_routes != nullptr)
        {
            children["backup-routes"] = backup_routes;
        }
        else
        {
            backup_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes>();
            backup_routes->parent = this;
            children["backup-routes"] = backup_routes;
        }
        return children.at("backup-routes");
    }

    if(child_yang_name == "connected-routes")
    {
        if(connected_routes != nullptr)
        {
            children["connected-routes"] = connected_routes;
        }
        else
        {
            connected_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes>();
            connected_routes->parent = this;
            children["connected-routes"] = connected_routes;
        }
        return children.at("connected-routes");
    }

    if(child_yang_name == "external-routes")
    {
        if(external_routes != nullptr)
        {
            children["external-routes"] = external_routes;
        }
        else
        {
            external_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes>();
            external_routes->parent = this;
            children["external-routes"] = external_routes;
        }
        return children.at("external-routes");
    }

    if(child_yang_name == "local-routes")
    {
        if(local_routes != nullptr)
        {
            children["local-routes"] = local_routes;
        }
        else
        {
            local_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes>();
            local_routes->parent = this;
            children["local-routes"] = local_routes;
        }
        return children.at("local-routes");
    }

    if(child_yang_name == "multicast-intact-backup-routes")
    {
        if(multicast_intact_backup_routes != nullptr)
        {
            children["multicast-intact-backup-routes"] = multicast_intact_backup_routes;
        }
        else
        {
            multicast_intact_backup_routes = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes>();
            multicast_intact_backup_routes->parent = this;
            children["multicast-intact-backup-routes"] = multicast_intact_backup_routes;
        }
        return children.at("multicast-intact-backup-routes");
    }

    if(child_yang_name == "multicast-intact-route-table")
    {
        if(multicast_intact_route_table != nullptr)
        {
            children["multicast-intact-route-table"] = multicast_intact_route_table;
        }
        else
        {
            multicast_intact_route_table = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable>();
            multicast_intact_route_table->parent = this;
            children["multicast-intact-route-table"] = multicast_intact_route_table;
        }
        return children.at("multicast-intact-route-table");
    }

    if(child_yang_name == "route-areas")
    {
        if(route_areas != nullptr)
        {
            children["route-areas"] = route_areas;
        }
        else
        {
            route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas>();
            route_areas->parent = this;
            children["route-areas"] = route_areas;
        }
        return children.at("route-areas");
    }

    if(child_yang_name == "route-table")
    {
        if(route_table != nullptr)
        {
            children["route-table"] = route_table;
        }
        else
        {
            route_table = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable>();
            route_table->parent = this;
            children["route-table"] = route_table;
        }
        return children.at("route-table");
    }

    if(child_yang_name == "summary-information")
    {
        if(summary_information != nullptr)
        {
            children["summary-information"] = summary_information;
        }
        else
        {
            summary_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation>();
            summary_information->parent = this;
            children["summary-information"] = summary_information;
        }
        return children.at("summary-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::get_children()
{
    if(children.find("backup-routes") == children.end())
    {
        if(backup_routes != nullptr)
        {
            children["backup-routes"] = backup_routes;
        }
    }

    if(children.find("connected-routes") == children.end())
    {
        if(connected_routes != nullptr)
        {
            children["connected-routes"] = connected_routes;
        }
    }

    if(children.find("external-routes") == children.end())
    {
        if(external_routes != nullptr)
        {
            children["external-routes"] = external_routes;
        }
    }

    if(children.find("local-routes") == children.end())
    {
        if(local_routes != nullptr)
        {
            children["local-routes"] = local_routes;
        }
    }

    if(children.find("multicast-intact-backup-routes") == children.end())
    {
        if(multicast_intact_backup_routes != nullptr)
        {
            children["multicast-intact-backup-routes"] = multicast_intact_backup_routes;
        }
    }

    if(children.find("multicast-intact-route-table") == children.end())
    {
        if(multicast_intact_route_table != nullptr)
        {
            children["multicast-intact-route-table"] = multicast_intact_route_table;
        }
    }

    if(children.find("route-areas") == children.end())
    {
        if(route_areas != nullptr)
        {
            children["route-areas"] = route_areas;
        }
    }

    if(children.find("route-table") == children.end())
    {
        if(route_table != nullptr)
        {
            children["route-table"] = route_table;
        }
    }

    if(children.find("summary-information") == children.end())
    {
        if(summary_information != nullptr)
        {
            children["summary-information"] = summary_information;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoutes()
{
    yang_name = "backup-routes"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::~BackupRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::has_data() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-routes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRoutes' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-route")
    {
        for(auto const & c : backup_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute>();
        c->parent = this;
        backup_route.push_back(std::move(c));
        children[segment_path] = backup_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::get_children()
{
    for (auto const & c : backup_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::BackupRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo>())
{
    route_info->parent = this;
    children["route-info"] = route_info;

    yang_name = "backup-route"; yang_parent_name = "backup-routes";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::~BackupRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRoute' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-info")
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
        else
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo>();
            route_info->parent = this;
            children["route-info"] = route_info;
        }
        return children.at("route-info");
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::get_children()
{
    if(children.find("route-info") == children.end())
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
    }

    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    children["route-fail-time"] = route_fail_time;

    route_update_time->parent = this;
    children["route-update-time"] = route_update_time;

    yang_name = "route-info"; yang_parent_name = "backup-route";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
        else
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime>();
            route_fail_time->parent = this;
            children["route-fail-time"] = route_fail_time;
        }
        return children.at("route-fail-time");
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
        else
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime>();
            route_update_time->parent = this;
            children["route-update-time"] = route_update_time;
        }
        return children.at("route-update-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_children()
{
    if(children.find("route-fail-time") == children.end())
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
    }

    if(children.find("route-update-time") == children.end())
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    children["route-backup-path"] = route_backup_path;

    sr_microloop_avoidance_path->parent = this;
    children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;

    yang_name = "route-path"; yang_parent_name = "backup-route";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_id.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.operation)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path != nullptr)
        {
            children["route-backup-path"] = route_backup_path;
        }
        else
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath>();
            route_backup_path->parent = this;
            children["route-backup-path"] = route_backup_path;
        }
        return children.at("route-backup-path");
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        else
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath>();
            sr_microloop_avoidance_path->parent = this;
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        return children.at("sr-microloop-avoidance-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_children()
{
    if(children.find("route-backup-path") == children.end())
    {
        if(route_backup_path != nullptr)
        {
            children["route-backup-path"] = route_backup_path;
        }
    }

    if(children.find("sr-microloop-avoidance-path") == children.end())
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{
    yang_name = "route-backup-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(backup_metric.operation)
	|| is_set(backup_remote_lfa.operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(backup_route_interface_name.operation)
	|| is_set(backup_route_next_hop_address.operation)
	|| is_set(backup_route_source.operation)
	|| is_set(backup_tunnel_interface_name.operation)
	|| is_set(downstream.operation)
	|| is_set(line_card_disjoint.operation)
	|| is_set(node_protect.operation)
	|| is_set(primary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteBackupPath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.operation)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.operation)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.operation)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.operation)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.operation)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.operation)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.operation)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.operation)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
    }
    if(value_path == "downstream")
    {
        downstream = value;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "route-backup-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(std::move(c));
        children[segment_path] = microloop_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_children()
{
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::MulticastIntactRouteTable()
{
    yang_name = "multicast-intact-route-table"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::~MulticastIntactRouteTable()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-table";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactRouteTable' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route>();
        c->parent = this;
        route.push_back(std::move(c));
        children[segment_path] = route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::get_children()
{
    for (auto const & c : route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo>())
{
    route_info->parent = this;
    children["route-info"] = route_info;

    yang_name = "route"; yang_parent_name = "multicast-intact-route-table";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::~Route()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-info")
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
        else
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo>();
            route_info->parent = this;
            children["route-info"] = route_info;
        }
        return children.at("route-info");
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::get_children()
{
    if(children.find("route-info") == children.end())
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
    }

    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    children["route-fail-time"] = route_fail_time;

    route_update_time->parent = this;
    children["route-update-time"] = route_update_time;

    yang_name = "route-info"; yang_parent_name = "route";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
        else
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime>();
            route_fail_time->parent = this;
            children["route-fail-time"] = route_fail_time;
        }
        return children.at("route-fail-time");
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
        else
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime>();
            route_update_time->parent = this;
            children["route-update-time"] = route_update_time;
        }
        return children.at("route-update-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_children()
{
    if(children.find("route-fail-time") == children.end())
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
    }

    if(children.find("route-update-time") == children.end())
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;
    children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;

    yang_name = "route-path"; yang_parent_name = "route";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        else
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath>();
            sr_microloop_avoidance_path->parent = this;
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        return children.at("sr-microloop-avoidance-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_children()
{
    if(children.find("sr-microloop-avoidance-path") == children.end())
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(std::move(c));
        children[segment_path] = microloop_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_children()
{
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoutes()
{
    yang_name = "multicast-intact-backup-routes"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::~MulticastIntactBackupRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route.size(); index++)
    {
        if(multicast_intact_backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route.size(); index++)
    {
        if(multicast_intact_backup_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-routes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactBackupRoutes' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-intact-backup-route")
    {
        for(auto const & c : multicast_intact_backup_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute>();
        c->parent = this;
        multicast_intact_backup_route.push_back(std::move(c));
        children[segment_path] = multicast_intact_backup_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::get_children()
{
    for (auto const & c : multicast_intact_backup_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::MulticastIntactBackupRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo>())
{
    route_info->parent = this;
    children["route-info"] = route_info;

    yang_name = "multicast-intact-backup-route"; yang_parent_name = "multicast-intact-backup-routes";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::~MulticastIntactBackupRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactBackupRoute' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-info")
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
        else
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo>();
            route_info->parent = this;
            children["route-info"] = route_info;
        }
        return children.at("route-info");
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_children()
{
    if(children.find("route-info") == children.end())
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
    }

    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    children["route-fail-time"] = route_fail_time;

    route_update_time->parent = this;
    children["route-update-time"] = route_update_time;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-backup-route";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
        else
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime>();
            route_fail_time->parent = this;
            children["route-fail-time"] = route_fail_time;
        }
        return children.at("route-fail-time");
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
        else
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime>();
            route_update_time->parent = this;
            children["route-update-time"] = route_update_time;
        }
        return children.at("route-update-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_children()
{
    if(children.find("route-fail-time") == children.end())
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
    }

    if(children.find("route-update-time") == children.end())
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    children["route-backup-path"] = route_backup_path;

    sr_microloop_avoidance_path->parent = this;
    children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-backup-route";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_id.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.operation)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path != nullptr)
        {
            children["route-backup-path"] = route_backup_path;
        }
        else
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath>();
            route_backup_path->parent = this;
            children["route-backup-path"] = route_backup_path;
        }
        return children.at("route-backup-path");
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        else
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath>();
            sr_microloop_avoidance_path->parent = this;
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        return children.at("sr-microloop-avoidance-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_children()
{
    if(children.find("route-backup-path") == children.end())
    {
        if(route_backup_path != nullptr)
        {
            children["route-backup-path"] = route_backup_path;
        }
    }

    if(children.find("sr-microloop-avoidance-path") == children.end())
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{
    yang_name = "route-backup-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(backup_metric.operation)
	|| is_set(backup_remote_lfa.operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(backup_route_interface_name.operation)
	|| is_set(backup_route_next_hop_address.operation)
	|| is_set(backup_route_source.operation)
	|| is_set(backup_tunnel_interface_name.operation)
	|| is_set(downstream.operation)
	|| is_set(line_card_disjoint.operation)
	|| is_set(node_protect.operation)
	|| is_set(primary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteBackupPath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.operation)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.operation)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.operation)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.operation)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.operation)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.operation)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.operation)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.operation)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
    }
    if(value_path == "downstream")
    {
        downstream = value;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "route-backup-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(std::move(c));
        children[segment_path] = microloop_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_children()
{
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::SummaryInformation()
    :
    failure_address{YType::str, "failure-address"},
    failures{YType::uint32, "failures"}
    	,
    common(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common>())
	,failure_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime>())
{
    common->parent = this;
    children["common"] = common;

    failure_time->parent = this;
    children["failure-time"] = failure_time;

    yang_name = "summary-information"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::~SummaryInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::has_data() const
{
    return failure_address.is_set
	|| failures.is_set
	|| (common !=  nullptr && common->has_data())
	|| (failure_time !=  nullptr && failure_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(failure_address.operation)
	|| is_set(failures.operation)
	|| (common !=  nullptr && common->has_operation())
	|| (failure_time !=  nullptr && failure_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-information";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure_address.is_set || is_set(failure_address.operation)) leaf_name_data.push_back(failure_address.get_name_leafdata());
    if (failures.is_set || is_set(failures.operation)) leaf_name_data.push_back(failures.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common")
    {
        if(common != nullptr)
        {
            children["common"] = common;
        }
        else
        {
            common = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common>();
            common->parent = this;
            children["common"] = common;
        }
        return children.at("common");
    }

    if(child_yang_name == "failure-time")
    {
        if(failure_time != nullptr)
        {
            children["failure-time"] = failure_time;
        }
        else
        {
            failure_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime>();
            failure_time->parent = this;
            children["failure-time"] = failure_time;
        }
        return children.at("failure-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::get_children()
{
    if(children.find("common") == children.end())
    {
        if(common != nullptr)
        {
            children["common"] = common;
        }
    }

    if(children.find("failure-time") == children.end())
    {
        if(failure_time != nullptr)
        {
            children["failure-time"] = failure_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure-address")
    {
        failure_address = value;
    }
    if(value_path == "failures")
    {
        failures = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::FailureTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "failure-time"; yang_parent_name = "summary-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::~FailureTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FailureTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::Common()
    :
    external_nssa_type1s{YType::uint32, "external-nssa-type1s"},
    external_nssa_type2s{YType::uint32, "external-nssa-type2s"},
    external_type1s{YType::uint32, "external-type1s"},
    external_type2s{YType::uint32, "external-type2s"},
    inter_areas{YType::uint32, "inter-areas"},
    intra_areas{YType::uint32, "intra-areas"},
    total{YType::uint32, "total"}
{
    yang_name = "common"; yang_parent_name = "summary-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::~Common()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::has_data() const
{
    return external_nssa_type1s.is_set
	|| external_nssa_type2s.is_set
	|| external_type1s.is_set
	|| external_type2s.is_set
	|| inter_areas.is_set
	|| intra_areas.is_set
	|| total.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::has_operation() const
{
    return is_set(operation)
	|| is_set(external_nssa_type1s.operation)
	|| is_set(external_nssa_type2s.operation)
	|| is_set(external_type1s.operation)
	|| is_set(external_type2s.operation)
	|| is_set(inter_areas.operation)
	|| is_set(intra_areas.operation)
	|| is_set(total.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Common' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_nssa_type1s.is_set || is_set(external_nssa_type1s.operation)) leaf_name_data.push_back(external_nssa_type1s.get_name_leafdata());
    if (external_nssa_type2s.is_set || is_set(external_nssa_type2s.operation)) leaf_name_data.push_back(external_nssa_type2s.get_name_leafdata());
    if (external_type1s.is_set || is_set(external_type1s.operation)) leaf_name_data.push_back(external_type1s.get_name_leafdata());
    if (external_type2s.is_set || is_set(external_type2s.operation)) leaf_name_data.push_back(external_type2s.get_name_leafdata());
    if (inter_areas.is_set || is_set(inter_areas.operation)) leaf_name_data.push_back(inter_areas.get_name_leafdata());
    if (intra_areas.is_set || is_set(intra_areas.operation)) leaf_name_data.push_back(intra_areas.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s = value;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s = value;
    }
    if(value_path == "external-type1s")
    {
        external_type1s = value;
    }
    if(value_path == "external-type2s")
    {
        external_type2s = value;
    }
    if(value_path == "inter-areas")
    {
        inter_areas = value;
    }
    if(value_path == "intra-areas")
    {
        intra_areas = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoutes()
{
    yang_name = "connected-routes"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::has_data() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::has_operation() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedRoutes' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connected-route")
    {
        for(auto const & c : connected_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute>();
        c->parent = this;
        connected_route.push_back(std::move(c));
        children[segment_path] = connected_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::get_children()
{
    for (auto const & c : connected_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::ConnectedRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo>())
{
    route_info->parent = this;
    children["route-info"] = route_info;

    yang_name = "connected-route"; yang_parent_name = "connected-routes";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::~ConnectedRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedRoute' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-info")
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
        else
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo>();
            route_info->parent = this;
            children["route-info"] = route_info;
        }
        return children.at("route-info");
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_children()
{
    if(children.find("route-info") == children.end())
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
    }

    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    children["route-fail-time"] = route_fail_time;

    route_update_time->parent = this;
    children["route-update-time"] = route_update_time;

    yang_name = "route-info"; yang_parent_name = "connected-route";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
        else
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime>();
            route_fail_time->parent = this;
            children["route-fail-time"] = route_fail_time;
        }
        return children.at("route-fail-time");
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
        else
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime>();
            route_update_time->parent = this;
            children["route-update-time"] = route_update_time;
        }
        return children.at("route-update-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_children()
{
    if(children.find("route-fail-time") == children.end())
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
    }

    if(children.find("route-update-time") == children.end())
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;
    children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;

    yang_name = "route-path"; yang_parent_name = "connected-route";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        else
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath>();
            sr_microloop_avoidance_path->parent = this;
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        return children.at("sr-microloop-avoidance-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_children()
{
    if(children.find("sr-microloop-avoidance-path") == children.end())
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(std::move(c));
        children[segment_path] = microloop_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_children()
{
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoutes()
{
    yang_name = "local-routes"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::~LocalRoutes()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::has_data() const
{
    for (std::size_t index=0; index<local_route.size(); index++)
    {
        if(local_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::has_operation() const
{
    for (std::size_t index=0; index<local_route.size(); index++)
    {
        if(local_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-routes";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalRoutes' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-route")
    {
        for(auto const & c : local_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute>();
        c->parent = this;
        local_route.push_back(std::move(c));
        children[segment_path] = local_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::get_children()
{
    for (auto const & c : local_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::LocalRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo>())
{
    route_info->parent = this;
    children["route-info"] = route_info;

    yang_name = "local-route"; yang_parent_name = "local-routes";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::~LocalRoute()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalRoute' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-info")
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
        else
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo>();
            route_info->parent = this;
            children["route-info"] = route_info;
        }
        return children.at("route-info");
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::get_children()
{
    if(children.find("route-info") == children.end())
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
    }

    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    children["route-fail-time"] = route_fail_time;

    route_update_time->parent = this;
    children["route-update-time"] = route_update_time;

    yang_name = "route-info"; yang_parent_name = "local-route";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
        else
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime>();
            route_fail_time->parent = this;
            children["route-fail-time"] = route_fail_time;
        }
        return children.at("route-fail-time");
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
        else
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime>();
            route_update_time->parent = this;
            children["route-update-time"] = route_update_time;
        }
        return children.at("route-update-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_children()
{
    if(children.find("route-fail-time") == children.end())
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
    }

    if(children.find("route-update-time") == children.end())
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;
    children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;

    yang_name = "route-path"; yang_parent_name = "local-route";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        else
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath>();
            sr_microloop_avoidance_path->parent = this;
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        return children.at("sr-microloop-avoidance-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_children()
{
    if(children.find("sr-microloop-avoidance-path") == children.end())
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(std::move(c));
        children[segment_path] = microloop_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_children()
{
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteAreas()
{
    yang_name = "route-areas"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::~RouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::has_data() const
{
    for (std::size_t index=0; index<route_area.size(); index++)
    {
        if(route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::has_operation() const
{
    for (std::size_t index=0; index<route_area.size(); index++)
    {
        if(route_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-areas";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-area")
    {
        for(auto const & c : route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea>();
        c->parent = this;
        route_area.push_back(std::move(c));
        children[segment_path] = route_area.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::get_children()
{
    for (auto const & c : route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteArea()
    :
    area_id{YType::int32, "area-id"}
    	,
    backup_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas>())
	,connected_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas>())
	,local_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas>())
	,multicast_intact_backup_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas>())
	,multicast_intact_route_areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas>())
	,route_area_informations(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations>())
	,summary_area_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation>())
{
    backup_route_areas->parent = this;
    children["backup-route-areas"] = backup_route_areas;

    connected_route_areas->parent = this;
    children["connected-route-areas"] = connected_route_areas;

    local_route_areas->parent = this;
    children["local-route-areas"] = local_route_areas;

    multicast_intact_backup_route_areas->parent = this;
    children["multicast-intact-backup-route-areas"] = multicast_intact_backup_route_areas;

    multicast_intact_route_areas->parent = this;
    children["multicast-intact-route-areas"] = multicast_intact_route_areas;

    route_area_informations->parent = this;
    children["route-area-informations"] = route_area_informations;

    summary_area_information->parent = this;
    children["summary-area-information"] = summary_area_information;

    yang_name = "route-area"; yang_parent_name = "route-areas";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::~RouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::has_data() const
{
    return area_id.is_set
	|| (backup_route_areas !=  nullptr && backup_route_areas->has_data())
	|| (connected_route_areas !=  nullptr && connected_route_areas->has_data())
	|| (local_route_areas !=  nullptr && local_route_areas->has_data())
	|| (multicast_intact_backup_route_areas !=  nullptr && multicast_intact_backup_route_areas->has_data())
	|| (multicast_intact_route_areas !=  nullptr && multicast_intact_route_areas->has_data())
	|| (route_area_informations !=  nullptr && route_area_informations->has_data())
	|| (summary_area_information !=  nullptr && summary_area_information->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| (backup_route_areas !=  nullptr && backup_route_areas->has_operation())
	|| (connected_route_areas !=  nullptr && connected_route_areas->has_operation())
	|| (local_route_areas !=  nullptr && local_route_areas->has_operation())
	|| (multicast_intact_backup_route_areas !=  nullptr && multicast_intact_backup_route_areas->has_operation())
	|| (multicast_intact_route_areas !=  nullptr && multicast_intact_route_areas->has_operation())
	|| (route_area_informations !=  nullptr && route_area_informations->has_operation())
	|| (summary_area_information !=  nullptr && summary_area_information->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-route-areas")
    {
        if(backup_route_areas != nullptr)
        {
            children["backup-route-areas"] = backup_route_areas;
        }
        else
        {
            backup_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas>();
            backup_route_areas->parent = this;
            children["backup-route-areas"] = backup_route_areas;
        }
        return children.at("backup-route-areas");
    }

    if(child_yang_name == "connected-route-areas")
    {
        if(connected_route_areas != nullptr)
        {
            children["connected-route-areas"] = connected_route_areas;
        }
        else
        {
            connected_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas>();
            connected_route_areas->parent = this;
            children["connected-route-areas"] = connected_route_areas;
        }
        return children.at("connected-route-areas");
    }

    if(child_yang_name == "local-route-areas")
    {
        if(local_route_areas != nullptr)
        {
            children["local-route-areas"] = local_route_areas;
        }
        else
        {
            local_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas>();
            local_route_areas->parent = this;
            children["local-route-areas"] = local_route_areas;
        }
        return children.at("local-route-areas");
    }

    if(child_yang_name == "multicast-intact-backup-route-areas")
    {
        if(multicast_intact_backup_route_areas != nullptr)
        {
            children["multicast-intact-backup-route-areas"] = multicast_intact_backup_route_areas;
        }
        else
        {
            multicast_intact_backup_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas>();
            multicast_intact_backup_route_areas->parent = this;
            children["multicast-intact-backup-route-areas"] = multicast_intact_backup_route_areas;
        }
        return children.at("multicast-intact-backup-route-areas");
    }

    if(child_yang_name == "multicast-intact-route-areas")
    {
        if(multicast_intact_route_areas != nullptr)
        {
            children["multicast-intact-route-areas"] = multicast_intact_route_areas;
        }
        else
        {
            multicast_intact_route_areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas>();
            multicast_intact_route_areas->parent = this;
            children["multicast-intact-route-areas"] = multicast_intact_route_areas;
        }
        return children.at("multicast-intact-route-areas");
    }

    if(child_yang_name == "route-area-informations")
    {
        if(route_area_informations != nullptr)
        {
            children["route-area-informations"] = route_area_informations;
        }
        else
        {
            route_area_informations = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations>();
            route_area_informations->parent = this;
            children["route-area-informations"] = route_area_informations;
        }
        return children.at("route-area-informations");
    }

    if(child_yang_name == "summary-area-information")
    {
        if(summary_area_information != nullptr)
        {
            children["summary-area-information"] = summary_area_information;
        }
        else
        {
            summary_area_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation>();
            summary_area_information->parent = this;
            children["summary-area-information"] = summary_area_information;
        }
        return children.at("summary-area-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::get_children()
{
    if(children.find("backup-route-areas") == children.end())
    {
        if(backup_route_areas != nullptr)
        {
            children["backup-route-areas"] = backup_route_areas;
        }
    }

    if(children.find("connected-route-areas") == children.end())
    {
        if(connected_route_areas != nullptr)
        {
            children["connected-route-areas"] = connected_route_areas;
        }
    }

    if(children.find("local-route-areas") == children.end())
    {
        if(local_route_areas != nullptr)
        {
            children["local-route-areas"] = local_route_areas;
        }
    }

    if(children.find("multicast-intact-backup-route-areas") == children.end())
    {
        if(multicast_intact_backup_route_areas != nullptr)
        {
            children["multicast-intact-backup-route-areas"] = multicast_intact_backup_route_areas;
        }
    }

    if(children.find("multicast-intact-route-areas") == children.end())
    {
        if(multicast_intact_route_areas != nullptr)
        {
            children["multicast-intact-route-areas"] = multicast_intact_route_areas;
        }
    }

    if(children.find("route-area-informations") == children.end())
    {
        if(route_area_informations != nullptr)
        {
            children["route-area-informations"] = route_area_informations;
        }
    }

    if(children.find("summary-area-information") == children.end())
    {
        if(summary_area_information != nullptr)
        {
            children["summary-area-information"] = summary_area_information;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteAreas()
{
    yang_name = "multicast-intact-backup-route-areas"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::~MulticastIntactBackupRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route_area.size(); index++)
    {
        if(multicast_intact_backup_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route_area.size(); index++)
    {
        if(multicast_intact_backup_route_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route-areas";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactBackupRouteAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-intact-backup-route-area")
    {
        for(auto const & c : multicast_intact_backup_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea>();
        c->parent = this;
        multicast_intact_backup_route_area.push_back(std::move(c));
        children[segment_path] = multicast_intact_backup_route_area.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_children()
{
    for (auto const & c : multicast_intact_backup_route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::MulticastIntactBackupRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo>())
{
    route_info->parent = this;
    children["route-info"] = route_info;

    yang_name = "multicast-intact-backup-route-area"; yang_parent_name = "multicast-intact-backup-route-areas";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::~MulticastIntactBackupRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route-area";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactBackupRouteArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-info")
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
        else
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo>();
            route_info->parent = this;
            children["route-info"] = route_info;
        }
        return children.at("route-info");
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_children()
{
    if(children.find("route-info") == children.end())
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
    }

    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    children["route-fail-time"] = route_fail_time;

    route_update_time->parent = this;
    children["route-update-time"] = route_update_time;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-backup-route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
        else
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime>();
            route_fail_time->parent = this;
            children["route-fail-time"] = route_fail_time;
        }
        return children.at("route-fail-time");
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
        else
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime>();
            route_update_time->parent = this;
            children["route-update-time"] = route_update_time;
        }
        return children.at("route-update-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_children()
{
    if(children.find("route-fail-time") == children.end())
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
    }

    if(children.find("route-update-time") == children.end())
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    children["route-backup-path"] = route_backup_path;

    sr_microloop_avoidance_path->parent = this;
    children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-backup-route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_id.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.operation)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path != nullptr)
        {
            children["route-backup-path"] = route_backup_path;
        }
        else
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath>();
            route_backup_path->parent = this;
            children["route-backup-path"] = route_backup_path;
        }
        return children.at("route-backup-path");
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        else
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath>();
            sr_microloop_avoidance_path->parent = this;
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        return children.at("sr-microloop-avoidance-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_children()
{
    if(children.find("route-backup-path") == children.end())
    {
        if(route_backup_path != nullptr)
        {
            children["route-backup-path"] = route_backup_path;
        }
    }

    if(children.find("sr-microloop-avoidance-path") == children.end())
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{
    yang_name = "route-backup-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(backup_metric.operation)
	|| is_set(backup_remote_lfa.operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(backup_route_interface_name.operation)
	|| is_set(backup_route_next_hop_address.operation)
	|| is_set(backup_route_source.operation)
	|| is_set(backup_tunnel_interface_name.operation)
	|| is_set(downstream.operation)
	|| is_set(line_card_disjoint.operation)
	|| is_set(node_protect.operation)
	|| is_set(primary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteBackupPath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.operation)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.operation)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.operation)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.operation)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.operation)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.operation)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.operation)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.operation)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
    }
    if(value_path == "downstream")
    {
        downstream = value;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "route-backup-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(std::move(c));
        children[segment_path] = microloop_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children()
{
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteAreas()
{
    yang_name = "connected-route-areas"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::~ConnectedRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_data() const
{
    for (std::size_t index=0; index<connected_route_area.size(); index++)
    {
        if(connected_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<connected_route_area.size(); index++)
    {
        if(connected_route_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route-areas";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedRouteAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connected-route-area")
    {
        for(auto const & c : connected_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea>();
        c->parent = this;
        connected_route_area.push_back(std::move(c));
        children[segment_path] = connected_route_area.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_children()
{
    for (auto const & c : connected_route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::ConnectedRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo>())
{
    route_info->parent = this;
    children["route-info"] = route_info;

    yang_name = "connected-route-area"; yang_parent_name = "connected-route-areas";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::~ConnectedRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route-area";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedRouteArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-info")
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
        else
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo>();
            route_info->parent = this;
            children["route-info"] = route_info;
        }
        return children.at("route-info");
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_children()
{
    if(children.find("route-info") == children.end())
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
    }

    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    children["route-fail-time"] = route_fail_time;

    route_update_time->parent = this;
    children["route-update-time"] = route_update_time;

    yang_name = "route-info"; yang_parent_name = "connected-route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
        else
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime>();
            route_fail_time->parent = this;
            children["route-fail-time"] = route_fail_time;
        }
        return children.at("route-fail-time");
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
        else
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime>();
            route_update_time->parent = this;
            children["route-update-time"] = route_update_time;
        }
        return children.at("route-update-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_children()
{
    if(children.find("route-fail-time") == children.end())
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
    }

    if(children.find("route-update-time") == children.end())
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;
    children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;

    yang_name = "route-path"; yang_parent_name = "connected-route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        else
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath>();
            sr_microloop_avoidance_path->parent = this;
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        return children.at("sr-microloop-avoidance-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_children()
{
    if(children.find("sr-microloop-avoidance-path") == children.end())
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(std::move(c));
        children[segment_path] = microloop_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children()
{
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteAreas()
{
    yang_name = "backup-route-areas"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::~BackupRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_data() const
{
    for (std::size_t index=0; index<backup_route_area.size(); index++)
    {
        if(backup_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<backup_route_area.size(); index++)
    {
        if(backup_route_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route-areas";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRouteAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-route-area")
    {
        for(auto const & c : backup_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea>();
        c->parent = this;
        backup_route_area.push_back(std::move(c));
        children[segment_path] = backup_route_area.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_children()
{
    for (auto const & c : backup_route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::BackupRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo>())
{
    route_info->parent = this;
    children["route-info"] = route_info;

    yang_name = "backup-route-area"; yang_parent_name = "backup-route-areas";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::~BackupRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route-area";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRouteArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-info")
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
        else
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo>();
            route_info->parent = this;
            children["route-info"] = route_info;
        }
        return children.at("route-info");
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_children()
{
    if(children.find("route-info") == children.end())
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
    }

    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    children["route-fail-time"] = route_fail_time;

    route_update_time->parent = this;
    children["route-update-time"] = route_update_time;

    yang_name = "route-info"; yang_parent_name = "backup-route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
        else
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime>();
            route_fail_time->parent = this;
            children["route-fail-time"] = route_fail_time;
        }
        return children.at("route-fail-time");
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
        else
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime>();
            route_update_time->parent = this;
            children["route-update-time"] = route_update_time;
        }
        return children.at("route-update-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_children()
{
    if(children.find("route-fail-time") == children.end())
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
    }

    if(children.find("route-update-time") == children.end())
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    children["route-backup-path"] = route_backup_path;

    sr_microloop_avoidance_path->parent = this;
    children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;

    yang_name = "route-path"; yang_parent_name = "backup-route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_id.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.operation)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path != nullptr)
        {
            children["route-backup-path"] = route_backup_path;
        }
        else
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath>();
            route_backup_path->parent = this;
            children["route-backup-path"] = route_backup_path;
        }
        return children.at("route-backup-path");
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        else
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath>();
            sr_microloop_avoidance_path->parent = this;
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        return children.at("sr-microloop-avoidance-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_children()
{
    if(children.find("route-backup-path") == children.end())
    {
        if(route_backup_path != nullptr)
        {
            children["route-backup-path"] = route_backup_path;
        }
    }

    if(children.find("sr-microloop-avoidance-path") == children.end())
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{
    yang_name = "route-backup-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(backup_metric.operation)
	|| is_set(backup_remote_lfa.operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(backup_route_interface_name.operation)
	|| is_set(backup_route_next_hop_address.operation)
	|| is_set(backup_route_source.operation)
	|| is_set(backup_tunnel_interface_name.operation)
	|| is_set(downstream.operation)
	|| is_set(line_card_disjoint.operation)
	|| is_set(node_protect.operation)
	|| is_set(primary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteBackupPath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.operation)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.operation)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.operation)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.operation)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.operation)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.operation)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.operation)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.operation)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(std::move(c));
        children[segment_path] = backup_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_children()
{
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
    }
    if(value_path == "downstream")
    {
        downstream = value;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "route-backup-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(std::move(c));
        children[segment_path] = microloop_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children()
{
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformations()
{
    yang_name = "route-area-informations"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::~RouteAreaInformations()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_data() const
{
    for (std::size_t index=0; index<route_area_information.size(); index++)
    {
        if(route_area_information[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_operation() const
{
    for (std::size_t index=0; index<route_area_information.size(); index++)
    {
        if(route_area_information[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area-informations";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteAreaInformations' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-area-information")
    {
        for(auto const & c : route_area_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation>();
        c->parent = this;
        route_area_information.push_back(std::move(c));
        children[segment_path] = route_area_information.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_children()
{
    for (auto const & c : route_area_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteAreaInformation()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo>())
{
    route_info->parent = this;
    children["route-info"] = route_info;

    yang_name = "route-area-information"; yang_parent_name = "route-area-informations";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::~RouteAreaInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area-information";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteAreaInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-info")
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
        else
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo>();
            route_info->parent = this;
            children["route-info"] = route_info;
        }
        return children.at("route-info");
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_children()
{
    if(children.find("route-info") == children.end())
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
    }

    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    children["route-fail-time"] = route_fail_time;

    route_update_time->parent = this;
    children["route-update-time"] = route_update_time;

    yang_name = "route-info"; yang_parent_name = "route-area-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
        else
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime>();
            route_fail_time->parent = this;
            children["route-fail-time"] = route_fail_time;
        }
        return children.at("route-fail-time");
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
        else
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime>();
            route_update_time->parent = this;
            children["route-update-time"] = route_update_time;
        }
        return children.at("route-update-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_children()
{
    if(children.find("route-fail-time") == children.end())
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
    }

    if(children.find("route-update-time") == children.end())
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;
    children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;

    yang_name = "route-path"; yang_parent_name = "route-area-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        else
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath>();
            sr_microloop_avoidance_path->parent = this;
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        return children.at("sr-microloop-avoidance-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_children()
{
    if(children.find("sr-microloop-avoidance-path") == children.end())
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(std::move(c));
        children[segment_path] = microloop_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_children()
{
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteAreas()
{
    yang_name = "multicast-intact-route-areas"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::~MulticastIntactRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_route_area.size(); index++)
    {
        if(multicast_intact_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_route_area.size(); index++)
    {
        if(multicast_intact_route_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-areas";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactRouteAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-intact-route-area")
    {
        for(auto const & c : multicast_intact_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea>();
        c->parent = this;
        multicast_intact_route_area.push_back(std::move(c));
        children[segment_path] = multicast_intact_route_area.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_children()
{
    for (auto const & c : multicast_intact_route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::MulticastIntactRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo>())
{
    route_info->parent = this;
    children["route-info"] = route_info;

    yang_name = "multicast-intact-route-area"; yang_parent_name = "multicast-intact-route-areas";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::~MulticastIntactRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-area";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactRouteArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-info")
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
        else
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo>();
            route_info->parent = this;
            children["route-info"] = route_info;
        }
        return children.at("route-info");
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_children()
{
    if(children.find("route-info") == children.end())
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
    }

    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    children["route-fail-time"] = route_fail_time;

    route_update_time->parent = this;
    children["route-update-time"] = route_update_time;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
        else
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime>();
            route_fail_time->parent = this;
            children["route-fail-time"] = route_fail_time;
        }
        return children.at("route-fail-time");
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
        else
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime>();
            route_update_time->parent = this;
            children["route-update-time"] = route_update_time;
        }
        return children.at("route-update-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_children()
{
    if(children.find("route-fail-time") == children.end())
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
    }

    if(children.find("route-update-time") == children.end())
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;
    children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        else
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath>();
            sr_microloop_avoidance_path->parent = this;
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        return children.at("sr-microloop-avoidance-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_children()
{
    if(children.find("sr-microloop-avoidance-path") == children.end())
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(std::move(c));
        children[segment_path] = microloop_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children()
{
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::SummaryAreaInformation()
    :
    failure_address{YType::str, "failure-address"},
    failures{YType::uint32, "failures"}
    	,
    common(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common>())
	,failure_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime>())
{
    common->parent = this;
    children["common"] = common;

    failure_time->parent = this;
    children["failure-time"] = failure_time;

    yang_name = "summary-area-information"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::~SummaryAreaInformation()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::has_data() const
{
    return failure_address.is_set
	|| failures.is_set
	|| (common !=  nullptr && common->has_data())
	|| (failure_time !=  nullptr && failure_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(failure_address.operation)
	|| is_set(failures.operation)
	|| (common !=  nullptr && common->has_operation())
	|| (failure_time !=  nullptr && failure_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-area-information";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryAreaInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure_address.is_set || is_set(failure_address.operation)) leaf_name_data.push_back(failure_address.get_name_leafdata());
    if (failures.is_set || is_set(failures.operation)) leaf_name_data.push_back(failures.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common")
    {
        if(common != nullptr)
        {
            children["common"] = common;
        }
        else
        {
            common = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common>();
            common->parent = this;
            children["common"] = common;
        }
        return children.at("common");
    }

    if(child_yang_name == "failure-time")
    {
        if(failure_time != nullptr)
        {
            children["failure-time"] = failure_time;
        }
        else
        {
            failure_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime>();
            failure_time->parent = this;
            children["failure-time"] = failure_time;
        }
        return children.at("failure-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_children()
{
    if(children.find("common") == children.end())
    {
        if(common != nullptr)
        {
            children["common"] = common;
        }
    }

    if(children.find("failure-time") == children.end())
    {
        if(failure_time != nullptr)
        {
            children["failure-time"] = failure_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure-address")
    {
        failure_address = value;
    }
    if(value_path == "failures")
    {
        failures = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::FailureTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "failure-time"; yang_parent_name = "summary-area-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::~FailureTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FailureTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::Common()
    :
    external_nssa_type1s{YType::uint32, "external-nssa-type1s"},
    external_nssa_type2s{YType::uint32, "external-nssa-type2s"},
    external_type1s{YType::uint32, "external-type1s"},
    external_type2s{YType::uint32, "external-type2s"},
    inter_areas{YType::uint32, "inter-areas"},
    intra_areas{YType::uint32, "intra-areas"},
    total{YType::uint32, "total"}
{
    yang_name = "common"; yang_parent_name = "summary-area-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::~Common()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::has_data() const
{
    return external_nssa_type1s.is_set
	|| external_nssa_type2s.is_set
	|| external_type1s.is_set
	|| external_type2s.is_set
	|| inter_areas.is_set
	|| intra_areas.is_set
	|| total.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::has_operation() const
{
    return is_set(operation)
	|| is_set(external_nssa_type1s.operation)
	|| is_set(external_nssa_type2s.operation)
	|| is_set(external_type1s.operation)
	|| is_set(external_type2s.operation)
	|| is_set(inter_areas.operation)
	|| is_set(intra_areas.operation)
	|| is_set(total.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Common' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_nssa_type1s.is_set || is_set(external_nssa_type1s.operation)) leaf_name_data.push_back(external_nssa_type1s.get_name_leafdata());
    if (external_nssa_type2s.is_set || is_set(external_nssa_type2s.operation)) leaf_name_data.push_back(external_nssa_type2s.get_name_leafdata());
    if (external_type1s.is_set || is_set(external_type1s.operation)) leaf_name_data.push_back(external_type1s.get_name_leafdata());
    if (external_type2s.is_set || is_set(external_type2s.operation)) leaf_name_data.push_back(external_type2s.get_name_leafdata());
    if (inter_areas.is_set || is_set(inter_areas.operation)) leaf_name_data.push_back(inter_areas.get_name_leafdata());
    if (intra_areas.is_set || is_set(intra_areas.operation)) leaf_name_data.push_back(intra_areas.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s = value;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s = value;
    }
    if(value_path == "external-type1s")
    {
        external_type1s = value;
    }
    if(value_path == "external-type2s")
    {
        external_type2s = value;
    }
    if(value_path == "inter-areas")
    {
        inter_areas = value;
    }
    if(value_path == "intra-areas")
    {
        intra_areas = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteAreas()
{
    yang_name = "local-route-areas"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::~LocalRouteAreas()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::has_data() const
{
    for (std::size_t index=0; index<local_route_area.size(); index++)
    {
        if(local_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<local_route_area.size(); index++)
    {
        if(local_route_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route-areas";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalRouteAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-route-area")
    {
        for(auto const & c : local_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea>();
        c->parent = this;
        local_route_area.push_back(std::move(c));
        children[segment_path] = local_route_area.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_children()
{
    for (auto const & c : local_route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::LocalRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo>())
{
    route_info->parent = this;
    children["route-info"] = route_info;

    yang_name = "local-route-area"; yang_parent_name = "local-route-areas";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::~LocalRouteArea()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route-area";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalRouteArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-info")
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
        else
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo>();
            route_info->parent = this;
            children["route-info"] = route_info;
        }
        return children.at("route-info");
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_children()
{
    if(children.find("route-info") == children.end())
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
    }

    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    children["route-fail-time"] = route_fail_time;

    route_update_time->parent = this;
    children["route-update-time"] = route_update_time;

    yang_name = "route-info"; yang_parent_name = "local-route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
        else
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime>();
            route_fail_time->parent = this;
            children["route-fail-time"] = route_fail_time;
        }
        return children.at("route-fail-time");
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
        else
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime>();
            route_update_time->parent = this;
            children["route-update-time"] = route_update_time;
        }
        return children.at("route-update-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_children()
{
    if(children.find("route-fail-time") == children.end())
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
    }

    if(children.find("route-update-time") == children.end())
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;
    children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;

    yang_name = "route-path"; yang_parent_name = "local-route-area";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        else
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath>();
            sr_microloop_avoidance_path->parent = this;
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
        return children.at("sr-microloop-avoidance-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_children()
{
    if(children.find("sr-microloop-avoidance-path") == children.end())
    {
        if(sr_microloop_avoidance_path != nullptr)
        {
            children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(std::move(c));
        children[segment_path] = microloop_repair.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children()
{
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children()
{
    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::RouteTable()
{
    yang_name = "route-table"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::~RouteTable()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-table";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteTable' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route>();
        c->parent = this;
        route.push_back(std::move(c));
        children[segment_path] = route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::get_children()
{
    for (auto const & c : route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo>())
{
    route_info->parent = this;
    children["route-info"] = route_info;

    yang_name = "route"; yang_parent_name = "route-table";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::~Route()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-info")
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
        else
        {
            route_info = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo>();
            route_info->parent = this;
            children["route-info"] = route_info;
        }
        return children.at("route-info");
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::get_children()
{
    if(children.find("route-info") == children.end())
    {
        if(route_info != nullptr)
        {
            children["route-info"] = route_info;
        }
    }

    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;
    children["route-fail-time"] = route_fail_time;

    route_update_time->parent = this;
    children["route-update-time"] = route_update_time;

    yang_name = "route-info"; yang_parent_name = "route";
}

Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

EntityPath Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
        else
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime>();
            route_fail_time->parent = this;
            children["route-fail-time"] = route_fail_time;
        }
        return children.at("route-fail-time");
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
        else
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime>();
            route_update_time->parent = this;
            children["route-update-time"] = route_update_time;
        }
        return children.at("route-update-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::get_children()
{
    if(children.find("route-fail-time") == children.end())
    {
        if(route_fail_time != nullptr)
        {
            children["route-fail-time"] = route_fail_time;
        }
    }

    if(children.find("route-update-time") == children.end())
    {
        if(route_update_time != nullptr)
        {
            children["route-update-time"] = route_update_time;
        }
    }

    return children;
}

void Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}


}
}

