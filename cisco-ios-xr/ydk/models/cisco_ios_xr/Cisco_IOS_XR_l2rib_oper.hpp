#ifndef _CISCO_IOS_XR_L2RIB_OPER_
#define _CISCO_IOS_XR_L2RIB_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2rib_oper {

class L2rib : public ydk::Entity
{
    public:
        L2rib();
        ~L2rib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class ProducersDetails; //type: L2rib::ProducersDetails
        class Summary; //type: L2rib::Summary
        class Producers; //type: L2rib::Producers
        class Clients; //type: L2rib::Clients
        class EvisXr; //type: L2rib::EvisXr
        class ClientsDetails; //type: L2rib::ClientsDetails
        class EviChildTables; //type: L2rib::EviChildTables
        class Evis; //type: L2rib::Evis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::ProducersDetails> producers_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::Producers> producers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::Clients> clients;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EvisXr> evis_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::ClientsDetails> clients_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables> evi_child_tables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::Evis> evis;
        
}; // L2rib


class L2rib::ProducersDetails : public ydk::Entity
{
    public:
        ProducersDetails();
        ~ProducersDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ProducersDetail; //type: L2rib::ProducersDetails::ProducersDetail

        ydk::YList producers_detail;
        
}; // L2rib::ProducersDetails


class L2rib::ProducersDetails::ProducersDetail : public ydk::Entity
{
    public:
        ProducersDetail();
        ~ProducersDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf object_id; //type: uint32
        ydk::YLeaf product_id; //type: uint32
        ydk::YLeaf last_update_timestamp; //type: uint64
        class Producer; //type: L2rib::ProducersDetails::ProducersDetail::Producer
        class Statistics; //type: L2rib::ProducersDetails::ProducersDetail::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::ProducersDetails::ProducersDetail::Producer> producer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::ProducersDetails::ProducersDetail::Statistics> statistics;
        
}; // L2rib::ProducersDetails::ProducersDetail


class L2rib::ProducersDetails::ProducersDetail::Producer : public ydk::Entity
{
    public:
        Producer();
        ~Producer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf object_type; //type: L2ribBagObj
        ydk::YLeaf producer_id; //type: L2ribBagProducerId
        ydk::YLeaf producer_name; //type: string
        ydk::YLeaf admin_distance; //type: uint32
        ydk::YLeaf purge_time; //type: uint32
        ydk::YLeaf state; //type: L2ribBagProducerState

}; // L2rib::ProducersDetails::ProducersDetail::Producer


class L2rib::ProducersDetails::ProducersDetail::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf producer_id; //type: L2ribBagProducerId
        ydk::YLeaf producer_name; //type: string
        class Statistics_; //type: L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_> statistics;
        
}; // L2rib::ProducersDetails::ProducersDetail::Statistics


class L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_ : public ydk::Entity
{
    public:
        Statistics_();
        ~Statistics_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf memory_size; //type: uint32
        ydk::YLeaf object_count; //type: uint32
        ydk::YLeaf endof_interval_ts; //type: uint64
        class ExtendedCounter; //type: L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter

        ydk::YList extended_counter;
        
}; // L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_


class L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter : public ydk::Entity
{
    public:
        ExtendedCounter();
        ~ExtendedCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf counter_type; //type: uint8
        ydk::YLeaf counter_name; //type: string
        ydk::YLeaf l2rb_first_event_ts; //type: uint64
        ydk::YLeaf l2rb_last_event_ts; //type: uint64
        ydk::YLeaf l2rb_interval_event_count; //type: uint32
        ydk::YLeaf l2rb_total_event_count; //type: uint32

}; // L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter


class L2rib::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf converged_tables_count; //type: uint32
        ydk::YLeaf total_memory; //type: uint32
        class TableSummary; //type: L2rib::Summary::TableSummary

        ydk::YList table_summary;
        
}; // L2rib::Summary


class L2rib::Summary::TableSummary : public ydk::Entity
{
    public:
        TableSummary();
        ~TableSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf object_type; //type: L2ribBagObj
        ydk::YLeaf object_count; //type: uint32
        ydk::YLeaf table_memory; //type: uint32
        class ProducerStat; //type: L2rib::Summary::TableSummary::ProducerStat

        ydk::YList producer_stat;
        
}; // L2rib::Summary::TableSummary


