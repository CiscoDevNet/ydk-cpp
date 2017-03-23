#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_25_
#define _CISCO_IOS_XR_MPLS_TE_OPER_25_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_24.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsTe::SignallingCounters::TailsCounters::TailsCounter : public Entity
{
    public:
        TailsCounter();
        ~TailsCounter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf lsp_id; //type: int32
        YLeaf tunnel_name; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics
        class S2LStatistic; //type: MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics> statistics;


}; // MplsTe::SignallingCounters::TailsCounters::TailsCounter


class MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::TailsCounters::TailsCounter::Statistics


class MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics> statistics;


}; // MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic


class MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics


class MplsTe::SignallingCounters::Signallings : public Entity
{
    public:
        Signallings();
        ~Signallings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Signalling; //type: MplsTe::SignallingCounters::Signallings::Signalling

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling> > signalling;


}; // MplsTe::SignallingCounters::Signallings


class MplsTe::SignallingCounters::Signallings::Signalling : public Entity
{
    public:
        Signalling();
        ~Signalling();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ctype; //type: CtypeEnum
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf p2mp_id; //type: int32
        YLeaf lsp_id; //type: int32
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: int32

        class TeSignallingFilterData; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData> te_signalling_filter_data;


}; // MplsTe::SignallingCounters::Signallings::Signalling


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData : public Entity
{
    public:
        TeSignallingFilterData();
        ~TeSignallingFilterData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf statistics_filter; //type: TeStatsSigFilterEnum

        class TeSignallingFilterVif; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif
        class TeSignallingFilterLsp; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp> te_signalling_filter_lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif> te_signalling_filter_vif;


}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif : public Entity
{
    public:
        TeSignallingFilterVif();
        ~TeSignallingFilterVif();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf tunnel_sig_name; //type: string
        YLeaf lsp_id; //type: uint16

        class Statistics; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics
        class DestinationStatistic; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic> > destination_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics> statistics;


}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic : public Entity
{
    public:
        DestinationStatistic();
        ~DestinationStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics
        class S2LStatistic; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics> statistics;


}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics> statistics;


}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp : public Entity
{
    public:
        TeSignallingFilterLsp();
        ~TeSignallingFilterLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics
        class S2LStatistic; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic> > s2l_statistic;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics> statistics;


}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic : public Entity
{
    public:
        S2LStatistic();
        ~S2LStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sub_group_originator; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf destination_address; //type: string

        class Statistics; //type: MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics> statistics;


}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic


class MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics


class MplsTe::SignallingCounters::SignallingSummary : public Entity
{
    public:
        SignallingSummary();
        ~SignallingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_event_unknown; //type: uint32
        YLeaf tx_path_create_event; //type: uint32
        YLeaf tx_path_change_event; //type: uint32
        YLeaf tx_path_delete_event; //type: uint32
        YLeaf tx_path_error_event; //type: uint32
        YLeaf tx_resv_create_event; //type: uint32
        YLeaf tx_resv_change_event; //type: uint32
        YLeaf tx_resv_delete_event; //type: uint32
        YLeaf tx_resv_error_event; //type: uint32
        YLeaf tx_path_reeval_query_event; //type: uint32
        YLeaf rx_event_unknown; //type: uint32
        YLeaf rx_path_create_event; //type: uint32
        YLeaf rx_path_change_event; //type: uint32
        YLeaf rx_path_delete_event; //type: uint32
        YLeaf rx_path_error_event; //type: uint32
        YLeaf rx_resv_create_event; //type: uint32
        YLeaf rx_resv_change_event; //type: uint32
        YLeaf rx_resv_delete_event; //type: uint32
        YLeaf rx_resv_error_event; //type: uint32
        YLeaf rx_path_reeval_query_event; //type: uint32
        YLeaf tx_backup_assign_event; //type: uint32
        YLeaf rx_backup_assign_err_event; //type: uint32
        YLeaf events_total_count; //type: uint32
        YLeaf events_count; //type: uint32



}; // MplsTe::SignallingCounters::SignallingSummary


class MplsTe::DiffServTeClasses : public Entity
{
    public:
        DiffServTeClasses();
        ~DiffServTeClasses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TeClass; //type: MplsTe::DiffServTeClasses::TeClass

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::DiffServTeClasses::TeClass> > te_class;


}; // MplsTe::DiffServTeClasses


class MplsTe::DiffServTeClasses::TeClass : public Entity
{
    public:
        TeClass();
        ~TeClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_number; //type: uint8
        YLeaf class_type; //type: uint8
        YLeaf priority; //type: uint8
        YLeaf class_status; //type: MplsTeDsteClassStatusEnum



}; // MplsTe::DiffServTeClasses::TeClass


class MplsTe::Issu : public Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Status; //type: MplsTe::Issu::Status
        class Detail; //type: MplsTe::Issu::Detail

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail> detail;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status> status;


}; // MplsTe::Issu


class MplsTe::Issu::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: TeProcRoleEnum

        class SyncStatusInformation; //type: MplsTe::Issu::Status::SyncStatusInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation> sync_status_information;


}; // MplsTe::Issu::Status


class MplsTe::Issu::Status::SyncStatusInformation : public Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_show_type; //type: TeSyncStatusShowEnum

        class SlaveSyncInformation; //type: MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;


}; // MplsTe::Issu::Status::SyncStatusInformation


class MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation : public Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf insync_tunnels; //type: uint32
        YLeaf insync_sub_ls_ps; //type: uint32
        YLeaf pending_tunnels; //type: uint32
        YLeaf pending_sub_ls_ps; //type: uint32

        class Idt; //type: MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;


}; // MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation


class MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CurrentIdtInfo; //type: MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;


}; // MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending : public Entity
{
    public:
        VifPending();
        ~VifPending();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf tunnel_name; //type: string



}; // MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending : public Entity
{
    public:
        S2LPending();
        ~S2LPending();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf signaled_name; //type: string
        YLeaf s2l_role; //type: MplsTeTunnelRoleEnum



}; // MplsTe::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation : public Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Idt; //type: MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt> idt;


}; // MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation


class MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CurrentIdtInfo; //type: MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;


}; // MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Issu::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: TeProcRoleEnum

        class SyncStatusInformation; //type: MplsTe::Issu::Detail::SyncStatusInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation> sync_status_information;


}; // MplsTe::Issu::Detail


class MplsTe::Issu::Detail::SyncStatusInformation : public Entity
{
    public:
        SyncStatusInformation();
        ~SyncStatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_show_type; //type: TeSyncStatusShowEnum

        class SlaveSyncInformation; //type: MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation
        class MasterSyncInformation; //type: MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation> master_sync_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation> slave_sync_information;


}; // MplsTe::Issu::Detail::SyncStatusInformation


class MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation : public Entity
{
    public:
        SlaveSyncInformation();
        ~SlaveSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf insync_tunnels; //type: uint32
        YLeaf insync_sub_ls_ps; //type: uint32
        YLeaf pending_tunnels; //type: uint32
        YLeaf pending_sub_ls_ps; //type: uint32

        class Idt; //type: MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt
        class VifPending; //type: MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending
        class S2LPending; //type: MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt> idt;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending> > s2l_pending;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending> > vif_pending;


}; // MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation


class MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CurrentIdtInfo; //type: MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;


}; // MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt


class MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus


class MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending : public Entity
{
    public:
        VifPending();
        ~VifPending();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf tunnel_name; //type: string



}; // MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending


class MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending : public Entity
{
    public:
        S2LPending();
        ~S2LPending();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pending_reason; //type: TeSyncPendingReasonEnum
        YLeaf signaled_name; //type: string
        YLeaf s2l_role; //type: MplsTeTunnelRoleEnum



}; // MplsTe::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending


class MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation : public Entity
{
    public:
        MasterSyncInformation();
        ~MasterSyncInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Idt; //type: MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt> idt;


}; // MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation


class MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt : public Entity
{
    public:
        Idt();
        ~Idt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CurrentIdtInfo; //type: MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo
        class PreviousIdtStatus; //type: MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo> current_idt_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus> previous_idt_status;


}; // MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt


class MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo : public Entity
{
    public:
        CurrentIdtInfo();
        ~CurrentIdtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo


class MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_ready_status; //type: boolean
        YLeaf reason; //type: TeSyncNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // MplsTe::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus


class MplsTe::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupTunnels; //type: MplsTe::FastReroute::BackupTunnels
        class ProtectedInterfaces; //type: MplsTe::FastReroute::ProtectedInterfaces
        class Protections; //type: MplsTe::FastReroute::Protections
        class Promotion; //type: MplsTe::FastReroute::Promotion

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FastReroute::BackupTunnels> backup_tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FastReroute::Promotion> promotion;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FastReroute::ProtectedInterfaces> protected_interfaces;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FastReroute::Protections> protections;


}; // MplsTe::FastReroute


class MplsTe::FastReroute::BackupTunnels : public Entity
{
    public:
        BackupTunnels();
        ~BackupTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupTunnel; //type: MplsTe::FastReroute::BackupTunnels::BackupTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FastReroute::BackupTunnels::BackupTunnel> > backup_tunnel;


}; // MplsTe::FastReroute::BackupTunnels


class MplsTe::FastReroute::BackupTunnels::BackupTunnel : public Entity
{
    public:
        BackupTunnel();
        ~BackupTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf interface_name; //type: string
        YLeaf backup_tunnel_id; //type: uint32
        YLeaf backup_tunnel_name_xr; //type: string
        YLeaf backup_status; //type: MplsTeBackupStatusEnum
        YLeaf backup_type; //type: MplsTeBackupEnum
        YLeaf backup_usage; //type: MplsTeBackupUsageEnum
        YLeaf prot_interface_autobackup_config; //type: AutoBackupProtectionEnum
        YLeaf prot_interface_srlg_config; //type: AutoBackupSrlgModeEnum
        YLeaf tunnel_attribute_set_name; //type: string
        YLeaf has_attribute_set; //type: boolean
        YLeaf is_attribute_set_in_db; //type: boolean
        YLeaf recreate_timer_is_running; //type: boolean
        YLeaf recreate_remaining_time; //type: uint32
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf general_status; //type: MplsTeTunnelStateEnum
        YLeaf connection_status; //type: MplsTeTunnelStateEnum
        YLeaf output_interface_name; //type: string
        YLeaf bandwidth_pool_type; //type: MplsTeBwPoolEnum
        YLeaf bandwidth_limit_type; //type: MplsTeBwLimitEnum
        YLeaf bandwidth; //type: uint32
        YLeaf tunnel_instance; //type: uint32
        YLeaf in_use_bandwidth; //type: uint32
        YLeaf soft_preempted_in_use_bandwidth; //type: uint32
        YLeaf ls_ps; //type: uint32
        YLeaf s2l_families; //type: uint32
        YLeaf s2_ls; //type: uint32
        YLeaf frr_active_ls_ps; //type: uint32
        YLeaf frr_active_soft_preempted_ls_ps; //type: uint32



}; // MplsTe::FastReroute::BackupTunnels::BackupTunnel


class MplsTe::FastReroute::ProtectedInterfaces : public Entity
{
    public:
        ProtectedInterfaces();
        ~ProtectedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtectedInterface; //type: MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface> > protected_interface;


}; // MplsTe::FastReroute::ProtectedInterfaces


class MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface : public Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf backup_tunnel_name; //type: string
        YLeaf backup_tunnel_id; //type: uint32
        YLeaf backup_tunnel_name_xr; //type: string
        YLeaf backup_status; //type: MplsTeBackupStatusEnum
        YLeaf backup_type; //type: MplsTeBackupEnum
        YLeaf backup_usage; //type: MplsTeBackupUsageEnum
        YLeaf prot_interface_autobackup_config; //type: AutoBackupProtectionEnum
        YLeaf prot_interface_srlg_config; //type: AutoBackupSrlgModeEnum
        YLeaf tunnel_attribute_set_name; //type: string
        YLeaf has_attribute_set; //type: boolean
        YLeaf is_attribute_set_in_db; //type: boolean
        YLeaf recreate_timer_is_running; //type: boolean
        YLeaf recreate_remaining_time; //type: uint32
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf general_status; //type: MplsTeTunnelStateEnum
        YLeaf connection_status; //type: MplsTeTunnelStateEnum
        YLeaf output_interface_name; //type: string
        YLeaf bandwidth_pool_type; //type: MplsTeBwPoolEnum
        YLeaf bandwidth_limit_type; //type: MplsTeBwLimitEnum
        YLeaf bandwidth; //type: uint32
        YLeaf tunnel_instance; //type: uint32
        YLeaf in_use_bandwidth; //type: uint32
        YLeaf soft_preempted_in_use_bandwidth; //type: uint32
        YLeaf ls_ps; //type: uint32
        YLeaf s2l_families; //type: uint32
        YLeaf s2_ls; //type: uint32
        YLeaf frr_active_ls_ps; //type: uint32
        YLeaf frr_active_soft_preempted_ls_ps; //type: uint32



}; // MplsTe::FastReroute::ProtectedInterfaces::ProtectedInterface


class MplsTe::FastReroute::Protections : public Entity
{
    public:
        Protections();
        ~Protections();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Protection; //type: MplsTe::FastReroute::Protections::Protection

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::FastReroute::Protections::Protection> > protection;


}; // MplsTe::FastReroute::Protections


class MplsTe::FastReroute::Protections::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf lsp_id; //type: int32
        YLeaf sub_group_id; //type: int32
        YLeaf sub_group_originator; //type: string
        YLeaf p2mp_id; //type: int32
        YLeaf session_type; //type: int32
        YLeaf source_address_xr; //type: string
        YLeaf destination_address_xr; //type: string
        YLeaf tunnel_id_xr; //type: uint32
        YLeaf extended_tunnel_id_xr; //type: string
        YLeaf tunnel_name; //type: string
        YLeaf tunnel_instance; //type: uint32
        YLeaf role; //type: MplsTeTunnelRoleEnum
        YLeaf admin_status; //type: MplsTeTunnelStateEnum
        YLeaf operation_status; //type: MplsTeTunnelStateEnum
        YLeaf is_signalled; //type: boolean
        YLeaf is_frr_requested; //type: boolean
        YLeaf outbound_frr_state; //type: MplsTeFrrStateEnum
        YLeaf inbound_frr_state; //type: MplsTeFrrStateEnum
        YLeaf output_interface_lsp; //type: string
        YLeaf output_label; //type: uint32
        YLeaf next_hop_address; //type: string
        YLeaf frr_output_tunnel_interface; //type: string
        YLeaf frr_output_label; //type: uint32
        YLeaf backup_status; //type: MplsTeBackupStatusEnum
        YLeaf bandwidth_pool_type; //type: MplsTeBwPoolEnum
        YLeaf bandwidth_limit_type; //type: MplsTeBwLimitEnum
        YLeaf original_input_interface; //type: string
        YLeaf input_label; //type: uint32
        YLeaf previous_hop_address; //type: string
        YLeaf backup_bandwidth; //type: uint32
        YLeaf frr_output_interface; //type: string
        YLeaf backup_next_hop_address; //type: string
        YLeaf lsp_bandwidth_type; //type: MplsTeBwPoolEnum
        YLeaf sharing_type; //type: MplsTeFrrSharingEnum
        YLeaf is_p2mp_tunnel; //type: boolean
        YLeaf sub_group_original_id; //type: string
        YLeaf sub_group_id_xr; //type: uint16
        YLeaf p2mp_id_xr; //type: uint32



}; // MplsTe::FastReroute::Protections::Protection


