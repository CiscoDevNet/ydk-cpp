#ifndef _CISCO_IOS_XR_INFRA_STATSD_OPER_
#define _CISCO_IOS_XR_INFRA_STATSD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_statsd_oper {

class InfraStatistics : public ydk::Entity
{
    public:
        InfraStatistics();
        ~InfraStatistics();

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

        class Interfaces; //type: InfraStatistics::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces> interfaces;
        
}; // InfraStatistics


class InfraStatistics::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: InfraStatistics::Interfaces::Interface

        ydk::YList interface;
        
}; // InfraStatistics::Interfaces


class InfraStatistics::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        class Cache; //type: InfraStatistics::Interfaces::Interface::Cache
        class Latest; //type: InfraStatistics::Interfaces::Interface::Latest
        class Total; //type: InfraStatistics::Interfaces::Interface::Total
        class Protocols; //type: InfraStatistics::Interfaces::Interface::Protocols
        class InterfacesMibCounters; //type: InfraStatistics::Interfaces::Interface::InterfacesMibCounters
        class DataRate; //type: InfraStatistics::Interfaces::Interface::DataRate
        class GenericCounters; //type: InfraStatistics::Interfaces::Interface::GenericCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Cache> cache;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Latest> latest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Total> total;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Protocols> protocols;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::InterfacesMibCounters> interfaces_mib_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::DataRate> data_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::GenericCounters> generic_counters;
        
}; // InfraStatistics::Interfaces::Interface


class InfraStatistics::Interfaces::Interface::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocols; //type: InfraStatistics::Interfaces::Interface::Cache::Protocols
        class InterfacesMibCounters; //type: InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters
        class DataRate; //type: InfraStatistics::Interfaces::Interface::Cache::DataRate
        class GenericCounters; //type: InfraStatistics::Interfaces::Interface::Cache::GenericCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Cache::Protocols> protocols;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters> interfaces_mib_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Cache::DataRate> data_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Cache::GenericCounters> generic_counters;
        
}; // InfraStatistics::Interfaces::Interface::Cache


class InfraStatistics::Interfaces::Interface::Cache::Protocols : public ydk::Entity
{
    public:
        Protocols();
        ~Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol

        ydk::YList protocol;
        
}; // InfraStatistics::Interfaces::Interface::Cache::Protocols


class InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf protocol; //type: uint32
        ydk::YLeaf last_data_time; //type: uint64
        ydk::YLeaf input_data_rate; //type: uint64
        ydk::YLeaf input_packet_rate; //type: uint64
        ydk::YLeaf output_data_rate; //type: uint64
        ydk::YLeaf output_packet_rate; //type: uint64

}; // InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol


class InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters : public ydk::Entity
{
    public:
        InterfacesMibCounters();
        ~InterfacesMibCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf multicast_packets_received; //type: uint64
        ydk::YLeaf broadcast_packets_received; //type: uint64
        ydk::YLeaf multicast_packets_sent; //type: uint64
        ydk::YLeaf broadcast_packets_sent; //type: uint64
        ydk::YLeaf output_drops; //type: uint32
        ydk::YLeaf output_queue_drops; //type: uint32
        ydk::YLeaf input_drops; //type: uint32
        ydk::YLeaf input_queue_drops; //type: uint32
        ydk::YLeaf runt_packets_received; //type: uint32
        ydk::YLeaf giant_packets_received; //type: uint32
        ydk::YLeaf throttled_packets_received; //type: uint32
        ydk::YLeaf parity_packets_received; //type: uint32
        ydk::YLeaf unknown_protocol_packets_received; //type: uint32
        ydk::YLeaf input_errors; //type: uint32
        ydk::YLeaf crc_errors; //type: uint32
        ydk::YLeaf input_overruns; //type: uint32
        ydk::YLeaf framing_errors_received; //type: uint32
        ydk::YLeaf input_ignored_packets; //type: uint32
        ydk::YLeaf input_aborts; //type: uint32
        ydk::YLeaf output_errors; //type: uint32
        ydk::YLeaf output_underruns; //type: uint32
        ydk::YLeaf output_buffer_failures; //type: uint32
        ydk::YLeaf output_buffers_swapped_out; //type: uint32
        ydk::YLeaf applique; //type: uint32
        ydk::YLeaf resets; //type: uint32
        ydk::YLeaf carrier_transitions; //type: uint32
        ydk::YLeaf availability_flag; //type: uint32
        ydk::YLeaf last_data_time; //type: uint32
        ydk::YLeaf seconds_since_last_clear_counters; //type: uint32
        ydk::YLeaf last_discontinuity_time; //type: uint32
        ydk::YLeaf seconds_since_packet_received; //type: uint32
        ydk::YLeaf seconds_since_packet_sent; //type: uint32

}; // InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters


class InfraStatistics::Interfaces::Interface::Cache::DataRate : public ydk::Entity
{
    public:
        DataRate();
        ~DataRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input_data_rate; //type: uint64
        ydk::YLeaf input_packet_rate; //type: uint64
        ydk::YLeaf output_data_rate; //type: uint64
        ydk::YLeaf output_packet_rate; //type: uint64
        ydk::YLeaf peak_input_data_rate; //type: uint64
        ydk::YLeaf peak_input_packet_rate; //type: uint64
        ydk::YLeaf peak_output_data_rate; //type: uint64
        ydk::YLeaf peak_output_packet_rate; //type: uint64
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf load_interval; //type: uint32
        ydk::YLeaf output_load; //type: uint8
        ydk::YLeaf input_load; //type: uint8
        ydk::YLeaf reliability; //type: uint8

}; // InfraStatistics::Interfaces::Interface::Cache::DataRate


class InfraStatistics::Interfaces::Interface::Cache::GenericCounters : public ydk::Entity
{
    public:
        GenericCounters();
        ~GenericCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf multicast_packets_received; //type: uint64
        ydk::YLeaf broadcast_packets_received; //type: uint64
        ydk::YLeaf multicast_packets_sent; //type: uint64
        ydk::YLeaf broadcast_packets_sent; //type: uint64
        ydk::YLeaf output_drops; //type: uint32
        ydk::YLeaf output_queue_drops; //type: uint32
        ydk::YLeaf input_drops; //type: uint32
        ydk::YLeaf input_queue_drops; //type: uint32
        ydk::YLeaf runt_packets_received; //type: uint32
        ydk::YLeaf giant_packets_received; //type: uint32
        ydk::YLeaf throttled_packets_received; //type: uint32
        ydk::YLeaf parity_packets_received; //type: uint32
        ydk::YLeaf unknown_protocol_packets_received; //type: uint32
        ydk::YLeaf input_errors; //type: uint32
        ydk::YLeaf crc_errors; //type: uint32
        ydk::YLeaf input_overruns; //type: uint32
        ydk::YLeaf framing_errors_received; //type: uint32
        ydk::YLeaf input_ignored_packets; //type: uint32
        ydk::YLeaf input_aborts; //type: uint32
        ydk::YLeaf output_errors; //type: uint32
        ydk::YLeaf output_underruns; //type: uint32
        ydk::YLeaf output_buffer_failures; //type: uint32
        ydk::YLeaf output_buffers_swapped_out; //type: uint32
        ydk::YLeaf applique; //type: uint32
        ydk::YLeaf resets; //type: uint32
        ydk::YLeaf carrier_transitions; //type: uint32
        ydk::YLeaf availability_flag; //type: uint32
        ydk::YLeaf last_data_time; //type: uint32
        ydk::YLeaf seconds_since_last_clear_counters; //type: uint32
        ydk::YLeaf last_discontinuity_time; //type: uint32
        ydk::YLeaf seconds_since_packet_received; //type: uint32
        ydk::YLeaf seconds_since_packet_sent; //type: uint32

}; // InfraStatistics::Interfaces::Interface::Cache::GenericCounters