class L2rib::Summary::TableSummary::ProducerStat : public ydk::Entity
{
    public:
        ProducerStat();
        ~ProducerStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf producer_id; //type: L2ribBagProducerId
        ydk::YLeaf producer_name; //type: string
        class Statistics; //type: L2rib::Summary::TableSummary::ProducerStat::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::Summary::TableSummary::ProducerStat::Statistics> statistics;
        
}; // L2rib::Summary::TableSummary::ProducerStat


class L2rib::Summary::TableSummary::ProducerStat::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf memory_size; //type: uint32
        ydk::YLeaf object_count; //type: uint32
        ydk::YLeaf endof_interval_ts; //type: uint64
        class ExtendedCounter; //type: L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter

        ydk::YList extended_counter;
        
}; // L2rib::Summary::TableSummary::ProducerStat::Statistics


class L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter : public ydk::Entity
{
    public:
        ExtendedCounter();
        ~ExtendedCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf counter_type; //type: uint8
        ydk::YLeaf counter_name; //type: string
        ydk::YLeaf l2rb_first_event_ts; //type: uint64
        ydk::YLeaf l2rb_last_event_ts; //type: uint64
        ydk::YLeaf l2rb_interval_event_count; //type: uint32
        ydk::YLeaf l2rb_total_event_count; //type: uint32

}; // L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter


class L2rib::Producers : public ydk::Entity
{
    public:
        Producers();
        ~Producers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Producer; //type: L2rib::Producers::Producer

        ydk::YList producer;
        
}; // L2rib::Producers


class L2rib::Producers::Producer : public ydk::Entity
{
    public:
        Producer();
        ~Producer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf object_id; //type: uint32
        ydk::YLeaf product_id; //type: uint32
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf object_type; //type: L2ribBagObj
        ydk::YLeaf producer_id; //type: L2ribBagProducerId
        ydk::YLeaf producer_name; //type: string
        ydk::YLeaf admin_distance; //type: uint32
        ydk::YLeaf purge_time; //type: uint32
        ydk::YLeaf state; //type: L2ribBagProducerState

}; // L2rib::Producers::Producer


class L2rib::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Client; //type: L2rib::Clients::Client

        ydk::YList client;
        
}; // L2rib::Clients


class L2rib::Clients::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf client_id_xr; //type: uint32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf proc_name; //type: string
        ydk::YLeaf proc_suffix; //type: string

}; // L2rib::Clients::Client


class L2rib::EvisXr : public ydk::Entity
{
    public:
        EvisXr();
        ~EvisXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Evi; //type: L2rib::EvisXr::Evi

        ydk::YList evi;
        
}; // L2rib::EvisXr


class L2rib::EvisXr::Evi : public ydk::Entity
{
    public:
        Evi();
        ~Evi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf l2r_vni; //type: uint32
        ydk::YLeaf l2r_encap_type; //type: uint16
        ydk::YLeaf l2r_nve_iod; //type: uint32
        ydk::YLeaf l2r_nve_ifhandle; //type: uint32
        ydk::YLeaf vtep_ip; //type: string
        ydk::YLeaf l2r_topo_txid; //type: uint32
        ydk::YLeaf l2r_topo_flags; //type: uint32
        class Topology; //type: L2rib::EvisXr::Evi::Topology

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EvisXr::Evi::Topology> topology;
        
}; // L2rib::EvisXr::Evi


class L2rib::EvisXr::Evi::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf topology_name; //type: string
        ydk::YLeaf topology_type; //type: uint32

}; // L2rib::EvisXr::Evi::Topology


class L2rib::ClientsDetails : public ydk::Entity
{
    public:
        ClientsDetails();
        ~ClientsDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ClientsDetail; //type: L2rib::ClientsDetails::ClientsDetail

        ydk::YList clients_detail;
        
}; // L2rib::ClientsDetails


class L2rib::ClientsDetails::ClientsDetail : public ydk::Entity
{
    public:
        ClientsDetail();
        ~ClientsDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf producer_count; //type: uint8
        ydk::YLeaf last_update_timestamp; //type: uint64
        class Client; //type: L2rib::ClientsDetails::ClientsDetail::Client
        class RegistrationTableStatistics; //type: L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics
        class ProducerArray; //type: L2rib::ClientsDetails::ClientsDetail::ProducerArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::ClientsDetails::ClientsDetail::Client> client;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics> registration_table_statistics;
        ydk::YList producer_array;
        
}; // L2rib::ClientsDetails::ClientsDetail


class L2rib::ClientsDetails::ClientsDetail::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_id_xr; //type: uint32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf proc_name; //type: string
        ydk::YLeaf proc_suffix; //type: string

}; // L2rib::ClientsDetails::ClientsDetail::Client


