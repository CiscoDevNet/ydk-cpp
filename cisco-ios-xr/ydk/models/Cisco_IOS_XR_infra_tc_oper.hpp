#ifndef _CISCO_IOS_XR_INFRA_TC_OPER_
#define _CISCO_IOS_XR_INFRA_TC_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_tc_oper {

class TrafficCollector : public Entity
{
    public:
        TrafficCollector();
        ~TrafficCollector();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class ExternalInterfaces : public Entity
    {
        public:
            ExternalInterfaces();
            ~ExternalInterfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class ExternalInterface : public Entity
        {
            public:
                ExternalInterface();
                ~ExternalInterface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf interface_name; //type: string
                YLeaf interface_name_xr; //type: string
                YLeaf interface_handle; //type: uint32
                YLeaf vrfid; //type: uint32
                YLeaf is_interface_enabled; //type: boolean



        }; // TrafficCollector::ExternalInterfaces::ExternalInterface


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::ExternalInterfaces::ExternalInterface> > external_interface;


    }; // TrafficCollector::ExternalInterfaces


    class Summary : public Entity
    {
        public:
            Summary();
            ~Summary();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf collection_interval; //type: uint8
            YLeaf collection_timer_is_running; //type: boolean
            YLeaf timeout_interval; //type: uint16
            YLeaf timeout_timer_is_running; //type: boolean
            YLeaf history_size; //type: uint8

        class DatabaseStatisticsExternalInterface : public Entity
        {
            public:
                DatabaseStatisticsExternalInterface();
                ~DatabaseStatisticsExternalInterface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf number_of_entries; //type: uint32
                YLeaf number_of_stale_entries; //type: uint32
                YLeaf number_of_add_o_perations; //type: uint64
                YLeaf number_of_delete_o_perations; //type: uint64



        }; // TrafficCollector::Summary::DatabaseStatisticsExternalInterface


        class VrfStatistic : public Entity
        {
            public:
                VrfStatistic();
                ~VrfStatistic();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf vrf_name; //type: string

            class DatabaseStatisticsIpv4 : public Entity
            {
                public:
                    DatabaseStatisticsIpv4();
                    ~DatabaseStatisticsIpv4();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf number_of_entries; //type: uint32
                    YLeaf number_of_stale_entries; //type: uint32
                    YLeaf number_of_add_o_perations; //type: uint64
                    YLeaf number_of_delete_o_perations; //type: uint64



            }; // TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4


            class DatabaseStatisticsTunnel : public Entity
            {
                public:
                    DatabaseStatisticsTunnel();
                    ~DatabaseStatisticsTunnel();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf number_of_entries; //type: uint32
                    YLeaf number_of_stale_entries; //type: uint32
                    YLeaf number_of_add_o_perations; //type: uint64
                    YLeaf number_of_delete_o_perations; //type: uint64



            }; // TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel


                std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4> database_statistics_ipv4;
                std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel> database_statistics_tunnel;


        }; // TrafficCollector::Summary::VrfStatistic


        class CollectionMessageStatistic : public Entity
        {
            public:
                CollectionMessageStatistic();
                ~CollectionMessageStatistic();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf packet_sent; //type: uint64
                YLeaf byte_sent; //type: uint64
                YLeaf packet_received; //type: uint64
                YLeaf byte_received; //type: uint64
                YLeaf maximum_roundtrip_latency; //type: uint32
                YLeaf maimum_latency_timestamp; //type: uint64



        }; // TrafficCollector::Summary::CollectionMessageStatistic


        class CheckpointMessageStatistic : public Entity
        {
            public:
                CheckpointMessageStatistic();
                ~CheckpointMessageStatistic();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf packet_sent; //type: uint64
                YLeaf byte_sent; //type: uint64
                YLeaf packet_received; //type: uint64
                YLeaf byte_received; //type: uint64
                YLeaf maximum_roundtrip_latency; //type: uint32
                YLeaf maimum_latency_timestamp; //type: uint64



        }; // TrafficCollector::Summary::CheckpointMessageStatistic


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary::CheckpointMessageStatistic> > checkpoint_message_statistic;
            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary::CollectionMessageStatistic> > collection_message_statistic;
            std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary::DatabaseStatisticsExternalInterface> database_statistics_external_interface;
            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary::VrfStatistic> > vrf_statistic;


    }; // TrafficCollector::Summary