class InfraStatistics::Interfaces::Interface::Latest : public ydk::Entity
{
    public:
        Latest();
        ~Latest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocols; //type: InfraStatistics::Interfaces::Interface::Latest::Protocols
        class InterfacesMibCounters; //type: InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters
        class DataRate; //type: InfraStatistics::Interfaces::Interface::Latest::DataRate
        class GenericCounters; //type: InfraStatistics::Interfaces::Interface::Latest::GenericCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Latest::Protocols> protocols;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters> interfaces_mib_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Latest::DataRate> data_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Latest::GenericCounters> generic_counters;
        
}; // InfraStatistics::Interfaces::Interface::Latest


class InfraStatistics::Interfaces::Interface::Latest::Protocols : public ydk::Entity
{
    public:
        Protocols();
        ~Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol

        ydk::YList protocol;
        
}; // InfraStatistics::Interfaces::Interface::Latest::Protocols


class InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf protocol; //type: uint32
        ydk::YLeaf last_data_time; //type: uint64
        ydk::YLeaf input_data_rate; //type: uint64
        ydk::YLeaf input_packet_rate; //type: uint64
        ydk::YLeaf output_data_rate; //type: uint64
        ydk::YLeaf output_packet_rate; //type: uint64

}; // InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol


class InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters : public ydk::Entity
{
    public:
        InterfacesMibCounters();
        ~InterfacesMibCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf multicast_packets_received; //type: uint64
        ydk::YLeaf broadcast_packets_received; //type: uint64
        ydk::YLeaf multicast_packets_sent; //type: uint64
        ydk::YLeaf broadcast_packets_sent; //type: uint64
        ydk::YLeaf output_drops; //type: uint32
        ydk::YLeaf output_queue_drops; //type: uint32
        ydk::YLeaf input_drops; //type: uint32
        ydk::YLeaf input_queue_drops; //type: uint32
        ydk::YLeaf runt_packets_received; //type: uint32
        ydk::YLeaf giant_packets_received; //type: uint32
        ydk::YLeaf throttled_packets_received; //type: uint32
        ydk::YLeaf parity_packets_received; //type: uint32
        ydk::YLeaf unknown_protocol_packets_received; //type: uint32
        ydk::YLeaf input_errors; //type: uint32
        ydk::YLeaf crc_errors; //type: uint32
        ydk::YLeaf input_overruns; //type: uint32
        ydk::YLeaf framing_errors_received; //type: uint32
        ydk::YLeaf input_ignored_packets; //type: uint32
        ydk::YLeaf input_aborts; //type: uint32
        ydk::YLeaf output_errors; //type: uint32
        ydk::YLeaf output_underruns; //type: uint32
        ydk::YLeaf output_buffer_failures; //type: uint32
        ydk::YLeaf output_buffers_swapped_out; //type: uint32
        ydk::YLeaf applique; //type: uint32
        ydk::YLeaf resets; //type: uint32
        ydk::YLeaf carrier_transitions; //type: uint32
        ydk::YLeaf availability_flag; //type: uint32
        ydk::YLeaf last_data_time; //type: uint32
        ydk::YLeaf seconds_since_last_clear_counters; //type: uint32
        ydk::YLeaf last_discontinuity_time; //type: uint32
        ydk::YLeaf seconds_since_packet_received; //type: uint32
        ydk::YLeaf seconds_since_packet_sent; //type: uint32

}; // InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters


class InfraStatistics::Interfaces::Interface::Latest::DataRate : public ydk::Entity
{
    public:
        DataRate();
        ~DataRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input_data_rate; //type: uint64
        ydk::YLeaf input_packet_rate; //type: uint64
        ydk::YLeaf output_data_rate; //type: uint64
        ydk::YLeaf output_packet_rate; //type: uint64
        ydk::YLeaf peak_input_data_rate; //type: uint64
        ydk::YLeaf peak_input_packet_rate; //type: uint64
        ydk::YLeaf peak_output_data_rate; //type: uint64
        ydk::YLeaf peak_output_packet_rate; //type: uint64
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf load_interval; //type: uint32
        ydk::YLeaf output_load; //type: uint8
        ydk::YLeaf input_load; //type: uint8
        ydk::YLeaf reliability; //type: uint8

}; // InfraStatistics::Interfaces::Interface::Latest::DataRate


class InfraStatistics::Interfaces::Interface::Latest::GenericCounters : public ydk::Entity
{
    public:
        GenericCounters();
        ~GenericCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf multicast_packets_received; //type: uint64
        ydk::YLeaf broadcast_packets_received; //type: uint64
        ydk::YLeaf multicast_packets_sent; //type: uint64
        ydk::YLeaf broadcast_packets_sent; //type: uint64
        ydk::YLeaf output_drops; //type: uint32
        ydk::YLeaf output_queue_drops; //type: uint32
        ydk::YLeaf input_drops; //type: uint32
        ydk::YLeaf input_queue_drops; //type: uint32
        ydk::YLeaf runt_packets_received; //type: uint32
        ydk::YLeaf giant_packets_received; //type: uint32
        ydk::YLeaf throttled_packets_received; //type: uint32
        ydk::YLeaf parity_packets_received; //type: uint32
        ydk::YLeaf unknown_protocol_packets_received; //type: uint32
        ydk::YLeaf input_errors; //type: uint32
        ydk::YLeaf crc_errors; //type: uint32
        ydk::YLeaf input_overruns; //type: uint32
        ydk::YLeaf framing_errors_received; //type: uint32
        ydk::YLeaf input_ignored_packets; //type: uint32
        ydk::YLeaf input_aborts; //type: uint32
        ydk::YLeaf output_errors; //type: uint32
        ydk::YLeaf output_underruns; //type: uint32
        ydk::YLeaf output_buffer_failures; //type: uint32
        ydk::YLeaf output_buffers_swapped_out; //type: uint32
        ydk::YLeaf applique; //type: uint32
        ydk::YLeaf resets; //type: uint32
        ydk::YLeaf carrier_transitions; //type: uint32
        ydk::YLeaf availability_flag; //type: uint32
        ydk::YLeaf last_data_time; //type: uint32
        ydk::YLeaf seconds_since_last_clear_counters; //type: uint32
        ydk::YLeaf last_discontinuity_time; //type: uint32
        ydk::YLeaf seconds_since_packet_received; //type: uint32
        ydk::YLeaf seconds_since_packet_sent; //type: uint32

}; // InfraStatistics::Interfaces::Interface::Latest::GenericCounters


class InfraStatistics::Interfaces::Interface::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocols; //type: InfraStatistics::Interfaces::Interface::Total::Protocols
        class InterfacesMibCounters; //type: InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters
        class DataRate; //type: InfraStatistics::Interfaces::Interface::Total::DataRate
        class GenericCounters; //type: InfraStatistics::Interfaces::Interface::Total::GenericCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Total::Protocols> protocols;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters> interfaces_mib_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Total::DataRate> data_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Total::GenericCounters> generic_counters;
        
}; // InfraStatistics::Interfaces::Interface::Total


class InfraStatistics::Interfaces::Interface::Total::Protocols : public ydk::Entity
{
    public:
        Protocols();
        ~Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol

        ydk::YList protocol;
        
}; // InfraStatistics::Interfaces::Interface::Total::Protocols


class InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf protocol; //type: uint32
        ydk::YLeaf last_data_time; //type: uint64
        ydk::YLeaf input_data_rate; //type: uint64
        ydk::YLeaf input_packet_rate; //type: uint64
        ydk::YLeaf output_data_rate; //type: uint64
        ydk::YLeaf output_packet_rate; //type: uint64

}; // InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol


class InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters : public ydk::Entity
{
    public:
        InterfacesMibCounters();
        ~InterfacesMibCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf multicast_packets_received; //type: uint64
        ydk::YLeaf broadcast_packets_received; //type: uint64
        ydk::YLeaf multicast_packets_sent; //type: uint64
        ydk::YLeaf broadcast_packets_sent; //type: uint64
        ydk::YLeaf output_drops; //type: uint32
        ydk::YLeaf output_queue_drops; //type: uint32
        ydk::YLeaf input_drops; //type: uint32
        ydk::YLeaf input_queue_drops; //type: uint32
        ydk::YLeaf runt_packets_received; //type: uint32
        ydk::YLeaf giant_packets_received; //type: uint32
        ydk::YLeaf throttled_packets_received; //type: uint32
        ydk::YLeaf parity_packets_received; //type: uint32
        ydk::YLeaf unknown_protocol_packets_received; //type: uint32
        ydk::YLeaf input_errors; //type: uint32
        ydk::YLeaf crc_errors; //type: uint32
        ydk::YLeaf input_overruns; //type: uint32
        ydk::YLeaf framing_errors_received; //type: uint32
        ydk::YLeaf input_ignored_packets; //type: uint32
        ydk::YLeaf input_aborts; //type: uint32
        ydk::YLeaf output_errors; //type: uint32
        ydk::YLeaf output_underruns; //type: uint32
        ydk::YLeaf output_buffer_failures; //type: uint32
        ydk::YLeaf output_buffers_swapped_out; //type: uint32
        ydk::YLeaf applique; //type: uint32
        ydk::YLeaf resets; //type: uint32
        ydk::YLeaf carrier_transitions; //type: uint32
        ydk::YLeaf availability_flag; //type: uint32
        ydk::YLeaf last_data_time; //type: uint32
        ydk::YLeaf seconds_since_last_clear_counters; //type: uint32
        ydk::YLeaf last_discontinuity_time; //type: uint32
        ydk::YLeaf seconds_since_packet_received; //type: uint32
        ydk::YLeaf seconds_since_packet_sent; //type: uint32

}; // InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters


class InfraStatistics::Interfaces::Interface::Total::DataRate : public ydk::Entity
{
    public:
        DataRate();
        ~DataRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input_data_rate; //type: uint64
        ydk::YLeaf input_packet_rate; //type: uint64
        ydk::YLeaf output_data_rate; //type: uint64
        ydk::YLeaf output_packet_rate; //type: uint64
        ydk::YLeaf peak_input_data_rate; //type: uint64
        ydk::YLeaf peak_input_packet_rate; //type: uint64
        ydk::YLeaf peak_output_data_rate; //type: uint64
        ydk::YLeaf peak_output_packet_rate; //type: uint64
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf load_interval; //type: uint32
        ydk::YLeaf output_load; //type: uint8
        ydk::YLeaf input_load; //type: uint8
        ydk::YLeaf reliability; //type: uint8

}; // InfraStatistics::Interfaces::Interface::Total::DataRate


