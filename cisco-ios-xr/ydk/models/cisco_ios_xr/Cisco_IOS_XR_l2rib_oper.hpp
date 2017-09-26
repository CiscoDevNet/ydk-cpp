#ifndef _CISCO_IOS_XR_L2RIB_OPER_
#define _CISCO_IOS_XR_L2RIB_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2rib_oper {

class L2Rib : public ydk::Entity
{
    public:
        L2Rib();
        ~L2Rib();

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

        class ProducersDetails; //type: L2Rib::ProducersDetails
        class Summary; //type: L2Rib::Summary
        class Producers; //type: L2Rib::Producers
        class Clients; //type: L2Rib::Clients
        class EvisXr; //type: L2Rib::EvisXr
        class ClientsDetails; //type: L2Rib::ClientsDetails
        class EviChildTables; //type: L2Rib::EviChildTables
        class Evis; //type: L2Rib::Evis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::Clients> clients;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::ClientsDetails> clients_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables> evi_child_tables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::Evis> evis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EvisXr> evis_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::Producers> producers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::ProducersDetails> producers_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::Summary> summary;
        
}; // L2Rib


class L2Rib::Clients : public ydk::Entity
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

        class Client; //type: L2Rib::Clients::Client

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::Clients::Client> > client;
        
}; // L2Rib::Clients


class L2Rib::Clients::Client : public ydk::Entity
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

        ydk::YLeaf client_id; //type: int32
        ydk::YLeaf client_id_xr; //type: uint32
        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf proc_name; //type: string
        ydk::YLeaf proc_suffix; //type: string

}; // L2Rib::Clients::Client


class L2Rib::ClientsDetails : public ydk::Entity
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

        class ClientsDetail; //type: L2Rib::ClientsDetails::ClientsDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::ClientsDetails::ClientsDetail> > clients_detail;
        
}; // L2Rib::ClientsDetails


class L2Rib::ClientsDetails::ClientsDetail : public ydk::Entity
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

        ydk::YLeaf client_id; //type: int32
        ydk::YLeaf producer_count; //type: uint8
        ydk::YLeaf last_update_timestamp; //type: uint64
        class Client; //type: L2Rib::ClientsDetails::ClientsDetail::Client
        class RegistrationTableStatistics; //type: L2Rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics
        class ProducerArray; //type: L2Rib::ClientsDetails::ClientsDetail::ProducerArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::ClientsDetails::ClientsDetail::Client> client;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::ClientsDetails::ClientsDetail::ProducerArray> > producer_array;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics> registration_table_statistics;
        
}; // L2Rib::ClientsDetails::ClientsDetail


class L2Rib::ClientsDetails::ClientsDetail::Client : public ydk::Entity
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

}; // L2Rib::ClientsDetails::ClientsDetail::Client


class L2Rib::ClientsDetails::ClientsDetail::ProducerArray : public ydk::Entity
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

}; // L2Rib::ClientsDetails::ClientsDetail::ProducerArray


class L2Rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics : public ydk::Entity
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
        class Statistics; //type: L2Rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics> statistics;
        
}; // L2Rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics


class L2Rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics : public ydk::Entity
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
        class ExtendedCounter; //type: L2Rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter> > extended_counter;
        
}; // L2Rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics


class L2Rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter : public ydk::Entity
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

}; // L2Rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter


class L2Rib::EviChildTables : public ydk::Entity
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

        class MacipDetails; //type: L2Rib::EviChildTables::MacipDetails
        class MacIps; //type: L2Rib::EviChildTables::MacIps
        class Macs; //type: L2Rib::EviChildTables::Macs
        class MacDetails; //type: L2Rib::EviChildTables::MacDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails> mac_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacIps> mac_ips;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacipDetails> macip_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs> macs;
        
}; // L2Rib::EviChildTables


class L2Rib::EviChildTables::MacDetails : public ydk::Entity
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

        class MacDetail; //type: L2Rib::EviChildTables::MacDetails::MacDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail> > mac_detail;
        
}; // L2Rib::EviChildTables::MacDetails