class L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics : public ydk::Entity
{
    public:
        RegistrationTableStatistics();
        ~RegistrationTableStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf producer_id; //type: L2ribBagProducerId
        ydk::YLeaf producer_name; //type: string
        class Statistics; //type: L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics> statistics;
        
}; // L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics


class L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf memory_size; //type: uint32
        ydk::YLeaf object_count; //type: uint32
        ydk::YLeaf endof_interval_ts; //type: uint64
        class ExtendedCounter; //type: L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter

        ydk::YList extended_counter;
        
}; // L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics


class L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter : public ydk::Entity
{
    public:
        ExtendedCounter();
        ~ExtendedCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_type; //type: uint8
        ydk::YLeaf counter_name; //type: string
        ydk::YLeaf l2rb_first_event_ts; //type: uint64
        ydk::YLeaf l2rb_last_event_ts; //type: uint64
        ydk::YLeaf l2rb_interval_event_count; //type: uint32
        ydk::YLeaf l2rb_total_event_count; //type: uint32

}; // L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter


class L2rib::ClientsDetails::ClientsDetail::ProducerArray : public ydk::Entity
{
    public:
        ProducerArray();
        ~ProducerArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_type; //type: L2ribBagObj
        ydk::YLeaf producer_id; //type: L2ribBagProducerId
        ydk::YLeaf producer_name; //type: string
        ydk::YLeaf admin_distance; //type: uint32
        ydk::YLeaf purge_time; //type: uint32

}; // L2rib::ClientsDetails::ClientsDetail::ProducerArray


class L2rib::EviChildTables : public ydk::Entity
{
    public:
        EviChildTables();
        ~EviChildTables();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacipDetails; //type: L2rib::EviChildTables::MacipDetails
        class MacIps; //type: L2rib::EviChildTables::MacIps
        class Macs; //type: L2rib::EviChildTables::Macs
        class Imets; //type: L2rib::EviChildTables::Imets
        class MacDetails; //type: L2rib::EviChildTables::MacDetails
        class ImetDetails; //type: L2rib::EviChildTables::ImetDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacipDetails> macip_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacIps> mac_ips;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs> macs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Imets> imets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails> mac_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::ImetDetails> imet_details;
        
}; // L2rib::EviChildTables


class L2rib::EviChildTables::MacipDetails : public ydk::Entity
{
    public:
        MacipDetails();
        ~MacipDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacipDetail; //type: L2rib::EviChildTables::MacipDetails::MacipDetail

        ydk::YList macip_detail;
        
}; // L2rib::EviChildTables::MacipDetails


class L2rib::EviChildTables::MacipDetails::MacipDetail : public ydk::Entity
{
    public:
        MacipDetail();
        ~MacipDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf tag_id; //type: uint32
        ydk::YLeaf mac_addr; //type: string
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf admin_dist; //type: uint32
        ydk::YLeaf prod_id; //type: uint32
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf soo; //type: uint32
        ydk::YLeaf last_update_timestamp; //type: uint64
        class MacIpRoute; //type: L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute
        class RtTlv; //type: L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv
        class NhTlv; //type: L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute> mac_ip_route;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv> rt_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv> nh_tlv;
        
}; // L2rib::EviChildTables::MacipDetails::MacipDetail


class L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute : public ydk::Entity
{
    public:
        MacIpRoute();
        ~MacIpRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf admin_distance; //type: uint8
        ydk::YLeaf producer_id; //type: uint8
        ydk::YLeaf topology_id; //type: uint32
        class NextHop; //type: L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop> next_hop;
        
}; // L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute


class L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf flags; //type: uint16
        class NextHop_; //type: L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_> next_hop;
        
}; // L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop


class L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_ : public ydk::Entity
{
    public:
        NextHop_();
        ~NextHop_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribNextHop
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf xid; //type: uint32
        class Labeled; //type: L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled> labeled;
        
}; // L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_


class L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled : public ydk::Entity
{
    public:
        Labeled();
        ~Labeled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address_family; //type: L2ribAfi
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf internal; //type: boolean

}; // L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled


class L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv : public ydk::Entity
{
    public:
        RtTlv();
        ~RtTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_len; //type: uint16
        class TlvVal; //type: L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal

        ydk::YList tlv_val;
        
}; // L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv


class L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal : public ydk::Entity
{
    public:
        TlvVal();
        ~TlvVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint8

}; // L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal


class L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv : public ydk::Entity
{
    public:
        NhTlv();
        ~NhTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_len; //type: uint16
        class TlvVal; //type: L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal

        ydk::YList tlv_val;
        
}; // L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv


class L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal : public ydk::Entity
{
    public:
        TlvVal();
        ~TlvVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint8

}; // L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal


class L2rib::EviChildTables::MacIps : public ydk::Entity
{
    public:
        MacIps();
        ~MacIps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacIp; //type: L2rib::EviChildTables::MacIps::MacIp

        ydk::YList mac_ip;
        
}; // L2rib::EviChildTables::MacIps


class L2rib::EviChildTables::MacIps::MacIp : public ydk::Entity
{
    public:
        MacIp();
        ~MacIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf tag_id; //type: uint32
        ydk::YLeaf mac_addr; //type: string
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf admin_dist; //type: uint32
        ydk::YLeaf prod_id; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf admin_distance; //type: uint8
        ydk::YLeaf producer_id; //type: uint8
        ydk::YLeaf topology_id; //type: uint32
        class NextHop; //type: L2rib::EviChildTables::MacIps::MacIp::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacIps::MacIp::NextHop> next_hop;
        
}; // L2rib::EviChildTables::MacIps::MacIp


class L2rib::EviChildTables::MacIps::MacIp::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf flags; //type: uint16
        class NextHop_; //type: L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_> next_hop;
        
}; // L2rib::EviChildTables::MacIps::MacIp::NextHop


class L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_ : public ydk::Entity
{
    public:
        NextHop_();
        ~NextHop_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribNextHop
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf xid; //type: uint32
        class Labeled; //type: L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled> labeled;
        
}; // L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_


class L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled : public ydk::Entity
{
    public:
        Labeled();
        ~Labeled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address_family; //type: L2ribAfi
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf internal; //type: boolean

}; // L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled


class L2rib::EviChildTables::Macs : public ydk::Entity
{
    public:
        Macs();
        ~Macs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Mac; //type: L2rib::EviChildTables::Macs::Mac

        ydk::YList mac;
        
}; // L2rib::EviChildTables::Macs


class L2rib::EviChildTables::Macs::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf tag_id; //type: uint32
        ydk::YLeaf mac_addr; //type: string
        ydk::YLeaf admin_dist; //type: uint32
        ydk::YLeaf prod_id; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf admin_distance; //type: uint8
        ydk::YLeaf producer_id; //type: uint8
        ydk::YLeaf topology_id; //type: uint32
        class Route; //type: L2rib::EviChildTables::Macs::Mac::Route

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route> route;
        
}; // L2rib::EviChildTables::Macs::Mac


class L2rib::EviChildTables::Macs::Mac::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribMacRoute
        class Regular; //type: L2rib::EviChildTables::Macs::Mac::Route::Regular
        class EvpnEsi; //type: L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi
        class Bmac; //type: L2rib::EviChildTables::Macs::Mac::Route::Bmac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Regular> regular;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi> evpn_esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Bmac> bmac;
        
}; // L2rib::EviChildTables::Macs::Mac::Route