class InfraStatistics::Interfaces::Interface::Total::GenericCounters : public ydk::Entity
{
    public:
        GenericCounters();
        ~GenericCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf multicast_packets_received; //type: uint64
        ydk::YLeaf broadcast_packets_received; //type: uint64
        ydk::YLeaf multicast_packets_sent; //type: uint64
        ydk::YLeaf broadcast_packets_sent; //type: uint64
        ydk::YLeaf output_drops; //type: uint32
        ydk::YLeaf output_queue_drops; //type: uint32
        ydk::YLeaf input_drops; //type: uint32
        ydk::YLeaf input_queue_drops; //type: uint32
        ydk::YLeaf runt_packets_received; //type: uint32
        ydk::YLeaf giant_packets_received; //type: uint32
        ydk::YLeaf throttled_packets_received; //type: uint32
        ydk::YLeaf parity_packets_received; //type: uint32
        ydk::YLeaf unknown_protocol_packets_received; //type: uint32
        ydk::YLeaf input_errors; //type: uint32
        ydk::YLeaf crc_errors; //type: uint32
        ydk::YLeaf input_overruns; //type: uint32
        ydk::YLeaf framing_errors_received; //type: uint32
        ydk::YLeaf input_ignored_packets; //type: uint32
        ydk::YLeaf input_aborts; //type: uint32
        ydk::YLeaf output_errors; //type: uint32
        ydk::YLeaf output_underruns; //type: uint32
        ydk::YLeaf output_buffer_failures; //type: uint32
        ydk::YLeaf output_buffers_swapped_out; //type: uint32
        ydk::YLeaf applique; //type: uint32
        ydk::YLeaf resets; //type: uint32
        ydk::YLeaf carrier_transitions; //type: uint32
        ydk::YLeaf availability_flag; //type: uint32
        ydk::YLeaf last_data_time; //type: uint32
        ydk::YLeaf seconds_since_last_clear_counters; //type: uint32
        ydk::YLeaf last_discontinuity_time; //type: uint32
        ydk::YLeaf seconds_since_packet_received; //type: uint32
        ydk::YLeaf seconds_since_packet_sent; //type: uint32

}; // InfraStatistics::Interfaces::Interface::Total::GenericCounters


class InfraStatistics::Interfaces::Interface::Protocols : public ydk::Entity
{
    public:
        Protocols();
        ~Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: InfraStatistics::Interfaces::Interface::Protocols::Protocol

        ydk::YList protocol;
        
}; // InfraStatistics::Interfaces::Interface::Protocols


class InfraStatistics::Interfaces::Interface::Protocols::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf protocol; //type: uint32
        ydk::YLeaf last_data_time; //type: uint64
        ydk::YLeaf input_data_rate; //type: uint64
        ydk::YLeaf input_packet_rate; //type: uint64
        ydk::YLeaf output_data_rate; //type: uint64
        ydk::YLeaf output_packet_rate; //type: uint64

}; // InfraStatistics::Interfaces::Interface::Protocols::Protocol


class InfraStatistics::Interfaces::Interface::InterfacesMibCounters : public ydk::Entity
{
    public:
        InterfacesMibCounters();
        ~InterfacesMibCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf multicast_packets_received; //type: uint64
        ydk::YLeaf broadcast_packets_received; //type: uint64
        ydk::YLeaf multicast_packets_sent; //type: uint64
        ydk::YLeaf broadcast_packets_sent; //type: uint64
        ydk::YLeaf output_drops; //type: uint32
        ydk::YLeaf output_queue_drops; //type: uint32
        ydk::YLeaf input_drops; //type: uint32
        ydk::YLeaf input_queue_drops; //type: uint32
        ydk::YLeaf runt_packets_received; //type: uint32
        ydk::YLeaf giant_packets_received; //type: uint32
        ydk::YLeaf throttled_packets_received; //type: uint32
        ydk::YLeaf parity_packets_received; //type: uint32
        ydk::YLeaf unknown_protocol_packets_received; //type: uint32
        ydk::YLeaf input_errors; //type: uint32
        ydk::YLeaf crc_errors; //type: uint32
        ydk::YLeaf input_overruns; //type: uint32
        ydk::YLeaf framing_errors_received; //type: uint32
        ydk::YLeaf input_ignored_packets; //type: uint32
        ydk::YLeaf input_aborts; //type: uint32
        ydk::YLeaf output_errors; //type: uint32
        ydk::YLeaf output_underruns; //type: uint32
        ydk::YLeaf output_buffer_failures; //type: uint32
        ydk::YLeaf output_buffers_swapped_out; //type: uint32
        ydk::YLeaf applique; //type: uint32
        ydk::YLeaf resets; //type: uint32
        ydk::YLeaf carrier_transitions; //type: uint32
        ydk::YLeaf availability_flag; //type: uint32
        ydk::YLeaf last_data_time; //type: uint32
        ydk::YLeaf seconds_since_last_clear_counters; //type: uint32
        ydk::YLeaf last_discontinuity_time; //type: uint32
        ydk::YLeaf seconds_since_packet_received; //type: uint32
        ydk::YLeaf seconds_since_packet_sent; //type: uint32

}; // InfraStatistics::Interfaces::Interface::InterfacesMibCounters