    class VrfTable : public Entity
    {
        public:
            VrfTable();
            ~VrfTable();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class DefaultVrf : public Entity
        {
            public:
                DefaultVrf();
                ~DefaultVrf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Afs : public Entity
            {
                public:
                    Afs();
                    ~Afs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Af : public Entity
                {
                    public:
                        Af();
                        ~Af();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf af_name; //type: TcOperAfNameEnum

                    class Counters : public Entity
                    {
                        public:
                            Counters();
                            ~Counters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Prefixes : public Entity
                        {
                            public:
                                Prefixes();
                                ~Prefixes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Prefix : public Entity
                            {
                                public:
                                    Prefix();
                                    ~Prefix();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf ipaddr; //type: string
                                    YLeaf mask; //type: string
                                    YLeaf label; //type: uint32
                                    YLeaf prefix; //type: string
                                    YLeaf label_xr; //type: uint32
                                    YLeaf is_active; //type: boolean

                                class BaseCounterStatistics : public Entity
                                {
                                    public:
                                        BaseCounterStatistics();
                                        ~BaseCounterStatistics();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf transmit_packets_per_second_switched; //type: uint64
                                        YLeaf transmit_bytes_per_second_switched; //type: uint64

                                    class CountHistory : public Entity
                                    {
                                        public:
                                            CountHistory();
                                            ~CountHistory();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf event_start_timestamp; //type: uint64
                                            YLeaf event_end_timestamp; //type: uint64
                                            YLeaf transmit_number_of_packets_switched; //type: uint64
                                            YLeaf transmit_number_of_bytes_switched; //type: uint64
                                            YLeaf is_valid; //type: boolean



                                    }; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory> > count_history;


                                }; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics


                                class TrafficMatrixCounterStatistics : public Entity
                                {
                                    public:
                                        TrafficMatrixCounterStatistics();
                                        ~TrafficMatrixCounterStatistics();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf transmit_packets_per_second_switched; //type: uint64
                                        YLeaf transmit_bytes_per_second_switched; //type: uint64

                                    class CountHistory : public Entity
                                    {
                                        public:
                                            CountHistory();
                                            ~CountHistory();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf event_start_timestamp; //type: uint64
                                            YLeaf event_end_timestamp; //type: uint64
                                            YLeaf transmit_number_of_packets_switched; //type: uint64
                                            YLeaf transmit_number_of_bytes_switched; //type: uint64
                                            YLeaf is_valid; //type: boolean



                                    }; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory> > count_history;


                                }; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics


                                    std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics> base_counter_statistics;
                                    std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics> traffic_matrix_counter_statistics;


                            }; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix> > prefix;


                        }; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes


                        class Tunnels : public Entity
                        {
                            public:
                                Tunnels();
                                ~Tunnels();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Tunnel : public Entity
                            {
                                public:
                                    Tunnel();
                                    ~Tunnel();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf interface_name; //type: string
                                    YLeaf interface_name_xr; //type: string
                                    YLeaf interface_handle; //type: uint32
                                    YLeaf vrfid; //type: uint32
                                    YLeaf is_active; //type: boolean

                                class BaseCounterStatistics : public Entity
                                {
                                    public:
                                        BaseCounterStatistics();
                                        ~BaseCounterStatistics();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf transmit_packets_per_second_switched; //type: uint64
                                        YLeaf transmit_bytes_per_second_switched; //type: uint64

                                    class CountHistory : public Entity
                                    {
                                        public:
                                            CountHistory();
                                            ~CountHistory();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf event_start_timestamp; //type: uint64
                                            YLeaf event_end_timestamp; //type: uint64
                                            YLeaf transmit_number_of_packets_switched; //type: uint64
                                            YLeaf transmit_number_of_bytes_switched; //type: uint64
                                            YLeaf is_valid; //type: boolean



                                    }; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory> > count_history;


                                }; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics


                                    std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics> base_counter_statistics;


                            }; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel> > tunnel;


                        }; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels


                            std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes> prefixes;
                            std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels> tunnels;


                    }; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters


                        std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters> counters;


                }; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af> > af;


            }; // TrafficCollector::VrfTable::DefaultVrf::Afs


                std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs> afs;


        }; // TrafficCollector::VrfTable::DefaultVrf


            std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf> default_vrf;


    }; // TrafficCollector::VrfTable


