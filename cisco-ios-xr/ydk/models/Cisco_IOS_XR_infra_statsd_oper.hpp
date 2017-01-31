#ifndef _CISCO_IOS_XR_INFRA_STATSD_OPER_
#define _CISCO_IOS_XR_INFRA_STATSD_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_statsd_oper {

class InfraStatistics : public Entity
{
    public:
        InfraStatistics();
        ~InfraStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Interfaces : public Entity
    {
        public:
            Interfaces();
            ~Interfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Interface : public Entity
        {
            public:
                Interface();
                ~Interface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf interface_name; //type: string

            class Cache : public Entity
            {
                public:
                    Cache();
                    ~Cache();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Protocols : public Entity
                {
                    public:
                        Protocols();
                        ~Protocols();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Protocol : public Entity
                    {
                        public:
                            Protocol();
                            ~Protocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf protocol_name; //type: string
                            YLeaf bytes_received; //type: uint64
                            YLeaf packets_received; //type: uint64
                            YLeaf bytes_sent; //type: uint64
                            YLeaf packets_sent; //type: uint64
                            YLeaf protocol; //type: uint32
                            YLeaf last_data_time; //type: uint32
                            YLeaf input_data_rate; //type: uint64
                            YLeaf input_packet_rate; //type: uint64
                            YLeaf output_data_rate; //type: uint64
                            YLeaf output_packet_rate; //type: uint64



                    }; // InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Cache::Protocols::Protocol> > protocol;


                }; // InfraStatistics::Interfaces::Interface::Cache::Protocols


                class InterfacesMibCounters : public Entity
                {
                    public:
                        InterfacesMibCounters();
                        ~InterfacesMibCounters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf packets_received; //type: uint64
                        YLeaf bytes_received; //type: uint64
                        YLeaf packets_sent; //type: uint64
                        YLeaf bytes_sent; //type: uint64
                        YLeaf multicast_packets_received; //type: uint64
                        YLeaf broadcast_packets_received; //type: uint64
                        YLeaf multicast_packets_sent; //type: uint64
                        YLeaf broadcast_packets_sent; //type: uint64
                        YLeaf output_drops; //type: uint32
                        YLeaf output_queue_drops; //type: uint32
                        YLeaf input_drops; //type: uint32
                        YLeaf input_queue_drops; //type: uint32
                        YLeaf runt_packets_received; //type: uint32
                        YLeaf giant_packets_received; //type: uint32
                        YLeaf throttled_packets_received; //type: uint32
                        YLeaf parity_packets_received; //type: uint32
                        YLeaf unknown_protocol_packets_received; //type: uint32
                        YLeaf input_errors; //type: uint32
                        YLeaf crc_errors; //type: uint32
                        YLeaf input_overruns; //type: uint32
                        YLeaf framing_errors_received; //type: uint32
                        YLeaf input_ignored_packets; //type: uint32
                        YLeaf input_aborts; //type: uint32
                        YLeaf output_errors; //type: uint32
                        YLeaf output_underruns; //type: uint32
                        YLeaf output_buffer_failures; //type: uint32
                        YLeaf output_buffers_swapped_out; //type: uint32
                        YLeaf applique; //type: uint32
                        YLeaf resets; //type: uint32
                        YLeaf carrier_transitions; //type: uint32
                        YLeaf availability_flag; //type: uint32
                        YLeaf last_data_time; //type: uint32
                        YLeaf seconds_since_last_clear_counters; //type: uint32
                        YLeaf last_discontinuity_time; //type: uint32
                        YLeaf seconds_since_packet_received; //type: uint32
                        YLeaf seconds_since_packet_sent; //type: uint32



                }; // InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters


                class DataRate : public Entity
                {
                    public:
                        DataRate();
                        ~DataRate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf input_data_rate; //type: uint64
                        YLeaf input_packet_rate; //type: uint64
                        YLeaf output_data_rate; //type: uint64
                        YLeaf output_packet_rate; //type: uint64
                        YLeaf peak_input_data_rate; //type: uint64
                        YLeaf peak_input_packet_rate; //type: uint64
                        YLeaf peak_output_data_rate; //type: uint64
                        YLeaf peak_output_packet_rate; //type: uint64
                        YLeaf bandwidth; //type: uint32
                        YLeaf load_interval; //type: uint32
                        YLeaf output_load; //type: uint8
                        YLeaf input_load; //type: uint8
                        YLeaf reliability; //type: uint8



                }; // InfraStatistics::Interfaces::Interface::Cache::DataRate


                class GenericCounters : public Entity
                {
                    public:
                        GenericCounters();
                        ~GenericCounters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf packets_received; //type: uint64
                        YLeaf bytes_received; //type: uint64
                        YLeaf packets_sent; //type: uint64
                        YLeaf bytes_sent; //type: uint64
                        YLeaf multicast_packets_received; //type: uint64
                        YLeaf broadcast_packets_received; //type: uint64
                        YLeaf multicast_packets_sent; //type: uint64
                        YLeaf broadcast_packets_sent; //type: uint64
                        YLeaf output_drops; //type: uint32
                        YLeaf output_queue_drops; //type: uint32
                        YLeaf input_drops; //type: uint32
                        YLeaf input_queue_drops; //type: uint32
                        YLeaf runt_packets_received; //type: uint32
                        YLeaf giant_packets_received; //type: uint32
                        YLeaf throttled_packets_received; //type: uint32
                        YLeaf parity_packets_received; //type: uint32
                        YLeaf unknown_protocol_packets_received; //type: uint32
                        YLeaf input_errors; //type: uint32
                        YLeaf crc_errors; //type: uint32
                        YLeaf input_overruns; //type: uint32
                        YLeaf framing_errors_received; //type: uint32
                        YLeaf input_ignored_packets; //type: uint32
                        YLeaf input_aborts; //type: uint32
                        YLeaf output_errors; //type: uint32
                        YLeaf output_underruns; //type: uint32
                        YLeaf output_buffer_failures; //type: uint32
                        YLeaf output_buffers_swapped_out; //type: uint32
                        YLeaf applique; //type: uint32
                        YLeaf resets; //type: uint32
                        YLeaf carrier_transitions; //type: uint32
                        YLeaf availability_flag; //type: uint32
                        YLeaf last_data_time; //type: uint32
                        YLeaf seconds_since_last_clear_counters; //type: uint32
                        YLeaf last_discontinuity_time; //type: uint32
                        YLeaf seconds_since_packet_received; //type: uint32
                        YLeaf seconds_since_packet_sent; //type: uint32



                }; // InfraStatistics::Interfaces::Interface::Cache::GenericCounters


                    std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Cache::DataRate> data_rate;
                    std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Cache::GenericCounters> generic_counters;
                    std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Cache::InterfacesMibCounters> interfaces_mib_counters;
                    std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Cache::Protocols> protocols;


            }; // InfraStatistics::Interfaces::Interface::Cache


            class Latest : public Entity
            {
                public:
                    Latest();
                    ~Latest();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Protocols : public Entity
                {
                    public:
                        Protocols();
                        ~Protocols();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Protocol : public Entity
                    {
                        public:
                            Protocol();
                            ~Protocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf protocol_name; //type: string
                            YLeaf bytes_received; //type: uint64
                            YLeaf packets_received; //type: uint64
                            YLeaf bytes_sent; //type: uint64
                            YLeaf packets_sent; //type: uint64
                            YLeaf protocol; //type: uint32
                            YLeaf last_data_time; //type: uint32
                            YLeaf input_data_rate; //type: uint64
                            YLeaf input_packet_rate; //type: uint64
                            YLeaf output_data_rate; //type: uint64
                            YLeaf output_packet_rate; //type: uint64



                    }; // InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Latest::Protocols::Protocol> > protocol;


                }; // InfraStatistics::Interfaces::Interface::Latest::Protocols


                class InterfacesMibCounters : public Entity
                {
                    public:
                        InterfacesMibCounters();
                        ~InterfacesMibCounters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf packets_received; //type: uint64
                        YLeaf bytes_received; //type: uint64
                        YLeaf packets_sent; //type: uint64
                        YLeaf bytes_sent; //type: uint64
                        YLeaf multicast_packets_received; //type: uint64
                        YLeaf broadcast_packets_received; //type: uint64
                        YLeaf multicast_packets_sent; //type: uint64
                        YLeaf broadcast_packets_sent; //type: uint64
                        YLeaf output_drops; //type: uint32
                        YLeaf output_queue_drops; //type: uint32
                        YLeaf input_drops; //type: uint32
                        YLeaf input_queue_drops; //type: uint32
                        YLeaf runt_packets_received; //type: uint32
                        YLeaf giant_packets_received; //type: uint32
                        YLeaf throttled_packets_received; //type: uint32
                        YLeaf parity_packets_received; //type: uint32
                        YLeaf unknown_protocol_packets_received; //type: uint32
                        YLeaf input_errors; //type: uint32
                        YLeaf crc_errors; //type: uint32
                        YLeaf input_overruns; //type: uint32
                        YLeaf framing_errors_received; //type: uint32
                        YLeaf input_ignored_packets; //type: uint32
                        YLeaf input_aborts; //type: uint32
                        YLeaf output_errors; //type: uint32
                        YLeaf output_underruns; //type: uint32
                        YLeaf output_buffer_failures; //type: uint32
                        YLeaf output_buffers_swapped_out; //type: uint32
                        YLeaf applique; //type: uint32
                        YLeaf resets; //type: uint32
                        YLeaf carrier_transitions; //type: uint32
                        YLeaf availability_flag; //type: uint32
                        YLeaf last_data_time; //type: uint32
                        YLeaf seconds_since_last_clear_counters; //type: uint32
                        YLeaf last_discontinuity_time; //type: uint32
                        YLeaf seconds_since_packet_received; //type: uint32
                        YLeaf seconds_since_packet_sent; //type: uint32



                }; // InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters


                class DataRate : public Entity
                {
                    public:
                        DataRate();
                        ~DataRate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf input_data_rate; //type: uint64
                        YLeaf input_packet_rate; //type: uint64
                        YLeaf output_data_rate; //type: uint64
                        YLeaf output_packet_rate; //type: uint64
                        YLeaf peak_input_data_rate; //type: uint64
                        YLeaf peak_input_packet_rate; //type: uint64
                        YLeaf peak_output_data_rate; //type: uint64
                        YLeaf peak_output_packet_rate; //type: uint64
                        YLeaf bandwidth; //type: uint32
                        YLeaf load_interval; //type: uint32
                        YLeaf output_load; //type: uint8
                        YLeaf input_load; //type: uint8
                        YLeaf reliability; //type: uint8



                }; // InfraStatistics::Interfaces::Interface::Latest::DataRate


                class GenericCounters : public Entity
                {
                    public:
                        GenericCounters();
                        ~GenericCounters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf packets_received; //type: uint64
                        YLeaf bytes_received; //type: uint64
                        YLeaf packets_sent; //type: uint64
                        YLeaf bytes_sent; //type: uint64
                        YLeaf multicast_packets_received; //type: uint64
                        YLeaf broadcast_packets_received; //type: uint64
                        YLeaf multicast_packets_sent; //type: uint64
                        YLeaf broadcast_packets_sent; //type: uint64
                        YLeaf output_drops; //type: uint32
                        YLeaf output_queue_drops; //type: uint32
                        YLeaf input_drops; //type: uint32
                        YLeaf input_queue_drops; //type: uint32
                        YLeaf runt_packets_received; //type: uint32
                        YLeaf giant_packets_received; //type: uint32
                        YLeaf throttled_packets_received; //type: uint32
                        YLeaf parity_packets_received; //type: uint32
                        YLeaf unknown_protocol_packets_received; //type: uint32
                        YLeaf input_errors; //type: uint32
                        YLeaf crc_errors; //type: uint32
                        YLeaf input_overruns; //type: uint32
                        YLeaf framing_errors_received; //type: uint32
                        YLeaf input_ignored_packets; //type: uint32
                        YLeaf input_aborts; //type: uint32
                        YLeaf output_errors; //type: uint32
                        YLeaf output_underruns; //type: uint32
                        YLeaf output_buffer_failures; //type: uint32
                        YLeaf output_buffers_swapped_out; //type: uint32
                        YLeaf applique; //type: uint32
                        YLeaf resets; //type: uint32
                        YLeaf carrier_transitions; //type: uint32
                        YLeaf availability_flag; //type: uint32
                        YLeaf last_data_time; //type: uint32
                        YLeaf seconds_since_last_clear_counters; //type: uint32
                        YLeaf last_discontinuity_time; //type: uint32
                        YLeaf seconds_since_packet_received; //type: uint32
                        YLeaf seconds_since_packet_sent; //type: uint32



                }; // InfraStatistics::Interfaces::Interface::Latest::GenericCounters


                    std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Latest::DataRate> data_rate;
                    std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Latest::GenericCounters> generic_counters;
                    std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Latest::InterfacesMibCounters> interfaces_mib_counters;
                    std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Latest::Protocols> protocols;


            }; // InfraStatistics::Interfaces::Interface::Latest


            class Total : public Entity
            {
                public:
                    Total();
                    ~Total();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Protocols : public Entity
                {
                    public:
                        Protocols();
                        ~Protocols();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Protocol : public Entity
                    {
                        public:
                            Protocol();
                            ~Protocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf protocol_name; //type: string
                            YLeaf bytes_received; //type: uint64
                            YLeaf packets_received; //type: uint64
                            YLeaf bytes_sent; //type: uint64
                            YLeaf packets_sent; //type: uint64
                            YLeaf protocol; //type: uint32
                            YLeaf last_data_time; //type: uint32
                            YLeaf input_data_rate; //type: uint64
                            YLeaf input_packet_rate; //type: uint64
                            YLeaf output_data_rate; //type: uint64
                            YLeaf output_packet_rate; //type: uint64



                    }; // InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Total::Protocols::Protocol> > protocol;


                }; // InfraStatistics::Interfaces::Interface::Total::Protocols


                class InterfacesMibCounters : public Entity
                {
                    public:
                        InterfacesMibCounters();
                        ~InterfacesMibCounters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf packets_received; //type: uint64
                        YLeaf bytes_received; //type: uint64
                        YLeaf packets_sent; //type: uint64
                        YLeaf bytes_sent; //type: uint64
                        YLeaf multicast_packets_received; //type: uint64
                        YLeaf broadcast_packets_received; //type: uint64
                        YLeaf multicast_packets_sent; //type: uint64
                        YLeaf broadcast_packets_sent; //type: uint64
                        YLeaf output_drops; //type: uint32
                        YLeaf output_queue_drops; //type: uint32
                        YLeaf input_drops; //type: uint32
                        YLeaf input_queue_drops; //type: uint32
                        YLeaf runt_packets_received; //type: uint32
                        YLeaf giant_packets_received; //type: uint32
                        YLeaf throttled_packets_received; //type: uint32
                        YLeaf parity_packets_received; //type: uint32
                        YLeaf unknown_protocol_packets_received; //type: uint32
                        YLeaf input_errors; //type: uint32
                        YLeaf crc_errors; //type: uint32
                        YLeaf input_overruns; //type: uint32
                        YLeaf framing_errors_received; //type: uint32
                        YLeaf input_ignored_packets; //type: uint32
                        YLeaf input_aborts; //type: uint32
                        YLeaf output_errors; //type: uint32
                        YLeaf output_underruns; //type: uint32
                        YLeaf output_buffer_failures; //type: uint32
                        YLeaf output_buffers_swapped_out; //type: uint32
                        YLeaf applique; //type: uint32
                        YLeaf resets; //type: uint32
                        YLeaf carrier_transitions; //type: uint32
                        YLeaf availability_flag; //type: uint32
                        YLeaf last_data_time; //type: uint32
                        YLeaf seconds_since_last_clear_counters; //type: uint32
                        YLeaf last_discontinuity_time; //type: uint32
                        YLeaf seconds_since_packet_received; //type: uint32
                        YLeaf seconds_since_packet_sent; //type: uint32



                }; // InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters


                class DataRate : public Entity
                {
                    public:
                        DataRate();
                        ~DataRate();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf input_data_rate; //type: uint64
                        YLeaf input_packet_rate; //type: uint64
                        YLeaf output_data_rate; //type: uint64
                        YLeaf output_packet_rate; //type: uint64
                        YLeaf peak_input_data_rate; //type: uint64
                        YLeaf peak_input_packet_rate; //type: uint64
                        YLeaf peak_output_data_rate; //type: uint64
                        YLeaf peak_output_packet_rate; //type: uint64
                        YLeaf bandwidth; //type: uint32
                        YLeaf load_interval; //type: uint32
                        YLeaf output_load; //type: uint8
                        YLeaf input_load; //type: uint8
                        YLeaf reliability; //type: uint8



                }; // InfraStatistics::Interfaces::Interface::Total::DataRate


                class GenericCounters : public Entity
                {
                    public:
                        GenericCounters();
                        ~GenericCounters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf packets_received; //type: uint64
                        YLeaf bytes_received; //type: uint64
                        YLeaf packets_sent; //type: uint64
                        YLeaf bytes_sent; //type: uint64
                        YLeaf multicast_packets_received; //type: uint64
                        YLeaf broadcast_packets_received; //type: uint64
                        YLeaf multicast_packets_sent; //type: uint64
                        YLeaf broadcast_packets_sent; //type: uint64
                        YLeaf output_drops; //type: uint32
                        YLeaf output_queue_drops; //type: uint32
                        YLeaf input_drops; //type: uint32
                        YLeaf input_queue_drops; //type: uint32
                        YLeaf runt_packets_received; //type: uint32
                        YLeaf giant_packets_received; //type: uint32
                        YLeaf throttled_packets_received; //type: uint32
                        YLeaf parity_packets_received; //type: uint32
                        YLeaf unknown_protocol_packets_received; //type: uint32
                        YLeaf input_errors; //type: uint32
                        YLeaf crc_errors; //type: uint32
                        YLeaf input_overruns; //type: uint32
                        YLeaf framing_errors_received; //type: uint32
                        YLeaf input_ignored_packets; //type: uint32
                        YLeaf input_aborts; //type: uint32
                        YLeaf output_errors; //type: uint32
                        YLeaf output_underruns; //type: uint32
                        YLeaf output_buffer_failures; //type: uint32
                        YLeaf output_buffers_swapped_out; //type: uint32
                        YLeaf applique; //type: uint32
                        YLeaf resets; //type: uint32
                        YLeaf carrier_transitions; //type: uint32
                        YLeaf availability_flag; //type: uint32
                        YLeaf last_data_time; //type: uint32
                        YLeaf seconds_since_last_clear_counters; //type: uint32
                        YLeaf last_discontinuity_time; //type: uint32
                        YLeaf seconds_since_packet_received; //type: uint32
                        YLeaf seconds_since_packet_sent; //type: uint32



                }; // InfraStatistics::Interfaces::Interface::Total::GenericCounters


                    std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Total::DataRate> data_rate;
                    std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Total::GenericCounters> generic_counters;
                    std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Total::InterfacesMibCounters> interfaces_mib_counters;
                    std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Total::Protocols> protocols;


            }; // InfraStatistics::Interfaces::Interface::Total


            class Protocols : public Entity
            {
                public:
                    Protocols();
                    ~Protocols();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Protocol : public Entity
                {
                    public:
                        Protocol();
                        ~Protocol();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf protocol_name; //type: string
                        YLeaf bytes_received; //type: uint64
                        YLeaf packets_received; //type: uint64
                        YLeaf bytes_sent; //type: uint64
                        YLeaf packets_sent; //type: uint64
                        YLeaf protocol; //type: uint32
                        YLeaf last_data_time; //type: uint32
                        YLeaf input_data_rate; //type: uint64
                        YLeaf input_packet_rate; //type: uint64
                        YLeaf output_data_rate; //type: uint64
                        YLeaf output_packet_rate; //type: uint64



                }; // InfraStatistics::Interfaces::Interface::Protocols::Protocol


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Protocols::Protocol> > protocol;


            }; // InfraStatistics::Interfaces::Interface::Protocols


            class InterfacesMibCounters : public Entity
            {
                public:
                    InterfacesMibCounters();
                    ~InterfacesMibCounters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf packets_received; //type: uint64
                    YLeaf bytes_received; //type: uint64
                    YLeaf packets_sent; //type: uint64
                    YLeaf bytes_sent; //type: uint64
                    YLeaf multicast_packets_received; //type: uint64
                    YLeaf broadcast_packets_received; //type: uint64
                    YLeaf multicast_packets_sent; //type: uint64
                    YLeaf broadcast_packets_sent; //type: uint64
                    YLeaf output_drops; //type: uint32
                    YLeaf output_queue_drops; //type: uint32
                    YLeaf input_drops; //type: uint32
                    YLeaf input_queue_drops; //type: uint32
                    YLeaf runt_packets_received; //type: uint32
                    YLeaf giant_packets_received; //type: uint32
                    YLeaf throttled_packets_received; //type: uint32
                    YLeaf parity_packets_received; //type: uint32
                    YLeaf unknown_protocol_packets_received; //type: uint32
                    YLeaf input_errors; //type: uint32
                    YLeaf crc_errors; //type: uint32
                    YLeaf input_overruns; //type: uint32
                    YLeaf framing_errors_received; //type: uint32
                    YLeaf input_ignored_packets; //type: uint32
                    YLeaf input_aborts; //type: uint32
                    YLeaf output_errors; //type: uint32
                    YLeaf output_underruns; //type: uint32
                    YLeaf output_buffer_failures; //type: uint32
                    YLeaf output_buffers_swapped_out; //type: uint32
                    YLeaf applique; //type: uint32
                    YLeaf resets; //type: uint32
                    YLeaf carrier_transitions; //type: uint32
                    YLeaf availability_flag; //type: uint32
                    YLeaf last_data_time; //type: uint32
                    YLeaf seconds_since_last_clear_counters; //type: uint32
                    YLeaf last_discontinuity_time; //type: uint32
                    YLeaf seconds_since_packet_received; //type: uint32
                    YLeaf seconds_since_packet_sent; //type: uint32



            }; // InfraStatistics::Interfaces::Interface::InterfacesMibCounters


            class DataRate : public Entity
            {
                public:
                    DataRate();
                    ~DataRate();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf input_data_rate; //type: uint64
                    YLeaf input_packet_rate; //type: uint64
                    YLeaf output_data_rate; //type: uint64
                    YLeaf output_packet_rate; //type: uint64
                    YLeaf peak_input_data_rate; //type: uint64
                    YLeaf peak_input_packet_rate; //type: uint64
                    YLeaf peak_output_data_rate; //type: uint64
                    YLeaf peak_output_packet_rate; //type: uint64
                    YLeaf bandwidth; //type: uint32
                    YLeaf load_interval; //type: uint32
                    YLeaf output_load; //type: uint8
                    YLeaf input_load; //type: uint8
                    YLeaf reliability; //type: uint8



            }; // InfraStatistics::Interfaces::Interface::DataRate


            class GenericCounters : public Entity
            {
                public:
                    GenericCounters();
                    ~GenericCounters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf packets_received; //type: uint64
                    YLeaf bytes_received; //type: uint64
                    YLeaf packets_sent; //type: uint64
                    YLeaf bytes_sent; //type: uint64
                    YLeaf multicast_packets_received; //type: uint64
                    YLeaf broadcast_packets_received; //type: uint64
                    YLeaf multicast_packets_sent; //type: uint64
                    YLeaf broadcast_packets_sent; //type: uint64
                    YLeaf output_drops; //type: uint32
                    YLeaf output_queue_drops; //type: uint32
                    YLeaf input_drops; //type: uint32
                    YLeaf input_queue_drops; //type: uint32
                    YLeaf runt_packets_received; //type: uint32
                    YLeaf giant_packets_received; //type: uint32
                    YLeaf throttled_packets_received; //type: uint32
                    YLeaf parity_packets_received; //type: uint32
                    YLeaf unknown_protocol_packets_received; //type: uint32
                    YLeaf input_errors; //type: uint32
                    YLeaf crc_errors; //type: uint32
                    YLeaf input_overruns; //type: uint32
                    YLeaf framing_errors_received; //type: uint32
                    YLeaf input_ignored_packets; //type: uint32
                    YLeaf input_aborts; //type: uint32
                    YLeaf output_errors; //type: uint32
                    YLeaf output_underruns; //type: uint32
                    YLeaf output_buffer_failures; //type: uint32
                    YLeaf output_buffers_swapped_out; //type: uint32
                    YLeaf applique; //type: uint32
                    YLeaf resets; //type: uint32
                    YLeaf carrier_transitions; //type: uint32
                    YLeaf availability_flag; //type: uint32
                    YLeaf last_data_time; //type: uint32
                    YLeaf seconds_since_last_clear_counters; //type: uint32
                    YLeaf last_discontinuity_time; //type: uint32
                    YLeaf seconds_since_packet_received; //type: uint32
                    YLeaf seconds_since_packet_sent; //type: uint32



            }; // InfraStatistics::Interfaces::Interface::GenericCounters


                std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Cache> cache;
                std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::DataRate> data_rate;
                std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::GenericCounters> generic_counters;
                std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::InterfacesMibCounters> interfaces_mib_counters;
                std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Latest> latest;
                std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Protocols> protocols;
                std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface::Total> total;


        }; // InfraStatistics::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces::Interface> > interface;


    }; // InfraStatistics::Interfaces


        std::unique_ptr<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics::Interfaces> interfaces;


}; // InfraStatistics



}
}

#endif /* _CISCO_IOS_XR_INFRA_STATSD_OPER_ */