class InfraStatistics::Interfaces::Interface::DataRate : public ydk::Entity
{
    public:
        DataRate();
        ~DataRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input_data_rate; //type: uint64
        ydk::YLeaf input_packet_rate; //type: uint64
        ydk::YLeaf output_data_rate; //type: uint64
        ydk::YLeaf output_packet_rate; //type: uint64
        ydk::YLeaf peak_input_data_rate; //type: uint64
        ydk::YLeaf peak_input_packet_rate; //type: uint64
        ydk::YLeaf peak_output_data_rate; //type: uint64
        ydk::YLeaf peak_output_packet_rate; //type: uint64
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf load_interval; //type: uint32
        ydk::YLeaf output_load; //type: uint8
        ydk::YLeaf input_load; //type: uint8
        ydk::YLeaf reliability; //type: uint8

}; // InfraStatistics::Interfaces::Interface::DataRate


class InfraStatistics::Interfaces::Interface::GenericCounters : public ydk::Entity
{
    public:
        GenericCounters();
        ~GenericCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf multicast_packets_received; //type: uint64
        ydk::YLeaf broadcast_packets_received; //type: uint64
        ydk::YLeaf multicast_packets_sent; //type: uint64
        ydk::YLeaf broadcast_packets_sent; //type: uint64
        ydk::YLeaf output_drops; //type: uint32
        ydk::YLeaf output_queue_drops; //type: uint32
        ydk::YLeaf input_drops; //type: uint32
        ydk::YLeaf input_queue_drops; //type: uint32
        ydk::YLeaf runt_packets_received; //type: uint32
        ydk::YLeaf giant_packets_received; //type: uint32
        ydk::YLeaf throttled_packets_received; //type: uint32
        ydk::YLeaf parity_packets_received; //type: uint32
        ydk::YLeaf unknown_protocol_packets_received; //type: uint32
        ydk::YLeaf input_errors; //type: uint32
        ydk::YLeaf crc_errors; //type: uint32
        ydk::YLeaf input_overruns; //type: uint32
        ydk::YLeaf framing_errors_received; //type: uint32
        ydk::YLeaf input_ignored_packets; //type: uint32
        ydk::YLeaf input_aborts; //type: uint32
        ydk::YLeaf output_errors; //type: uint32
        ydk::YLeaf output_underruns; //type: uint32
        ydk::YLeaf output_buffer_failures; //type: uint32
        ydk::YLeaf output_buffers_swapped_out; //type: uint32
        ydk::YLeaf applique; //type: uint32
        ydk::YLeaf resets; //type: uint32
        ydk::YLeaf carrier_transitions; //type: uint32
        ydk::YLeaf availability_flag; //type: uint32
        ydk::YLeaf last_data_time; //type: uint32
        ydk::YLeaf seconds_since_last_clear_counters; //type: uint32
        ydk::YLeaf last_discontinuity_time; //type: uint32
        ydk::YLeaf seconds_since_packet_received; //type: uint32
        ydk::YLeaf seconds_since_packet_sent; //type: uint32

}; // InfraStatistics::Interfaces::Interface::GenericCounters


}
}

#endif /* _CISCO_IOS_XR_INFRA_STATSD_OPER_ */