    class Afs : public Entity
    {
        public:
            Afs();
            ~Afs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Af : public Entity
        {
            public:
                Af();
                ~Af();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf af_name; //type: TcOperAfNameEnum

            class Counters : public Entity
            {
                public:
                    Counters();
                    ~Counters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Prefixes : public Entity
                {
                    public:
                        Prefixes();
                        ~Prefixes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Prefix : public Entity
                    {
                        public:
                            Prefix();
                            ~Prefix();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf ipaddr; //type: string
                            YLeaf mask; //type: string
                            YLeaf label; //type: uint32
                            YLeaf prefix; //type: string
                            YLeaf label_xr; //type: uint32
                            YLeaf is_active; //type: boolean

                        class BaseCounterStatistics : public Entity
                        {
                            public:
                                BaseCounterStatistics();
                                ~BaseCounterStatistics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf transmit_packets_per_second_switched; //type: uint64
                                YLeaf transmit_bytes_per_second_switched; //type: uint64

                            class CountHistory : public Entity
                            {
                                public:
                                    CountHistory();
                                    ~CountHistory();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf event_start_timestamp; //type: uint64
                                    YLeaf event_end_timestamp; //type: uint64
                                    YLeaf transmit_number_of_packets_switched; //type: uint64
                                    YLeaf transmit_number_of_bytes_switched; //type: uint64
                                    YLeaf is_valid; //type: boolean



                            }; // TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory> > count_history;


                        }; // TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics


                        class TrafficMatrixCounterStatistics : public Entity
                        {
                            public:
                                TrafficMatrixCounterStatistics();
                                ~TrafficMatrixCounterStatistics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf transmit_packets_per_second_switched; //type: uint64
                                YLeaf transmit_bytes_per_second_switched; //type: uint64

                            class CountHistory : public Entity
                            {
                                public:
                                    CountHistory();
                                    ~CountHistory();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf event_start_timestamp; //type: uint64
                                    YLeaf event_end_timestamp; //type: uint64
                                    YLeaf transmit_number_of_packets_switched; //type: uint64
                                    YLeaf transmit_number_of_bytes_switched; //type: uint64
                                    YLeaf is_valid; //type: boolean



                            }; // TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory> > count_history;


                        }; // TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics


                            std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics> base_counter_statistics;
                            std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics> traffic_matrix_counter_statistics;


                    }; // TrafficCollector::Afs::Af::Counters::Prefixes::Prefix


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Prefixes::Prefix> > prefix;


                }; // TrafficCollector::Afs::Af::Counters::Prefixes


                class Tunnels : public Entity
                {
                    public:
                        Tunnels();
                        ~Tunnels();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Tunnel : public Entity
                    {
                        public:
                            Tunnel();
                            ~Tunnel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_name; //type: string
                            YLeaf interface_name_xr; //type: string
                            YLeaf interface_handle; //type: uint32
                            YLeaf vrfid; //type: uint32
                            YLeaf is_active; //type: boolean

                        class BaseCounterStatistics : public Entity
                        {
                            public:
                                BaseCounterStatistics();
                                ~BaseCounterStatistics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf transmit_packets_per_second_switched; //type: uint64
                                YLeaf transmit_bytes_per_second_switched; //type: uint64

                            class CountHistory : public Entity
                            {
                                public:
                                    CountHistory();
                                    ~CountHistory();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf event_start_timestamp; //type: uint64
                                    YLeaf event_end_timestamp; //type: uint64
                                    YLeaf transmit_number_of_packets_switched; //type: uint64
                                    YLeaf transmit_number_of_bytes_switched; //type: uint64
                                    YLeaf is_valid; //type: boolean



                            }; // TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory


                                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory> > count_history;


                        }; // TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics


                            std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics> base_counter_statistics;


                    }; // TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel> > tunnel;


                }; // TrafficCollector::Afs::Af::Counters::Tunnels


                    std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Prefixes> prefixes;
                    std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Tunnels> tunnels;


            }; // TrafficCollector::Afs::Af::Counters


                std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters> counters;


        }; // TrafficCollector::Afs::Af


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af> > af;


    }; // TrafficCollector::Afs


        std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs> afs;
        std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::ExternalInterfaces> external_interfaces;
        std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary> summary;
        std::unique_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable> vrf_table;


}; // TrafficCollector


class TcOperAfNameEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_TC_OPER_ */