class L2Rib::EviChildTables::MacDetails::MacDetail : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf tag_id; //type: int32
        ydk::YLeaf mac_addr; //type: string
        ydk::YLeaf admin_dist; //type: int32
        ydk::YLeaf prod_id; //type: int32
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf baseflags; //type: uint32
        ydk::YLeaf soo; //type: uint32
        ydk::YLeaf slot_id; //type: uint32
        ydk::YLeaf esi; //type: string
        ydk::YLeaf last_update_timestamp; //type: uint64
        class MacRoute; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute
        class RtTlv; //type: L2Rib::EviChildTables::MacDetails::MacDetail::RtTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute> mac_route;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::RtTlv> rt_tlv;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute : public ydk::Entity
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
        class Route; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route> route;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route : public ydk::Entity
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
        class Regular; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular
        class EvpnEsi; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi
        class Bmac; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac> bmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi> evpn_esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular> regular;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac : public ydk::Entity
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
        class PathList; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList> path_list;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList : public ydk::Entity
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
        class PathListInfo; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo
        class NextHopArray; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray> > next_hop_array;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo> path_list_info;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray : public ydk::Entity
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
        class NextHop; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop> next_hop;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop : public ydk::Entity
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
        class Labeled; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled> labeled;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled : public ydk::Entity
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

}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo : public ydk::Entity
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
        class PathListEsi; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi
        class PathListMac; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi> path_list_esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac> path_list_mac;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi : public ydk::Entity
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
        class EthernetSegmentId; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId
        class MacUpdateNextHopArray; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId> ethernet_segment_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray> > mac_update_next_hop_array;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId : public ydk::Entity
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

}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray : public ydk::Entity
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
        class NextHop; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop> next_hop;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop : public ydk::Entity
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
        class Labeled; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled> labeled;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled : public ydk::Entity
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

}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac : public ydk::Entity
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

}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi : public ydk::Entity
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
        class EthernetSegmentId; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId
        class PathList; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId> ethernet_segment_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList> path_list;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId : public ydk::Entity
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

}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList : public ydk::Entity
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
        class PathListInfo; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo
        class NextHopArray; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray> > next_hop_array;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo> path_list_info;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray : public ydk::Entity
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
        class NextHop; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop> next_hop;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop : public ydk::Entity
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
        class Labeled; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled> labeled;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled : public ydk::Entity
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

}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo : public ydk::Entity
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
        class PathListEsi; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi
        class PathListMac; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi> path_list_esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac> path_list_mac;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi : public ydk::Entity
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
        class EthernetSegmentId; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId
        class MacUpdateNextHopArray; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId> ethernet_segment_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray> > mac_update_next_hop_array;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId : public ydk::Entity
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

}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray : public ydk::Entity
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
        class NextHop; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop> next_hop;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop : public ydk::Entity
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
        class Labeled; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled> labeled;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled : public ydk::Entity
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

}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac : public ydk::Entity
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

}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular : public ydk::Entity
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

        class NextHop; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop> next_hop;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop : public ydk::Entity
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
        class NextHop_; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_> next_hop;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_ : public ydk::Entity
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
        class Labeled; //type: L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled> labeled;
        
}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_


class L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled : public ydk::Entity
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

}; // L2Rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled


class L2Rib::EviChildTables::MacDetails::MacDetail::RtTlv : public ydk::Entity
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
        ydk::YLeafList tlv_val; //type: list of  uint8

}; // L2Rib::EviChildTables::MacDetails::MacDetail::RtTlv


class L2Rib::EviChildTables::MacIps : public ydk::Entity
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

        class MacIp; //type: L2Rib::EviChildTables::MacIps::MacIp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacIps::MacIp> > mac_ip;
        
}; // L2Rib::EviChildTables::MacIps


class L2Rib::EviChildTables::MacIps::MacIp : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf tag_id; //type: int32
        ydk::YLeaf mac_addr; //type: string
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf admin_dist; //type: int32
        ydk::YLeaf prod_id; //type: int32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf admin_distance; //type: uint8
        ydk::YLeaf producer_id; //type: uint8
        ydk::YLeaf topology_id; //type: uint32
        class NextHop; //type: L2Rib::EviChildTables::MacIps::MacIp::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacIps::MacIp::NextHop> next_hop;
        
}; // L2Rib::EviChildTables::MacIps::MacIp


