#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_4_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_oper {


class Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched : public Entity
{
    public:
        NsrThdSched();
        ~NsrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_pulse_quant; //type: int32
        YLeaf nsr_events_in_q; //type: uint32
        YLeaf nsr_events_tx; //type: uint64
        YLeaf nsr_events_rx; //type: uint64
        YLeaf nsr_bad_pulses_rx; //type: uint64
        YLeaf nsr_good_pulses_rx; //type: uint64
        YLeaf nsr_pulses_tx; //type: uint64
        YLeaf nsr_pulse_tx_fails; //type: uint64

        class NsrPri; //type: Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri> > nsr_pri;


}; // Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched


class Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri : public Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_sched_pri; //type: uint32
        YLeaf nsr_sched_quant; //type: uint8
        YLeaf nsr_sched_remain_quant; //type: uint8
        YLeaf nsr_sched_evs_in_q; //type: uint16
        YLeaf nsr_sched_max_evs; //type: uint16
        YLeaf nsr_sched_peak_q_len; //type: uint16
        YLeaf nsr_sched_evs_qd; //type: uint64
        YLeaf nsr_sched_enq_fails; //type: uint64
        YLeaf nsr_sched_evs_deqd; //type: uint64



}; // Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri


class Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched : public Entity
{
    public:
        NsrRtrThdSched();
        ~NsrRtrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_pulse_quant; //type: int32
        YLeaf nsr_events_in_q; //type: uint32
        YLeaf nsr_events_tx; //type: uint64
        YLeaf nsr_events_rx; //type: uint64
        YLeaf nsr_bad_pulses_rx; //type: uint64
        YLeaf nsr_good_pulses_rx; //type: uint64
        YLeaf nsr_pulses_tx; //type: uint64
        YLeaf nsr_pulse_tx_fails; //type: uint64

        class NsrPri; //type: Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri> > nsr_pri;


}; // Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched


class Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri : public Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_sched_pri; //type: uint32
        YLeaf nsr_sched_quant; //type: uint8
        YLeaf nsr_sched_remain_quant; //type: uint8
        YLeaf nsr_sched_evs_in_q; //type: uint16
        YLeaf nsr_sched_max_evs; //type: uint16
        YLeaf nsr_sched_peak_q_len; //type: uint16
        YLeaf nsr_sched_evs_qd; //type: uint64
        YLeaf nsr_sched_enq_fails; //type: uint64
        YLeaf nsr_sched_evs_deqd; //type: uint64



}; // Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri


class Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats : public Entity
{
    public:
        RibThreadStats();
        ~RibThreadStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Internalwq; //type: Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq
        class Ribqueue; //type: Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq> internalwq;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue> > ribqueue;


}; // Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats


class Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq : public Entity
{
    public:
        Internalwq();
        ~Internalwq();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wq_thread_active; //type: boolean
        YLeaf wq_dqtime; //type: uint64
        YLeaf wqe_qtime; //type: uint64
        YLeaf wq_len_cur; //type: int32
        YLeaf wq_len_max; //type: int32
        YLeaf wq_total_queued; //type: uint32
        YLeaf wq_total_dequeued; //type: uint32
        YLeaf rib_version; //type: uint32
        YLeaf rib_pkts_sent; //type: uint32
        YLeaf rib_signals; //type: uint32
        YLeaf rib_send_errs; //type: uint32
        YLeaf rib_queue_errs; //type: uint32
        YLeaf rib_pfx_limit_errs; //type: uint32
        YLeaf rib_dequeue_errs; //type: uint32
        YLeaf rib_empty_batches; //type: uint32
        YLeaf rib_drop_before; //type: uint32
        YLeaf rib_drop_after; //type: uint32
        YLeaf rib_drop_conn; //type: uint32
        YLeaf rib_table_not_created; //type: uint32
        YLeaf priority_level; //type: string
        YLeaf rib_base_clock; //type: uint64

        class RibBaseTime; //type: Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime> rib_base_time;


}; // Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq


class Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime : public Entity
{
    public:
        RibBaseTime();
        ~RibBaseTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime


class Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue : public Entity
{
    public:
        Ribqueue();
        ~Ribqueue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf wq_thread_active; //type: boolean
        YLeaf wq_dqtime; //type: uint64
        YLeaf wqe_qtime; //type: uint64
        YLeaf wq_len_cur; //type: int32
        YLeaf wq_len_max; //type: int32
        YLeaf wq_total_queued; //type: uint32
        YLeaf wq_total_dequeued; //type: uint32
        YLeaf rib_version; //type: uint32
        YLeaf rib_pkts_sent; //type: uint32
        YLeaf rib_signals; //type: uint32
        YLeaf rib_send_errs; //type: uint32
        YLeaf rib_queue_errs; //type: uint32
        YLeaf rib_pfx_limit_errs; //type: uint32
        YLeaf rib_dequeue_errs; //type: uint32
        YLeaf rib_empty_batches; //type: uint32
        YLeaf rib_drop_before; //type: uint32
        YLeaf rib_drop_after; //type: uint32
        YLeaf rib_drop_conn; //type: uint32
        YLeaf rib_table_not_created; //type: uint32
        YLeaf priority_level; //type: string
        YLeaf rib_base_clock; //type: uint64

        class RibBaseTime; //type: Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime> rib_base_time;


}; // Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue


class Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime : public Entity
{
    public:
        RibBaseTime();
        ~RibBaseTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats : public Entity
{
    public:
        NsrPlStats();
        ~NsrPlStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NcdPri; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri> > ncd_pri;


}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri : public Entity
{
    public:
        NcdPri();
        ~NcdPri();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList num_sent; //type: list of  uint64
        YLeafList num_recv; //type: list of  uint64

        class NumSentDrop; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop
        class NumRecvDrop; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop> > num_recv_drop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop> > num_sent_drop;


}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop : public Entity
{
    public:
        NumSentDrop();
        ~NumSentDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList nsr_pl_send_drop_array; //type: list of  uint32



}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop : public Entity
{
    public:
        NumRecvDrop();
        ~NumRecvDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList nsr_pl_recv_drop_array; //type: list of  uint32



}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats : public Entity
{
    public:
        NsrStats();
        ~NsrStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_rev; //type: int32
        YLeaf nsr_fsm_state; //type: int32
        YLeaf nsr_version; //type: uint32
        YLeaf nsr_nodeid; //type: uint32
        YLeaf nsr_peer_version; //type: uint32
        YLeaf nsr_peer_nodeid; //type: uint32
        YLeaf nsr_mtu; //type: uint32
        YLeaf nsr_nbr_qad_qid; //type: uint32
        YLeaf nsr_lsa_qad_qid; //type: uint32
        YLeaf nsr_nbr_qad_mdata_count; //type: uint32
        YLeaf nsr_lsa_qad_mdata_count; //type: uint32
        YLeaf nsr_nbr_init_sync_pend_count; //type: int32
        YLeaf nsr_lsa_init_sync_pend_count; //type: int32
        YLeaf nsr_nbr_seq_no; //type: uint32
        YLeaf nsr_intf_seq_no; //type: uint32
        YLeaf nsr_tmr_quant; //type: int32
        YLeaf nsr_conn_to_active_attempts; //type: uint64
        YLeaf nsr_conn_to_active_fails; //type: uint64
        YLeaf nsr_conn_to_active_opens; //type: uint64
        YLeaf nsr_conn_to_active_closes; //type: uint64
        YLeaf nsr_conn_to_active_errors; //type: uint64

        class NsrThdSched; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched
        class NsrRtrThdSched; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched> nsr_rtr_thd_sched;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched> nsr_thd_sched;


}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched : public Entity
{
    public:
        NsrThdSched();
        ~NsrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_pulse_quant; //type: int32
        YLeaf nsr_events_in_q; //type: uint32
        YLeaf nsr_events_tx; //type: uint64
        YLeaf nsr_events_rx; //type: uint64
        YLeaf nsr_bad_pulses_rx; //type: uint64
        YLeaf nsr_good_pulses_rx; //type: uint64
        YLeaf nsr_pulses_tx; //type: uint64
        YLeaf nsr_pulse_tx_fails; //type: uint64

        class NsrPri; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri> > nsr_pri;


}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri : public Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_sched_pri; //type: uint32
        YLeaf nsr_sched_quant; //type: uint8
        YLeaf nsr_sched_remain_quant; //type: uint8
        YLeaf nsr_sched_evs_in_q; //type: uint16
        YLeaf nsr_sched_max_evs; //type: uint16
        YLeaf nsr_sched_peak_q_len; //type: uint16
        YLeaf nsr_sched_evs_qd; //type: uint64
        YLeaf nsr_sched_enq_fails; //type: uint64
        YLeaf nsr_sched_evs_deqd; //type: uint64



}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched : public Entity
{
    public:
        NsrRtrThdSched();
        ~NsrRtrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_pulse_quant; //type: int32
        YLeaf nsr_events_in_q; //type: uint32
        YLeaf nsr_events_tx; //type: uint64
        YLeaf nsr_events_rx; //type: uint64
        YLeaf nsr_bad_pulses_rx; //type: uint64
        YLeaf nsr_good_pulses_rx; //type: uint64
        YLeaf nsr_pulses_tx; //type: uint64
        YLeaf nsr_pulse_tx_fails; //type: uint64

        class NsrPri; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri> > nsr_pri;


}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri : public Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_sched_pri; //type: uint32
        YLeaf nsr_sched_quant; //type: uint8
        YLeaf nsr_sched_remain_quant; //type: uint8
        YLeaf nsr_sched_evs_in_q; //type: uint16
        YLeaf nsr_sched_max_evs; //type: uint16
        YLeaf nsr_sched_peak_q_len; //type: uint16
        YLeaf nsr_sched_evs_qd; //type: uint64
        YLeaf nsr_sched_enq_fails; //type: uint64
        YLeaf nsr_sched_evs_deqd; //type: uint64



}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri


class Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats : public Entity
{
    public:
        FrrStats();
        ~FrrStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fs_paths; //type: uint32
        YLeaf fs_paths_eligible; //type: uint32
        YLeaf fs_paths_protected; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats


class Ospf::Processes::Process::DefaultVrf::Statistics::TeStats : public Entity
{
    public:
        TeStats();
        ~TeStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_connected; //type: boolean
        YLeaf control_disconnects; //type: uint32
        YLeaf te_disconnects; //type: uint32
        YLeaf adj_gets; //type: uint32
        YLeaf link_floods; //type: uint32
        YLeaf link_fragment_floods; //type: uint32
        YLeaf lsp_gets; //type: uint32
        YLeaf tunnel_announces; //type: uint32
        YLeaf total_tunnels; //type: uint32
        YLeaf control_batch_reads; //type: uint32
        YLeaf control_batch_writes; //type: uint32
        YLeaf link_batch_reads; //type: uint32
        YLeaf link_batch_writes; //type: uint32
        YLeaf adj_changes; //type: uint32
        YLeaf fragment_deletes; //type: uint32
        YLeaf fragment_announces; //type: uint32
        YLeaf data_trans_completes; //type: uint32
        YLeaf pce_listen; //type: uint32
        YLeaf pce_stoplisten; //type: uint32
        YLeaf pce_flood; //type: uint32
        YLeaf pce_get; //type: uint32
        YLeaf pce_br_lookup; //type: uint32
        YLeaf pce_br_lkup_num_dests; //type: uint32
        YLeaf pce_br_resp_fails; //type: uint32
        YLeaf pce_node_announce_batches; //type: uint32
        YLeaf pce_node_delete_batches; //type: uint32
        YLeaf pce_num_node_announce; //type: uint32
        YLeaf pce_num_node_delete; //type: uint32
        YLeaf pce_node_send_fails; //type: uint32
        YLeaf te_sr_path_reg_idt_recvd; //type: boolean
        YLeaf te_sr_idt_sent; //type: boolean
        YLeaf sr_num_area_enabled; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::Statistics::TeStats


class Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats : public Entity
{
    public:
        ProtocolStats();
        ~ProtocolStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf inputs; //type: uint32
        YLeaf input_hello; //type: uint32
        YLeaf input_dbdes; //type: uint32
        YLeaf input_dbdes_lsa; //type: uint32
        YLeaf input_req; //type: uint32
        YLeaf input_req_lsa; //type: uint32
        YLeaf input_lsupd; //type: uint32
        YLeaf input_lsupd_lsa; //type: uint32
        YLeaf input_ack; //type: uint32
        YLeaf input_ack_lsa; //type: uint32
        YLeaf checksumerr; //type: uint32
        YLeaf input_autherr; //type: uint32
        YLeaf outputs; //type: uint32
        YLeaf output_hello; //type: uint32
        YLeaf output_dbdes; //type: uint32
        YLeaf output_dbdes_lsa; //type: uint32
        YLeaf output_req; //type: uint32
        YLeaf output_req_lsa; //type: uint32
        YLeaf output_lsupd; //type: uint32
        YLeaf output_lsupd_lsa; //type: uint32
        YLeaf output_ack; //type: uint32
        YLeaf output_ack_lsa; //type: uint32
        YLeaf output_autherr; //type: uint32
        YLeaf h_input_dbdes; //type: uint32
        YLeaf h_input_req; //type: uint32
        YLeaf h_input_lsupd; //type: uint32
        YLeaf h_input_ack; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats


class Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats : public Entity
{
    public:
        RawIoStats();
        ~RawIoStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_sent; //type: uint32
        YLeaf out_bytes_sent; //type: uint32
        YLeaf out_no_conn_discarded; //type: uint32
        YLeaf out_null_src_discarded; //type: uint32
        YLeaf out_no_pak_discarded; //type: uint32
        YLeaf out_ipv4_hdr_err_discarded; //type: uint32
        YLeaf out_send_pak_err_discarded; //type: uint32
        YLeaf in_rcv; //type: uint32
        YLeaf in_bytes_rcv; //type: uint32
        YLeaf in_short_msg_discarded; //type: uint32
        YLeaf in_no_mem_discarded; //type: uint32
        YLeaf in_raw_event; //type: uint32
        YLeaf disconnects; //type: uint32
        YLeaf in_standby_discarded; //type: uint32
        YLeaf nsr_not_ready_discarded; //type: uint32
        YLeaf raw_connected; //type: boolean
        YLeaf sl_raw_connected; //type: boolean



}; // Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats


class Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries : public Entity
{
    public:
        InterfaceStatsEntries();
        ~InterfaceStatsEntries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceStatsEntry; //type: Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry> > interface_stats_entry;


}; // Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries


class Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry : public Entity
{
    public:
        InterfaceStatsEntry();
        ~InterfaceStatsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf handle; //type: string
        YLeaf if_name_str; //type: string