class L2rib::EviChildTables::Macs::Mac::Route::Regular : public ydk::Entity
{
    public:
        Regular();
        ~Regular();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NextHop; //type: L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop> next_hop;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::Regular


class L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf flags; //type: uint16
        class NextHop_; //type: L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_> next_hop;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop


class L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_ : public ydk::Entity
{
    public:
        NextHop_();
        ~NextHop_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribNextHop
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf xid; //type: uint32
        class Labeled; //type: L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled> labeled;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_


class L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled : public ydk::Entity
{
    public:
        Labeled();
        ~Labeled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address_family; //type: L2ribAfi
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf internal; //type: boolean

}; // L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled


class L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi : public ydk::Entity
{
    public:
        EvpnEsi();
        ~EvpnEsi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf forward_state; //type: boolean
        class EthernetSegmentId; //type: L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId
        class PathList; //type: L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId> ethernet_segment_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList> path_list;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi


class L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId : public ydk::Entity
{
    public:
        EthernetSegmentId();
        ~EthernetSegmentId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf system_priority; //type: uint16
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf port_key; //type: uint16

}; // L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId


class L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf producer_id; //type: uint8
        ydk::YLeaf mac_count; //type: uint32
        ydk::YLeaf local_label; //type: uint32
        class PathListInfo; //type: L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo
        class NextHopArray; //type: L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo> path_list_info;
        ydk::YList next_hop_array;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList


class L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo : public ydk::Entity
{
    public:
        PathListInfo();
        ~PathListInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribMacRoute
        class PathListEsi; //type: L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi
        class PathListMac; //type: L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi> path_list_esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac> path_list_mac;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo


class L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi : public ydk::Entity
{
    public:
        PathListEsi();
        ~PathListEsi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf resolved; //type: boolean
        class EthernetSegmentId; //type: L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId
        class MacUpdateNextHopArray; //type: L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId> ethernet_segment_id;
        ydk::YList mac_update_next_hop_array;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi


class L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId : public ydk::Entity
{
    public:
        EthernetSegmentId();
        ~EthernetSegmentId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf system_priority; //type: uint16
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf port_key; //type: uint16

}; // L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId


class L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray : public ydk::Entity
{
    public:
        MacUpdateNextHopArray();
        ~MacUpdateNextHopArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf flags; //type: uint16
        class NextHop; //type: L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop> next_hop;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray


class L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribNextHop
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf xid; //type: uint32
        class Labeled; //type: L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled> labeled;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop


class L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled : public ydk::Entity
{
    public:
        Labeled();
        ~Labeled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address_family; //type: L2ribAfi
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf internal; //type: boolean

}; // L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled


class L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac : public ydk::Entity
{
    public:
        PathListMac();
        ~PathListMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac_address; //type: string

}; // L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac


class L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray : public ydk::Entity
{
    public:
        NextHopArray();
        ~NextHopArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf flags; //type: uint16
        class NextHop; //type: L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop> next_hop;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray


class L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribNextHop
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf xid; //type: uint32
        class Labeled; //type: L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled> labeled;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop


class L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled : public ydk::Entity
{
    public:
        Labeled();
        ~Labeled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address_family; //type: L2ribAfi
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf internal; //type: boolean

}; // L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled


class L2rib::EviChildTables::Macs::Mac::Route::Bmac : public ydk::Entity
{
    public:
        Bmac();
        ~Bmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bmac_address; //type: string
        ydk::YLeaf forward_state; //type: boolean
        class PathList; //type: L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList> path_list;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::Bmac


class L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf producer_id; //type: uint8
        ydk::YLeaf mac_count; //type: uint32
        ydk::YLeaf local_label; //type: uint32
        class PathListInfo; //type: L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo
        class NextHopArray; //type: L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo> path_list_info;
        ydk::YList next_hop_array;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList


class L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo : public ydk::Entity
{
    public:
        PathListInfo();
        ~PathListInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribMacRoute
        class PathListEsi; //type: L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi
        class PathListMac; //type: L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi> path_list_esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac> path_list_mac;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo


class L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi : public ydk::Entity
{
    public:
        PathListEsi();
        ~PathListEsi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf resolved; //type: boolean
        class EthernetSegmentId; //type: L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId
        class MacUpdateNextHopArray; //type: L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId> ethernet_segment_id;
        ydk::YList mac_update_next_hop_array;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi


class L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId : public ydk::Entity
{
    public:
        EthernetSegmentId();
        ~EthernetSegmentId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf system_priority; //type: uint16
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf port_key; //type: uint16

}; // L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId


class L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray : public ydk::Entity
{
    public:
        MacUpdateNextHopArray();
        ~MacUpdateNextHopArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf flags; //type: uint16
        class NextHop; //type: L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop> next_hop;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray


class L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribNextHop
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf xid; //type: uint32
        class Labeled; //type: L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled> labeled;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop


class L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled : public ydk::Entity
{
    public:
        Labeled();
        ~Labeled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address_family; //type: L2ribAfi
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf internal; //type: boolean

}; // L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled


class L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac : public ydk::Entity
{
    public:
        PathListMac();
        ~PathListMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac_address; //type: string

}; // L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac


class L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray : public ydk::Entity
{
    public:
        NextHopArray();
        ~NextHopArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf flags; //type: uint16
        class NextHop; //type: L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop> next_hop;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray


class L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribNextHop
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf xid; //type: uint32
        class Labeled; //type: L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled> labeled;
        
}; // L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop


class L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled : public ydk::Entity
{
    public:
        Labeled();
        ~Labeled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address_family; //type: L2ribAfi
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf internal; //type: boolean

}; // L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled


class L2rib::EviChildTables::Imets : public ydk::Entity
{
    public:
        Imets();
        ~Imets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Imet; //type: L2rib::EviChildTables::Imets::Imet