class L2Rib::EviChildTables::MacIps::MacIp::NextHop : public ydk::Entity
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
        class NextHop_; //type: L2Rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_> next_hop;
        
}; // L2Rib::EviChildTables::MacIps::MacIp::NextHop


class L2Rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_ : public ydk::Entity
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
        class Labeled; //type: L2Rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled> labeled;
        
}; // L2Rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_


class L2Rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled : public ydk::Entity
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

}; // L2Rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled


class L2Rib::EviChildTables::MacipDetails : public ydk::Entity
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

        class MacipDetail; //type: L2Rib::EviChildTables::MacipDetails::MacipDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacipDetails::MacipDetail> > macip_detail;
        
}; // L2Rib::EviChildTables::MacipDetails


class L2Rib::EviChildTables::MacipDetails::MacipDetail : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf tag_id; //type: int32
        ydk::YLeaf mac_addr; //type: string
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf admin_dist; //type: int32
        ydk::YLeaf prod_id; //type: int32
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf soo; //type: uint32
        ydk::YLeaf last_update_timestamp; //type: uint64
        class MacIpRoute; //type: L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute
        class RtTlv; //type: L2Rib::EviChildTables::MacipDetails::MacipDetail::RtTlv
        class NhTlv; //type: L2Rib::EviChildTables::MacipDetails::MacipDetail::NhTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute> mac_ip_route;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacipDetails::MacipDetail::NhTlv> nh_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacipDetails::MacipDetail::RtTlv> rt_tlv;
        
}; // L2Rib::EviChildTables::MacipDetails::MacipDetail


class L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute : public ydk::Entity
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
        class NextHop; //type: L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop> next_hop;
        
}; // L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute


class L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop : public ydk::Entity
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
        class NextHop_; //type: L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_> next_hop;
        
}; // L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop


class L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_ : public ydk::Entity
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
        class Labeled; //type: L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled> labeled;
        
}; // L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_


class L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled : public ydk::Entity
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

}; // L2Rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled


class L2Rib::EviChildTables::MacipDetails::MacipDetail::NhTlv : public ydk::Entity
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
        ydk::YLeafList tlv_val; //type: list of  uint8

}; // L2Rib::EviChildTables::MacipDetails::MacipDetail::NhTlv


class L2Rib::EviChildTables::MacipDetails::MacipDetail::RtTlv : public ydk::Entity
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
        ydk::YLeafList tlv_val; //type: list of  uint8

}; // L2Rib::EviChildTables::MacipDetails::MacipDetail::RtTlv


class L2Rib::EviChildTables::Macs : public ydk::Entity
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

        class Mac; //type: L2Rib::EviChildTables::Macs::Mac

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac> > mac;
        
}; // L2Rib::EviChildTables::Macs


class L2Rib::EviChildTables::Macs::Mac : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf tag_id; //type: int32
        ydk::YLeaf mac_addr; //type: string
        ydk::YLeaf admin_dist; //type: int32
        ydk::YLeaf prod_id; //type: int32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf admin_distance; //type: uint8
        ydk::YLeaf producer_id; //type: uint8
        ydk::YLeaf topology_id; //type: uint32
        class Route; //type: L2Rib::EviChildTables::Macs::Mac::Route

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route> route;
        
}; // L2Rib::EviChildTables::Macs::Mac


class L2Rib::EviChildTables::Macs::Mac::Route : public ydk::Entity
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
        class Regular; //type: L2Rib::EviChildTables::Macs::Mac::Route::Regular
        class EvpnEsi; //type: L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi
        class Bmac; //type: L2Rib::EviChildTables::Macs::Mac::Route::Bmac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Bmac> bmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi> evpn_esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Regular> regular;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route


class L2Rib::EviChildTables::Macs::Mac::Route::Bmac : public ydk::Entity
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
        class PathList; //type: L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList> path_list;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::Bmac


class L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList : public ydk::Entity
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
        class PathListInfo; //type: L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo
        class NextHopArray; //type: L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray> > next_hop_array;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo> path_list_info;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList


class L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray : public ydk::Entity
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
        class NextHop; //type: L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop> next_hop;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray


class L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop : public ydk::Entity
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
        class Labeled; //type: L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled> labeled;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop


class L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled : public ydk::Entity
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

}; // L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled


class L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo : public ydk::Entity
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
        class PathListEsi; //type: L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi
        class PathListMac; //type: L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi> path_list_esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac> path_list_mac;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo


class L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi : public ydk::Entity
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
        class EthernetSegmentId; //type: L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId
        class MacUpdateNextHopArray; //type: L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId> ethernet_segment_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray> > mac_update_next_hop_array;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi


class L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId : public ydk::Entity
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

}; // L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId


class L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray : public ydk::Entity
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
        class NextHop; //type: L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop> next_hop;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray


class L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop : public ydk::Entity
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
        class Labeled; //type: L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled> labeled;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop


class L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled : public ydk::Entity
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

}; // L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled


class L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac : public ydk::Entity
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

}; // L2Rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac


class L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi : public ydk::Entity
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
        class EthernetSegmentId; //type: L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId
        class PathList; //type: L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId> ethernet_segment_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList> path_list;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi


class L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId : public ydk::Entity
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

}; // L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId


class L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList : public ydk::Entity
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
        class PathListInfo; //type: L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo
        class NextHopArray; //type: L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray> > next_hop_array;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo> path_list_info;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList


class L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray : public ydk::Entity
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
        class NextHop; //type: L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop> next_hop;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray


class L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop : public ydk::Entity
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
        class Labeled; //type: L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled> labeled;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop


class L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled : public ydk::Entity
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

}; // L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled


class L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo : public ydk::Entity
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
        class PathListEsi; //type: L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi
        class PathListMac; //type: L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi> path_list_esi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac> path_list_mac;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo


class L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi : public ydk::Entity
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
        class EthernetSegmentId; //type: L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId
        class MacUpdateNextHopArray; //type: L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId> ethernet_segment_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray> > mac_update_next_hop_array;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi


class L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId : public ydk::Entity
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

}; // L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId


class L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray : public ydk::Entity
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
        class NextHop; //type: L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop> next_hop;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray


class L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop : public ydk::Entity
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
        class Labeled; //type: L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled> labeled;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop


class L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled : public ydk::Entity
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

}; // L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled


class L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac : public ydk::Entity
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

}; // L2Rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac


class L2Rib::EviChildTables::Macs::Mac::Route::Regular : public ydk::Entity
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

        class NextHop; //type: L2Rib::EviChildTables::Macs::Mac::Route::Regular::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Regular::NextHop> next_hop;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::Regular


class L2Rib::EviChildTables::Macs::Mac::Route::Regular::NextHop : public ydk::Entity
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
        class NextHop_; //type: L2Rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_> next_hop;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::Regular::NextHop


class L2Rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_ : public ydk::Entity
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
        class Labeled; //type: L2Rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled> labeled;
        
}; // L2Rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_


class L2Rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled : public ydk::Entity
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

}; // L2Rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled


class L2Rib::Evis : public ydk::Entity
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

        class Evi; //type: L2Rib::Evis::Evi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::Evis::Evi> > evi;
        
}; // L2Rib::Evis


class L2Rib::Evis::Evi : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf topology_name; //type: string
        ydk::YLeaf topology_type; //type: uint32

}; // L2Rib::Evis::Evi


class L2Rib::EvisXr : public ydk::Entity
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

        class Evi; //type: L2Rib::EvisXr::Evi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EvisXr::Evi> > evi;
        
}; // L2Rib::EvisXr


class L2Rib::EvisXr::Evi : public ydk::Entity
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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf l2r_vni; //type: uint32
        ydk::YLeaf l2r_encap_type; //type: uint16
        ydk::YLeaf l2r_nve_iod; //type: uint32
        ydk::YLeaf l2r_nve_ifhandle; //type: uint32
        ydk::YLeaf vtep_ip; //type: string
        ydk::YLeaf l2r_topo_txid; //type: uint32
        ydk::YLeaf l2r_topo_flags; //type: uint32
        class Topology; //type: L2Rib::EvisXr::Evi::Topology

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::EvisXr::Evi::Topology> topology;
        
}; // L2Rib::EvisXr::Evi


class L2Rib::EvisXr::Evi::Topology : public ydk::Entity
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

}; // L2Rib::EvisXr::Evi::Topology