        class IfEntry; //type: Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry> > if_entry;


}; // Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry


class Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry : public Entity
{
    public:
        IfEntry();
        ~IfEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf madj_intf; //type: boolean
        YLeaf area_id; //type: uint32
        YLeaf area_id_str; //type: string
        YLeafList if_stat; //type: list of  uint32



}; // Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation : public Entity
{
    public:
        AdjacencyInformation();
        ~AdjacencyInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbors; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors
        class Requests; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests
        class Retransmissions; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions
        class NeighborDetails; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails> neighbor_details;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests> requests;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions> retransmissions;


}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor> > neighbor;


}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_id; //type: string
        YLeaf neighbor_address_xr; //type: string
        YLeaf neighbor_interface_name; //type: string
        YLeaf neighbor_dr_priority; //type: uint8
        YLeaf neighbor_state; //type: NeighborStateEnum
        YLeaf dr_bdr_state; //type: DrBdrStateEnum
        YLeaf neighbor_dead_timer; //type: uint32
        YLeaf neighbor_up_time; //type: uint32
        YLeaf neighbor_madj_interface; //type: boolean

        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation> neighbor_bfd_information;


}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation : public Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8



}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests : public Entity
{
    public:
        Requests();
        ~Requests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Request; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request> > request;


}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf request_neighbor_id; //type: string
        YLeaf request_neighbor_address; //type: string
        YLeaf request_interface_name; //type: string

        class Request_; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_> > request;


}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_ : public Entity
{
    public:
        Request_();
        ~Request_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_lsa_type; //type: LsaEnum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_ls_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: uint32
        YLeaf header_lsa_checksum; //type: uint16



}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Requests::Request::Request_


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions : public Entity
{
    public:
        Retransmissions();
        ~Retransmissions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Retransmission; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission> > retransmission;


}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission : public Entity
{
    public:
        Retransmission();
        ~Retransmission();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf retransmission_neighbor_id; //type: string
        YLeaf retransmission_neighbor_ip_address; //type: string
        YLeaf retransmission_interface_name; //type: string
        YLeaf retransmission_timer; //type: uint32
        YLeaf retransmission_count; //type: uint32

        class RetransmissionAreaDb; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb> > retransmission_asdb;


}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb : public Entity
{
    public:
        RetransmissionAreaDb();
        ~RetransmissionAreaDb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_lsa_type; //type: LsaEnum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_ls_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: uint32
        YLeaf header_lsa_checksum; //type: uint16



}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb : public Entity
{
    public:
        RetransmissionAsdb();
        ~RetransmissionAsdb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf header_lsa_type; //type: LsaEnum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_ls_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: uint32
        YLeaf header_lsa_checksum; //type: uint16



}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails : public Entity
{
    public:
        NeighborDetails();
        ~NeighborDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborDetail; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail> > neighbor_detail;


}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail : public Entity
{
    public:
        NeighborDetail();
        ~NeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_area_id; //type: string
        YLeaf state_change_count; //type: uint16
        YLeaf neighbor_cost; //type: uint16
        YLeaf neighbor_filter; //type: boolean
        YLeaf neighbor_designated_router_address; //type: string
        YLeaf neighbor_backup_designated_router_address; //type: string
        YLeaf interface_type; //type: InterfaceEnum
        YLeaf poll_interval; //type: uint32
        YLeaf next_poll_interval; //type: uint32
        YLeaf neighbor_option; //type: uint8
        YLeaf pending_events; //type: uint16
        YLeaf neighbor_lls_option; //type: uint16
        YLeaf oob_resynchronization; //type: boolean
        YLeaf nsf_router_state; //type: NsfRtrEnum
        YLeaf last_oob_time; //type: uint32
        YLeaf lfa_interface; //type: string
        YLeaf lfa_next_hop; //type: string
        YLeaf lfa_neighbor_id; //type: string
        YLeaf lfa_neighbor_revision; //type: uint32
        YLeaf neighbor_ack_list_count; //type: uint32
        YLeaf neighbor_ack_list_high_watermark; //type: uint32
        YLeaf adjacency_sid_label; //type: uint32
        YLeaf adjacency_sid_protected; //type: boolean
        YLeaf adjacency_sid_unprotected_label; //type: uint32

        class NeighborSummary; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary
        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation
        class NeighborRetransmissionInformation; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation> neighbor_bfd_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation> neighbor_retransmission_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary> neighbor_summary;


}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary : public Entity
{
    public:
        NeighborSummary();
        ~NeighborSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf neighbor_address_xr; //type: string
        YLeaf neighbor_interface_name; //type: string
        YLeaf neighbor_dr_priority; //type: uint8
        YLeaf neighbor_state; //type: NeighborStateEnum
        YLeaf dr_bdr_state; //type: DrBdrStateEnum
        YLeaf neighbor_dead_timer; //type: uint32
        YLeaf neighbor_up_time; //type: uint32
        YLeaf neighbor_madj_interface; //type: boolean

        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation> neighbor_bfd_information;


}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation : public Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8



}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation : public Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8



}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation : public Entity
{
    public:
        NeighborRetransmissionInformation();
        ~NeighborRetransmissionInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dbd_retransmission_count; //type: uint32
        YLeaf dbd_retransmission_total_count; //type: uint32
        YLeaf area_flooding_index; //type: uint32
        YLeaf as_flood_index; //type: uint32
        YLeaf neighbor_retransmission_count; //type: uint32
        YLeaf number_of_retransmissions; //type: uint32
        YLeaf area_first_flood_information; //type: uint32
        YLeaf area_first_flood_information_index; //type: uint32
        YLeaf as_first_flood_information; //type: uint32
        YLeaf as_first_flood_information_index; //type: uint32
        YLeaf area_next_flood_information; //type: uint32
        YLeaf area_next_flood_information_index; //type: uint32
        YLeaf as_next_flood_information; //type: uint32
        YLeaf as_next_flood_information_index; //type: uint32
        YLeaf last_retransmission_length; //type: uint32
        YLeaf maximum_retransmission_length; //type: uint32
        YLeaf last_retransmission_time; //type: uint32
        YLeaf maximum_retransmission_time; //type: uint32
        YLeaf lsa_retransmission_timer; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation


class Ospf::Processes::Process::DefaultVrf::RouteInformation : public Entity
{
    public:
        RouteInformation();
        ~RouteInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupRoutes; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes
        class MulticastIntactRouteTable; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable
        class MulticastIntactBackupRoutes; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes
        class SummaryInformation; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation
        class ConnectedRoutes; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes
        class LocalRoutes; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes
        class RouteAreas; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas
        class RouteTable; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable
        class ExternalRoutes; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes> backup_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes> connected_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes> external_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes> local_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes> multicast_intact_backup_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable> multicast_intact_route_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas> route_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable> route_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation> summary_information;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes : public Entity
{
    public:
        BackupRoutes();
        ~BackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupRoute; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute> > backup_route;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute : public Entity
{
    public:
        BackupRoute();
        ~BackupRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath> > route_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf route_path_id; //type: uint16
        YLeaf lsa_type; //type: uint8

        class RouteBackupPath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath : public Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf backup_route_interface_name; //type: string
        YLeaf backup_route_next_hop_address; //type: string
        YLeaf backup_route_source; //type: string
        YLeaf backup_metric; //type: uint32
        YLeaf primary_path; //type: boolean
        YLeaf line_card_disjoint; //type: boolean
        YLeaf downstream; //type: boolean
        YLeaf node_protect; //type: boolean
        YLeaf srlg_disjoint; //type: boolean
        YLeaf backup_remote_lfa; //type: string
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf backup_tunnel_interface_name; //type: string

        class BackupRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable : public Entity
{
    public:
        MulticastIntactRouteTable();
        ~MulticastIntactRouteTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Route; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route> > route;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath> > route_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes : public Entity
{
    public:
        MulticastIntactBackupRoutes();
        ~MulticastIntactBackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MulticastIntactBackupRoute; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute> > multicast_intact_backup_route;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute : public Entity
{
    public:
        MulticastIntactBackupRoute();
        ~MulticastIntactBackupRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath> > route_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf route_path_id; //type: uint16
        YLeaf lsa_type; //type: uint8

        class RouteBackupPath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath : public Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf backup_route_interface_name; //type: string
        YLeaf backup_route_next_hop_address; //type: string
        YLeaf backup_route_source; //type: string
        YLeaf backup_metric; //type: uint32
        YLeaf primary_path; //type: boolean
        YLeaf line_card_disjoint; //type: boolean
        YLeaf downstream; //type: boolean
        YLeaf node_protect; //type: boolean
        YLeaf srlg_disjoint; //type: boolean
        YLeaf backup_remote_lfa; //type: string
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf backup_tunnel_interface_name; //type: string

        class BackupRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation : public Entity
{
    public:
        SummaryInformation();
        ~SummaryInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf failures; //type: uint32
        YLeaf failure_address; //type: string

        class FailureTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime
        class Common; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common> common;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime> failure_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation


class Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime : public Entity
{
    public:
        FailureTime();
        ~FailureTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf external_type1s; //type: uint32
        YLeaf external_type2s; //type: uint32
        YLeaf external_nssa_type1s; //type: uint32
        YLeaf external_nssa_type2s; //type: uint32
        YLeaf inter_areas; //type: uint32
        YLeaf intra_areas; //type: uint32
        YLeaf total; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes : public Entity
{
    public:
        ConnectedRoutes();
        ~ConnectedRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConnectedRoute; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute> > connected_route;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute : public Entity
{
    public:
        ConnectedRoute();
        ~ConnectedRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath> > route_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes : public Entity
{
    public:
        LocalRoutes();
        ~LocalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LocalRoute; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute> > local_route;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute : public Entity
{
    public:
        LocalRoute();
        ~LocalRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath> > route_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas : public Entity
{
    public:
        RouteAreas();
        ~RouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea> > route_area;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea : public Entity
{
    public:
        RouteArea();
        ~RouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: int32

        class MulticastIntactBackupRouteAreas; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas
        class ConnectedRouteAreas; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas
        class BackupRouteAreas; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas
        class RouteAreaInformations; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations
        class MulticastIntactRouteAreas; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas
        class SummaryAreaInformation; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation
        class LocalRouteAreas; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas> backup_route_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas> connected_route_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas> local_route_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas> multicast_intact_backup_route_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas> multicast_intact_route_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations> route_area_informations;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation> summary_area_information;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas : public Entity
{
    public:
        MulticastIntactBackupRouteAreas();
        ~MulticastIntactBackupRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MulticastIntactBackupRouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea> > multicast_intact_backup_route_area;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea : public Entity
{
    public:
        MulticastIntactBackupRouteArea();
        ~MulticastIntactBackupRouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath> > route_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf route_path_id; //type: uint16
        YLeaf lsa_type; //type: uint8

        class RouteBackupPath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath : public Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf backup_route_interface_name; //type: string
        YLeaf backup_route_next_hop_address; //type: string
        YLeaf backup_route_source; //type: string
        YLeaf backup_metric; //type: uint32
        YLeaf primary_path; //type: boolean
        YLeaf line_card_disjoint; //type: boolean
        YLeaf downstream; //type: boolean
        YLeaf node_protect; //type: boolean
        YLeaf srlg_disjoint; //type: boolean
        YLeaf backup_remote_lfa; //type: string
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf backup_tunnel_interface_name; //type: string

        class BackupRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas : public Entity
{
    public:
        ConnectedRouteAreas();
        ~ConnectedRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConnectedRouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea> > connected_route_area;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea : public Entity
{
    public:
        ConnectedRouteArea();
        ~ConnectedRouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath> > route_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas : public Entity
{
    public:
        BackupRouteAreas();
        ~BackupRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupRouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea> > backup_route_area;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea : public Entity
{
    public:
        BackupRouteArea();
        ~BackupRouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath> > route_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf route_path_id; //type: uint16
        YLeaf lsa_type; //type: uint8

        class RouteBackupPath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath : public Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf backup_route_interface_name; //type: string
        YLeaf backup_route_next_hop_address; //type: string
        YLeaf backup_route_source; //type: string
        YLeaf backup_metric; //type: uint32
        YLeaf primary_path; //type: boolean
        YLeaf line_card_disjoint; //type: boolean
        YLeaf downstream; //type: boolean
        YLeaf node_protect; //type: boolean
        YLeaf srlg_disjoint; //type: boolean
        YLeaf backup_remote_lfa; //type: string
        YLeaf backup_repair_list_size; //type: uint32
        YLeaf backup_tunnel_interface_name; //type: string

        class BackupRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair> > backup_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair : public Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations : public Entity
{
    public:
        RouteAreaInformations();
        ~RouteAreaInformations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouteAreaInformation; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation> > route_area_information;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation : public Entity
{
    public:
        RouteAreaInformation();
        ~RouteAreaInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath> > route_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas : public Entity
{
    public:
        MulticastIntactRouteAreas();
        ~MulticastIntactRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MulticastIntactRouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea> > multicast_intact_route_area;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea : public Entity
{
    public:
        MulticastIntactRouteArea();
        ~MulticastIntactRouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath> > route_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation : public Entity
{
    public:
        SummaryAreaInformation();
        ~SummaryAreaInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf failures; //type: uint32
        YLeaf failure_address; //type: string

        class FailureTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime
        class Common; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common> common;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime> failure_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime : public Entity
{
    public:
        FailureTime();
        ~FailureTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf external_type1s; //type: uint32
        YLeaf external_type2s; //type: uint32
        YLeaf external_nssa_type1s; //type: uint32
        YLeaf external_nssa_type2s; //type: uint32
        YLeaf inter_areas; //type: uint32
        YLeaf intra_areas; //type: uint32
        YLeaf total; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas : public Entity
{
    public:
        LocalRouteAreas();
        ~LocalRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LocalRouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea> > local_route_area;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea : public Entity
{
    public:
        LocalRouteArea();
        ~LocalRouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath> > route_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean

        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean

        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32



}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable : public Entity
{
    public:
        RouteTable();
        ~RouteTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Route; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route> > route;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean

        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath> > route_path;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16

        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime> route_update_time;


}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_4_ */