        ydk::YList imet;
        
}; // L2rib::EviChildTables::Imets


class L2rib::EviChildTables::Imets::Imet : public ydk::Entity
{
    public:
        Imet();
        ~Imet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf tag_id; //type: uint32
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf admin_dist; //type: uint32
        ydk::YLeaf prod_id; //type: uint32
        ydk::YLeaf vtepi_paddr; //type: string
        ydk::YLeaf admin_distance; //type: uint8
        ydk::YLeaf producer_id; //type: uint8
        ydk::YLeaf topo_id; //type: uint32
        ydk::YLeaf ethernet_tag_id; //type: uint32

}; // L2rib::EviChildTables::Imets::Imet


class L2rib::EviChildTables::MacDetails : public ydk::Entity
{
    public:
        MacDetails();
        ~MacDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacDetail; //type: L2rib::EviChildTables::MacDetails::MacDetail

        ydk::YList mac_detail;
        
}; // L2rib::EviChildTables::MacDetails


class L2rib::EviChildTables::MacDetails::MacDetail : public ydk::Entity
{
    public:
        MacDetail();
        ~MacDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf tag_id; //type: uint32
        ydk::YLeaf mac_addr; //type: string
        ydk::YLeaf admin_dist; //type: uint32
        ydk::YLeaf prod_id; //type: uint32
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf baseflags; //type: string
        ydk::YLeaf soo; //type: uint32
        ydk::YLeaf slot_id; //type: uint32
        ydk::YLeaf esi; //type: string
        ydk::YLeaf last_update_timestamp; //type: uint64
        class MacRoute; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute
        class RtTlv; //type: L2rib::EviChildTables::MacDetails::MacDetail::RtTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute> mac_route;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::RtTlv> rt_tlv;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute : public ydk::Entity
{
    public:
        MacRoute();
        ~MacRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf admin_distance; //type: uint8
        ydk::YLeaf producer_id; //type: uint8
        ydk::YLeaf topology_id; //type: uint32
        class Route; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route> route;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribMacRoute
        class Regular; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular
        class EvpnEsi; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi
        class Bmac; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular> regular;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi> evpn_esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac> bmac;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular : public ydk::Entity
{
    public:
        Regular();
        ~Regular();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NextHop; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop> next_hop;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf flags; //type: uint16
        class NextHop_; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_> next_hop;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_ : public ydk::Entity
{
    public:
        NextHop_();
        ~NextHop_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribNextHop
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf xid; //type: uint32
        class Labeled; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled> labeled;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled : public ydk::Entity
{
    public:
        Labeled();
        ~Labeled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address_family; //type: L2ribAfi
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf internal; //type: boolean

}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi : public ydk::Entity
{
    public:
        EvpnEsi();
        ~EvpnEsi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf forward_state; //type: boolean
        class EthernetSegmentId; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId
        class PathList; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId> ethernet_segment_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList> path_list;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId : public ydk::Entity
{
    public:
        EthernetSegmentId();
        ~EthernetSegmentId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf system_priority; //type: uint16
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf port_key; //type: uint16

}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf producer_id; //type: uint8
        ydk::YLeaf mac_count; //type: uint32
        ydk::YLeaf local_label; //type: uint32
        class PathListInfo; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo
        class NextHopArray; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo> path_list_info;
        ydk::YList next_hop_array;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo : public ydk::Entity
{
    public:
        PathListInfo();
        ~PathListInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribMacRoute
        class PathListEsi; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi
        class PathListMac; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi> path_list_esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac> path_list_mac;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi : public ydk::Entity
{
    public:
        PathListEsi();
        ~PathListEsi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf resolved; //type: boolean
        class EthernetSegmentId; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId
        class MacUpdateNextHopArray; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId> ethernet_segment_id;
        ydk::YList mac_update_next_hop_array;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId : public ydk::Entity
{
    public:
        EthernetSegmentId();
        ~EthernetSegmentId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf system_priority; //type: uint16
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf port_key; //type: uint16

}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray : public ydk::Entity
{
    public:
        MacUpdateNextHopArray();
        ~MacUpdateNextHopArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf flags; //type: uint16
        class NextHop; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop> next_hop;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribNextHop
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf xid; //type: uint32
        class Labeled; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled> labeled;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled : public ydk::Entity
{
    public:
        Labeled();
        ~Labeled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address_family; //type: L2ribAfi
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf internal; //type: boolean

}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac : public ydk::Entity
{
    public:
        PathListMac();
        ~PathListMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac_address; //type: string

}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray : public ydk::Entity
{
    public:
        NextHopArray();
        ~NextHopArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf flags; //type: uint16
        class NextHop; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop> next_hop;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribNextHop
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf xid; //type: uint32
        class Labeled; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled> labeled;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled : public ydk::Entity
{
    public:
        Labeled();
        ~Labeled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address_family; //type: L2ribAfi
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf internal; //type: boolean

}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac : public ydk::Entity
{
    public:
        Bmac();
        ~Bmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bmac_address; //type: string
        ydk::YLeaf forward_state; //type: boolean
        class PathList; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList> path_list;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf producer_id; //type: uint8
        ydk::YLeaf mac_count; //type: uint32
        ydk::YLeaf local_label; //type: uint32
        class PathListInfo; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo
        class NextHopArray; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo> path_list_info;
        ydk::YList next_hop_array;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo : public ydk::Entity
{
    public:
        PathListInfo();
        ~PathListInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribMacRoute
        class PathListEsi; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi
        class PathListMac; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi> path_list_esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac> path_list_mac;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi : public ydk::Entity
{
    public:
        PathListEsi();
        ~PathListEsi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf resolved; //type: boolean
        class EthernetSegmentId; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId
        class MacUpdateNextHopArray; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId> ethernet_segment_id;
        ydk::YList mac_update_next_hop_array;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId : public ydk::Entity
{
    public:
        EthernetSegmentId();
        ~EthernetSegmentId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf system_priority; //type: uint16
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf port_key; //type: uint16

}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray : public ydk::Entity
{
    public:
        MacUpdateNextHopArray();
        ~MacUpdateNextHopArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf flags; //type: uint16
        class NextHop; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop> next_hop;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribNextHop
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf xid; //type: uint32
        class Labeled; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled> labeled;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled : public ydk::Entity
{
    public:
        Labeled();
        ~Labeled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address_family; //type: L2ribAfi
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf internal; //type: boolean

}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac : public ydk::Entity
{
    public:
        PathListMac();
        ~PathListMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac_address; //type: string

}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray : public ydk::Entity
{
    public:
        NextHopArray();
        ~NextHopArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf flags; //type: uint16
        class NextHop; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop> next_hop;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: L2ribNextHop
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf xid; //type: uint32
        class Labeled; //type: L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled> labeled;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop


class L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled : public ydk::Entity
{
    public:
        Labeled();
        ~Labeled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address_family; //type: L2ribAfi
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf label; //type: uint32
        ydk::YLeaf internal; //type: boolean

}; // L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled


class L2rib::EviChildTables::MacDetails::MacDetail::RtTlv : public ydk::Entity
{
    public:
        RtTlv();
        ~RtTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_len; //type: uint16
        class TlvVal; //type: L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal

        ydk::YList tlv_val;
        
}; // L2rib::EviChildTables::MacDetails::MacDetail::RtTlv


class L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal : public ydk::Entity
{
    public:
        TlvVal();
        ~TlvVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entry; //type: uint8

}; // L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal


class L2rib::EviChildTables::ImetDetails : public ydk::Entity
{
    public:
        ImetDetails();
        ~ImetDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ImetDetail; //type: L2rib::EviChildTables::ImetDetails::ImetDetail

        ydk::YList imet_detail;
        
}; // L2rib::EviChildTables::ImetDetails


class L2rib::EviChildTables::ImetDetails::ImetDetail : public ydk::Entity
{
    public:
        ImetDetail();
        ~ImetDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf tag_id; //type: uint32
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf admin_dist; //type: uint32
        ydk::YLeaf prod_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: string
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf tunnel_type; //type: uint32
        ydk::YLeaf l2r_label; //type: uint32
        ydk::YLeaf encap_type; //type: uint32
        ydk::YLeaf last_update_timestamp; //type: uint64
        class ImetRouteBase; //type: L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase> imet_route_base;
        
}; // L2rib::EviChildTables::ImetDetails::ImetDetail


class L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase : public ydk::Entity
{
    public:
        ImetRouteBase();
        ~ImetRouteBase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vtepi_paddr; //type: string
        ydk::YLeaf admin_distance; //type: uint8
        ydk::YLeaf producer_id; //type: uint8
        ydk::YLeaf topo_id; //type: uint32
        ydk::YLeaf ethernet_tag_id; //type: uint32

}; // L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase


class L2rib::Evis : public ydk::Entity
{
    public:
        Evis();
        ~Evis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Evi; //type: L2rib::Evis::Evi

        ydk::YList evi;
        
}; // L2rib::Evis


class L2rib::Evis::Evi : public ydk::Entity
{
    public:
        Evi();
        ~Evi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf topology_name; //type: string
        ydk::YLeaf topology_type; //type: uint32

}; // L2rib::Evis::Evi

class L2ribMacRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2rib_mac_route_type_invalid;
        static const ydk::Enum::YLeaf l2rib_mac_route_type_regular;
        static const ydk::Enum::YLeaf l2rib_mac_route_type_evpn_esi;
        static const ydk::Enum::YLeaf l2rib_mac_route_type_bmac;

};

class L2ribBagProducerId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2rib_bag_prod_none;
        static const ydk::Enum::YLeaf l2rib_bag_prod_best_route;
        static const ydk::Enum::YLeaf l2rib_bag_prod_static;
        static const ydk::Enum::YLeaf l2rib_bag_prod_local;
        static const ydk::Enum::YLeaf l2rib_bag_prod_isis;
        static const ydk::Enum::YLeaf l2rib_bag_prod_bgp;
        static const ydk::Enum::YLeaf l2rib_bag_prod_igmp;
        static const ydk::Enum::YLeaf l2rib_bag_prod_prod_mld;
        static const ydk::Enum::YLeaf l2rib_bag_prod_prod_otv;
        static const ydk::Enum::YLeaf l2rib_bag_prod_prod_l2vpn;
        static const ydk::Enum::YLeaf l2rib_bag_prod_prod_mac_mgr;
        static const ydk::Enum::YLeaf l2rib_bag_prod_prod_vxlan;
        static const ydk::Enum::YLeaf l2rib_bag_prod_prod_hmm;
        static const ydk::Enum::YLeaf l2rib_bag_prod_prod_arp;
        static const ydk::Enum::YLeaf l2rib_bag_prod_prod_local_proxy;
        static const ydk::Enum::YLeaf l2rib_bag_prod_prod_all;

};

class L2ribAfi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2rib_address_family_ipv4;
        static const ydk::Enum::YLeaf l2rib_address_family_ipv6;
        static const ydk::Enum::YLeaf l2rib_address_family_invalid;

};

class L2ribBagProducerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2rib_bag_prod_state_initial;
        static const ydk::Enum::YLeaf l2rib_bag_prod_state_staled;
        static const ydk::Enum::YLeaf l2rib_bag_prod_state_re_connected;
        static const ydk::Enum::YLeaf l2rib_bag_prod_state_converged;
        static const ydk::Enum::YLeaf l2rib_bag_prod_state_delete_p_end;

};

class L2ribNextHop : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2rib_next_hop_invalid;
        static const ydk::Enum::YLeaf l2rib_next_hop_interface_ordinal;
        static const ydk::Enum::YLeaf l2rib_next_hop_interface_index;
        static const ydk::Enum::YLeaf l2rib_next_hop_mac;
        static const ydk::Enum::YLeaf l2rib_next_hop_ipv4;
        static const ydk::Enum::YLeaf l2rib_next_hop_ipv6;
        static const ydk::Enum::YLeaf l2rib_next_hop_overlay;
        static const ydk::Enum::YLeaf l2rib_next_hop_site_index;
        static const ydk::Enum::YLeaf l2rib_next_hop_label_ed;
        static const ydk::Enum::YLeaf l2rib_next_hop_xid;

};

class L2ribBagObj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2rib_bag_obj_type_min;
        static const ydk::Enum::YLeaf l2rib_bag_obj_type_all;
        static const ydk::Enum::YLeaf l2rib_bag_obj_type_mac;
        static const ydk::Enum::YLeaf l2rib_bag_obj_type_ipv4_mcast;
        static const ydk::Enum::YLeaf l2rib_bag_obj_type_ipv6_mcast;
        static const ydk::Enum::YLeaf l2rib_bag_obj_type_topology;
        static const ydk::Enum::YLeaf l2rib_bag_obj_type_ead;
        static const ydk::Enum::YLeaf l2rib_bag_obj_type_evpn_pl;
        static const ydk::Enum::YLeaf l2rib_bag_obj_type_topo_attribute;
        static const ydk::Enum::YLeaf l2rib_bag_obj_type_imet_route;
        static const ydk::Enum::YLeaf l2rib_bag_obj_type_mac_ip;

};


}
}

#endif /* _CISCO_IOS_XR_L2RIB_OPER_ */