class L2Rib::Producers : public ydk::Entity
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

        class Producer; //type: L2Rib::Producers::Producer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::Producers::Producer> > producer;
        
}; // L2Rib::Producers


class L2Rib::Producers::Producer : public ydk::Entity
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

        ydk::YLeaf object_id; //type: int32
        ydk::YLeaf product_id; //type: int32
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf object_type; //type: L2ribBagObj
        ydk::YLeaf producer_id; //type: L2ribBagProducerId
        ydk::YLeaf producer_name; //type: string
        ydk::YLeaf admin_distance; //type: uint32
        ydk::YLeaf purge_time; //type: uint32
        ydk::YLeaf state; //type: L2ribBagProducerState

}; // L2Rib::Producers::Producer


class L2Rib::ProducersDetails : public ydk::Entity
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

        class ProducersDetail; //type: L2Rib::ProducersDetails::ProducersDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::ProducersDetails::ProducersDetail> > producers_detail;
        
}; // L2Rib::ProducersDetails


class L2Rib::ProducersDetails::ProducersDetail : public ydk::Entity
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

        ydk::YLeaf object_id; //type: int32
        ydk::YLeaf product_id; //type: int32
        ydk::YLeaf last_update_timestamp; //type: uint64
        class Producer; //type: L2Rib::ProducersDetails::ProducersDetail::Producer
        class Statistics; //type: L2Rib::ProducersDetails::ProducersDetail::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::ProducersDetails::ProducersDetail::Producer> producer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::ProducersDetails::ProducersDetail::Statistics> statistics;
        
}; // L2Rib::ProducersDetails::ProducersDetail


class L2Rib::ProducersDetails::ProducersDetail::Producer : public ydk::Entity
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

}; // L2Rib::ProducersDetails::ProducersDetail::Producer


class L2Rib::ProducersDetails::ProducersDetail::Statistics : public ydk::Entity
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
        class Statistics_; //type: L2Rib::ProducersDetails::ProducersDetail::Statistics::Statistics_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::ProducersDetails::ProducersDetail::Statistics::Statistics_> statistics;
        
}; // L2Rib::ProducersDetails::ProducersDetail::Statistics


class L2Rib::ProducersDetails::ProducersDetail::Statistics::Statistics_ : public ydk::Entity
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
        class ExtendedCounter; //type: L2Rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter> > extended_counter;
        
}; // L2Rib::ProducersDetails::ProducersDetail::Statistics::Statistics_


class L2Rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter : public ydk::Entity
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

}; // L2Rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter


class L2Rib::Summary : public ydk::Entity
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
        class TableSummary; //type: L2Rib::Summary::TableSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::Summary::TableSummary> > table_summary;
        
}; // L2Rib::Summary


class L2Rib::Summary::TableSummary : public ydk::Entity
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
        class ProducerStat; //type: L2Rib::Summary::TableSummary::ProducerStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::Summary::TableSummary::ProducerStat> > producer_stat;
        
}; // L2Rib::Summary::TableSummary


class L2Rib::Summary::TableSummary::ProducerStat : public ydk::Entity
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
        class Statistics; //type: L2Rib::Summary::TableSummary::ProducerStat::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::Summary::TableSummary::ProducerStat::Statistics> statistics;
        
}; // L2Rib::Summary::TableSummary::ProducerStat


class L2Rib::Summary::TableSummary::ProducerStat::Statistics : public ydk::Entity
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
        class ExtendedCounter; //type: L2Rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2rib_oper::L2Rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter> > extended_counter;
        
}; // L2Rib::Summary::TableSummary::ProducerStat::Statistics


class L2Rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter : public ydk::Entity
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

}; // L2Rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter

class L2ribAfi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2rib_address_family_ipv4;
        static const ydk::Enum::YLeaf l2rib_address_family_ipv6;
        static const ydk::Enum::YLeaf l2rib_address_family_invalid;

};

class L2ribMacRoute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2rib_mac_route_type_invalid;
        static const ydk::Enum::YLeaf l2rib_mac_route_type_regular;
        static const ydk::Enum::YLeaf l2rib_mac_route_type_evpn_esi;
        static const ydk::Enum::YLeaf l2rib_mac_route_type_bmac;

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
        static const ydk::Enum::YLeaf l2rib_bag_prod_prod_all;

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