class MplsTe::FastReroute::Promotion : public Entity
{
    public:
        Promotion();
        ~Promotion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf promotion_period; //type: uint32
        YLeaf remaining_time; //type: uint32
        YLeaf is_configured; //type: boolean



}; // MplsTe::FastReroute::Promotion


class MplsTe::AttributeSets : public Entity
{
    public:
        AttributeSets();
        ~AttributeSets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AttributeSet; //type: MplsTe::AttributeSets::AttributeSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet> > attribute_set;


}; // MplsTe::AttributeSets


class MplsTe::AttributeSets::AttributeSet : public Entity
{
    public:
        AttributeSet();
        ~AttributeSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_set_type; //type: MplsTeAttrSetEnum
        YLeaf attribute_set_name; //type: string
        YLeaf tunnel_attribute_set_name; //type: string
        YLeaf tunnel_attribute_set_name_crc32; //type: uint32

        class AttributeSetUnion; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion> attribute_set_union;


}; // MplsTe::AttributeSets::AttributeSet


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion : public Entity
{
    public:
        AttributeSetUnion();
        ~AttributeSetUnion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_attribute_set_type; //type: TunnelAttributeSetEnum

        class AttributeSetPathOption; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption
        class AttributeSetAutobackup; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup
        class AttributeSetAutomesh; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh
        class AttributeSetXro; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro
        class AttributeSetP2Mpte; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte
        class AttributeSetApsPp; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp
        class AttributeSetP2PTe; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp> attribute_set_aps_pp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup> attribute_set_autobackup;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh> attribute_set_automesh;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte> attribute_set_p2mpte;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe> attribute_set_p2p_te;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption> attribute_set_path_option;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro> attribute_set_xro;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption : public Entity
{
    public:
        AttributeSetPathOption();
        ~AttributeSetPathOption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configured_bandwidth; //type: uint32
        YLeaf cost_limit; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf bandwidth_type; //type: MplsTeBwPoolEnum
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf is_cost_limit_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeaf generation; //type: uint32
        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_invalidation_action; //type: uint32
        YLeaf is_path_invalidation_timeout_configured; //type: boolean
        YLeaf is_path_invalidation_action_configured; //type: boolean
        YLeaf exclude_list_name; //type: string
        YLeaf is_exclude_list_name_configured; //type: boolean
        YLeaf is_pce_configured; //type: boolean
        YLeaf is_pce_disj_source_configured; //type: boolean
        YLeaf is_pce_disj_type_configured; //type: boolean
        YLeaf is_pce_disj_group_id_configured; //type: boolean
        YLeaf pcedp_source_address; //type: uint32
        YLeaf pcedp_type; //type: TePceDisjointEnum
        YLeaf pcedp_group_id; //type: uint32
        YLeaf is_pceb_dj_source_configured; //type: boolean
        YLeaf is_pcebd_group_id_configured; //type: boolean
        YLeaf pcebd_source_address; //type: uint32
        YLeaf pcebd_group_id; //type: uint32
        YLeaf is_bfd_reverse_pat_configured; //type: boolean
        YLeafList tunnel_id; //type: list of  uint16

        class Affinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity
        class BfdReversePath; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath
        class VersionInfo; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath> bfd_reverse_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo> > version_info;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_bits; //type: uint32
        YLeaf affinity_mask; //type: uint32

        class NamedAffinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity : public Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf constraint_type; //type: uint8
        YLeaf constraint_value; //type: uint32
        YLeaf forward_ref_value; //type: uint32
        YLeafList constraint_extended_value; //type: list of  uint32
        YLeafList extended_forward_ref_value; //type: list of  uint32



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath : public Entity
{
    public:
        BfdReversePath();
        ~BfdReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_type; //type: TeBfdReversePathEnum
        YLeaf binding_label; //type: uint32



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo : public Entity
{
    public:
        VersionInfo();
        ~VersionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf attribute_type; //type: string
        YLeaf generation; //type: uint32
        YLeaf is_default; //type: boolean



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup : public Entity
{
    public:
        AttributeSetAutobackup();
        ~AttributeSetAutobackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_signalled_name_configured; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf policy_class; //type: uint8
        YLeaf is_policyclass_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeaf record_route; //type: boolean
        YLeafList policy_class_entry; //type: list of  uint8
        YLeafList tunnel_id; //type: list of  uint16

        class SignalledName; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName
        class Affinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity
        class Logging; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging
        class ProtectedInterface; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging> logging;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface> > protected_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName> signalled_name;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName : public Entity
{
    public:
        SignalledName();
        ~SignalledName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf source_type; //type: TeSigNameAppendEnum
        YLeaf protected_interface_type; //type: TeSigNameAppendEnum
        YLeaf is_mp_addresses; //type: boolean



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_bits; //type: uint32
        YLeaf affinity_mask; //type: uint32

        class NamedAffinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity : public Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf constraint_type; //type: uint8
        YLeaf constraint_value; //type: uint32
        YLeaf forward_ref_value; //type: uint32
        YLeafList constraint_extended_value; //type: list of  uint32
        YLeafList extended_forward_ref_value; //type: list of  uint32



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_state; //type: boolean
        YLeaf s2l_state; //type: boolean
        YLeaf lsp_re_route; //type: boolean
        YLeaf lsp_re_opt; //type: boolean
        YLeaf lsp_insufficient_bw; //type: boolean
        YLeaf lsp_bandwidth_change; //type: boolean
        YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        YLeaf all_logging_enabled; //type: boolean



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface : public Entity
{
    public:
        ProtectedInterface();
        ~ProtectedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protected_interface; //type: string



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh : public Entity
{
    public:
        AttributeSetAutomesh();
        ~AttributeSetAutomesh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configured_bandwidth; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf policy_class; //type: uint8
        YLeaf is_policyclass_configured; //type: boolean
        YLeaf forward_class; //type: uint32
        YLeaf is_affinity_configured; //type: boolean
        YLeaf fast_reroute; //type: boolean
        YLeaf frr_node_protection; //type: boolean
        YLeaf frr_bandwidth_protection; //type: boolean
        YLeaf record_route; //type: boolean
        YLeaf auto_bandwidth_collect; //type: boolean
        YLeaf auto_route_announce; //type: boolean
        YLeaf soft_preemption_configured; //type: boolean
        YLeaf bandwidth; //type: uint32
        YLeaf load_share; //type: uint32
        YLeaf is_interface_bw_configured; //type: boolean
        YLeafList policy_class_entry; //type: list of  uint8
        YLeafList mesh_group_id; //type: list of  uint32
        YLeafList tunnel_id; //type: list of  uint16

        class Affinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity
        class Logging; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging> logging;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_bits; //type: uint32
        YLeaf affinity_mask; //type: uint32

        class NamedAffinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity : public Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf constraint_type; //type: uint8
        YLeaf constraint_value; //type: uint32
        YLeaf forward_ref_value; //type: uint32
        YLeafList constraint_extended_value; //type: list of  uint32
        YLeafList extended_forward_ref_value; //type: list of  uint32



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_state; //type: boolean
        YLeaf s2l_state; //type: boolean
        YLeaf lsp_re_route; //type: boolean
        YLeaf lsp_re_opt; //type: boolean
        YLeaf lsp_insufficient_bw; //type: boolean
        YLeaf lsp_bandwidth_change; //type: boolean
        YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        YLeaf all_logging_enabled; //type: boolean



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro : public Entity
{
    public:
        AttributeSetXro();
        ~AttributeSetXro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Xro; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro> xro;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro : public Entity
{
    public:
        Xro();
        ~Xro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mutual_diversity_flag; //type: boolean

        class XroSubobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject> > xro_subobject;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject : public Entity
{
    public:
        XroSubobject();
        ~XroSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeXroSubobjEnum

        class Ipv4Subobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject
        class Ipv6Subobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject
        class UnnumberedSubobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject
        class AsSubobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject
        class SrlgSubobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject
        class LspSubobject; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject> as_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject> ipv4_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject> ipv6_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject> lsp_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject> srlg_subobject;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject> unnumbered_subobject;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject : public Entity
{
    public:
        Ipv4Subobject();
        ~Ipv4Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject : public Entity
{
    public:
        Ipv6Subobject();
        ~Ipv6Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_len; //type: uint8
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject : public Entity
{
    public:
        UnnumberedSubobject();
        ~UnnumberedSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_router_id; //type: string
        YLeaf interface_id; //type: uint32
        YLeaf attribute; //type: TeXroAttributeEnum
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject : public Entity
{
    public:
        AsSubobject();
        ~AsSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_number; //type: uint16



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject : public Entity
{
    public:
        SrlgSubobject();
        ~SrlgSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srlg_id; //type: uint32
        YLeaf exclusion_type; //type: TeXroExclusionEnum



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject : public Entity
{
    public:
        LspSubobject();
        ~LspSubobject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ignore_lsp_id; //type: boolean
        YLeaf processing_node_exception; //type: boolean
        YLeaf penultimate_node_exception; //type: boolean
        YLeaf destination_node_exception; //type: boolean
        YLeaf exclusion_type; //type: TeXroExclusionEnum

        class Fec; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec> fec;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec : public Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string

        class FecDestinationInfo; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo> fec_destination_info;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte : public Entity
{
    public:
        AttributeSetP2Mpte();
        ~AttributeSetP2Mpte();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_reroute; //type: boolean
        YLeaf frr_bandwidth_protection; //type: boolean
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf is_priority_configured; //type: boolean
        YLeaf configured_bandwidth; //type: uint32
        YLeaf dste_class_type; //type: uint8
        YLeaf is_bandwidth_configured; //type: boolean
        YLeaf is_affinity_configured; //type: boolean
        YLeafList tunnel_id; //type: list of  uint16

        class Affinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity> affinity;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_bits; //type: uint32
        YLeaf affinity_mask; //type: uint32

        class NamedAffinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity : public Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf constraint_type; //type: uint8
        YLeaf constraint_value; //type: uint32
        YLeaf forward_ref_value; //type: uint32
        YLeafList constraint_extended_value; //type: list of  uint32
        YLeafList extended_forward_ref_value; //type: list of  uint32



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp : public Entity
{
    public:
        AttributeSetApsPp();
        ~AttributeSetApsPp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf snc_mode; //type: TeApsSncModeEnum
        YLeaf tcm_id; //type: uint32
        YLeaf protection_type; //type: TeProtectEnum
        YLeaf protection_mode; //type: TePnrRevertOptionsEnum
        YLeaf wait_to_restore_time; //type: uint32
        YLeaf hold_off_time; //type: uint32
        YLeaf path_prot_profile_type; //type: TePathProtProfileEnum
        YLeaf restoration_style; //type: TeRestorationStyleEnum

        class RevertSchedule; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule> revert_schedule;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule : public Entity
{
    public:
        RevertSchedule();
        ~RevertSchedule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf schedulename; //type: string
        YLeaf schedule_date; //type: uint32
        YLeaf schedule_frequency; //type: TeSchFreqEnum
        YLeaf duration; //type: uint32
        YLeaf max_tries; //type: uint32



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe : public Entity
{
    public:
        AttributeSetP2PTe();
        ~AttributeSetP2PTe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_affinity_configured; //type: boolean
        YLeaf path_selection_segment_routing_adjacency_protection; //type: TeS2LSrPathSelectionEnum
        YLeaf is_path_selection_segment_routing_adjacency_protection_configured; //type: boolean
        YLeaf path_invalidation_timeout; //type: uint32
        YLeaf path_selection_invalidation_action; //type: TePathInvalActionEnum
        YLeaf is_path_invalidation_timeout_configured; //type: boolean
        YLeaf is_path_invalidation_action_configured; //type: boolean
        YLeaf path_selection_metric; //type: MplsTeMetricEnum
        YLeaf is_path_selection_metric_configured; //type: boolean
        YLeaf path_selection_segment_routing_margin; //type: uint32
        YLeaf is_path_selection_segment_routing_margin_relative; //type: boolean
        YLeaf is_path_selection_segment_routing_margin_configured; //type: boolean
        YLeaf path_selection_segment_routing_segment_limit; //type: uint32
        YLeaf is_path_selection_segment_routing_segment_limit_configured; //type: boolean
        YLeaf is_path_select_configured; //type: boolean
        YLeaf is_prepend_list_configured; //type: boolean
        YLeaf is_pce_configured; //type: boolean
        YLeaf is_pce_disj_source_configured; //type: boolean
        YLeaf is_pce_disj_type_configured; //type: boolean
        YLeaf is_pce_disj_group_id_configured; //type: boolean
        YLeaf pcedp_source_address; //type: uint32
        YLeaf pcedp_type; //type: TePceDisjointEnum
        YLeaf pcedp_group_id; //type: uint32
        YLeaf is_pceb_dj_source_configured; //type: boolean
        YLeaf is_pcebd_group_id_configured; //type: boolean
        YLeaf pcebd_source_address; //type: uint32
        YLeaf pcebd_group_id; //type: uint32
        YLeafList tunnel_id; //type: list of  uint16

        class Affinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity
        class Logging; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging
        class PrependList; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList> prepend_list;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_bits; //type: uint32
        YLeaf affinity_mask; //type: uint32

        class NamedAffinity; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity> > named_affinity;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity : public Entity
{
    public:
        NamedAffinity();
        ~NamedAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf constraint_type; //type: uint8
        YLeaf constraint_value; //type: uint32
        YLeaf forward_ref_value; //type: uint32
        YLeafList constraint_extended_value; //type: list of  uint32
        YLeafList extended_forward_ref_value; //type: list of  uint32



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_state; //type: boolean
        YLeaf s2l_state; //type: boolean
        YLeaf lsp_re_route; //type: boolean
        YLeaf lsp_re_opt; //type: boolean
        YLeaf lsp_insufficient_bw; //type: boolean
        YLeaf lsp_bandwidth_change; //type: boolean
        YLeaf lsp_pcalc_failure_logging_enabled; //type: boolean
        YLeaf all_logging_enabled; //type: boolean



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList : public Entity
{
    public:
        PrependList();
        ~PrependList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrependEntry; //type: MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry> > prepend_entry;


}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList


class MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry : public Entity
{
    public:
        PrependEntry();
        ~PrependEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeAttributeSetSrPrependEnum
        YLeaf index_; //type: uint32
        YLeaf next_label; //type: uint32



}; // MplsTe::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry


class MplsTe::IgpAreaBriefs : public Entity
{
    public:
        IgpAreaBriefs();
        ~IgpAreaBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IgpAreaBrief; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief> > igp_area_brief;


}; // MplsTe::IgpAreaBriefs


class MplsTe::IgpAreaBriefs::IgpAreaBrief : public Entity
{
    public:
        IgpAreaBrief();
        ~IgpAreaBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: MplsTeIgpProtocolEnum
        YLeaf process_tag; //type: string
        YLeaf igp_type; //type: IgpProtocolEnum
        YLeaf instance_name; //type: string
        YLeaf igp_system_id; //type: string
        YLeaf configured_te_router_id; //type: string
        YLeaf global_router_id; //type: string
        YLeaf globall_router_id_optical; //type: string
        YLeaf in_use_te_router_id; //type: string
        YLeaf is_connection_up; //type: boolean
        YLeaf connection_up_count; //type: uint32
        YLeaf connection_down_count; //type: uint32
        YLeafList secondary_router_id; //type: list of  string

        class Area; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief::Area

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief::Area> > area;


}; // MplsTe::IgpAreaBriefs::IgpAreaBrief


class MplsTe::IgpAreaBriefs::IgpAreaBrief::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_index; //type: uint32
        YLeaf area_number; //type: uint32
        YLeaf area_format; //type: IgpOspfAreaFormatEnum
        YLeaf is_config_ready; //type: boolean

        class ActiveData; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData> active_data;


}; // MplsTe::IgpAreaBriefs::IgpAreaBrief::Area


class MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData : public Entity
{
    public:
        ActiveData();
        ~ActiveData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interfaces_count; //type: uint32
        YLeaf link_idt_received; //type: boolean
        YLeaf topology_idt_received; //type: boolean
        YLeaf sr_strict; //type: boolean
        YLeaf p2p_heads_count; //type: uint32
        YLeaf p2p_autoroute_announced_count; //type: uint32
        YLeaf p2p_forwarding_adjacency_count; //type: uint32
        YLeaf p2mp_destination_count; //type: uint32
        YLeaf tunnel_loose_hops; //type: uint32

        class AreaStatistics; //type: MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics> area_statistics;


}; // MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData


class MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics : public Entity
{
    public:
        AreaStatistics();
        ~AreaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_adjacency_request_messages; //type: uint32
        YLeaf area_adjacency_announce_messages; //type: uint32
        YLeaf area_flood_messages; //type: uint32
        YLeaf area_lsa_announce_messages; //type: uint32
        YLeaf area_lsa_fragment_announce_messages; //type: uint32
        YLeaf area_lsa_delete_messages; //type: uint32
        YLeaf area_lsa_fragment_delete_messages; //type: uint32
        YLeaf area_tunnel_announce_messages; //type: uint32



}; // MplsTe::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics


class MplsTe::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelFlexLsps; //type: MplsTe::Tunnels::TunnelFlexLsps
        class TunnelAutoBandwidths; //type: MplsTe::Tunnels::TunnelAutoBandwidths
        class Summary; //type: MplsTe::Tunnels::Summary
        class TunnelPathProtections; //type: MplsTe::Tunnels::TunnelPathProtections

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelAutoBandwidths> tunnel_auto_bandwidths;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps> tunnel_flex_lsps;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelPathProtections> tunnel_path_protections;


}; // MplsTe::Tunnels


class MplsTe::Tunnels::TunnelFlexLsps : public Entity
{
    public:
        TunnelFlexLsps();
        ~TunnelFlexLsps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelFlexLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp> > tunnel_flex_lsp;


}; // MplsTe::Tunnels::TunnelFlexLsps


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp : public Entity
{
    public:
        TunnelFlexLsp();
        ~TunnelFlexLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ctype; //type: CtypeEnum
        YLeaf tunnel_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf is_tunnel_up; //type: boolean
        YLeaf tun_id; //type: uint16
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf extended_tunnel_id; //type: string

        class WorkingLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp
        class ProtectLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp> protect_lsp;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp> working_lsp;


}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp : public Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_operational; //type: boolean
        YLeaf lsp_uptime; //type: uint32
        YLeaf path_protection_lsp_id; //type: uint32
        YLeaf lsp_mode; //type: MplsTeLspModeEnum
        YLeaf lsp_local_label; //type: uint32
        YLeaf lsp_output_interface; //type: string
        YLeaf lsp_output_label; //type: uint32
        YLeaf lsp_state; //type: MplsTeTunnelStateEnum

        class FlexInfo; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo
        class Association; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association
        class Protection; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection
        class ReverseLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp
        class LspHop; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association> association;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo> flex_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop> > lsp_hop;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection> protection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp> reverse_lsp;


}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo : public Entity
{
    public:
        FlexInfo();
        ~FlexInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry_exists; //type: boolean
        YLeaf in_label; //type: uint32
        YLeaf bfd_created; //type: boolean
        YLeaf bfd_up; //type: boolean
        YLeaf oam_created; //type: boolean
        YLeaf bfd_next_hop; //type: string
        YLeaf bfd_tun_ifh; //type: string
        YLeaf bfd_out_ifh; //type: string
        YLeaf bfd_int_label; //type: uint32
        YLeaf bfd_egress_label; //type: uint32
        YLeaf fault_ldi_lockout; //type: boolean
        YLeaf fault_ldi; //type: boolean
        YLeaf fault_lkr; //type: boolean
        YLeaf fault_ais; //type: boolean
        YLeaf fault_time; //type: uint32

        class FlexFec; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec> flex_fec;


}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec : public Entity
{
    public:
        FlexFec();
        ~FlexFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_fec_subgroup_id; //type: uint16
        YLeaf s2l_fec_lsp_id; //type: uint16
        YLeaf s2l_fec_tunnel_id; //type: uint16
        YLeaf s2l_fec_extended_tunnel_id; //type: string
        YLeaf s2l_fec_source; //type: string
        YLeaf s2l_fec_dest; //type: string
        YLeaf s2l_fec_p2mp_id; //type: uint32
        YLeaf s2l_fec_subgroup_originator; //type: string
        YLeaf s2l_fec_ctype; //type: MplsLibCEnum
        YLeaf s2l_fec_vrf; //type: string



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo::FlexFec


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association : public Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_association_type; //type: uint16
        YLeaf s2l_association_tie_role; //type: TeAssociationTieRoleEnum
        YLeaf s2l_association_id; //type: uint16
        YLeaf s2l_association_source; //type: string
        YLeaf s2l_global_source; //type: uint32
        YLeafList s2l_extended_id; //type: list of  uint32



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_secondary; //type: boolean
        YLeaf s2l_protecting; //type: boolean
        YLeaf s2l_notification; //type: boolean
        YLeaf s2l_operational; //type: boolean
        YLeaf enhanced; //type: boolean
        YLeaf ded1_plus1; //type: boolean
        YLeaf ded1_to1; //type: boolean
        YLeaf shared; //type: boolean
        YLeaf link_unprotected; //type: boolean
        YLeaf extra_traffic; //type: boolean
        YLeaf any; //type: boolean
        YLeaf rerouting; //type: boolean
        YLeaf rerouting_no_et; //type: boolean
        YLeaf one_to_n_protection_et; //type: boolean
        YLeaf one_plus_one_uni; //type: boolean
        YLeaf one_plus_one_bi; //type: boolean
        YLeaf lsp_unprotected; //type: boolean



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp : public Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reverse_lsp_present; //type: boolean
        YLeaf reverse_lsp_connected; //type: boolean

        class ReverseLspFec; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec
        class Association; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association
        class Protection; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association> association;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection> protection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec> reverse_lsp_fec;


}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec : public Entity
{
    public:
        ReverseLspFec();
        ~ReverseLspFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string

        class FecDestinationInfo; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo> fec_destination_info;


}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association : public Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_association_type; //type: uint16
        YLeaf s2l_association_tie_role; //type: TeAssociationTieRoleEnum
        YLeaf s2l_association_id; //type: uint16
        YLeaf s2l_association_source; //type: string
        YLeaf s2l_global_source; //type: uint32
        YLeafList s2l_extended_id; //type: list of  uint32



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Association


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_secondary; //type: boolean
        YLeaf s2l_protecting; //type: boolean
        YLeaf s2l_notification; //type: boolean
        YLeaf s2l_operational; //type: boolean
        YLeaf enhanced; //type: boolean
        YLeaf ded1_plus1; //type: boolean
        YLeaf ded1_to1; //type: boolean
        YLeaf shared; //type: boolean
        YLeaf link_unprotected; //type: boolean
        YLeaf extra_traffic; //type: boolean
        YLeaf any; //type: boolean
        YLeaf rerouting; //type: boolean
        YLeaf rerouting_no_et; //type: boolean
        YLeaf one_to_n_protection_et; //type: boolean
        YLeaf one_plus_one_uni; //type: boolean
        YLeaf one_plus_one_bi; //type: boolean
        YLeaf lsp_unprotected; //type: boolean



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp::Protection


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop : public Entity
{
    public:
        LspHop();
        ~LspHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject : public Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_address; //type: string
        YLeaf prefix_length; //type: uint8



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::Ipv4EroSubObject


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject : public Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_interface_id; //type: uint32
        YLeaf ero_router_id; //type: string
        YLeaf status; //type: RsvpMgmtEroSubobjStatusEnum



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop::UnnumberedEroSubObject


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp : public Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_operational; //type: boolean
        YLeaf lsp_uptime; //type: uint32
        YLeaf path_protection_lsp_id; //type: uint32
        YLeaf lsp_mode; //type: MplsTeLspModeEnum
        YLeaf lsp_local_label; //type: uint32
        YLeaf lsp_output_interface; //type: string
        YLeaf lsp_output_label; //type: uint32
        YLeaf lsp_state; //type: MplsTeTunnelStateEnum

        class FlexInfo; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo
        class Association; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association
        class Protection; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection
        class ReverseLsp; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp
        class LspHop; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association> association;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo> flex_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop> > lsp_hop;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection> protection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp> reverse_lsp;


}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo : public Entity
{
    public:
        FlexInfo();
        ~FlexInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry_exists; //type: boolean
        YLeaf in_label; //type: uint32
        YLeaf bfd_created; //type: boolean
        YLeaf bfd_up; //type: boolean
        YLeaf oam_created; //type: boolean
        YLeaf bfd_next_hop; //type: string
        YLeaf bfd_tun_ifh; //type: string
        YLeaf bfd_out_ifh; //type: string
        YLeaf bfd_int_label; //type: uint32
        YLeaf bfd_egress_label; //type: uint32
        YLeaf fault_ldi_lockout; //type: boolean
        YLeaf fault_ldi; //type: boolean
        YLeaf fault_lkr; //type: boolean
        YLeaf fault_ais; //type: boolean
        YLeaf fault_time; //type: uint32

        class FlexFec; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec> flex_fec;


}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec : public Entity
{
    public:
        FlexFec();
        ~FlexFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_fec_subgroup_id; //type: uint16
        YLeaf s2l_fec_lsp_id; //type: uint16
        YLeaf s2l_fec_tunnel_id; //type: uint16
        YLeaf s2l_fec_extended_tunnel_id; //type: string
        YLeaf s2l_fec_source; //type: string
        YLeaf s2l_fec_dest; //type: string
        YLeaf s2l_fec_p2mp_id; //type: uint32
        YLeaf s2l_fec_subgroup_originator; //type: string
        YLeaf s2l_fec_ctype; //type: MplsLibCEnum
        YLeaf s2l_fec_vrf; //type: string



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::FlexInfo::FlexFec


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association : public Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_association_type; //type: uint16
        YLeaf s2l_association_tie_role; //type: TeAssociationTieRoleEnum
        YLeaf s2l_association_id; //type: uint16
        YLeaf s2l_association_source; //type: string
        YLeaf s2l_global_source; //type: uint32
        YLeafList s2l_extended_id; //type: list of  uint32



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Association


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_secondary; //type: boolean
        YLeaf s2l_protecting; //type: boolean
        YLeaf s2l_notification; //type: boolean
        YLeaf s2l_operational; //type: boolean
        YLeaf enhanced; //type: boolean
        YLeaf ded1_plus1; //type: boolean
        YLeaf ded1_to1; //type: boolean
        YLeaf shared; //type: boolean
        YLeaf link_unprotected; //type: boolean
        YLeaf extra_traffic; //type: boolean
        YLeaf any; //type: boolean
        YLeaf rerouting; //type: boolean
        YLeaf rerouting_no_et; //type: boolean
        YLeaf one_to_n_protection_et; //type: boolean
        YLeaf one_plus_one_uni; //type: boolean
        YLeaf one_plus_one_bi; //type: boolean
        YLeaf lsp_unprotected; //type: boolean



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::Protection


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp : public Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reverse_lsp_present; //type: boolean
        YLeaf reverse_lsp_connected; //type: boolean

        class ReverseLspFec; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec
        class Association; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association
        class Protection; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association> association;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection> protection;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec> reverse_lsp_fec;


}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec : public Entity
{
    public:
        ReverseLspFec();
        ~ReverseLspFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_lsp_id; //type: uint16
        YLeaf fec_tunnel_id; //type: uint16
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_vrf; //type: string

        class FecDestinationInfo; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo> fec_destination_info;


}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo : public Entity
{
    public:
        FecDestinationInfo();
        ~FecDestinationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_ctype; //type: MplsLibCEnum
        YLeaf p2p_lsp_destination; //type: string
        YLeaf fec_destination_p2mp_id; //type: uint32



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::ReverseLspFec::FecDestinationInfo


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association : public Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_association_type; //type: uint16
        YLeaf s2l_association_tie_role; //type: TeAssociationTieRoleEnum
        YLeaf s2l_association_id; //type: uint16
        YLeaf s2l_association_source; //type: string
        YLeaf s2l_global_source; //type: uint32
        YLeafList s2l_extended_id; //type: list of  uint32



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Association


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_secondary; //type: boolean
        YLeaf s2l_protecting; //type: boolean
        YLeaf s2l_notification; //type: boolean
        YLeaf s2l_operational; //type: boolean
        YLeaf enhanced; //type: boolean
        YLeaf ded1_plus1; //type: boolean
        YLeaf ded1_to1; //type: boolean
        YLeaf shared; //type: boolean
        YLeaf link_unprotected; //type: boolean
        YLeaf extra_traffic; //type: boolean
        YLeaf any; //type: boolean
        YLeaf rerouting; //type: boolean
        YLeaf rerouting_no_et; //type: boolean
        YLeaf one_to_n_protection_et; //type: boolean
        YLeaf one_plus_one_uni; //type: boolean
        YLeaf one_plus_one_bi; //type: boolean
        YLeaf lsp_unprotected; //type: boolean



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::ReverseLsp::Protection


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop : public Entity
{
    public:
        LspHop();
        ~LspHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject : public Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_address; //type: string
        YLeaf prefix_length; //type: uint8



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::Ipv4EroSubObject


class MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject : public Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_interface_id; //type: uint32
        YLeaf ero_router_id; //type: string
        YLeaf status; //type: RsvpMgmtEroSubobjStatusEnum



}; // MplsTe::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp::LspHop::UnnumberedEroSubObject


class MplsTe::Tunnels::TunnelAutoBandwidths : public Entity
{
    public:
        TunnelAutoBandwidths();
        ~TunnelAutoBandwidths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TunnelAutoBandwidth; //type: MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth> > tunnel_auto_bandwidth;


}; // MplsTe::Tunnels::TunnelAutoBandwidths


class MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth : public Entity
{
    public:
        TunnelAutoBandwidth();
        ~TunnelAutoBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf tunnel_name_xr; //type: string
        YLeaf signaled_name; //type: string
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf bandwidth_applications; //type: uint32
        YLeaf last_bandwidth_applied; //type: uint32
        YLeaf tunnel_requested_bandwidth; //type: uint32
        YLeaf signalled_bandwidth; //type: uint32
        YLeaf highest_bandwidth; //type: uint32
        YLeaf last_sample_bandwidth; //type: uint32
        YLeaf samples_collected; //type: uint32
        YLeaf time_left_application; //type: uint32

        class AutoBandwidthStatus; //type: MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus> auto_bandwidth_status;


}; // MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth


class MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus : public Entity
{
    public:
        AutoBandwidthStatus();
        ~AutoBandwidthStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_auto_bandwidth_enabled; //type: boolean
        YLeaf reactivation_time; //type: uint32



}; // MplsTe::Tunnels::TunnelAutoBandwidths::TunnelAutoBandwidth::AutoBandwidthStatus


class MplsTe::Tunnels::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pcalc_tie_breaker_type; //type: TePathSelectionTiebreakerEnum
        YLeaf pcalc_tiebreaker; //type: uint32
        YLeaf tiebreaker_qualifier; //type: MplsTeMetricQualifierEnum
        YLeaf te_process_status; //type: MplsTeTunnelsProcessStatusEnum
        YLeaf is_rsvp_process_enabled; //type: boolean
        YLeaf is_forwarding_enabled; //type: boolean
        YLeaf activated_heads; //type: uint32
        YLeaf deactivated_heads; //type: uint32
        YLeaf recovered_heads; //type: uint32
        YLeaf is_periodic_reoptimization_on; //type: boolean
        YLeaf reoptimization_period; //type: uint32
        YLeaf next_reoptimization_timer; //type: uint32
        YLeaf auto_bandwidth_tunnels; //type: uint32
        YLeaf auto_bandwidth_collection_period; //type: uint32
        YLeaf is_promotion_on; //type: boolean
        YLeaf promotion_period; //type: uint32
        YLeaf next_promotion_timer; //type: uint32
        YLeaf tunnel_check_period; //type: uint32
        YLeaf next_check_time; //type: uint32
        YLeaf tunnel_verify_period; //type: uint32
        YLeaf next_verify_timer; //type: uint32
        YLeaf frr_head_tunnels; //type: uint32
        YLeaf protected_head_tunnels; //type: uint32
        YLeaf rerouted_head_tunnels; //type: uint32
        YLeaf frr_mid_point_tunnels; //type: uint32
        YLeaf protected_mid_point_tunnels; //type: uint32
        YLeaf rerouted_mid_point_tunnels; //type: uint32
        YLeaf link_protected_tunnels; //type: uint32
        YLeaf node_protected_tunnels; //type: uint32
        YLeaf bw_protected_tunnels; //type: uint32
        YLeaf frr_p2p_head_tunnels; //type: uint32
        YLeaf protected_p2p_head_tunnels; //type: uint32
        YLeaf rerouted_p2p_head_tunnels; //type: uint32
        YLeaf frr_p2p_mid_point_tunnels; //type: uint32
        YLeaf protected_p2p_mid_point_tunnels; //type: uint32
        YLeaf rerouted_p2p_mid_point_tunnels; //type: uint32
        YLeaf link_protected_p2p_tunnels; //type: uint32
        YLeaf node_protected_p2p_tunnels; //type: uint32
        YLeaf bw_protected_p2p_tunnels; //type: uint32
        YLeaf backup_tunnels; //type: uint32
        YLeaf backups_assigned; //type: uint32
        YLeaf frr_protected_interfaces; //type: uint32
        YLeaf rerouted_interfaces; //type: uint32
        YLeaf p2p_head_tunnels; //type: uint32
        YLeaf up_p2p_head_tunnels; //type: uint32
        YLeaf dynamic_up_p2p_head_tunnels; //type: uint32
        YLeaf frr_config_p2p_head_tunnels; //type: uint32
        YLeaf p2p_head_destinations; //type: uint32
        YLeaf p2p_head_destinations_up; //type: uint32
        YLeaf bw_protected_p2p_s2_ls; //type: uint32
        YLeaf link_protected_p2p_s2_ls; //type: uint32
        YLeaf up_p2p_head_s2_ls; //type: uint32
        YLeaf proceeding_p2p_head_s2_ls; //type: uint32
        YLeaf recovering_p2p_head_s2_ls; //type: uint32
        YLeaf frr_p2p_head_s2_ls; //type: uint32
        YLeaf protected_p2p_head_s2_ls; //type: uint32
        YLeaf rerouted_p2p_head_s2_ls; //type: uint32
        YLeaf p2p_mid_point_s2_ls; //type: uint32
        YLeaf up_p2p_mid_point_s2_ls; //type: uint32
        YLeaf proceeding_p2p_mid_point_s2_ls; //type: uint32
        YLeaf frr_p2p_mid_point_s2_ls; //type: uint32
        YLeaf protected_p2p_mid_point_s2_ls; //type: uint32
        YLeaf rerouted_p2p_mid_point_s2_ls; //type: uint32
        YLeaf p2p_tail_s2_ls; //type: uint32
        YLeaf up_p2p_tail_s2_ls; //type: uint32
        YLeaf p2p_tail_tunnels; //type: uint32
        YLeaf path_protect_configured_tunnels; //type: uint16
        YLeaf path_protect_configured_tunnels_up; //type: uint16
        YLeaf path_protect_configured_tunnels_standby_up; //type: uint16
        YLeaf link_diverse_paths; //type: uint16
        YLeaf node_diverse_paths; //type: uint16
        YLeaf link_and_node_diverse_paths; //type: uint16
        YLeaf user_defined_paths; //type: uint16
        YLeaf p2mp_head_tunnels; //type: uint32
        YLeaf up_p2mp_head_tunnels; //type: uint32
        YLeaf frr_config_p2mp_head_tunnels; //type: uint32
        YLeaf p2mp_head_destinations; //type: uint32
        YLeaf up_p2mp_head_destinations; //type: uint32
        YLeaf bw_protected_p2mp_s2_ls; //type: uint32
        YLeaf link_protected_p2mp_s2_ls; //type: uint32
        YLeaf up_p2mp_head_s2_ls; //type: uint32
        YLeaf proceeding_p2mp_head_s2_ls; //type: uint32
        YLeaf frr_p2mp_head_s2_ls; //type: uint32
        YLeaf protected_p2mp_head_s2_ls; //type: uint32
        YLeaf rerouted_p2mp_head_s2_ls; //type: uint32
        YLeaf p2mp_mid_point_s2_ls; //type: uint32
        YLeaf up_p2mp_mid_point_s2_ls; //type: uint32
        YLeaf proceeding_p2mp_mid_point_s2_ls; //type: uint32
        YLeaf frr_p2mp_mid_point_s2_ls; //type: uint32
        YLeaf protected_p2mp_mid_point_s2_ls; //type: uint32
        YLeaf rerouted_p2mp_mid_point_s2_ls; //type: uint32
        YLeaf p2mp_tail_s2_ls; //type: uint32
        YLeaf up_p2mp_tail_s2_ls; //type: uint32
        YLeaf bidir_head_tunnels; //type: uint32
        YLeaf bidir_head_tunnels_up; //type: uint32
        YLeaf bidir_head_tunnels_associated; //type: uint32
        YLeaf bidir_head_tunnels_corouted; //type: uint32
        YLeaf bidir_head_ls_ps_up; //type: uint32
        YLeaf bidir_head_ls_ps_proceeding; //type: uint32
        YLeaf bidir_head_ls_ps_associated; //type: uint32
        YLeaf bidir_head_ls_ps_standby; //type: uint32
        YLeaf bidir_mid_tunnels; //type: uint32
        YLeaf bidir_mid_tunnels_up; //type: uint32
        YLeaf bidir_mid_ls_ps_proceeding; //type: uint32
        YLeaf bidir_mid_ls_ps_associated; //type: uint32
        YLeaf bidir_mid_ls_ps_standby; //type: uint32
        YLeaf bidir_tail_ls_ps; //type: uint32
        YLeaf bidir_tail_ls_ps_up; //type: uint32
        YLeaf bidir_tail_ls_ps_proceeding; //type: uint32
        YLeaf bidir_tail_ls_ps_associated; //type: uint32
        YLeaf bidir_tail_ls_ps_standby; //type: uint32
        YLeaf bidir_tail_ls_ps_corouted; //type: uint32

        class AutobackupSummary; //type: MplsTe::Tunnels::Summary::AutobackupSummary
        class AutoMeshSummary; //type: MplsTe::Tunnels::Summary::AutoMeshSummary
        class AutoMeshOneHopSummary; //type: MplsTe::Tunnels::Summary::AutoMeshOneHopSummary
        class GmplsUniSummary; //type: MplsTe::Tunnels::Summary::GmplsUniSummary
        class GmplsNniSummary; //type: MplsTe::Tunnels::Summary::GmplsNniSummary
        class CurrentTunnelConvergenceSummary; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary
        class LastTunnelConvergenceSummary; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary
        class AutoTunServerSummary; //type: MplsTe::Tunnels::Summary::AutoTunServerSummary

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoMeshOneHopSummary> auto_mesh_one_hop_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoMeshSummary> auto_mesh_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutoTunServerSummary> auto_tun_server_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::AutobackupSummary> autobackup_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary> current_tunnel_convergence_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::GmplsNniSummary> gmpls_nni_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::GmplsUniSummary> gmpls_uni_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary> last_tunnel_convergence_summary;


}; // MplsTe::Tunnels::Summary


class MplsTe::Tunnels::Summary::AutobackupSummary : public Entity
{
    public:
        AutobackupSummary();
        ~AutobackupSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf autobackups; //type: uint32
        YLeaf up_autobackups; //type: uint32
        YLeaf down_autobackups; //type: uint32
        YLeaf unused_autobackups; //type: uint32
        YLeaf next_hop_autobackups; //type: uint32
        YLeaf next_next_hop_autobackups; //type: uint32
        YLeaf srlg_strict_autobackups; //type: uint32
        YLeaf srlg_preferred_autobackups; //type: uint32
        YLeaf srlg_weighted_autobackups; //type: uint32
        YLeaf next_hop_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_next_hop_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_next_hop_srlg_autobackup_protected_ls_ps; //type: uint32
        YLeaf next_hop_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_next_hop_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_next_hop_srlg_autobackup_protected_s2l_families; //type: uint32
        YLeaf next_hop_autobackup_protected_s2_ls; //type: uint32
        YLeaf next_next_hop_autobackup_protected_s2_ls; //type: uint32
        YLeaf next_hop_srlg_autobackup_protected_s2_ls; //type: uint32
        YLeaf next_next_hop_srlg_autobackup_protected_s2_ls; //type: uint32



}; // MplsTe::Tunnels::Summary::AutobackupSummary


class MplsTe::Tunnels::Summary::AutoMeshSummary : public Entity
{
    public:
        AutoMeshSummary();
        ~AutoMeshSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf auto_mesh_tunnels; //type: uint32
        YLeaf up_auto_mesh_tunnels; //type: uint32
        YLeaf down_auto_mesh_tunnels; //type: uint32
        YLeaf frr_auto_mesh_tunnels; //type: uint32
        YLeaf auto_mesh_groups; //type: uint32
        YLeaf auto_mesh_destinations; //type: uint32



}; // MplsTe::Tunnels::Summary::AutoMeshSummary


class MplsTe::Tunnels::Summary::AutoMeshOneHopSummary : public Entity
{
    public:
        AutoMeshOneHopSummary();
        ~AutoMeshOneHopSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf auto_mesh_one_hop_tunnels; //type: uint32
        YLeaf up_auto_mesh_one_hop_tunnels; //type: uint32
        YLeaf down_auto_mesh_one_hop_tunnels; //type: uint32
        YLeaf frr_auto_mesh_tunnels; //type: uint32
        YLeaf auto_mesh_one_hop_groups; //type: uint32
        YLeaf auto_mesh_one_hop_destinations; //type: uint32



}; // MplsTe::Tunnels::Summary::AutoMeshOneHopSummary


class MplsTe::Tunnels::Summary::GmplsUniSummary : public Entity
{
    public:
        GmplsUniSummary();
        ~GmplsUniSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf heads_up; //type: uint32
        YLeaf heads_down; //type: uint32
        YLeaf tails_up; //type: uint32
        YLeaf tails_down; //type: uint32



}; // MplsTe::Tunnels::Summary::GmplsUniSummary


class MplsTe::Tunnels::Summary::GmplsNniSummary : public Entity
{
    public:
        GmplsNniSummary();
        ~GmplsNniSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf heads_up; //type: uint32
        YLeaf heads_down; //type: uint32
        YLeaf mids_up; //type: uint32
        YLeaf mids_down; //type: uint32
        YLeaf tails_up; //type: uint32
        YLeaf tails_down; //type: uint32



}; // MplsTe::Tunnels::Summary::GmplsNniSummary


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary : public Entity
{
    public:
        CurrentTunnelConvergenceSummary();
        ~CurrentTunnelConvergenceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_frr_active_count; //type: uint32
        YLeaf tunnel_frr_total_count; //type: uint32
        YLeaf tunnel_converged_count; //type: uint32
        YLeaf tunnel_total_convergence_complete_time; //type: uint64

        class TablePathOut; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut
        class TableResvIn; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn
        class TableLabelRewrite; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite
        class TablePcalc; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc
        class TableTunnelRewrite; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite
        class TableFrrTrigger; //type: MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger> table_frr_trigger;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite> table_label_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut> table_path_out;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc> table_pcalc;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn> table_resv_in;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite> table_tunnel_rewrite;


}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut : public Entity
{
    public:
        TablePathOut();
        ~TablePathOut();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePathOut


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn : public Entity
{
    public:
        TableResvIn();
        ~TableResvIn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableResvIn


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite : public Entity
{
    public:
        TableLabelRewrite();
        ~TableLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableLabelRewrite


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc : public Entity
{
    public:
        TablePcalc();
        ~TablePcalc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TablePcalc


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite : public Entity
{
    public:
        TableTunnelRewrite();
        ~TableTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableTunnelRewrite


class MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger : public Entity
{
    public:
        TableFrrTrigger();
        ~TableFrrTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTe::Tunnels::Summary::CurrentTunnelConvergenceSummary::TableFrrTrigger


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary : public Entity
{
    public:
        LastTunnelConvergenceSummary();
        ~LastTunnelConvergenceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_frr_active_count; //type: uint32
        YLeaf tunnel_frr_total_count; //type: uint32
        YLeaf tunnel_converged_count; //type: uint32
        YLeaf tunnel_total_convergence_complete_time; //type: uint64

        class TablePathOut; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut
        class TableResvIn; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn
        class TableLabelRewrite; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite
        class TablePcalc; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc
        class TableTunnelRewrite; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite
        class TableFrrTrigger; //type: MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger> table_frr_trigger;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite> table_label_rewrite;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut> table_path_out;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc> table_pcalc;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn> table_resv_in;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite> table_tunnel_rewrite;


}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut : public Entity
{
    public:
        TablePathOut();
        ~TablePathOut();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePathOut


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn : public Entity
{
    public:
        TableResvIn();
        ~TableResvIn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableResvIn


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite : public Entity
{
    public:
        TableLabelRewrite();
        ~TableLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableLabelRewrite


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc : public Entity
{
    public:
        TablePcalc();
        ~TablePcalc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TablePcalc


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite : public Entity
{
    public:
        TableTunnelRewrite();
        ~TableTunnelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableTunnelRewrite


class MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger : public Entity
{
    public:
        TableFrrTrigger();
        ~TableFrrTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsTe::Tunnels::Summary::LastTunnelConvergenceSummary::TableFrrTrigger


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_25_ */

