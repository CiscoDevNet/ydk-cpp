#ifndef _CISCO_IOS_XR_CLNS_ISIS_OPER_
#define _CISCO_IOS_XR_CLNS_ISIS_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_clns_isis_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_clns_isis_oper {

class Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Instances : public Entity
    {
        public:
            Instances();
            ~Instances();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Instance : public Entity
        {
            public:
                Instance();
                ~Instance();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value instance_name; //type: string


            class Neighbors : public Entity
            {
                public:
                    Neighbors();
                    ~Neighbors();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Neighbor : public Entity
                {
                    public:
                        Neighbor();
                        ~Neighbor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value system_id; //type: string
                        Value interface_name; //type: string
                        Value neighbor_system_id; //type: string
                        Value neighbor_snpa; //type: string
                        Value local_interface; //type: string
                        Value neighbor_state; //type: IsisAdjStateEnum
                        Value neighbor_circuit_type; //type: IsisLevelsEnum
                        Value neighbor_ietf_nsf_capable_flag; //type: uint32
                        Value neighbor_media_type; //type: IsisMediaClassEnum
                        Value neighbor_holdtime; //type: uint32
                        Value neighbor_uptime_valid_flag; //type: boolean
                        Value neighbor_uptime; //type: uint32
                        Value nsr_standby; //type: boolean
                        ValueList neighbor_active_area_address; //type: list of  string


                    class TopologiesSupported : public Entity
                    {
                        public:
                            TopologiesSupported();
                            ~TopologiesSupported();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af_name; //type: IsisAfIdEnum
                            Value saf_name; //type: IsisSubAfIdEnum
                            Value vrf_name; //type: string
                            Value topology_name; //type: string


                            class IsisAfIdEnum;
                            class IsisSubAfIdEnum;


                    }; // Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported


                    class NeighborPerAddressFamilyData : public Entity
                    {
                        public:
                            NeighborPerAddressFamilyData();
                            ~NeighborPerAddressFamilyData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af_name; //type: IsisAfIdEnum


                        class Ipv4 : public Entity
                        {
                            public:
                                Ipv4();
                                ~Ipv4();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value next_hop; //type: string
                                ValueList interface_address; //type: list of  string
                                ValueList underlying_interface; //type: list of  string
                                ValueList underlying_adjacency_sid; //type: list of  uint32


                            class AdjacencySid : public Entity
                            {
                                public:
                                    AdjacencySid();
                                    ~AdjacencySid();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value adjacency_sid_value; //type: uint32


                                class AdjacencySidBackup : public Entity
                                {
                                    public:
                                        AdjacencySidBackup();
                                        ~AdjacencySidBackup();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value backup_label_stack_size; //type: uint8
                                        Value backup_node_address; //type: string
                                        Value backup_nexthop; //type: string
                                        Value backup_interface; //type: string
                                        ValueList backup_label_stack; //type: list of  uint32




                                }; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;


                            }; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid


                            class NonFrrAdjacencySid : public Entity
                            {
                                public:
                                    NonFrrAdjacencySid();
                                    ~NonFrrAdjacencySid();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value adjacency_sid_value; //type: uint32


                                class AdjacencySidBackup : public Entity
                                {
                                    public:
                                        AdjacencySidBackup();
                                        ~AdjacencySidBackup();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value backup_label_stack_size; //type: uint8
                                        Value backup_node_address; //type: string
                                        Value backup_nexthop; //type: string
                                        Value backup_interface; //type: string
                                        ValueList backup_label_stack; //type: list of  uint32




                                }; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;


                            }; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::AdjacencySid> adjacency_sid;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4::NonFrrAdjacencySid> non_frr_adjacency_sid;


                        }; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4


                        class Ipv6 : public Entity
                        {
                            public:
                                Ipv6();
                                ~Ipv6();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value next_hop; //type: string
                                ValueList interface_address; //type: list of  string
                                ValueList underlying_interface; //type: list of  string
                                ValueList underlying_adjacency_sid; //type: list of  uint32


                            class AdjacencySid : public Entity
                            {
                                public:
                                    AdjacencySid();
                                    ~AdjacencySid();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value adjacency_sid_value; //type: uint32


                                class AdjacencySidBackup : public Entity
                                {
                                    public:
                                        AdjacencySidBackup();
                                        ~AdjacencySidBackup();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value backup_label_stack_size; //type: uint8
                                        Value backup_node_address; //type: string
                                        Value backup_nexthop; //type: string
                                        Value backup_interface; //type: string
                                        ValueList backup_label_stack; //type: list of  uint32




                                }; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;


                            }; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid


                            class NonFrrAdjacencySid : public Entity
                            {
                                public:
                                    NonFrrAdjacencySid();
                                    ~NonFrrAdjacencySid();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value adjacency_sid_value; //type: uint32


                                class AdjacencySidBackup : public Entity
                                {
                                    public:
                                        AdjacencySidBackup();
                                        ~AdjacencySidBackup();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value backup_label_stack_size; //type: uint8
                                        Value backup_node_address; //type: string
                                        Value backup_nexthop; //type: string
                                        Value backup_interface; //type: string
                                        ValueList backup_label_stack; //type: list of  uint32




                                }; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;


                            }; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::AdjacencySid> adjacency_sid;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6::NonFrrAdjacencySid> non_frr_adjacency_sid;


                        }; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6


                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv4> ipv4;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData::Ipv6> ipv6;
                            class IsisAfIdEnum;


                    }; // Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::NeighborPerAddressFamilyData> > neighbor_per_address_family_data;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor::TopologiesSupported> > topologies_supported;
                        class IsisLevelsEnum;
                        class IsisMediaClassEnum;
                        class IsisAdjStateEnum;


                }; // Isis::Instances::Instance::Neighbors::Neighbor


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors::Neighbor> > neighbor;


            }; // Isis::Instances::Instance::Neighbors


            class HostNames : public Entity
            {
                public:
                    HostNames();
                    ~HostNames();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class HostName : public Entity
                {
                    public:
                        HostName();
                        ~HostName();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value system_id; //type: string
                        Value local_is_flag; //type: boolean
                        Value host_levels; //type: IsisLevelsEnum
                        Value host_name; //type: string


                        class IsisLevelsEnum;


                }; // Isis::Instances::Instance::HostNames::HostName


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::HostNames::HostName> > host_name;


            }; // Isis::Instances::Instance::HostNames


            class StatisticsGlobal : public Entity
            {
                public:
                    StatisticsGlobal();
                    ~StatisticsGlobal();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Statistics : public Entity
                {
                    public:
                        Statistics();
                        ~Statistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value fast_psnp_lookup_count; //type: uint32
                        Value fast_psnp_lookup_hit_count; //type: uint32
                        Value fast_csnp_lookup_count; //type: uint32
                        Value fast_csnp_lookup_hit_count; //type: uint32
                        Value fast_csnp_cache_update_count; //type: uint32
                        Value zero_holdtime_lsp_count; //type: uint32
                        Value invalid_checksum_lsp_count; //type: uint32
                        Value iih_dropped_count; //type: uint32
                        Value lsp_dropped_count; //type: uint32
                        Value snp_dropped_count; //type: uint32
                        Value maximum_iih_queue_length; //type: uint32
                        Value maximum_pdu_queue_length; //type: uint32
                        Value avg_hello_recv_rate; //type: uint32
                        Value avg_csnp_recv_rate; //type: uint32
                        Value avg_psnp_recv_rate; //type: uint32
                        Value avg_lsp_recv_rate; //type: uint32
                        Value avg_hello_send_rate; //type: uint32
                        Value avg_csnp_send_rate; //type: uint32
                        Value avg_psnp_send_rate; //type: uint32
                        Value avg_lsp_send_rate; //type: uint32


                    class AvgHelloProcessTime : public Entity
                    {
                        public:
                            AvgHelloProcessTime();
                            ~AvgHelloProcessTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value seconds; //type: uint32
                            Value nano_seconds; //type: uint32




                    }; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime


                    class AvgCsnpProcessTime : public Entity
                    {
                        public:
                            AvgCsnpProcessTime();
                            ~AvgCsnpProcessTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value seconds; //type: uint32
                            Value nano_seconds; //type: uint32




                    }; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime


                    class AvgPsnpProcessTime : public Entity
                    {
                        public:
                            AvgPsnpProcessTime();
                            ~AvgPsnpProcessTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value seconds; //type: uint32
                            Value nano_seconds; //type: uint32




                    }; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime


                    class AvgLspProcessTime : public Entity
                    {
                        public:
                            AvgLspProcessTime();
                            ~AvgLspProcessTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value seconds; //type: uint32
                            Value nano_seconds; //type: uint32




                    }; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime


                    class AvgHelloTransmitTime : public Entity
                    {
                        public:
                            AvgHelloTransmitTime();
                            ~AvgHelloTransmitTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value seconds; //type: uint32
                            Value nano_seconds; //type: uint32




                    }; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime


                    class AvgCsnpTransmitTime : public Entity
                    {
                        public:
                            AvgCsnpTransmitTime();
                            ~AvgCsnpTransmitTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value seconds; //type: uint32
                            Value nano_seconds; //type: uint32




                    }; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime


                    class AvgPsnpTransmitTime : public Entity
                    {
                        public:
                            AvgPsnpTransmitTime();
                            ~AvgPsnpTransmitTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value seconds; //type: uint32
                            Value nano_seconds; //type: uint32




                    }; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime


                    class AvgLspTransmitTime : public Entity
                    {
                        public:
                            AvgLspTransmitTime();
                            ~AvgLspTransmitTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value seconds; //type: uint32
                            Value nano_seconds; //type: uint32




                    }; // Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime


                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpProcessTime> avg_csnp_process_time;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgCsnpTransmitTime> avg_csnp_transmit_time;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloProcessTime> avg_hello_process_time;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgHelloTransmitTime> avg_hello_transmit_time;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspProcessTime> avg_lsp_process_time;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgLspTransmitTime> avg_lsp_transmit_time;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpProcessTime> avg_psnp_process_time;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics::AvgPsnpTransmitTime> avg_psnp_transmit_time;


                }; // Isis::Instances::Instance::StatisticsGlobal::Statistics


                class PerAreaData : public Entity
                {
                    public:
                        PerAreaData();
                        ~PerAreaData();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisLevelEnum


                    class Statistics : public Entity
                    {
                        public:
                            Statistics();
                            ~Statistics();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value system_lsp_build_count; //type: uint32
                            Value system_lsp_refresh_count; //type: uint32




                    }; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics


                    class PerTopologyData : public Entity
                    {
                        public:
                            PerTopologyData();
                            ~PerTopologyData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Id : public Entity
                        {
                            public:
                                Id();
                                ~Id();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value af_name; //type: IsisAfIdEnum
                                Value saf_name; //type: IsisSubAfIdEnum
                                Value vrf_name; //type: string
                                Value topology_name; //type: string


                                class IsisAfIdEnum;
                                class IsisSubAfIdEnum;


                        }; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id


                        class Statistics : public Entity
                        {
                            public:
                                Statistics();
                                ~Statistics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value spf_run_count; //type: uint32
                                Value ispf_run_count; //type: uint32
                                Value nhc_run_count; //type: uint32
                                Value prc_run_count; //type: uint32
                                Value periodic_run_count; //type: uint32




                        }; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics


                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Id> id;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData::Statistics> statistics;


                    }; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::PerTopologyData> > per_topology_data;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData::Statistics> statistics;
                        class IsisLevelEnum;


                }; // Isis::Instances::Instance::StatisticsGlobal::PerAreaData


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::PerAreaData> > per_area_data;
                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal::Statistics> statistics;


            }; // Isis::Instances::Instance::StatisticsGlobal


            class Levels : public Entity
            {
                public:
                    Levels();
                    ~Levels();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Level : public Entity
                {
                    public:
                        Level();
                        ~Level();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum


                    class AdjacencyLog : public Entity
                    {
                        public:
                            AdjacencyLog();
                            ~AdjacencyLog();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class LogEntry : public Entity
                        {
                            public:
                                LogEntry();
                                ~LogEntry();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value adj_log_neighbor_system_id; //type: string
                                Value interface_name; //type: string
                                Value prev_adj_state; //type: IsisAdjStateEnum
                                Value cur_adj_state; //type: IsisAdjStateEnum
                                Value state_reason; //type: IsisAdjStateReasonEnum


                            class GenericData : public Entity
                            {
                                public:
                                    GenericData();
                                    ~GenericData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Timestamp : public Entity
                                {
                                    public:
                                        Timestamp();
                                        ~Timestamp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value seconds; //type: uint32
                                        Value nano_seconds; //type: uint32




                                }; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData::Timestamp> timestamp;


                            }; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData


                            class AdjacencyPerTopologyChange : public Entity
                            {
                                public:
                                    AdjacencyPerTopologyChange();
                                    ~AdjacencyPerTopologyChange();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value change; //type: IsisAdjTopoChangeEnum


                                class Id : public Entity
                                {
                                    public:
                                        Id();
                                        ~Id();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value af_name; //type: IsisAfIdEnum
                                        Value saf_name; //type: IsisSubAfIdEnum
                                        Value vrf_name; //type: string
                                        Value topology_name; //type: string


                                        class IsisAfIdEnum;
                                        class IsisSubAfIdEnum;


                                }; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange::Id> id;
                                    class IsisAdjTopoChangeEnum;


                            }; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::AdjacencyPerTopologyChange> > adjacency_per_topology_change;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry::GenericData> generic_data;
                                class IsisAdjStateEnum;
                                class IsisAdjStateEnum;
                                class IsisAdjStateReasonEnum;


                        }; // Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog::LogEntry> > log_entry;


                    }; // Isis::Instances::Instance::Levels::Level::AdjacencyLog


                    class LspTableSummary : public Entity
                    {
                        public:
                            LspTableSummary();
                            ~LspTableSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Fragment0LspStats : public Entity
                        {
                            public:
                                Fragment0LspStats();
                                ~Fragment0LspStats();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class NodeCounters : public Entity
                            {
                                public:
                                    NodeCounters();
                                    ~NodeCounters();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class RouteLspCount : public Entity
                                {
                                    public:
                                        RouteLspCount();
                                        ~RouteLspCount();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value active_lsp_count; //type: uint32
                                        Value purged_lsp_count; //type: uint32




                                }; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount


                                class PseudoNodeLspCount : public Entity
                                {
                                    public:
                                        PseudoNodeLspCount();
                                        ~PseudoNodeLspCount();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value active_lsp_count; //type: uint32
                                        Value purged_lsp_count; //type: uint32




                                }; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::PseudoNodeLspCount> pseudo_node_lsp_count;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters::RouteLspCount> route_lsp_count;


                            }; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters


                            class PerTopologyCounter : public Entity
                            {
                                public:
                                    PerTopologyCounter();
                                    ~PerTopologyCounter();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Id : public Entity
                                {
                                    public:
                                        Id();
                                        ~Id();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value af_name; //type: IsisAfIdEnum
                                        Value saf_name; //type: IsisSubAfIdEnum
                                        Value vrf_name; //type: string
                                        Value topology_name; //type: string


                                        class IsisAfIdEnum;
                                        class IsisSubAfIdEnum;


                                }; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id


                                class OverloadedLspCount : public Entity
                                {
                                    public:
                                        OverloadedLspCount();
                                        ~OverloadedLspCount();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value active_lsp_count; //type: uint32
                                        Value purged_lsp_count; //type: uint32




                                }; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount


                                class AttachedLspCount : public Entity
                                {
                                    public:
                                        AttachedLspCount();
                                        ~AttachedLspCount();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value active_lsp_count; //type: uint32
                                        Value purged_lsp_count; //type: uint32




                                }; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::AttachedLspCount> attached_lsp_count;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::Id> id;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter::OverloadedLspCount> overloaded_lsp_count;


                            }; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::NodeCounters> node_counters;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats::PerTopologyCounter> > per_topology_counter;


                        }; // Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats


                        class AllFragmentLspStats : public Entity
                        {
                            public:
                                AllFragmentLspStats();
                                ~AllFragmentLspStats();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class NodeCounters : public Entity
                            {
                                public:
                                    NodeCounters();
                                    ~NodeCounters();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class RouteLspCount : public Entity
                                {
                                    public:
                                        RouteLspCount();
                                        ~RouteLspCount();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value active_lsp_count; //type: uint32
                                        Value purged_lsp_count; //type: uint32




                                }; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount


                                class PseudoNodeLspCount : public Entity
                                {
                                    public:
                                        PseudoNodeLspCount();
                                        ~PseudoNodeLspCount();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value active_lsp_count; //type: uint32
                                        Value purged_lsp_count; //type: uint32




                                }; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::PseudoNodeLspCount> pseudo_node_lsp_count;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters::RouteLspCount> route_lsp_count;


                            }; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats::NodeCounters> node_counters;


                        }; // Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats


                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::AllFragmentLspStats> all_fragment_lsp_stats;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary::Fragment0LspStats> fragment0lsp_stats;


                    }; // Isis::Instances::Instance::Levels::Level::LspTableSummary


                    class Adjacencies : public Entity
                    {
                        public:
                            Adjacencies();
                            ~Adjacencies();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Adjacency : public Entity
                        {
                            public:
                                Adjacency();
                                ~Adjacency();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value system_id; //type: string
                                Value interface_name; //type: string
                                Value adjacency_system_id; //type: string
                                Value adjacency_snpa; //type: string
                                Value adjacency_interface; //type: string
                                Value adjacency_media_type; //type: IsisMediaClassEnum
                                Value adjacency_state; //type: IsisAdjStateEnum
                                Value adjacency_bfd_state; //type: IsisAdjBfdStateEnum
                                Value adjacency_ipv6bfd_state; //type: IsisAdjBfdStateEnum
                                Value adjacency_uptime_valid_flag; //type: boolean
                                Value adjacency_uptime; //type: uint32
                                Value adjacency_holdtime; //type: uint32
                                Value adjacency_checkpoint_object_id; //type: uint32
                                Value adjacency_ietf_nsf_capable_flag; //type: boolean
                                Value adjacency_dispriority; //type: uint8
                                Value adjacency_neighbor_priority; //type: uint8
                                Value adjacency_local_priority; //type: uint8
                                Value local_dis_flag; //type: boolean
                                Value neighbor_dis_flag; //type: boolean
                                Value nsr_standby; //type: uint8
                                ValueList adjacency_area_address; //type: list of  string


                            class AdjacencyTopology : public Entity
                            {
                                public:
                                    AdjacencyTopology();
                                    ~AdjacencyTopology();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value topology_status; //type: IsisAdjTopoStatusEnum
                                    Value parallel_p2p_link_suppressed_flag; //type: boolean


                                class Id : public Entity
                                {
                                    public:
                                        Id();
                                        ~Id();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value af_name; //type: IsisAfIdEnum
                                        Value saf_name; //type: IsisSubAfIdEnum
                                        Value vrf_name; //type: string
                                        Value topology_name; //type: string


                                        class IsisAfIdEnum;
                                        class IsisSubAfIdEnum;


                                }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology::Id> id;
                                    class IsisAdjTopoStatusEnum;


                            }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology


                            class AdjacencyPerAddressFamilyData : public Entity
                            {
                                public:
                                    AdjacencyPerAddressFamilyData();
                                    ~AdjacencyPerAddressFamilyData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value af_name; //type: IsisAfIdEnum


                                class Ipv4 : public Entity
                                {
                                    public:
                                        Ipv4();
                                        ~Ipv4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value next_hop; //type: string
                                        ValueList interface_address; //type: list of  string
                                        ValueList underlying_interface; //type: list of  string
                                        ValueList underlying_adjacency_sid; //type: list of  uint32


                                    class AdjacencySid : public Entity
                                    {
                                        public:
                                            AdjacencySid();
                                            ~AdjacencySid();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value adjacency_sid_value; //type: uint32


                                        class AdjacencySidBackup : public Entity
                                        {
                                            public:
                                                AdjacencySidBackup();
                                                ~AdjacencySidBackup();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value backup_label_stack_size; //type: uint8
                                                Value backup_node_address; //type: string
                                                Value backup_nexthop; //type: string
                                                Value backup_interface; //type: string
                                                ValueList backup_label_stack; //type: list of  uint32




                                        }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;


                                    }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid


                                    class NonFrrAdjacencySid : public Entity
                                    {
                                        public:
                                            NonFrrAdjacencySid();
                                            ~NonFrrAdjacencySid();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value adjacency_sid_value; //type: uint32


                                        class AdjacencySidBackup : public Entity
                                        {
                                            public:
                                                AdjacencySidBackup();
                                                ~AdjacencySidBackup();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value backup_label_stack_size; //type: uint8
                                                Value backup_node_address; //type: string
                                                Value backup_nexthop; //type: string
                                                Value backup_interface; //type: string
                                                ValueList backup_label_stack; //type: list of  uint32




                                        }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;


                                    }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::AdjacencySid> adjacency_sid;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4::NonFrrAdjacencySid> non_frr_adjacency_sid;


                                }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4


                                class Ipv6 : public Entity
                                {
                                    public:
                                        Ipv6();
                                        ~Ipv6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value next_hop; //type: string
                                        ValueList interface_address; //type: list of  string
                                        ValueList underlying_interface; //type: list of  string
                                        ValueList underlying_adjacency_sid; //type: list of  uint32


                                    class AdjacencySid : public Entity
                                    {
                                        public:
                                            AdjacencySid();
                                            ~AdjacencySid();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value adjacency_sid_value; //type: uint32


                                        class AdjacencySidBackup : public Entity
                                        {
                                            public:
                                                AdjacencySidBackup();
                                                ~AdjacencySidBackup();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value backup_label_stack_size; //type: uint8
                                                Value backup_node_address; //type: string
                                                Value backup_nexthop; //type: string
                                                Value backup_interface; //type: string
                                                ValueList backup_label_stack; //type: list of  uint32




                                        }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid::AdjacencySidBackup> adjacency_sid_backup;


                                    }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid


                                    class NonFrrAdjacencySid : public Entity
                                    {
                                        public:
                                            NonFrrAdjacencySid();
                                            ~NonFrrAdjacencySid();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value adjacency_sid_value; //type: uint32


                                        class AdjacencySidBackup : public Entity
                                        {
                                            public:
                                                AdjacencySidBackup();
                                                ~AdjacencySidBackup();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value backup_label_stack_size; //type: uint8
                                                Value backup_node_address; //type: string
                                                Value backup_nexthop; //type: string
                                                Value backup_interface; //type: string
                                                ValueList backup_label_stack; //type: list of  uint32




                                        }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid::AdjacencySidBackup> adjacency_sid_backup;


                                    }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::AdjacencySid> adjacency_sid;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6::NonFrrAdjacencySid> non_frr_adjacency_sid;


                                }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv4> ipv4;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData::Ipv6> ipv6;
                                    class IsisAfIdEnum;


                            }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyPerAddressFamilyData> > adjacency_per_address_family_data;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency::AdjacencyTopology> > adjacency_topology;
                                class IsisAdjBfdStateEnum;
                                class IsisAdjBfdStateEnum;
                                class IsisMediaClassEnum;
                                class IsisAdjStateEnum;


                        }; // Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies::Adjacency> > adjacency;


                    }; // Isis::Instances::Instance::Levels::Level::Adjacencies


                    class DetailedLsps : public Entity
                    {
                        public:
                            DetailedLsps();
                            ~DetailedLsps();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class DetailedLsp : public Entity
                        {
                            public:
                                DetailedLsp();
                                ~DetailedLsp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsp_id; //type: string
                                Value lsp_body; //type: string


                            class LspHeaderData : public Entity
                            {
                                public:
                                    LspHeaderData();
                                    ~LspHeaderData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lsp_id; //type: string
                                    Value local_lsp_flag; //type: boolean
                                    Value lsp_active_flag; //type: boolean
                                    Value lsp_holdtime; //type: uint16
                                    Value lsp_sequence_number; //type: uint32
                                    Value lsp_checksum; //type: uint16
                                    Value lsp_parition_repair_supported_flag; //type: boolean
                                    Value lsp_attached_flag; //type: boolean
                                    Value lsp_overloaded_flag; //type: boolean
                                    Value lsp_nonv1a_flag; //type: uint16
                                    Value lsp_level; //type: IsisLevelsEnum
                                    Value lsp_length; //type: uint16


                                    class IsisLevelsEnum;


                            }; // Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp::LspHeaderData> lsp_header_data;


                        }; // Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DetailedLsps::DetailedLsp> > detailed_lsp;


                    }; // Isis::Instances::Instance::Levels::Level::DetailedLsps


                    class Lsps : public Entity
                    {
                        public:
                            Lsps();
                            ~Lsps();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Lsp : public Entity
                        {
                            public:
                                Lsp();
                                ~Lsp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsp_id; //type: string
                                Value lsp_body; //type: string


                            class LspHeaderData : public Entity
                            {
                                public:
                                    LspHeaderData();
                                    ~LspHeaderData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lsp_id; //type: string
                                    Value local_lsp_flag; //type: boolean
                                    Value lsp_active_flag; //type: boolean
                                    Value lsp_holdtime; //type: uint16
                                    Value lsp_sequence_number; //type: uint32
                                    Value lsp_checksum; //type: uint16
                                    Value lsp_parition_repair_supported_flag; //type: boolean
                                    Value lsp_attached_flag; //type: boolean
                                    Value lsp_overloaded_flag; //type: boolean
                                    Value lsp_nonv1a_flag; //type: uint16
                                    Value lsp_level; //type: IsisLevelsEnum
                                    Value lsp_length; //type: uint16


                                    class IsisLevelsEnum;


                            }; // Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Lsps::Lsp::LspHeaderData> lsp_header_data;


                        }; // Isis::Instances::Instance::Levels::Level::Lsps::Lsp


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Lsps::Lsp> > lsp;


                    }; // Isis::Instances::Instance::Levels::Level::Lsps


                    class LspLog : public Entity
                    {
                        public:
                            LspLog();
                            ~LspLog();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class LogEntry : public Entity
                        {
                            public:
                                LogEntry();
                                ~LogEntry();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value trigger_count; //type: uint32
                                Value delayed_trigger_count; //type: uint32
                                Value log_interface; //type: string
                                Value pseudo_node_number; //type: uint8
                                ValueList trigger; //type: list of  IsisLspTriggerEnum


                            class GenericData : public Entity
                            {
                                public:
                                    GenericData();
                                    ~GenericData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Timestamp : public Entity
                                {
                                    public:
                                        Timestamp();
                                        ~Timestamp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value seconds; //type: uint32
                                        Value nano_seconds; //type: uint32




                                }; // Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData::Timestamp> timestamp;


                            }; // Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog::LogEntry::GenericData> generic_data;
                                class IsisLspTriggerEnum;


                        }; // Isis::Instances::Instance::Levels::Level::LspLog::LogEntry


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog::LogEntry> > log_entry;


                    }; // Isis::Instances::Instance::Levels::Level::LspLog


                    class DatabaseLog : public Entity
                    {
                        public:
                            DatabaseLog();
                            ~DatabaseLog();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class LogEntry : public Entity
                        {
                            public:
                                LogEntry();
                                ~LogEntry();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lspdb_operation; //type: IsisLspDbOpEnum


                            class GenericData : public Entity
                            {
                                public:
                                    GenericData();
                                    ~GenericData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Timestamp : public Entity
                                {
                                    public:
                                        Timestamp();
                                        ~Timestamp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value seconds; //type: uint32
                                        Value nano_seconds; //type: uint32




                                }; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData::Timestamp> timestamp;


                            }; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData


                            class NewLspEntry : public Entity
                            {
                                public:
                                    NewLspEntry();
                                    ~NewLspEntry();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lsp_id; //type: string
                                    Value local_lsp_flag; //type: boolean
                                    Value lsp_active_flag; //type: boolean
                                    Value lsp_holdtime; //type: uint16
                                    Value lsp_sequence_number; //type: uint32
                                    Value lsp_checksum; //type: uint16
                                    Value lsp_parition_repair_supported_flag; //type: boolean
                                    Value lsp_attached_flag; //type: boolean
                                    Value lsp_overloaded_flag; //type: boolean
                                    Value lsp_nonv1a_flag; //type: uint16
                                    Value lsp_level; //type: IsisLevelsEnum
                                    Value lsp_length; //type: uint16


                                    class IsisLevelsEnum;


                            }; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry


                            class OldLspEntry : public Entity
                            {
                                public:
                                    OldLspEntry();
                                    ~OldLspEntry();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lsp_id; //type: string
                                    Value local_lsp_flag; //type: boolean
                                    Value lsp_active_flag; //type: boolean
                                    Value lsp_holdtime; //type: uint16
                                    Value lsp_sequence_number; //type: uint32
                                    Value lsp_checksum; //type: uint16
                                    Value lsp_parition_repair_supported_flag; //type: boolean
                                    Value lsp_attached_flag; //type: boolean
                                    Value lsp_overloaded_flag; //type: boolean
                                    Value lsp_nonv1a_flag; //type: uint16
                                    Value lsp_level; //type: IsisLevelsEnum
                                    Value lsp_length; //type: uint16


                                    class IsisLevelsEnum;


                            }; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::GenericData> generic_data;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::NewLspEntry> new_lsp_entry;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry::OldLspEntry> old_lsp_entry;
                                class IsisLspDbOpEnum;


                        }; // Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog::LogEntry> > log_entry;


                    }; // Isis::Instances::Instance::Levels::Level::DatabaseLog


                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Adjacencies> adjacencies;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::AdjacencyLog> adjacency_log;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DatabaseLog> database_log;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::DetailedLsps> detailed_lsps;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspLog> lsp_log;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::LspTableSummary> lsp_table_summary;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level::Lsps> lsps;
                        class IsisInternalLevelEnum;


                }; // Isis::Instances::Instance::Levels::Level


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels::Level> > level;


            }; // Isis::Instances::Instance::Levels


            class Topologies : public Entity
            {
                public:
                    Topologies();
                    ~Topologies();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Topology : public Entity
                {
                    public:
                        Topology();
                        ~Topology();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value af_name; //type: IsisAddressFamilyEnum
                        Value saf_name; //type: IsisSubAddressFamilyEnum
                        Value topology_name; //type: string


                    class FrrSummary : public Entity
                    {
                        public:
                            FrrSummary();
                            ~FrrSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Level1Prefixes : public Entity
                        {
                            public:
                                Level1Prefixes();
                                ~Level1Prefixes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class AllPathsProtected : public Entity
                            {
                                public:
                                    AllPathsProtected();
                                    ~AllPathsProtected();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value critical; //type: uint32
                                    Value high; //type: uint32
                                    Value medium; //type: uint32
                                    Value low; //type: uint32




                            }; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected


                            class SomePathsProtected : public Entity
                            {
                                public:
                                    SomePathsProtected();
                                    ~SomePathsProtected();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value critical; //type: uint32
                                    Value high; //type: uint32
                                    Value medium; //type: uint32
                                    Value low; //type: uint32




                            }; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected


                            class Unprotected : public Entity
                            {
                                public:
                                    Unprotected();
                                    ~Unprotected();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value critical; //type: uint32
                                    Value high; //type: uint32
                                    Value medium; //type: uint32
                                    Value low; //type: uint32




                            }; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::AllPathsProtected> all_paths_protected;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::SomePathsProtected> some_paths_protected;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes::Unprotected> unprotected;


                        }; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes


                        class Level2Prefixes : public Entity
                        {
                            public:
                                Level2Prefixes();
                                ~Level2Prefixes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class AllPathsProtected : public Entity
                            {
                                public:
                                    AllPathsProtected();
                                    ~AllPathsProtected();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value critical; //type: uint32
                                    Value high; //type: uint32
                                    Value medium; //type: uint32
                                    Value low; //type: uint32




                            }; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected


                            class SomePathsProtected : public Entity
                            {
                                public:
                                    SomePathsProtected();
                                    ~SomePathsProtected();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value critical; //type: uint32
                                    Value high; //type: uint32
                                    Value medium; //type: uint32
                                    Value low; //type: uint32




                            }; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected


                            class Unprotected : public Entity
                            {
                                public:
                                    Unprotected();
                                    ~Unprotected();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value critical; //type: uint32
                                    Value high; //type: uint32
                                    Value medium; //type: uint32
                                    Value low; //type: uint32




                            }; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::AllPathsProtected> all_paths_protected;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::SomePathsProtected> some_paths_protected;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes::Unprotected> unprotected;


                        }; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes


                        class UnreachablePrefixes : public Entity
                        {
                            public:
                                UnreachablePrefixes();
                                ~UnreachablePrefixes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value critical; //type: uint32
                                Value high; //type: uint32
                                Value medium; //type: uint32
                                Value low; //type: uint32




                        }; // Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes


                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level1Prefixes> level1_prefixes;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::Level2Prefixes> level2_prefixes;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary::UnreachablePrefixes> unreachable_prefixes;


                    }; // Isis::Instances::Instance::Topologies::Topology::FrrSummary


                    class TopologyLevels : public Entity
                    {
                        public:
                            TopologyLevels();
                            ~TopologyLevels();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class TopologyLevel : public Entity
                        {
                            public:
                                TopologyLevel();
                                ~TopologyLevel();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value level; //type: IsisInternalLevelEnum


                            class TeAdvertisements : public Entity
                            {
                                public:
                                    TeAdvertisements();
                                    ~TeAdvertisements();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value te_adv_data_present; //type: boolean
                                    Value te_system_id; //type: string
                                    Value te_local_router_id; //type: string


                                class Tepceadv : public Entity
                                {
                                    public:
                                        Tepceadv();
                                        ~Tepceadv();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value pce_adv_data_present; //type: boolean
                                        Value pce_flooding_scope; //type: IsisShTePceFloodingScopeEnum
                                        Value pce_address_ipv4; //type: string
                                        Value pce_path_scope_bits; //type: uint8
                                        Value pce_path_scope_prefs; //type: uint16


                                        class IsisShTePceFloodingScopeEnum;


                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv


                                class TeAdv : public Entity
                                {
                                    public:
                                        TeAdv();
                                        ~TeAdv();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value te_neighbor_system_id; //type: string
                                        Value link_type; //type: IsisShTeLinkEnum
                                        Value local_ip_address; //type: string
                                        Value te_neighbor_ip_address; //type: string
                                        Value te_metric; //type: uint32
                                        Value te_physical_link_bandwidth; //type: uint32
                                        Value te_reserved_link_bandwidth; //type: uint32
                                        Value te_subpool_reserved_link_bandwidth; //type: uint32
                                        Value te_affinity; //type: uint32
                                        Value te_ext_admin_num; //type: uint32
                                        Value te_sub_tlv_data_present; //type: boolean
                                        ValueList te_transmitted_bandwidth; //type: list of  uint32
                                        ValueList te_subpool_transmitted_bandwidth; //type: list of  uint32
                                        ValueList te_ext_admin_sub; //type: list of  uint32


                                    class TeSubTlv : public Entity
                                    {
                                        public:
                                            TeSubTlv();
                                            ~TeSubTlv();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value te_sub_tlv_type; //type: uint16
                                            Value te_sub_tlv_length; //type: uint16
                                            Value te_sub_tlv_value; //type: string




                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv::TeSubTlv> > te_sub_tlv;
                                        class IsisShTeLinkEnum;


                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::TeAdv> > te_adv;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements::Tepceadv> tepceadv;


                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements


                            class TeAdjacencyLog : public Entity
                            {
                                public:
                                    TeAdjacencyLog();
                                    ~TeAdjacencyLog();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class LogEntry : public Entity
                                {
                                    public:
                                        LogEntry();
                                        ~LogEntry();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value neighbor_ip_address; //type: string
                                        Value status; //type: boolean
                                        Value log_interface; //type: string
                                        Value te_log_neighbor_system_id; //type: string


                                    class GenericData : public Entity
                                    {
                                        public:
                                            GenericData();
                                            ~GenericData();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Timestamp : public Entity
                                        {
                                            public:
                                                Timestamp();
                                                ~Timestamp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value seconds; //type: uint32
                                                Value nano_seconds; //type: uint32




                                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData::Timestamp> timestamp;


                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry::GenericData> generic_data;


                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog::LogEntry> > log_entry;


                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog


                            class SpfLog : public Entity
                            {
                                public:
                                    SpfLog();
                                    ~SpfLog();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class LogEntry : public Entity
                                {
                                    public:
                                        LogEntry();
                                        ~LogEntry();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value class_; //type: IsisSpfClassEnum
                                        Value wait_enforced; //type: uint32
                                        Value next_wait_interval; //type: uint32
                                        Value updated_lsp_count; //type: uint32


                                    class GenericData : public Entity
                                    {
                                        public:
                                            GenericData();
                                            ~GenericData();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Timestamp : public Entity
                                        {
                                            public:
                                                Timestamp();
                                                ~Timestamp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value seconds; //type: uint32
                                                Value nano_seconds; //type: uint32




                                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData::Timestamp> timestamp;


                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData


                                    class Triggers : public Entity
                                    {
                                        public:
                                            Triggers();
                                            ~Triggers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value unique_trigger_count; //type: uint32
                                            Value first_trigger_lsp_id; //type: string
                                            Value trigger_link; //type: string
                                            Value trigger_next_hop_id; //type: string
                                            ValueList trigger; //type: list of  IsisSpfTriggerEnum


                                        class TriggerPrefix : public Entity
                                        {
                                            public:
                                                TriggerPrefix();
                                                ~TriggerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: IsisAfIdEnum


                                            class Ipv4 : public Entity
                                            {
                                                public:
                                                    Ipv4();
                                                    ~Ipv4();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value prefix; //type: string
                                                    Value prefix_length; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4


                                            class Ipv6 : public Entity
                                            {
                                                public:
                                                    Ipv6();
                                                    ~Ipv6();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value prefix; //type: string
                                                    Value prefix_length; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv4> ipv4;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix::Ipv6> ipv6;
                                                class IsisAfIdEnum;


                                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers::TriggerPrefix> trigger_prefix;
                                            class IsisSpfTriggerEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers


                                    class SptCalculationStatistics : public Entity
                                    {
                                        public:
                                            SptCalculationStatistics();
                                            ~SptCalculationStatistics();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Duration : public Entity
                                        {
                                            public:
                                                Duration();
                                                ~Duration();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value real_duration; //type: uint32
                                                Value cpu_duration; //type: uint32




                                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration


                                        class NodeCounts : public Entity
                                        {
                                            public:
                                                NodeCounts();
                                                ~NodeCounts();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value unreachable; //type: uint32
                                                Value reachable; //type: uint32
                                                Value added; //type: uint32
                                                Value deleted; //type: uint32
                                                Value modified; //type: uint32
                                                Value touched; //type: uint32




                                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::Duration> duration;
                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics::NodeCounts> node_counts;


                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics


                                    class RouteUpdateStatistics : public Entity
                                    {
                                        public:
                                            RouteUpdateStatistics();
                                            ~RouteUpdateStatistics();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Duration : public Entity
                                        {
                                            public:
                                                Duration();
                                                ~Duration();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value real_duration; //type: uint32
                                                Value cpu_duration; //type: uint32




                                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration


                                        class DurationBreakdown : public Entity
                                        {
                                            public:
                                                DurationBreakdown();
                                                ~DurationBreakdown();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class LocalRibUpdate : public Entity
                                            {
                                                public:
                                                    LocalRibUpdate();
                                                    ~LocalRibUpdate();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Critical : public Entity
                                                {
                                                    public:
                                                        Critical();
                                                        ~Critical();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value real_duration; //type: uint32
                                                        Value cpu_duration; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical


                                                class High : public Entity
                                                {
                                                    public:
                                                        High();
                                                        ~High();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value real_duration; //type: uint32
                                                        Value cpu_duration; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High


                                                class Medium : public Entity
                                                {
                                                    public:
                                                        Medium();
                                                        ~Medium();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value real_duration; //type: uint32
                                                        Value cpu_duration; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium


                                                class Low : public Entity
                                                {
                                                    public:
                                                        Low();
                                                        ~Low();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value real_duration; //type: uint32
                                                        Value cpu_duration; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low


                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Critical> critical;
                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::High> high;
                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Low> low;
                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate::Medium> medium;


                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate


                                            class GlobalRibBuild : public Entity
                                            {
                                                public:
                                                    GlobalRibBuild();
                                                    ~GlobalRibBuild();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Critical : public Entity
                                                {
                                                    public:
                                                        Critical();
                                                        ~Critical();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value real_duration; //type: uint32
                                                        Value cpu_duration; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical


                                                class High : public Entity
                                                {
                                                    public:
                                                        High();
                                                        ~High();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value real_duration; //type: uint32
                                                        Value cpu_duration; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High


                                                class Medium : public Entity
                                                {
                                                    public:
                                                        Medium();
                                                        ~Medium();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value real_duration; //type: uint32
                                                        Value cpu_duration; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium


                                                class Low : public Entity
                                                {
                                                    public:
                                                        Low();
                                                        ~Low();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value real_duration; //type: uint32
                                                        Value cpu_duration; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low


                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Critical> critical;
                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::High> high;
                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Low> low;
                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild::Medium> medium;


                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild


                                            class GlobalRibSend : public Entity
                                            {
                                                public:
                                                    GlobalRibSend();
                                                    ~GlobalRibSend();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Critical : public Entity
                                                {
                                                    public:
                                                        Critical();
                                                        ~Critical();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value real_duration; //type: uint32
                                                        Value cpu_duration; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical


                                                class High : public Entity
                                                {
                                                    public:
                                                        High();
                                                        ~High();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value real_duration; //type: uint32
                                                        Value cpu_duration; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High


                                                class Medium : public Entity
                                                {
                                                    public:
                                                        Medium();
                                                        ~Medium();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value real_duration; //type: uint32
                                                        Value cpu_duration; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium


                                                class Low : public Entity
                                                {
                                                    public:
                                                        Low();
                                                        ~Low();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value real_duration; //type: uint32
                                                        Value cpu_duration; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low


                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Critical> critical;
                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::High> high;
                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Low> low;
                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend::Medium> medium;


                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibBuild> global_rib_build;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::GlobalRibSend> global_rib_send;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown::LocalRibUpdate> local_rib_update;


                                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown


                                        class NodeCounts : public Entity
                                        {
                                            public:
                                                NodeCounts();
                                                ~NodeCounts();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value total_touched; //type: uint32


                                            class PerPriorityTouched : public Entity
                                            {
                                                public:
                                                    PerPriorityTouched();
                                                    ~PerPriorityTouched();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value critical; //type: uint32
                                                    Value high; //type: uint32
                                                    Value medium; //type: uint32
                                                    Value low; //type: uint32




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts::PerPriorityTouched> per_priority_touched;


                                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts


                                        class ItemCounts : public Entity
                                        {
                                            public:
                                                ItemCounts();
                                                ~ItemCounts();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class Unreachable : public Entity
                                            {
                                                public:
                                                    Unreachable();
                                                    ~Unreachable();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value critical; //type: uint32
                                                    Value high; //type: uint32
                                                    Value medium; //type: uint32
                                                    Value low; //type: uint32




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable


                                            class Reachable : public Entity
                                            {
                                                public:
                                                    Reachable();
                                                    ~Reachable();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value critical; //type: uint32
                                                    Value high; //type: uint32
                                                    Value medium; //type: uint32
                                                    Value low; //type: uint32




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable


                                            class Added : public Entity
                                            {
                                                public:
                                                    Added();
                                                    ~Added();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value critical; //type: uint32
                                                    Value high; //type: uint32
                                                    Value medium; //type: uint32
                                                    Value low; //type: uint32




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added


                                            class Deleted : public Entity
                                            {
                                                public:
                                                    Deleted();
                                                    ~Deleted();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value critical; //type: uint32
                                                    Value high; //type: uint32
                                                    Value medium; //type: uint32
                                                    Value low; //type: uint32




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted


                                            class Modified : public Entity
                                            {
                                                public:
                                                    Modified();
                                                    ~Modified();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value critical; //type: uint32
                                                    Value high; //type: uint32
                                                    Value medium; //type: uint32
                                                    Value low; //type: uint32




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified


                                            class Touched : public Entity
                                            {
                                                public:
                                                    Touched();
                                                    ~Touched();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value critical; //type: uint32
                                                    Value high; //type: uint32
                                                    Value medium; //type: uint32
                                                    Value low; //type: uint32




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Added> added;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Deleted> deleted;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Modified> modified;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Reachable> reachable;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Touched> touched;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts::Unreachable> unreachable;


                                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts


                                        class RouteCounts : public Entity
                                        {
                                            public:
                                                RouteCounts();
                                                ~RouteCounts();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class Unreachable : public Entity
                                            {
                                                public:
                                                    Unreachable();
                                                    ~Unreachable();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value critical; //type: uint32
                                                    Value high; //type: uint32
                                                    Value medium; //type: uint32
                                                    Value low; //type: uint32




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable


                                            class Reachable : public Entity
                                            {
                                                public:
                                                    Reachable();
                                                    ~Reachable();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value critical; //type: uint32
                                                    Value high; //type: uint32
                                                    Value medium; //type: uint32
                                                    Value low; //type: uint32




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable


                                            class Added : public Entity
                                            {
                                                public:
                                                    Added();
                                                    ~Added();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value critical; //type: uint32
                                                    Value high; //type: uint32
                                                    Value medium; //type: uint32
                                                    Value low; //type: uint32




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added


                                            class Deleted : public Entity
                                            {
                                                public:
                                                    Deleted();
                                                    ~Deleted();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value critical; //type: uint32
                                                    Value high; //type: uint32
                                                    Value medium; //type: uint32
                                                    Value low; //type: uint32




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted


                                            class Modified : public Entity
                                            {
                                                public:
                                                    Modified();
                                                    ~Modified();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value critical; //type: uint32
                                                    Value high; //type: uint32
                                                    Value medium; //type: uint32
                                                    Value low; //type: uint32




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified


                                            class Touched : public Entity
                                            {
                                                public:
                                                    Touched();
                                                    ~Touched();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value critical; //type: uint32
                                                    Value high; //type: uint32
                                                    Value medium; //type: uint32
                                                    Value low; //type: uint32




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Added> added;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Deleted> deleted;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Modified> modified;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Reachable> reachable;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Touched> touched;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts::Unreachable> unreachable;


                                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts


                                        class RibBatchCounts : public Entity
                                        {
                                            public:
                                                RibBatchCounts();
                                                ~RibBatchCounts();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value critical; //type: uint32
                                                Value high; //type: uint32
                                                Value medium; //type: uint32
                                                Value low; //type: uint32




                                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::Duration> duration;
                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::DurationBreakdown> duration_breakdown;
                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::ItemCounts> item_counts;
                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::NodeCounts> node_counts;
                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RibBatchCounts> rib_batch_counts;
                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics::RouteCounts> route_counts;


                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::GenericData> generic_data;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::RouteUpdateStatistics> route_update_statistics;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::SptCalculationStatistics> spt_calculation_statistics;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry::Triggers> triggers;
                                        class IsisSpfClassEnum;


                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog::LogEntry> > log_entry;


                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog


                            class TeTunnels : public Entity
                            {
                                public:
                                    TeTunnels();
                                    ~TeTunnels();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class TeTunnel : public Entity
                                {
                                    public:
                                        TeTunnel();
                                        ~TeTunnel();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value system_id; //type: string
                                        Value interface_name; //type: string
                                        Value te_system_id; //type: string
                                        Value te_interface; //type: string
                                        Value te_bandwidth; //type: uint32
                                        Value teigp_metric; //type: int32
                                        Value te_next_hop_ip_address; //type: string
                                        Value te_mode_type; //type: IsisMetricModeEnum
                                        Value teipv4fa_enabled; //type: boolean
                                        Value teipv6fa_enabled; //type: boolean
                                        Value teipv4aa_enabled; //type: boolean
                                        Value teipv6aa_enabled; //type: boolean
                                        Value te_checkpoint_object_id; //type: uint32
                                        Value te_segment_routing_enabled; //type: boolean


                                        class IsisMetricModeEnum;


                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels::TeTunnel> > te_tunnel;


                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels


                            class Ipv4LinkTopologies : public Entity
                            {
                                public:
                                    Ipv4LinkTopologies();
                                    ~Ipv4LinkTopologies();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Ipv4LinkTopology : public Entity
                                {
                                    public:
                                        Ipv4LinkTopology();
                                        ~Ipv4LinkTopology();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value system_id; //type: string
                                        Value source_address; //type: string
                                        Value is_participant; //type: boolean
                                        Value is_overloaded; //type: boolean
                                        Value is_attached; //type: boolean


                                    class ReachabilityStatus : public Entity
                                    {
                                        public:
                                            ReachabilityStatus();
                                            ~ReachabilityStatus();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value reachable_status; //type: IsisReachableEnum


                                        class ReachableDetails : public Entity
                                        {
                                            public:
                                                ReachableDetails();
                                                ~ReachableDetails();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value root_distance; //type: uint32
                                                Value multicast_root_distance; //type: uint32


                                            class Paths : public Entity
                                            {
                                                public:
                                                    Paths();
                                                    ~Paths();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value tag; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value weight; //type: uint32


                                                class FrrBackup : public Entity
                                                {
                                                    public:
                                                        FrrBackup();
                                                        ~FrrBackup();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value neighbor_id; //type: string
                                                        Value egress_interface; //type: string
                                                        Value neighbor_address; //type: string
                                                        Value tunnel_egress_interface; //type: string
                                                        Value neighbor_snpa; //type: string
                                                        Value remote_lfa_system_id; //type: string
                                                        Value remote_lfa_router_id; //type: string
                                                        Value remote_lfa_system_pid; //type: string
                                                        Value remote_lfa_router_pid; //type: string
                                                        Value total_backup_distance; //type: uint32
                                                        Value segment_routing_sid_value; //type: uint32
                                                        Value num_sid; //type: uint32
                                                        Value backup_repair_list_size; //type: uint32
                                                        Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                        Value is_downstream; //type: boolean
                                                        Value is_lc_disjoint; //type: boolean
                                                        Value is_node_protecting; //type: boolean
                                                        Value is_primary_path; //type: boolean
                                                        Value is_srlg_disjoint; //type: boolean
                                                        Value is_remote_lfa; //type: boolean
                                                        Value is_epcfrr_lfa; //type: boolean
                                                        Value is_tunnel_requested; //type: boolean
                                                        Value weight; //type: uint32
                                                        ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                    class BackupRepair : public Entity
                                                    {
                                                        public:
                                                            BackupRepair();
                                                            ~BackupRepair();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value repair_element_node_id; //type: string
                                                            Value repair_ipv4_addr; //type: string
                                                            Value repair_ipv6_addr; //type: string
                                                            Value repair_label; //type: uint32
                                                            Value repair_element_type; //type: uint32




                                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair> > backup_repair;
                                                        class IsisTilfaComputationEnum;


                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup


                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup> frr_backup;


                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths


                                            class MulticastPath : public Entity
                                            {
                                                public:
                                                    MulticastPath();
                                                    ~MulticastPath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value tag; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value weight; //type: uint32


                                                class FrrBackup : public Entity
                                                {
                                                    public:
                                                        FrrBackup();
                                                        ~FrrBackup();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value neighbor_id; //type: string
                                                        Value egress_interface; //type: string
                                                        Value neighbor_address; //type: string
                                                        Value tunnel_egress_interface; //type: string
                                                        Value neighbor_snpa; //type: string
                                                        Value remote_lfa_system_id; //type: string
                                                        Value remote_lfa_router_id; //type: string
                                                        Value remote_lfa_system_pid; //type: string
                                                        Value remote_lfa_router_pid; //type: string
                                                        Value total_backup_distance; //type: uint32
                                                        Value segment_routing_sid_value; //type: uint32
                                                        Value num_sid; //type: uint32
                                                        Value backup_repair_list_size; //type: uint32
                                                        Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                        Value is_downstream; //type: boolean
                                                        Value is_lc_disjoint; //type: boolean
                                                        Value is_node_protecting; //type: boolean
                                                        Value is_primary_path; //type: boolean
                                                        Value is_srlg_disjoint; //type: boolean
                                                        Value is_remote_lfa; //type: boolean
                                                        Value is_epcfrr_lfa; //type: boolean
                                                        Value is_tunnel_requested; //type: boolean
                                                        Value weight; //type: uint32
                                                        ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                    class BackupRepair : public Entity
                                                    {
                                                        public:
                                                            BackupRepair();
                                                            ~BackupRepair();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value repair_element_node_id; //type: string
                                                            Value repair_ipv4_addr; //type: string
                                                            Value repair_ipv6_addr; //type: string
                                                            Value repair_label; //type: uint32
                                                            Value repair_element_type; //type: uint32




                                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair> > backup_repair;
                                                        class IsisTilfaComputationEnum;


                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup


                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup> frr_backup;


                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath


                                            class Parent_ : public Entity
                                            {
                                                public:
                                                    Parent_();
                                                    ~Parent_();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value intermediate_pseudonode; //type: string




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_


                                            class Children_ : public Entity
                                            {
                                                public:
                                                    Children_();
                                                    ~Children_();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value intermediate_pseudonode; //type: string




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Children_> > children_;
                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath> > multicast_path;
                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Parent_> > parent_;
                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails::Paths> > paths;


                                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus::ReachableDetails> reachable_details;
                                            class IsisReachableEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus


                                    class AdvertisedPrefixItemCounts : public Entity
                                    {
                                        public:
                                            AdvertisedPrefixItemCounts();
                                            ~AdvertisedPrefixItemCounts();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value critical; //type: uint32
                                            Value high; //type: uint32
                                            Value medium; //type: uint32
                                            Value low; //type: uint32




                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::AdvertisedPrefixItemCounts> advertised_prefix_item_counts;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology::ReachabilityStatus> reachability_status;


                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies::Ipv4LinkTopology> > ipv4_link_topology;


                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies


                            class TopologySummary : public Entity
                            {
                                public:
                                    TopologySummary();
                                    ~TopologySummary();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class RouterNodeCount : public Entity
                                {
                                    public:
                                        RouterNodeCount();
                                        ~RouterNodeCount();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value reachable_node_count; //type: uint32
                                        Value unreachable_node_count; //type: uint32
                                        Value unreachable_participant_node_count; //type: uint32




                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount


                                class PseudonodeNodeCount : public Entity
                                {
                                    public:
                                        PseudonodeNodeCount();
                                        ~PseudonodeNodeCount();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value reachable_node_count; //type: uint32
                                        Value unreachable_node_count; //type: uint32
                                        Value unreachable_participant_node_count; //type: uint32




                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::PseudonodeNodeCount> pseudonode_node_count;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary::RouterNodeCount> router_node_count;


                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary


                            class Ipv6LinkTopologies : public Entity
                            {
                                public:
                                    Ipv6LinkTopologies();
                                    ~Ipv6LinkTopologies();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Ipv6LinkTopology : public Entity
                                {
                                    public:
                                        Ipv6LinkTopology();
                                        ~Ipv6LinkTopology();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value system_id; //type: string
                                        Value source_address; //type: string
                                        Value is_participant; //type: boolean
                                        Value is_overloaded; //type: boolean
                                        Value is_attached; //type: boolean


                                    class ReachabilityStatus : public Entity
                                    {
                                        public:
                                            ReachabilityStatus();
                                            ~ReachabilityStatus();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value reachable_status; //type: IsisReachableEnum


                                        class ReachableDetails : public Entity
                                        {
                                            public:
                                                ReachableDetails();
                                                ~ReachableDetails();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value root_distance; //type: uint32
                                                Value multicast_root_distance; //type: uint32


                                            class Paths : public Entity
                                            {
                                                public:
                                                    Paths();
                                                    ~Paths();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value tag; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value weight; //type: uint32


                                                class FrrBackup : public Entity
                                                {
                                                    public:
                                                        FrrBackup();
                                                        ~FrrBackup();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value neighbor_id; //type: string
                                                        Value egress_interface; //type: string
                                                        Value neighbor_address; //type: string
                                                        Value tunnel_egress_interface; //type: string
                                                        Value neighbor_snpa; //type: string
                                                        Value remote_lfa_system_id; //type: string
                                                        Value remote_lfa_router_id; //type: string
                                                        Value remote_lfa_system_pid; //type: string
                                                        Value remote_lfa_router_pid; //type: string
                                                        Value total_backup_distance; //type: uint32
                                                        Value segment_routing_sid_value; //type: uint32
                                                        Value num_sid; //type: uint32
                                                        Value backup_repair_list_size; //type: uint32
                                                        Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                        Value is_downstream; //type: boolean
                                                        Value is_lc_disjoint; //type: boolean
                                                        Value is_node_protecting; //type: boolean
                                                        Value is_primary_path; //type: boolean
                                                        Value is_srlg_disjoint; //type: boolean
                                                        Value is_remote_lfa; //type: boolean
                                                        Value is_epcfrr_lfa; //type: boolean
                                                        Value is_tunnel_requested; //type: boolean
                                                        Value weight; //type: uint32
                                                        ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                    class BackupRepair : public Entity
                                                    {
                                                        public:
                                                            BackupRepair();
                                                            ~BackupRepair();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value repair_element_node_id; //type: string
                                                            Value repair_ipv4_addr; //type: string
                                                            Value repair_ipv6_addr; //type: string
                                                            Value repair_label; //type: uint32
                                                            Value repair_element_type; //type: uint32




                                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup::BackupRepair> > backup_repair;
                                                        class IsisTilfaComputationEnum;


                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup


                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths::FrrBackup> frr_backup;


                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths


                                            class MulticastPath : public Entity
                                            {
                                                public:
                                                    MulticastPath();
                                                    ~MulticastPath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value tag; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value weight; //type: uint32


                                                class FrrBackup : public Entity
                                                {
                                                    public:
                                                        FrrBackup();
                                                        ~FrrBackup();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value neighbor_id; //type: string
                                                        Value egress_interface; //type: string
                                                        Value neighbor_address; //type: string
                                                        Value tunnel_egress_interface; //type: string
                                                        Value neighbor_snpa; //type: string
                                                        Value remote_lfa_system_id; //type: string
                                                        Value remote_lfa_router_id; //type: string
                                                        Value remote_lfa_system_pid; //type: string
                                                        Value remote_lfa_router_pid; //type: string
                                                        Value total_backup_distance; //type: uint32
                                                        Value segment_routing_sid_value; //type: uint32
                                                        Value num_sid; //type: uint32
                                                        Value backup_repair_list_size; //type: uint32
                                                        Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                        Value is_downstream; //type: boolean
                                                        Value is_lc_disjoint; //type: boolean
                                                        Value is_node_protecting; //type: boolean
                                                        Value is_primary_path; //type: boolean
                                                        Value is_srlg_disjoint; //type: boolean
                                                        Value is_remote_lfa; //type: boolean
                                                        Value is_epcfrr_lfa; //type: boolean
                                                        Value is_tunnel_requested; //type: boolean
                                                        Value weight; //type: uint32
                                                        ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                    class BackupRepair : public Entity
                                                    {
                                                        public:
                                                            BackupRepair();
                                                            ~BackupRepair();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value repair_element_node_id; //type: string
                                                            Value repair_ipv4_addr; //type: string
                                                            Value repair_ipv6_addr; //type: string
                                                            Value repair_label; //type: uint32
                                                            Value repair_element_type; //type: uint32




                                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup::BackupRepair> > backup_repair;
                                                        class IsisTilfaComputationEnum;


                                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup


                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath::FrrBackup> frr_backup;


                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath


                                            class Parent_ : public Entity
                                            {
                                                public:
                                                    Parent_();
                                                    ~Parent_();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value intermediate_pseudonode; //type: string




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_


                                            class Children_ : public Entity
                                            {
                                                public:
                                                    Children_();
                                                    ~Children_();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value intermediate_pseudonode; //type: string




                                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Children_> > children_;
                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::MulticastPath> > multicast_path;
                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Parent_> > parent_;
                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails::Paths> > paths;


                                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus::ReachableDetails> reachable_details;
                                            class IsisReachableEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus


                                    class AdvertisedPrefixItemCounts : public Entity
                                    {
                                        public:
                                            AdvertisedPrefixItemCounts();
                                            ~AdvertisedPrefixItemCounts();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value critical; //type: uint32
                                            Value high; //type: uint32
                                            Value medium; //type: uint32
                                            Value low; //type: uint32




                                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::AdvertisedPrefixItemCounts> advertised_prefix_item_counts;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology::ReachabilityStatus> reachability_status;


                                }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies::Ipv6LinkTopology> > ipv6_link_topology;


                            }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv4LinkTopologies> ipv4_link_topologies;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::Ipv6LinkTopologies> ipv6_link_topologies;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::SpfLog> spf_log;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdjacencyLog> te_adjacency_log;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeAdvertisements> te_advertisements;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TeTunnels> te_tunnels;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel::TopologySummary> topology_summary;
                                class IsisInternalLevelEnum;


                        }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels::TopologyLevel> > topology_level;


                    }; // Isis::Instances::Instance::Topologies::Topology::TopologyLevels


                    class Ipv6Routes : public Entity
                    {
                        public:
                            Ipv6Routes();
                            ~Ipv6Routes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Ipv6Route : public Entity
                        {
                            public:
                                Ipv6Route();
                                ~Ipv6Route();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value prefix; //type: string
                                Value prefix_length; //type: uint32


                            class ConnectedStatus : public Entity
                            {
                                public:
                                    ConnectedStatus();
                                    ~ConnectedStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_valid; //type: IsisValidEnum


                                class ConnectedDetails : public Entity
                                {
                                    public:
                                        ConnectedDetails();
                                        ~ConnectedDetails();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        ValueList interface; //type: list of  string




                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus::ConnectedDetails> connected_details;
                                    class IsisValidEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus


                            class RedistributedStatus : public Entity
                            {
                                public:
                                    RedistributedStatus();
                                    ~RedistributedStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_valid; //type: IsisValidEnum


                                class RedistributionDetails : public Entity
                                {
                                    public:
                                        RedistributionDetails();
                                        ~RedistributionDetails();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class IsisShRouteRedistDetail : public Entity
                                    {
                                        public:
                                            IsisShRouteRedistDetail();
                                            ~IsisShRouteRedistDetail();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value level; //type: IsisLevelEnum


                                        class Owner : public Entity
                                        {
                                            public:
                                                Owner();
                                                ~Owner();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value protocol; //type: IsisRedistProtoEnum
                                                Value isis_instance_id; //type: string
                                                Value ospf_process_id; //type: string
                                                Value ospfv3_process_id; //type: string
                                                Value bgp_as_number; //type: string
                                                Value eigrp_as_number; //type: string
                                                Value application_name; //type: string


                                                class IsisRedistProtoEnum;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner> owner;
                                            class IsisLevelEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail> > isis_sh_route_redist_detail;


                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus::RedistributionDetails> redistribution_details;
                                    class IsisValidEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus


                            class NativeStatus : public Entity
                            {
                                public:
                                    NativeStatus();
                                    ~NativeStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_valid; //type: IsisValidEnum


                                class NativeDetails : public Entity
                                {
                                    public:
                                        NativeDetails();
                                        ~NativeDetails();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value priority; //type: IsisPrefixPriorityEnum


                                    class Primary : public Entity
                                    {
                                        public:
                                            Primary();
                                            ~Primary();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value origin; //type: IsisPrefixOriginEnum
                                            Value metric; //type: uint32
                                            Value multicast_metric; //type: uint32
                                            Value is_external_metric; //type: boolean
                                            Value administrative_distance; //type: uint16


                                        class Paths : public Entity
                                        {
                                            public:
                                                Paths();
                                                ~Paths();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths


                                        class UcmpNextHop : public Entity
                                        {
                                            public:
                                                UcmpNextHop();
                                                ~UcmpNextHop();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value total_ucmp_distance; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop


                                        class MulticastPath : public Entity
                                        {
                                            public:
                                                MulticastPath();
                                                ~MulticastPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath


                                        class SrtePath : public Entity
                                        {
                                            public:
                                                SrtePath();
                                                ~SrtePath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath


                                        class Source : public Entity
                                        {
                                            public:
                                                Source();
                                                ~Source();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source


                                        class MulticastSource : public Entity
                                        {
                                            public:
                                                MulticastSource();
                                                ~MulticastSource();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastPath> > multicast_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::MulticastSource> > multicast_source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Paths> > paths;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::Source> > source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::SrtePath> > srte_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary::UcmpNextHop> > ucmp_next_hop;
                                            class IsisPrefixOriginEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary


                                    class Backup : public Entity
                                    {
                                        public:
                                            Backup();
                                            ~Backup();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value origin; //type: IsisPrefixOriginEnum
                                            Value metric; //type: uint32
                                            Value multicast_metric; //type: uint32
                                            Value is_external_metric; //type: boolean
                                            Value administrative_distance; //type: uint16


                                        class Paths : public Entity
                                        {
                                            public:
                                                Paths();
                                                ~Paths();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths


                                        class UcmpNextHop : public Entity
                                        {
                                            public:
                                                UcmpNextHop();
                                                ~UcmpNextHop();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value total_ucmp_distance; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop


                                        class MulticastPath : public Entity
                                        {
                                            public:
                                                MulticastPath();
                                                ~MulticastPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath


                                        class SrtePath : public Entity
                                        {
                                            public:
                                                SrtePath();
                                                ~SrtePath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath


                                        class Source : public Entity
                                        {
                                            public:
                                                Source();
                                                ~Source();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source


                                        class MulticastSource : public Entity
                                        {
                                            public:
                                                MulticastSource();
                                                ~MulticastSource();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastPath> > multicast_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::MulticastSource> > multicast_source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Paths> > paths;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::Source> > source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::SrtePath> > srte_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup::UcmpNextHop> > ucmp_next_hop;
                                            class IsisPrefixOriginEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Backup> > backup;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails::Primary> primary;
                                        class IsisPrefixPriorityEnum;


                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus::NativeDetails> native_details;
                                    class IsisValidEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus


                            class PerLevelAdvertisingDetail : public Entity
                            {
                                public:
                                    PerLevelAdvertisingDetail();
                                    ~PerLevelAdvertisingDetail();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisLevelEnum
                                    Value advertising_origin; //type: IsisShRouteAdvOriginEnum
                                    Value metric; //type: uint32
                                    Value is_propagated; //type: boolean
                                    Value is_external_metric; //type: boolean
                                    Value is_external_reachability; //type: boolean
                                    Value is_interarea; //type: boolean
                                    ValueList tags; //type: list of  uint32


                                class SummarizationStatus : public Entity
                                {
                                    public:
                                        SummarizationStatus();
                                        ~SummarizationStatus();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value is_valid; //type: IsisValidEnum


                                    class SummaryPrefix : public Entity
                                    {
                                        public:
                                            SummaryPrefix();
                                            ~SummaryPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value prefix; //type: string
                                            Value prefix_length; //type: uint8




                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix> summary_prefix;
                                        class IsisValidEnum;


                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus


                                class NodalSid : public Entity
                                {
                                    public:
                                        NodalSid();
                                        ~NodalSid();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sid_value; //type: uint32
                                        Value rflag; //type: uint8
                                        Value nflag; //type: uint8
                                        Value pflag; //type: uint8
                                        Value eflag; //type: uint8
                                        Value vflag; //type: uint8
                                        Value lflag; //type: uint8
                                        Value algorithm; //type: uint8




                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::NodalSid> > nodal_sid;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail::SummarizationStatus> summarization_status;
                                    class IsisShRouteAdvOriginEnum;
                                    class IsisLevelEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::ConnectedStatus> connected_status;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::NativeStatus> native_status;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::PerLevelAdvertisingDetail> > per_level_advertising_detail;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route::RedistributedStatus> redistributed_status;


                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes::Ipv6Route> > ipv6_route;


                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv6Routes


                    class Ipv6FrrBackups : public Entity
                    {
                        public:
                            Ipv6FrrBackups();
                            ~Ipv6FrrBackups();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Ipv6FrrBackup : public Entity
                        {
                            public:
                                Ipv6FrrBackup();
                                ~Ipv6FrrBackup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value prefix; //type: string
                                Value prefix_length; //type: uint32


                            class ConnectedStatus : public Entity
                            {
                                public:
                                    ConnectedStatus();
                                    ~ConnectedStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_valid; //type: IsisValidEnum


                                class ConnectedDetails : public Entity
                                {
                                    public:
                                        ConnectedDetails();
                                        ~ConnectedDetails();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        ValueList interface; //type: list of  string




                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus::ConnectedDetails> connected_details;
                                    class IsisValidEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus


                            class RedistributedStatus : public Entity
                            {
                                public:
                                    RedistributedStatus();
                                    ~RedistributedStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_valid; //type: IsisValidEnum


                                class RedistributionDetails : public Entity
                                {
                                    public:
                                        RedistributionDetails();
                                        ~RedistributionDetails();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class IsisShRouteRedistDetail : public Entity
                                    {
                                        public:
                                            IsisShRouteRedistDetail();
                                            ~IsisShRouteRedistDetail();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value level; //type: IsisLevelEnum


                                        class Owner : public Entity
                                        {
                                            public:
                                                Owner();
                                                ~Owner();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value protocol; //type: IsisRedistProtoEnum
                                                Value isis_instance_id; //type: string
                                                Value ospf_process_id; //type: string
                                                Value ospfv3_process_id; //type: string
                                                Value bgp_as_number; //type: string
                                                Value eigrp_as_number; //type: string
                                                Value application_name; //type: string


                                                class IsisRedistProtoEnum;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner> owner;
                                            class IsisLevelEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail> > isis_sh_route_redist_detail;


                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus::RedistributionDetails> redistribution_details;
                                    class IsisValidEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus


                            class NativeStatus : public Entity
                            {
                                public:
                                    NativeStatus();
                                    ~NativeStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_valid; //type: IsisValidEnum


                                class NativeDetails : public Entity
                                {
                                    public:
                                        NativeDetails();
                                        ~NativeDetails();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value priority; //type: IsisPrefixPriorityEnum


                                    class Primary : public Entity
                                    {
                                        public:
                                            Primary();
                                            ~Primary();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value origin; //type: IsisPrefixOriginEnum
                                            Value metric; //type: uint32
                                            Value multicast_metric; //type: uint32
                                            Value is_external_metric; //type: boolean
                                            Value administrative_distance; //type: uint16


                                        class Paths : public Entity
                                        {
                                            public:
                                                Paths();
                                                ~Paths();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths


                                        class UcmpNextHop : public Entity
                                        {
                                            public:
                                                UcmpNextHop();
                                                ~UcmpNextHop();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value total_ucmp_distance; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop


                                        class MulticastPath : public Entity
                                        {
                                            public:
                                                MulticastPath();
                                                ~MulticastPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath


                                        class SrtePath : public Entity
                                        {
                                            public:
                                                SrtePath();
                                                ~SrtePath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath


                                        class Source : public Entity
                                        {
                                            public:
                                                Source();
                                                ~Source();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source


                                        class MulticastSource : public Entity
                                        {
                                            public:
                                                MulticastSource();
                                                ~MulticastSource();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath> > multicast_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource> > multicast_source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Paths> > paths;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::Source> > source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath> > srte_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop> > ucmp_next_hop;
                                            class IsisPrefixOriginEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary


                                    class Backup : public Entity
                                    {
                                        public:
                                            Backup();
                                            ~Backup();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value origin; //type: IsisPrefixOriginEnum
                                            Value metric; //type: uint32
                                            Value multicast_metric; //type: uint32
                                            Value is_external_metric; //type: boolean
                                            Value administrative_distance; //type: uint16


                                        class Paths : public Entity
                                        {
                                            public:
                                                Paths();
                                                ~Paths();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths


                                        class UcmpNextHop : public Entity
                                        {
                                            public:
                                                UcmpNextHop();
                                                ~UcmpNextHop();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value total_ucmp_distance; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop


                                        class MulticastPath : public Entity
                                        {
                                            public:
                                                MulticastPath();
                                                ~MulticastPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath


                                        class SrtePath : public Entity
                                        {
                                            public:
                                                SrtePath();
                                                ~SrtePath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath


                                        class Source : public Entity
                                        {
                                            public:
                                                Source();
                                                ~Source();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Source::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Source::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Source


                                        class MulticastSource : public Entity
                                        {
                                            public:
                                                MulticastSource();
                                                ~MulticastSource();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath> > multicast_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource> > multicast_source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Paths> > paths;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::Source> > source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath> > srte_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop> > ucmp_next_hop;
                                            class IsisPrefixOriginEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Backup> > backup;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails::Primary> primary;
                                        class IsisPrefixPriorityEnum;


                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus::NativeDetails> native_details;
                                    class IsisValidEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus


                            class PerLevelAdvertisingDetail : public Entity
                            {
                                public:
                                    PerLevelAdvertisingDetail();
                                    ~PerLevelAdvertisingDetail();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisLevelEnum
                                    Value advertising_origin; //type: IsisShRouteAdvOriginEnum
                                    Value metric; //type: uint32
                                    Value is_propagated; //type: boolean
                                    Value is_external_metric; //type: boolean
                                    Value is_external_reachability; //type: boolean
                                    Value is_interarea; //type: boolean
                                    ValueList tags; //type: list of  uint32


                                class SummarizationStatus : public Entity
                                {
                                    public:
                                        SummarizationStatus();
                                        ~SummarizationStatus();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value is_valid; //type: IsisValidEnum


                                    class SummaryPrefix : public Entity
                                    {
                                        public:
                                            SummaryPrefix();
                                            ~SummaryPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value prefix; //type: string
                                            Value prefix_length; //type: uint8




                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix> summary_prefix;
                                        class IsisValidEnum;


                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus


                                class NodalSid : public Entity
                                {
                                    public:
                                        NodalSid();
                                        ~NodalSid();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sid_value; //type: uint32
                                        Value rflag; //type: uint8
                                        Value nflag; //type: uint8
                                        Value pflag; //type: uint8
                                        Value eflag; //type: uint8
                                        Value vflag; //type: uint8
                                        Value lflag; //type: uint8
                                        Value algorithm; //type: uint8




                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::NodalSid


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::NodalSid> > nodal_sid;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus> summarization_status;
                                    class IsisShRouteAdvOriginEnum;
                                    class IsisLevelEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::ConnectedStatus> connected_status;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::NativeStatus> native_status;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::PerLevelAdvertisingDetail> > per_level_advertising_detail;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup::RedistributedStatus> redistributed_status;


                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups::Ipv6FrrBackup> > ipv6frr_backup;


                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups


                    class Ipv4FrrBackups : public Entity
                    {
                        public:
                            Ipv4FrrBackups();
                            ~Ipv4FrrBackups();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Ipv4FrrBackup : public Entity
                        {
                            public:
                                Ipv4FrrBackup();
                                ~Ipv4FrrBackup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value prefix; //type: string
                                Value prefix_length; //type: uint32


                            class ConnectedStatus : public Entity
                            {
                                public:
                                    ConnectedStatus();
                                    ~ConnectedStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_valid; //type: IsisValidEnum


                                class ConnectedDetails : public Entity
                                {
                                    public:
                                        ConnectedDetails();
                                        ~ConnectedDetails();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        ValueList interface; //type: list of  string




                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus::ConnectedDetails> connected_details;
                                    class IsisValidEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus


                            class RedistributedStatus : public Entity
                            {
                                public:
                                    RedistributedStatus();
                                    ~RedistributedStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_valid; //type: IsisValidEnum


                                class RedistributionDetails : public Entity
                                {
                                    public:
                                        RedistributionDetails();
                                        ~RedistributionDetails();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class IsisShRouteRedistDetail : public Entity
                                    {
                                        public:
                                            IsisShRouteRedistDetail();
                                            ~IsisShRouteRedistDetail();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value level; //type: IsisLevelEnum


                                        class Owner : public Entity
                                        {
                                            public:
                                                Owner();
                                                ~Owner();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value protocol; //type: IsisRedistProtoEnum
                                                Value isis_instance_id; //type: string
                                                Value ospf_process_id; //type: string
                                                Value ospfv3_process_id; //type: string
                                                Value bgp_as_number; //type: string
                                                Value eigrp_as_number; //type: string
                                                Value application_name; //type: string


                                                class IsisRedistProtoEnum;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner> owner;
                                            class IsisLevelEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail> > isis_sh_route_redist_detail;


                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus::RedistributionDetails> redistribution_details;
                                    class IsisValidEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus


                            class NativeStatus : public Entity
                            {
                                public:
                                    NativeStatus();
                                    ~NativeStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_valid; //type: IsisValidEnum


                                class NativeDetails : public Entity
                                {
                                    public:
                                        NativeDetails();
                                        ~NativeDetails();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value priority; //type: IsisPrefixPriorityEnum


                                    class Primary : public Entity
                                    {
                                        public:
                                            Primary();
                                            ~Primary();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value origin; //type: IsisPrefixOriginEnum
                                            Value metric; //type: uint32
                                            Value multicast_metric; //type: uint32
                                            Value is_external_metric; //type: boolean
                                            Value administrative_distance; //type: uint16


                                        class Paths : public Entity
                                        {
                                            public:
                                                Paths();
                                                ~Paths();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths


                                        class UcmpNextHop : public Entity
                                        {
                                            public:
                                                UcmpNextHop();
                                                ~UcmpNextHop();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value total_ucmp_distance; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop


                                        class MulticastPath : public Entity
                                        {
                                            public:
                                                MulticastPath();
                                                ~MulticastPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath


                                        class SrtePath : public Entity
                                        {
                                            public:
                                                SrtePath();
                                                ~SrtePath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath


                                        class Source : public Entity
                                        {
                                            public:
                                                Source();
                                                ~Source();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Source::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Source


                                        class MulticastSource : public Entity
                                        {
                                            public:
                                                MulticastSource();
                                                ~MulticastSource();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastPath> > multicast_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::MulticastSource> > multicast_source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Paths> > paths;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::Source> > source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::SrtePath> > srte_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary::UcmpNextHop> > ucmp_next_hop;
                                            class IsisPrefixOriginEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary


                                    class Backup : public Entity
                                    {
                                        public:
                                            Backup();
                                            ~Backup();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value origin; //type: IsisPrefixOriginEnum
                                            Value metric; //type: uint32
                                            Value multicast_metric; //type: uint32
                                            Value is_external_metric; //type: boolean
                                            Value administrative_distance; //type: uint16


                                        class Paths : public Entity
                                        {
                                            public:
                                                Paths();
                                                ~Paths();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths


                                        class UcmpNextHop : public Entity
                                        {
                                            public:
                                                UcmpNextHop();
                                                ~UcmpNextHop();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value total_ucmp_distance; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop


                                        class MulticastPath : public Entity
                                        {
                                            public:
                                                MulticastPath();
                                                ~MulticastPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath


                                        class SrtePath : public Entity
                                        {
                                            public:
                                                SrtePath();
                                                ~SrtePath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath


                                        class Source : public Entity
                                        {
                                            public:
                                                Source();
                                                ~Source();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source


                                        class MulticastSource : public Entity
                                        {
                                            public:
                                                MulticastSource();
                                                ~MulticastSource();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastPath> > multicast_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::MulticastSource> > multicast_source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Paths> > paths;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::Source> > source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::SrtePath> > srte_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup::UcmpNextHop> > ucmp_next_hop;
                                            class IsisPrefixOriginEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Backup> > backup;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails::Primary> primary;
                                        class IsisPrefixPriorityEnum;


                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus::NativeDetails> native_details;
                                    class IsisValidEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus


                            class PerLevelAdvertisingDetail : public Entity
                            {
                                public:
                                    PerLevelAdvertisingDetail();
                                    ~PerLevelAdvertisingDetail();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisLevelEnum
                                    Value advertising_origin; //type: IsisShRouteAdvOriginEnum
                                    Value metric; //type: uint32
                                    Value is_propagated; //type: boolean
                                    Value is_external_metric; //type: boolean
                                    Value is_external_reachability; //type: boolean
                                    Value is_interarea; //type: boolean
                                    ValueList tags; //type: list of  uint32


                                class SummarizationStatus : public Entity
                                {
                                    public:
                                        SummarizationStatus();
                                        ~SummarizationStatus();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value is_valid; //type: IsisValidEnum


                                    class SummaryPrefix : public Entity
                                    {
                                        public:
                                            SummaryPrefix();
                                            ~SummaryPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value prefix; //type: string
                                            Value prefix_length; //type: uint8




                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix> summary_prefix;
                                        class IsisValidEnum;


                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus


                                class NodalSid : public Entity
                                {
                                    public:
                                        NodalSid();
                                        ~NodalSid();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sid_value; //type: uint32
                                        Value rflag; //type: uint8
                                        Value nflag; //type: uint8
                                        Value pflag; //type: uint8
                                        Value eflag; //type: uint8
                                        Value vflag; //type: uint8
                                        Value lflag; //type: uint8
                                        Value algorithm; //type: uint8




                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::NodalSid


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::NodalSid> > nodal_sid;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail::SummarizationStatus> summarization_status;
                                    class IsisShRouteAdvOriginEnum;
                                    class IsisLevelEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::ConnectedStatus> connected_status;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::NativeStatus> native_status;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::PerLevelAdvertisingDetail> > per_level_advertising_detail;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup::RedistributedStatus> redistributed_status;


                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups::Ipv4FrrBackup> > ipv4frr_backup;


                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups


                    class Ipv4Routes : public Entity
                    {
                        public:
                            Ipv4Routes();
                            ~Ipv4Routes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Ipv4Route : public Entity
                        {
                            public:
                                Ipv4Route();
                                ~Ipv4Route();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value prefix; //type: string
                                Value prefix_length; //type: uint32


                            class ConnectedStatus : public Entity
                            {
                                public:
                                    ConnectedStatus();
                                    ~ConnectedStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_valid; //type: IsisValidEnum


                                class ConnectedDetails : public Entity
                                {
                                    public:
                                        ConnectedDetails();
                                        ~ConnectedDetails();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        ValueList interface; //type: list of  string




                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails> connected_details;
                                    class IsisValidEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus


                            class RedistributedStatus : public Entity
                            {
                                public:
                                    RedistributedStatus();
                                    ~RedistributedStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_valid; //type: IsisValidEnum


                                class RedistributionDetails : public Entity
                                {
                                    public:
                                        RedistributionDetails();
                                        ~RedistributionDetails();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class IsisShRouteRedistDetail : public Entity
                                    {
                                        public:
                                            IsisShRouteRedistDetail();
                                            ~IsisShRouteRedistDetail();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value level; //type: IsisLevelEnum


                                        class Owner : public Entity
                                        {
                                            public:
                                                Owner();
                                                ~Owner();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value protocol; //type: IsisRedistProtoEnum
                                                Value isis_instance_id; //type: string
                                                Value ospf_process_id; //type: string
                                                Value ospfv3_process_id; //type: string
                                                Value bgp_as_number; //type: string
                                                Value eigrp_as_number; //type: string
                                                Value application_name; //type: string


                                                class IsisRedistProtoEnum;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner> owner;
                                            class IsisLevelEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail> > isis_sh_route_redist_detail;


                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails> redistribution_details;
                                    class IsisValidEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus


                            class NativeStatus : public Entity
                            {
                                public:
                                    NativeStatus();
                                    ~NativeStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_valid; //type: IsisValidEnum


                                class NativeDetails : public Entity
                                {
                                    public:
                                        NativeDetails();
                                        ~NativeDetails();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value priority; //type: IsisPrefixPriorityEnum


                                    class Primary : public Entity
                                    {
                                        public:
                                            Primary();
                                            ~Primary();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value origin; //type: IsisPrefixOriginEnum
                                            Value metric; //type: uint32
                                            Value multicast_metric; //type: uint32
                                            Value is_external_metric; //type: boolean
                                            Value administrative_distance; //type: uint16


                                        class Paths : public Entity
                                        {
                                            public:
                                                Paths();
                                                ~Paths();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths


                                        class UcmpNextHop : public Entity
                                        {
                                            public:
                                                UcmpNextHop();
                                                ~UcmpNextHop();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value total_ucmp_distance; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop


                                        class MulticastPath : public Entity
                                        {
                                            public:
                                                MulticastPath();
                                                ~MulticastPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath


                                        class SrtePath : public Entity
                                        {
                                            public:
                                                SrtePath();
                                                ~SrtePath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath


                                        class Source : public Entity
                                        {
                                            public:
                                                Source();
                                                ~Source();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source


                                        class MulticastSource : public Entity
                                        {
                                            public:
                                                MulticastSource();
                                                ~MulticastSource();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath> > multicast_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource> > multicast_source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths> > paths;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source> > source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath> > srte_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop> > ucmp_next_hop;
                                            class IsisPrefixOriginEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary


                                    class Backup : public Entity
                                    {
                                        public:
                                            Backup();
                                            ~Backup();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value origin; //type: IsisPrefixOriginEnum
                                            Value metric; //type: uint32
                                            Value multicast_metric; //type: uint32
                                            Value is_external_metric; //type: boolean
                                            Value administrative_distance; //type: uint16


                                        class Paths : public Entity
                                        {
                                            public:
                                                Paths();
                                                ~Paths();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths


                                        class UcmpNextHop : public Entity
                                        {
                                            public:
                                                UcmpNextHop();
                                                ~UcmpNextHop();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value total_ucmp_distance; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop


                                        class MulticastPath : public Entity
                                        {
                                            public:
                                                MulticastPath();
                                                ~MulticastPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath


                                        class SrtePath : public Entity
                                        {
                                            public:
                                                SrtePath();
                                                ~SrtePath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value neighbor_id; //type: string
                                                Value egress_interface; //type: string
                                                Value neighbor_address; //type: string
                                                Value neighbor_snpa; //type: string
                                                Value tag; //type: uint32
                                                Value segment_routing_sid_value; //type: uint32
                                                Value weight; //type: uint32


                                            class FrrBackup : public Entity
                                            {
                                                public:
                                                    FrrBackup();
                                                    ~FrrBackup();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value neighbor_id; //type: string
                                                    Value egress_interface; //type: string
                                                    Value neighbor_address; //type: string
                                                    Value tunnel_egress_interface; //type: string
                                                    Value neighbor_snpa; //type: string
                                                    Value remote_lfa_system_id; //type: string
                                                    Value remote_lfa_router_id; //type: string
                                                    Value remote_lfa_system_pid; //type: string
                                                    Value remote_lfa_router_pid; //type: string
                                                    Value total_backup_distance; //type: uint32
                                                    Value segment_routing_sid_value; //type: uint32
                                                    Value num_sid; //type: uint32
                                                    Value backup_repair_list_size; //type: uint32
                                                    Value tilfa_computation; //type: IsisTilfaComputationEnum
                                                    Value is_downstream; //type: boolean
                                                    Value is_lc_disjoint; //type: boolean
                                                    Value is_node_protecting; //type: boolean
                                                    Value is_primary_path; //type: boolean
                                                    Value is_srlg_disjoint; //type: boolean
                                                    Value is_remote_lfa; //type: boolean
                                                    Value is_epcfrr_lfa; //type: boolean
                                                    Value is_tunnel_requested; //type: boolean
                                                    Value weight; //type: uint32
                                                    ValueList segment_routing_sid_value_entry; //type: list of  uint32


                                                class BackupRepair : public Entity
                                                {
                                                    public:
                                                        BackupRepair();
                                                        ~BackupRepair();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value repair_element_node_id; //type: string
                                                        Value repair_ipv4_addr; //type: string
                                                        Value repair_ipv6_addr; //type: string
                                                        Value repair_label; //type: uint32
                                                        Value repair_element_type; //type: uint32




                                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair> > backup_repair;
                                                    class IsisTilfaComputationEnum;


                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup> frr_backup;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath


                                        class Source : public Entity
                                        {
                                            public:
                                                Source();
                                                ~Source();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source


                                        class MulticastSource : public Entity
                                        {
                                            public:
                                                MulticastSource();
                                                ~MulticastSource();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value source_lsp_id; //type: string
                                                Value source_address; //type: string
                                                ValueList tags; //type: list of  uint32


                                            class NodalSid : public Entity
                                            {
                                                public:
                                                    NodalSid();
                                                    ~NodalSid();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value sid_value; //type: uint32
                                                    Value rflag; //type: uint8
                                                    Value nflag; //type: uint8
                                                    Value pflag; //type: uint8
                                                    Value eflag; //type: uint8
                                                    Value vflag; //type: uint8
                                                    Value lflag; //type: uint8
                                                    Value algorithm; //type: uint8




                                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid> > nodal_sid;


                                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath> > multicast_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource> > multicast_source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths> > paths;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source> > source;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath> > srte_path;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop> > ucmp_next_hop;
                                            class IsisPrefixOriginEnum;


                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup> > backup;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary> primary;
                                        class IsisPrefixPriorityEnum;


                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails> native_details;
                                    class IsisValidEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus


                            class PerLevelAdvertisingDetail : public Entity
                            {
                                public:
                                    PerLevelAdvertisingDetail();
                                    ~PerLevelAdvertisingDetail();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisLevelEnum
                                    Value advertising_origin; //type: IsisShRouteAdvOriginEnum
                                    Value metric; //type: uint32
                                    Value is_propagated; //type: boolean
                                    Value is_external_metric; //type: boolean
                                    Value is_external_reachability; //type: boolean
                                    Value is_interarea; //type: boolean
                                    ValueList tags; //type: list of  uint32


                                class SummarizationStatus : public Entity
                                {
                                    public:
                                        SummarizationStatus();
                                        ~SummarizationStatus();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value is_valid; //type: IsisValidEnum


                                    class SummaryPrefix : public Entity
                                    {
                                        public:
                                            SummaryPrefix();
                                            ~SummaryPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value prefix; //type: string
                                            Value prefix_length; //type: uint8




                                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix> summary_prefix;
                                        class IsisValidEnum;


                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus


                                class NodalSid : public Entity
                                {
                                    public:
                                        NodalSid();
                                        ~NodalSid();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sid_value; //type: uint32
                                        Value rflag; //type: uint8
                                        Value nflag; //type: uint8
                                        Value pflag; //type: uint8
                                        Value eflag; //type: uint8
                                        Value vflag; //type: uint8
                                        Value lflag; //type: uint8
                                        Value algorithm; //type: uint8




                                }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid> > nodal_sid;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus> summarization_status;
                                    class IsisShRouteAdvOriginEnum;
                                    class IsisLevelEnum;


                            }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus> connected_status;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus> native_status;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail> > per_level_advertising_detail;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus> redistributed_status;


                        }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route> > ipv4_route;


                    }; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes


                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::FrrSummary> frr_summary;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes> ipv4_routes;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FrrBackups> ipv4frr_backups;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6Routes> ipv6_routes;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv6FrrBackups> ipv6frr_backups;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::TopologyLevels> topology_levels;
                        class IsisAddressFamilyEnum;
                        class IsisSubAddressFamilyEnum;


                }; // Isis::Instances::Instance::Topologies::Topology


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology> > topology;


            }; // Isis::Instances::Instance::Topologies


            class NsrStatus : public Entity
            {
                public:
                    NsrStatus();
                    ~NsrStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value isis_vm_state; //type: uint16


                class IsisNsrPeer : public Entity
                {
                    public:
                        IsisNsrPeer();
                        ~IsisNsrPeer();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class FullSyncAchieved : public Entity
                    {
                        public:
                            FullSyncAchieved();
                            ~FullSyncAchieved();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value entry; //type: uint32




                    }; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved


                    class ManSyncCount : public Entity
                    {
                        public:
                            ManSyncCount();
                            ~ManSyncCount();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value entry; //type: uint32




                    }; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount


                    class NsrChgCount : public Entity
                    {
                        public:
                            NsrChgCount();
                            ~NsrChgCount();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value entry; //type: uint32




                    }; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount


                    class UptimeValid : public Entity
                    {
                        public:
                            UptimeValid();
                            ~UptimeValid();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value entry; //type: boolean




                    }; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid


                    class Uptime : public Entity
                    {
                        public:
                            Uptime();
                            ~Uptime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value entry; //type: uint32




                    }; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime


                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved> > full_sync_achieved;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount> > man_sync_count;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount> > nsr_chg_count;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime> > uptime;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid> > uptime_valid;


                }; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer


                class IsisNsrInfra : public Entity
                {
                    public:
                        IsisNsrInfra();
                        ~IsisNsrInfra();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Gen : public Entity
                    {
                        public:
                            Gen();
                            ~Gen();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value my_nodeid; //type: uint32
                            Value my_process_id; //type: uint32
                            Value pm_issu_role; //type: uint8
                            Value pm_ha_role; //type: uint8
                            Value sysmgr_ha_role; //type: uint8
                            Value nsr_send_ready; //type: uint8
                            Value nsr_send_unready; //type: uint8
                            Value nsr_send_err; //type: uint32
                            Value nsr_recv_err; //type: uint32
                            Value retry_flag; //type: uint32
                            Value nsr_enabled; //type: boolean
                            Value nsr_configured; //type: boolean
                            Value nsf_configured; //type: boolean
                            Value failover; //type: boolean
                            Value lanid_req_needed; //type: boolean




                    }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen


                    class Pm : public Entity
                    {
                        public:
                            Pm();
                            ~Pm();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value reg; //type: uint8
                            Value conn_cb; //type: uint8
                            Value disconn_cb; //type: uint8
                            Value conn_status; //type: boolean




                    }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm


                    class Ism : public Entity
                    {
                        public:
                            Ism();
                            ~Ism();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value conn; //type: uint8
                            Value conn_cb; //type: uint8
                            Value disconn; //type: uint8
                            Value disconn_cb; //type: uint8
                            Value ha_opt; //type: uint8
                            Value ha_opt_cb; //type: uint8
                            Value wait_ready; //type: uint8
                            Value send_ready; //type: uint8
                            Value evt_rsp_cb; //type: uint8
                            Value reg_rsp_cb; //type: uint8
                            Value conn_status; //type: boolean




                    }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ism


                    class Ds : public Entity
                    {
                        public:
                            Ds();
                            ~Ds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value conn; //type: uint8
                            Value conn_cb; //type: uint8
                            Value pub; //type: uint8
                            Value pub_cb; //type: uint8
                            Value reg; //type: uint8
                            Value reg_cb; //type: uint8
                            Value unreg; //type: uint8
                            Value unreg_cb; //type: uint8
                            Value disconn_cb; //type: uint8
                            Value notify_cb; //type: uint8
                            Value notify_peer_xr; //type: string
                            Value del_cb; //type: uint8
                            Value remove_srv; //type: uint8
                            Value conn_status; //type: boolean


                        class ConnTs : public Entity
                        {
                            public:
                                ConnTs();
                                ~ConnTs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs


                        class ConnCbTs : public Entity
                        {
                            public:
                                ConnCbTs();
                                ~ConnCbTs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs


                        class PubTs : public Entity
                        {
                            public:
                                PubTs();
                                ~PubTs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs


                        class PubCbTs : public Entity
                        {
                            public:
                                PubCbTs();
                                ~PubCbTs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs


                        class RegTs : public Entity
                        {
                            public:
                                RegTs();
                                ~RegTs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs


                        class RegCbTs : public Entity
                        {
                            public:
                                RegCbTs();
                                ~RegCbTs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs


                        class UnregTs : public Entity
                        {
                            public:
                                UnregTs();
                                ~UnregTs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs


                        class UnregCbTs : public Entity
                        {
                            public:
                                UnregCbTs();
                                ~UnregCbTs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs


                        class DisconnCbTs : public Entity
                        {
                            public:
                                DisconnCbTs();
                                ~DisconnCbTs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs


                        class NotifyCbTs : public Entity
                        {
                            public:
                                NotifyCbTs();
                                ~NotifyCbTs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs


                        class DelCbTs : public Entity
                        {
                            public:
                                DelCbTs();
                                ~DelCbTs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs


                        class RemoveSrvTs : public Entity
                        {
                            public:
                                RemoveSrvTs();
                                ~RemoveSrvTs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs


                        class ConnStatusTs : public Entity
                        {
                            public:
                                ConnStatusTs();
                                ~ConnStatusTs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs


                        class NotifyPeer : public Entity
                        {
                            public:
                                NotifyPeer();
                                ~NotifyPeer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer


                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs> conn_cb_ts;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs> conn_status_ts;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs> conn_ts;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs> del_cb_ts;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs> disconn_cb_ts;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs> notify_cb_ts;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer> > notify_peer;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs> pub_cb_ts;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs> pub_ts;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs> reg_cb_ts;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs> reg_ts;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs> remove_srv_ts;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs> unreg_cb_ts;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs> unreg_ts;


                    }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds


                    class Te : public Entity
                    {
                        public:
                            Te();
                            ~Te();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value enabled; //type: uint8
                            Value conn_up; //type: uint8
                            Value te_link_cb; //type: uint8
                            Value te_tunnel_cb; //type: uint8
                            Value adv_sync_data; //type: uint8
                            Value link_purge_time_on; //type: uint8
                            Value tunnel_purge_time_on; //type: uint8
                            Value has_info_from_te; //type: uint8




                    }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te


                    class Ncd : public Entity
                    {
                        public:
                            Ncd();
                            ~Ncd();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value vm_idx; //type: uint8
                            Value conn_up; //type: boolean
                            Value endp_hdl; //type: uint8
                            Value chksum; //type: uint16
                            Value send_seqnum; //type: uint32
                            Value recv_cnt; //type: uint32




                    }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd


                    class NiiIdb : public Entity
                    {
                        public:
                            NiiIdb();
                            ~NiiIdb();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value exist; //type: boolean
                            Value brought_up; //type: boolean
                            Value retry_timer; //type: boolean
                            Value running; //type: boolean
                            Value has_adj; //type: boolean




                    }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb


                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds> ds;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen> gen;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ism> ism;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd> > ncd;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb> > nii_idb;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm> pm;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te> te;


                }; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra


                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra> isis_nsr_infra;
                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer> isis_nsr_peer;


            }; // Isis::Instances::Instance::NsrStatus


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
                        Value interface_name; //type: string
                        Value configured_circuit_type; //type: IsisLevelsEnum
                        Value mesh_group; //type: uint32
                        Value is_type; //type: IsisLevelsEnum
                        Value nsr_intf; //type: boolean


                    class ConfiguredStatus : public Entity
                    {
                        public:
                            ConfiguredStatus();
                            ~ConfiguredStatus();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value adjacency_form_status; //type: boolean
                            Value adv_prefix_status; //type: boolean




                    }; // Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus


                    class InterfaceStatusAndData : public Entity
                    {
                        public:
                            InterfaceStatusAndData();
                            ~InterfaceStatusAndData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value status; //type: IsisEnabledEnum


                        class Disabled : public Entity
                        {
                            public:
                                Disabled();
                                ~Disabled();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reason_code; //type: IsisIfDisabledReasonEnum


                                class IsisIfDisabledReasonEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled


                        class Enabled : public Entity
                        {
                            public:
                                Enabled();
                                ~Enabled();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_media_type; //type: IsisMediaClassEnum
                                Value enabled_circuit_type; //type: IsisLevelsEnum
                                Value local_circuit_number; //type: uint8
                                Value rsi_srlg_registered; //type: boolean
                                ValueList underlying_interface; //type: list of  string


                            class AdjacencyFormStatus : public Entity
                            {
                                public:
                                    AdjacencyFormStatus();
                                    ~AdjacencyFormStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value status; //type: IsisEnabledEnum


                                class Disabled : public Entity
                                {
                                    public:
                                        Disabled();
                                        ~Disabled();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value reason_code; //type: IsisIfAdjFormDisabledReasonEnum


                                        class IsisIfAdjFormDisabledReasonEnum;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled> disabled;
                                    class IsisEnabledEnum;


                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus


                            class AdvPrefixStatus : public Entity
                            {
                                public:
                                    AdvPrefixStatus();
                                    ~AdvPrefixStatus();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value status; //type: IsisEnabledEnum


                                class Disabled : public Entity
                                {
                                    public:
                                        Disabled();
                                        ~Disabled();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value reason_code; //type: IsisIfAdvPrefixDisabledReasonEnum


                                        class IsisIfAdvPrefixDisabledReasonEnum;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled> disabled;
                                    class IsisEnabledEnum;


                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus


                            class P2PData : public Entity
                            {
                                public:
                                    P2PData();
                                    ~P2PData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value time_until_next_iih; //type: uint32
                                    Value retransmit_lsp_queue_size; //type: uint32
                                    Value retransmit_lsp_interval; //type: uint32
                                    Value extended_circuit_number; //type: uint32




                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData


                            class BfdData : public Entity
                            {
                                public:
                                    BfdData();
                                    ~BfdData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value enabled; //type: boolean
                                    Value ipv6_enabled; //type: boolean
                                    Value interval; //type: uint32
                                    Value multiplier; //type: uint32




                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData


                            class ClnsData : public Entity
                            {
                                public:
                                    ClnsData();
                                    ~ClnsData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value time_until_next_lsp; //type: uint32
                                    Value lsp_transmit_requested_flag; //type: boolean
                                    Value lsp_transmitted_flag; //type: boolean
                                    Value lsp_txmitd_b2b_limit; //type: uint32
                                    Value lsp_txmt_b2b_msecs; //type: uint32
                                    Value last_lsp_level_transmitted; //type: IsisLevelEnum
                                    Value last_lsp_id_transmitted; //type: string


                                class ClnsStatus : public Entity
                                {
                                    public:
                                        ClnsStatus();
                                        ~ClnsStatus();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value status; //type: IsisUpEnum


                                    class ClnsDownInfo : public Entity
                                    {
                                        public:
                                            ClnsDownInfo();
                                            ~ClnsDownInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value reason_code; //type: IsisIfClnsProtoDownReasonEnum


                                            class IsisIfClnsProtoDownReasonEnum;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo> clns_down_info;
                                        class IsisUpEnum;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus


                                class MtuInfo : public Entity
                                {
                                    public:
                                        MtuInfo();
                                        ~MtuInfo();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value status; //type: IsisValidEnum
                                        Value mtu; //type: uint32


                                    class Invalid : public Entity
                                    {
                                        public:
                                            Invalid();
                                            ~Invalid();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value reason_code; //type: IsisIfClnsMtuInvalidReasonEnum


                                            class IsisIfClnsMtuInvalidReasonEnum;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid> invalid;
                                        class IsisValidEnum;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo


                                class SnpaState : public Entity
                                {
                                    public:
                                        SnpaState();
                                        ~SnpaState();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value status; //type: IsisKnownEnum


                                    class Unknown : public Entity
                                    {
                                        public:
                                            Unknown();
                                            ~Unknown();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value reason_code; //type: IsisIfClnsSnpaUnknownReasonEnum


                                            class IsisIfClnsSnpaUnknownReasonEnum;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown


                                    class Known : public Entity
                                    {
                                        public:
                                            Known();
                                            ~Known();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value snpa; //type: string




                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known> known;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown> unknown;
                                        class IsisKnownEnum;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState


                                class MediaSpecificState : public Entity
                                {
                                    public:
                                        MediaSpecificState();
                                        ~MediaSpecificState();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value clns_media_type; //type: IsisMediaClassEnum


                                    class ClnsLanData : public Entity
                                    {
                                        public:
                                            ClnsLanData();
                                            ~ClnsLanData();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class PerAreaData : public Entity
                                        {
                                            public:
                                                PerAreaData();
                                                ~PerAreaData();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value level; //type: IsisLevelEnum


                                            class MulticastStatus : public Entity
                                            {
                                                public:
                                                    MulticastStatus();
                                                    ~MulticastStatus();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value status; //type: IsisValidEnum


                                                class Invalid : public Entity
                                                {
                                                    public:
                                                        Invalid();
                                                        ~Invalid();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value reason_code; //type: IsisIfMcastInvalidReasonEnum


                                                        class IsisIfMcastInvalidReasonEnum;


                                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid


                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid> invalid;
                                                    class IsisValidEnum;


                                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus> multicast_status;
                                                class IsisLevelEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData> > per_area_data;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData


                                    class ClnsP2PData : public Entity
                                    {
                                        public:
                                            ClnsP2PData();
                                            ~ClnsP2PData();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class P2POverLanData : public Entity
                                        {
                                            public:
                                                P2POverLanData();
                                                ~P2POverLanData();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class MulticastStatus : public Entity
                                            {
                                                public:
                                                    MulticastStatus();
                                                    ~MulticastStatus();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value status; //type: IsisValidEnum


                                                class Invalid : public Entity
                                                {
                                                    public:
                                                        Invalid();
                                                        ~Invalid();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value reason_code; //type: IsisIfMcastInvalidReasonEnum


                                                        class IsisIfMcastInvalidReasonEnum;


                                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid


                                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid> invalid;
                                                    class IsisValidEnum;


                                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus> multicast_status;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData> p2p_over_lan_data;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData> clns_lan_data;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData> clns_p2p_data;
                                        class IsisMediaClassEnum;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus> clns_status;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState> media_specific_state;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo> mtu_info;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState> snpa_state;
                                    class IsisLevelEnum;


                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData


                            class PerAreaData : public Entity
                            {
                                public:
                                    PerAreaData();
                                    ~PerAreaData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value level; //type: IsisLevelEnum
                                    Value adjacency_count; //type: uint32
                                    Value lsp_pacing_interval; //type: uint32
                                    Value psnp_transmit_queue_size; //type: uint32


                                class LanData : public Entity
                                {
                                    public:
                                        LanData();
                                        ~LanData();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value circuit_lan_id; //type: string
                                        Value time_until_next_iih; //type: uint32
                                        Value interface_priority; //type: uint8
                                        Value dispriority; //type: uint8
                                        Value are_we_dis; //type: boolean




                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData> lan_data;
                                    class IsisLevelEnum;


                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData


                            class PerTopologyData : public Entity
                            {
                                public:
                                    PerTopologyData();
                                    ~PerTopologyData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class TopologyId : public Entity
                                {
                                    public:
                                        TopologyId();
                                        ~TopologyId();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value af_name; //type: IsisAfIdEnum
                                        Value saf_name; //type: IsisSubAfIdEnum
                                        Value vrf_name; //type: string
                                        Value topology_name; //type: string


                                        class IsisAfIdEnum;
                                        class IsisSubAfIdEnum;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId


                                class Status : public Entity
                                {
                                    public:
                                        Status();
                                        ~Status();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value status; //type: IsisEnabledEnum


                                    class Disabled : public Entity
                                    {
                                        public:
                                            Disabled();
                                            ~Disabled();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value reason_code; //type: IsisIfTopoDisabledReasonEnum


                                            class IsisIfTopoDisabledReasonEnum;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled


                                    class Enabled_ : public Entity
                                    {
                                        public:
                                            Enabled_();
                                            ~Enabled_();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value level1_metric; //type: uint32
                                            Value level2_metric; //type: uint32
                                            Value level1_weight; //type: uint32
                                            Value level2_weight; //type: uint32
                                            Value max_label_supported; //type: uint16
                                            Value level1ldp_sync_enabled; //type: boolean
                                            Value level2ldp_sync_enabled; //type: boolean
                                            Value ldp_sync_status; //type: boolean
                                            Value ld_pv6_sync_status; //type: boolean
                                            Value level1_offset_metric; //type: uint32
                                            Value level2_offset_metric; //type: uint32
                                            Value level1_lkgp_configured; //type: boolean
                                            Value level2_lkgp_configured; //type: boolean
                                            Value level1pp_metric; //type: uint32
                                            Value level2pp_metric; //type: uint32
                                            Value level1pp_configured; //type: boolean
                                            Value level2pp_configured; //type: boolean


                                        class AdjacencyFormStatus : public Entity
                                        {
                                            public:
                                                AdjacencyFormStatus();
                                                ~AdjacencyFormStatus();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value status; //type: IsisEnabledEnum


                                            class Disabled : public Entity
                                            {
                                                public:
                                                    Disabled();
                                                    ~Disabled();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value reason_code; //type: IsisIfTopoAdjFormDisabledReasonEnum


                                                    class IsisIfTopoAdjFormDisabledReasonEnum;


                                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled> disabled;
                                                class IsisEnabledEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus


                                        class AdvPrefixStatus : public Entity
                                        {
                                            public:
                                                AdvPrefixStatus();
                                                ~AdvPrefixStatus();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value status; //type: IsisEnabledEnum


                                            class Disabled : public Entity
                                            {
                                                public:
                                                    Disabled();
                                                    ~Disabled();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value reason_code; //type: IsisIfTopoAdvPrefixDisabledReasonEnum


                                                    class IsisIfTopoAdvPrefixDisabledReasonEnum;


                                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled> disabled;
                                                class IsisEnabledEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus> adjacency_form_status;
                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus> adv_prefix_status;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled> disabled;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_> enabled;
                                        class IsisEnabledEnum;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status> status;
                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId> topology_id;


                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData


                            class PerAddressFamilyData : public Entity
                            {
                                public:
                                    PerAddressFamilyData();
                                    ~PerAddressFamilyData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value af_name; //type: IsisAfIdEnum


                                class AfStatus : public Entity
                                {
                                    public:
                                        AfStatus();
                                        ~AfStatus();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value status; //type: IsisEnabledEnum


                                    class Disabled : public Entity
                                    {
                                        public:
                                            Disabled();
                                            ~Disabled();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value reason_code; //type: IsisIfAfDisabledReasonEnum


                                            class IsisIfAfDisabledReasonEnum;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled


                                    class AfData : public Entity
                                    {
                                        public:
                                            AfData();
                                            ~AfData();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class ProtocolStatus : public Entity
                                        {
                                            public:
                                                ProtocolStatus();
                                                ~ProtocolStatus();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value status; //type: IsisUpEnum


                                            class Disabled : public Entity
                                            {
                                                public:
                                                    Disabled();
                                                    ~Disabled();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value reason_code; //type: IsisIfAfProtoDownReasonEnum


                                                    class IsisIfAfProtoDownReasonEnum;


                                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled> disabled;
                                                class IsisUpEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus


                                        class ForwardingAddressStatus : public Entity
                                        {
                                            public:
                                                ForwardingAddressStatus();
                                                ~ForwardingAddressStatus();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value status; //type: IsisKnownEnum


                                            class Unknown : public Entity
                                            {
                                                public:
                                                    Unknown();
                                                    ~Unknown();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value reason_code; //type: IsisIfAfFwdAddrUnknownReasonEnum


                                                    class IsisIfAfFwdAddrUnknownReasonEnum;


                                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown


                                            class ForwardingAddressData : public Entity
                                            {
                                                public:
                                                    ForwardingAddressData();
                                                    ~ForwardingAddressData();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value unnumbered_interface_name; //type: string


                                                class ForwardingAddress : public Entity
                                                {
                                                    public:
                                                        ForwardingAddress();
                                                        ~ForwardingAddress();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value af_name; //type: IsisAfIdEnum
                                                        Value ipv4; //type: string
                                                        Value ipv6; //type: string


                                                        class IsisAfIdEnum;


                                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress> > forwarding_address;


                                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData> forwarding_address_data;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown> unknown;
                                                class IsisKnownEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus


                                        class PrefixStatus : public Entity
                                        {
                                            public:
                                                PrefixStatus();
                                                ~PrefixStatus();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value status; //type: IsisKnownEnum


                                            class Unknown : public Entity
                                            {
                                                public:
                                                    Unknown();
                                                    ~Unknown();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value reason_code; //type: IsisIfAfPrefixUnknownReasonEnum


                                                    class IsisIfAfPrefixUnknownReasonEnum;


                                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown


                                            class PrefixData : public Entity
                                            {
                                                public:
                                                    PrefixData();
                                                    ~PrefixData();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value is_unnumbered; //type: boolean


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
                                                        Value af_name; //type: IsisAfIdEnum


                                                    class Ipv4 : public Entity
                                                    {
                                                        public:
                                                            Ipv4();
                                                            ~Ipv4();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value prefix; //type: string
                                                            Value prefix_length; //type: uint8




                                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4


                                                    class Ipv6 : public Entity
                                                    {
                                                        public:
                                                            Ipv6();
                                                            ~Ipv6();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value prefix; //type: string
                                                            Value prefix_length; //type: uint8




                                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6


                                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4> ipv4;
                                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6> ipv6;
                                                        class IsisAfIdEnum;


                                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix> > prefix;


                                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData


                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData> prefix_data;
                                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown> unknown;
                                                class IsisKnownEnum;


                                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus


                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus> forwarding_address_status;
                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus> prefix_status;
                                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus> protocol_status;


                                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData


                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData> af_data;
                                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled> disabled;
                                        class IsisEnabledEnum;


                                }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus> af_status;
                                    class IsisAfIdEnum;


                            }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus> adjacency_form_status;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus> adv_prefix_status;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData> bfd_data;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData> clns_data;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData> p2p_data;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData> > per_address_family_data;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData> > per_area_data;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData> > per_topology_data;
                                class IsisLevelsEnum;
                                class IsisMediaClassEnum;


                        }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled


                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled> disabled;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled> enabled;
                            class IsisEnabledEnum;


                    }; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData


                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus> configured_status;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData> interface_status_and_data;
                        class IsisLevelsEnum;
                        class IsisLevelsEnum;


                }; // Isis::Instances::Instance::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface> > interface;


            }; // Isis::Instances::Instance::Interfaces


            class CheckpointAdjacencies : public Entity
            {
                public:
                    CheckpointAdjacencies();
                    ~CheckpointAdjacencies();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class CheckpointAdjacency : public Entity
                {
                    public:
                        CheckpointAdjacency();
                        ~CheckpointAdjacency();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum
                        Value system_id; //type: string
                        Value interface_name; //type: string
                        Value checkpoint_adjacency_object_id; //type: uint32
                        Value checkpoint_adjacency_system_id; //type: string
                        Value checkpoint_adjacency_snpa; //type: string
                        Value checkpoint_adjacency_interface; //type: string
                        Value checkpoint_adjacency_level; //type: IsisLevelEnum
                        Value checkpoint_adjacency_holdtime; //type: uint16
                        Value checkpoint_adjacency_lan_priority; //type: uint8
                        Value checkpoint_adjacency_circuit_number; //type: uint8


                    class CheckpointAdjacencyPerAddressFamilyNextHop : public Entity
                    {
                        public:
                            CheckpointAdjacencyPerAddressFamilyNextHop();
                            ~CheckpointAdjacencyPerAddressFamilyNextHop();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af_name; //type: IsisAfIdEnum
                            Value ipv4; //type: string
                            Value ipv6; //type: string


                            class IsisAfIdEnum;


                    }; // Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop


                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop> > checkpoint_adjacency_per_address_family_next_hop;
                        class IsisLevelEnum;
                        class IsisInternalLevelEnum;


                }; // Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency> > checkpoint_adjacency;


            }; // Isis::Instances::Instance::CheckpointAdjacencies


            class Srms : public Entity
            {
                public:
                    Srms();
                    ~Srms();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Policy : public Entity
                {
                    public:
                        Policy();
                        ~Policy();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class PolicyIpv4 : public Entity
                    {
                        public:
                            PolicyIpv4();
                            ~PolicyIpv4();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class PolicyIpv4Active : public Entity
                        {
                            public:
                                PolicyIpv4Active();
                                ~PolicyIpv4Active();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class PolicyMi : public Entity
                            {
                                public:
                                    PolicyMi();
                                    ~PolicyMi();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value mi_id; //type: string
                                    Value src; //type: SrmsMiSrcEBEnum
                                    Value router; //type: string
                                    Value area; //type: string
                                    Value prefix; //type: uint8
                                    Value sid_start; //type: uint32
                                    Value sid_count; //type: uint32
                                    Value last_prefix; //type: string
                                    Value last_sid_index; //type: uint32
                                    Value flag_attached; //type: SrmsMiFlagEBEnum


                                class Addr : public Entity
                                {
                                    public:
                                        Addr();
                                        ~Addr();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value af; //type: SrmsMiAfEBEnum
                                        Value ipv4; //type: string
                                        Value ipv6; //type: string


                                        class SrmsMiAfEBEnum;


                                }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr> addr;
                                    class SrmsMiFlagEBEnum;
                                    class SrmsMiSrcEBEnum;


                            }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi> > policy_mi;


                        }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active


                        class PolicyIpv4Backup : public Entity
                        {
                            public:
                                PolicyIpv4Backup();
                                ~PolicyIpv4Backup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class PolicyMi : public Entity
                            {
                                public:
                                    PolicyMi();
                                    ~PolicyMi();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value mi_id; //type: string
                                    Value src; //type: SrmsMiSrcEBEnum
                                    Value router; //type: string
                                    Value area; //type: string
                                    Value prefix; //type: uint8
                                    Value sid_start; //type: uint32
                                    Value sid_count; //type: uint32
                                    Value last_prefix; //type: string
                                    Value last_sid_index; //type: uint32
                                    Value flag_attached; //type: SrmsMiFlagEBEnum


                                class Addr : public Entity
                                {
                                    public:
                                        Addr();
                                        ~Addr();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value af; //type: SrmsMiAfEBEnum
                                        Value ipv4; //type: string
                                        Value ipv6; //type: string


                                        class SrmsMiAfEBEnum;


                                }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr> addr;
                                    class SrmsMiFlagEBEnum;
                                    class SrmsMiSrcEBEnum;


                            }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi> > policy_mi;


                        }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup


                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active> policy_ipv4_active;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup> policy_ipv4_backup;


                    }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4


                    class PolicyIpv6 : public Entity
                    {
                        public:
                            PolicyIpv6();
                            ~PolicyIpv6();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class PolicyIpv6Backup : public Entity
                        {
                            public:
                                PolicyIpv6Backup();
                                ~PolicyIpv6Backup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class PolicyMi : public Entity
                            {
                                public:
                                    PolicyMi();
                                    ~PolicyMi();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value mi_id; //type: string
                                    Value src; //type: SrmsMiSrcEBEnum
                                    Value router; //type: string
                                    Value area; //type: string
                                    Value prefix; //type: uint8
                                    Value sid_start; //type: uint32
                                    Value sid_count; //type: uint32
                                    Value last_prefix; //type: string
                                    Value last_sid_index; //type: uint32
                                    Value flag_attached; //type: SrmsMiFlagEBEnum


                                class Addr : public Entity
                                {
                                    public:
                                        Addr();
                                        ~Addr();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value af; //type: SrmsMiAfEBEnum
                                        Value ipv4; //type: string
                                        Value ipv6; //type: string


                                        class SrmsMiAfEBEnum;


                                }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr> addr;
                                    class SrmsMiFlagEBEnum;
                                    class SrmsMiSrcEBEnum;


                            }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi> > policy_mi;


                        }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup


                        class PolicyIpv6Active : public Entity
                        {
                            public:
                                PolicyIpv6Active();
                                ~PolicyIpv6Active();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class PolicyMi : public Entity
                            {
                                public:
                                    PolicyMi();
                                    ~PolicyMi();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value mi_id; //type: string
                                    Value src; //type: SrmsMiSrcEBEnum
                                    Value router; //type: string
                                    Value area; //type: string
                                    Value prefix; //type: uint8
                                    Value sid_start; //type: uint32
                                    Value sid_count; //type: uint32
                                    Value last_prefix; //type: string
                                    Value last_sid_index; //type: uint32
                                    Value flag_attached; //type: SrmsMiFlagEBEnum


                                class Addr : public Entity
                                {
                                    public:
                                        Addr();
                                        ~Addr();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value af; //type: SrmsMiAfEBEnum
                                        Value ipv4; //type: string
                                        Value ipv6; //type: string


                                        class SrmsMiAfEBEnum;


                                }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr


                                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr> addr;
                                    class SrmsMiFlagEBEnum;
                                    class SrmsMiSrcEBEnum;


                            }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi


                                std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi> > policy_mi;


                        }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active


                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active> policy_ipv6_active;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup> policy_ipv6_backup;


                    }; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6


                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4> policy_ipv4;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6> policy_ipv6;


                }; // Isis::Instances::Instance::Srms::Policy


                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy> policy;


            }; // Isis::Instances::Instance::Srms


            class ErrorLog : public Entity
            {
                public:
                    ErrorLog();
                    ~ErrorLog();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LogEntry : public Entity
                {
                    public:
                        LogEntry();
                        ~LogEntry();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value error_log_level; //type: IsisErrLogLevelEnum
                        Value error_code; //type: uint32
                        Value error_reason; //type: string


                    class GenericData : public Entity
                    {
                        public:
                            GenericData();
                            ~GenericData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Timestamp : public Entity
                        {
                            public:
                                Timestamp();
                                ~Timestamp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value seconds; //type: uint32
                                Value nano_seconds; //type: uint32




                        }; // Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp


                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp> timestamp;


                    }; // Isis::Instances::Instance::ErrorLog::LogEntry::GenericData


                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::ErrorLog::LogEntry::GenericData> generic_data;
                        class IsisErrLogLevelEnum;


                }; // Isis::Instances::Instance::ErrorLog::LogEntry


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::ErrorLog::LogEntry> > log_entry;


            }; // Isis::Instances::Instance::ErrorLog


            class CheckpointInterfaces : public Entity
            {
                public:
                    CheckpointInterfaces();
                    ~CheckpointInterfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class CheckpointInterface : public Entity
                {
                    public:
                        CheckpointInterface();
                        ~CheckpointInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value checkpoint_object_id; //type: uint32
                        Value interface_name_xr; //type: string
                        Value checkpoint_interface_handle; //type: string
                        Value local_circuit_number; //type: uint8
                        Value dis_areas; //type: IsisLevelsEnum
                        Value has_adjacency; //type: boolean
                        Value local_snpa; //type: string
                        Value has_joined_mcast_group; //type: boolean
                        Value has_achieved_ldp_sync; //type: boolean
                        Value has_achieved_ld_pv6_sync; //type: boolean


                        class IsisLevelsEnum;


                }; // Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface> > checkpoint_interface;


            }; // Isis::Instances::Instance::CheckpointInterfaces


            class InterfaceStatistics : public Entity
            {
                public:
                    InterfaceStatistics();
                    ~InterfaceStatistics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class InterfaceStatistic : public Entity
                {
                    public:
                        InterfaceStatistic();
                        ~InterfaceStatistic();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value traffic_interface; //type: string
                        Value interface_media_type; //type: IsisMediaClassEnum


                    class P2PStatistics : public Entity
                    {
                        public:
                            P2PStatistics();
                            ~P2PStatistics();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value memory_exhausted_iih_count; //type: uint32
                            Value lsp_retransmit_count; //type: uint32


                        class IihCount : public Entity
                        {
                            public:
                                IihCount();
                                ~IihCount();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value pdu_receive_count; //type: uint32
                                Value pdu_send_count; //type: uint32




                        }; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount


                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount> iih_count;


                    }; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics


                    class PerAreaData : public Entity
                    {
                        public:
                            PerAreaData();
                            ~PerAreaData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value level; //type: IsisLevelEnum


                        class Statistics : public Entity
                        {
                            public:
                                Statistics();
                                ~Statistics();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lsp_drop_count; //type: uint32
                                Value lsp_flooding_dup_count; //type: uint32


                            class LspCount : public Entity
                            {
                                public:
                                    LspCount();
                                    ~LspCount();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value pdu_receive_count; //type: uint32
                                    Value pdu_send_count; //type: uint32




                            }; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount


                            class CsnpCount : public Entity
                            {
                                public:
                                    CsnpCount();
                                    ~CsnpCount();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value pdu_receive_count; //type: uint32
                                    Value pdu_send_count; //type: uint32




                            }; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount


                            class PsnpCount : public Entity
                            {
                                public:
                                    PsnpCount();
                                    ~PsnpCount();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value pdu_receive_count; //type: uint32
                                    Value pdu_send_count; //type: uint32




                            }; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount> csnp_count;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount> lsp_count;
                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount> psnp_count;


                        }; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics


                        class LanData : public Entity
                        {
                            public:
                                LanData();
                                ~LanData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value memory_exhausted_iih_count; //type: uint32
                                Value dis_election_count; //type: uint32


                            class IihCount : public Entity
                            {
                                public:
                                    IihCount();
                                    ~IihCount();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value pdu_receive_count; //type: uint32
                                    Value pdu_send_count; //type: uint32




                            }; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount> iih_count;


                        }; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData


                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData> lan_data;
                            std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics> statistics;
                            class IsisLevelEnum;


                    }; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData


                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics> p2p_statistics;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData> > per_area_data;
                        class IsisMediaClassEnum;


                }; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic> > interface_statistic;


            }; // Isis::Instances::Instance::InterfaceStatistics


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
                    Value nsap_system_id; //type: string
                    Value valid_nsap_system_id; //type: boolean
                    Value instance_id; //type: uint16
                    Value running_levels; //type: IsisLevelsEnum
                    Value configured_nsf_flavor; //type: IsisNsfFlavorEnum
                    Value last_restart_nsf_flavor; //type: IsisNsfFlavorEnum
                    Value last_restart_status; //type: IsisStartupStatusEnum
                    Value remaining_time_for_next_nsf_restart; //type: uint32
                    ValueList manual_area_address; //type: list of  string
                    ValueList active_area_address; //type: list of  string


                class PerTopoData : public Entity
                {
                    public:
                        PerTopoData();
                        ~PerTopoData();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value default_admin_distance; //type: uint32
                        Value advertise_passive_only; //type: boolean
                        Value wait_redist_complete; //type: boolean


                    class Id : public Entity
                    {
                        public:
                            Id();
                            ~Id();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af_name; //type: IsisAfIdEnum
                            Value saf_name; //type: IsisSubAfIdEnum
                            Value vrf_name; //type: string
                            Value topology_name; //type: string


                            class IsisAfIdEnum;
                            class IsisSubAfIdEnum;


                    }; // Isis::Instances::Instance::Protocol::PerTopoData::Id


                    class RedistProtocolsList : public Entity
                    {
                        public:
                            RedistProtocolsList();
                            ~RedistProtocolsList();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class IsisShRedistEntry : public Entity
                        {
                            public:
                                IsisShRedistEntry();
                                ~IsisShRedistEntry();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class ProtocolDetails : public Entity
                            {
                                public:
                                    ProtocolDetails();
                                    ~ProtocolDetails();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value protocol; //type: IsisRedistProtoEnum
                                    Value isis_instance_id; //type: string
                                    Value ospf_process_id; //type: string
                                    Value ospfv3_process_id; //type: string
                                    Value bgp_as_number; //type: string
                                    Value eigrp_as_number; //type: string
                                    Value application_name; //type: string


                                    class IsisRedistProtoEnum;


                            }; // Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails


                                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails> protocol_details;


                        }; // Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry


                            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry> > isis_sh_redist_entry;


                    }; // Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList


                    class PerAreaData : public Entity
                    {
                        public:
                            PerAreaData();
                            ~PerAreaData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value level; //type: IsisLevelEnum
                            Value uses_default_link_topo_flag; //type: boolean
                            Value generated_metric_style; //type: IsisMetricStyleEnum
                            Value accepted_metric_style; //type: IsisMetricStyleEnum
                            Value metric; //type: uint32
                            Value ispf_state; //type: IsisEnabledEnum
                            Value te_enabled; //type: boolean


                            class IsisMetricStyleEnum;
                            class IsisMetricStyleEnum;
                            class IsisEnabledEnum;
                            class IsisLevelEnum;


                    }; // Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData


                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::Id> id;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData> > per_area_data;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList> redist_protocols_list;


                }; // Isis::Instances::Instance::Protocol::PerTopoData


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData> > per_topo_data;
                    class IsisNsfFlavorEnum;
                    class IsisNsfFlavorEnum;
                    class IsisStartupStatusEnum;
                    class IsisLevelsEnum;


            }; // Isis::Instances::Instance::Protocol


            class NeighborSummaries : public Entity
            {
                public:
                    NeighborSummaries();
                    ~NeighborSummaries();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class NeighborSummary : public Entity
                {
                    public:
                        NeighborSummary();
                        ~NeighborSummary();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string


                    class Level1Neighbors : public Entity
                    {
                        public:
                            Level1Neighbors();
                            ~Level1Neighbors();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value neighbor_up_count; //type: uint32
                            Value neighbor_init_count; //type: uint32
                            Value neighbor_down_count; //type: uint32




                    }; // Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors


                    class Level2Neighbors : public Entity
                    {
                        public:
                            Level2Neighbors();
                            ~Level2Neighbors();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value neighbor_up_count; //type: uint32
                            Value neighbor_init_count; //type: uint32
                            Value neighbor_down_count; //type: uint32




                    }; // Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors


                    class Level12Neigbors : public Entity
                    {
                        public:
                            Level12Neigbors();
                            ~Level12Neigbors();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value neighbor_up_count; //type: uint32
                            Value neighbor_init_count; //type: uint32
                            Value neighbor_down_count; //type: uint32




                    }; // Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors


                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors> level12_neigbors;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors> level1_neighbors;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors> level2_neighbors;


                }; // Isis::Instances::Instance::NeighborSummaries::NeighborSummary


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary> > neighbor_summary;


            }; // Isis::Instances::Instance::NeighborSummaries


            class CheckpointLsps : public Entity
            {
                public:
                    CheckpointLsps();
                    ~CheckpointLsps();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class CheckpointLsp : public Entity
                {
                    public:
                        CheckpointLsp();
                        ~CheckpointLsp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum
                        Value lsp_id; //type: string
                        Value checkpoint_lsp_object_id; //type: uint32
                        Value checkpoint_lsp_level; //type: uint8
                        Value checkpoint_lsp_local_flag; //type: boolean
                        Value checkpoint_lsp_id; //type: string


                        class IsisInternalLevelEnum;


                }; // Isis::Instances::Instance::CheckpointLsps::CheckpointLsp


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointLsps::CheckpointLsp> > checkpoint_lsp;


            }; // Isis::Instances::Instance::CheckpointLsps


            class MeshGroups : public Entity
            {
                public:
                    MeshGroups();
                    ~MeshGroups();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class MeshGroupConfiguredInterfaceList : public Entity
                {
                    public:
                        MeshGroupConfiguredInterfaceList();
                        ~MeshGroupConfiguredInterfaceList();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class IsisShMeshEntry : public Entity
                    {
                        public:
                            IsisShMeshEntry();
                            ~IsisShMeshEntry();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value mesh_group_interface; //type: string
                            Value mesh_group_number; //type: uint32




                    }; // Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry


                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry> > isis_sh_mesh_entry;


                }; // Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList


                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList> mesh_group_configured_interface_list;


            }; // Isis::Instances::Instance::MeshGroups


            class NsrStatistics : public Entity
            {
                public:
                    NsrStatistics();
                    ~NsrStatistics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value isis_vm_state; //type: uint16


                class IsisNsrStatsData : public Entity
                {
                    public:
                        IsisNsrStatsData();
                        ~IsisNsrStatsData();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Self : public Entity
                    {
                        public:
                            Self();
                            ~Self();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value no_of_l1_lsp; //type: uint32
                            Value no_of_l2_lsp; //type: uint32
                            Value no_of_l1_adj; //type: uint16
                            Value no_of_l2_adj; //type: uint16
                            Value no_of_live_interface; //type: uint16
                            Value no_of_ptp_interface; //type: uint16
                            Value no_of_lan_interface; //type: uint16
                            Value no_of_loopback_interface; //type: uint16
                            Value no_of_te_tunnels; //type: uint16
                            Value no_of_te_links; //type: uint16
                            Value no_of_ipv4_routes; //type: uint32
                            Value no_of_ipv6_routes; //type: uint32
                            Value seqnum; //type: uint32




                    }; // Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self


                    class Peer : public Entity
                    {
                        public:
                            Peer();
                            ~Peer();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value no_of_l1_lsp; //type: uint32
                            Value no_of_l2_lsp; //type: uint32
                            Value no_of_l1_adj; //type: uint16
                            Value no_of_l2_adj; //type: uint16
                            Value no_of_live_interface; //type: uint16
                            Value no_of_ptp_interface; //type: uint16
                            Value no_of_lan_interface; //type: uint16
                            Value no_of_loopback_interface; //type: uint16
                            Value no_of_te_tunnels; //type: uint16
                            Value no_of_te_links; //type: uint16
                            Value no_of_ipv4_routes; //type: uint32
                            Value no_of_ipv6_routes; //type: uint32
                            Value seqnum; //type: uint32




                    }; // Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer


                        std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer> > peer;
                        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self> self;


                }; // Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData


                    std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData> isis_nsr_stats_data;


            }; // Isis::Instances::Instance::NsrStatistics


            class CheckpointTeTunnels : public Entity
            {
                public:
                    CheckpointTeTunnels();
                    ~CheckpointTeTunnels();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class CheckpointTeTunnel : public Entity
                {
                    public:
                        CheckpointTeTunnel();
                        ~CheckpointTeTunnel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value level; //type: IsisInternalLevelEnum
                        Value interface_name; //type: string
                        Value checkpoint_te_level; //type: IsisLevelEnum
                        Value checkpoint_te_system_id; //type: string
                        Value checkpoint_te_interface; //type: string
                        Value checkpoint_te_flags; //type: uint32
                        Value checkpoint_te_nexthop; //type: string
                        Value checkpoint_te_metric; //type: int32
                        Value checkpoint_te_metric_mode; //type: IsisMetricModeEnum
                        Value checkpoint_te_bandwidth; //type: uint32
                        Value checkpoint_te_object_id; //type: uint32


                        class IsisLevelEnum;
                        class IsisMetricModeEnum;
                        class IsisInternalLevelEnum;


                }; // Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel


                    std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel> > checkpoint_te_tunnel;


            }; // Isis::Instances::Instance::CheckpointTeTunnels


                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointAdjacencies> checkpoint_adjacencies;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointInterfaces> checkpoint_interfaces;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointLsps> checkpoint_lsps;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointTeTunnels> checkpoint_te_tunnels;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::ErrorLog> error_log;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::HostNames> host_names;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics> interface_statistics;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Levels> levels;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::MeshGroups> mesh_groups;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries> neighbor_summaries;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Neighbors> neighbors;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics> nsr_statistics;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus> nsr_status;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol> protocol;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms> srms;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::StatisticsGlobal> statistics_global;
                std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies> topologies;


        }; // Isis::Instances::Instance


            std::vector<std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance> > instance;


    }; // Isis::Instances


        std::unique_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances> instances;


}; // Isis


class IsisIfClnsMtuInvalidReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_clns_mtu_invalid_too_sm_all;
        static const Enum::Value isis_intf_clns_mtu_invalid_internal_error;

};

class IsisIfAfFwdAddrUnknownReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_af_fwd_addr_unknown_cfg_passive;
        static const Enum::Value isis_intf_af_fwd_addr_unknown_proto_doesnt_exist;
        static const Enum::Value isis_intf_af_fwd_addr_unknown_next_hop_reg_error;
        static const Enum::Value isis_intf_af_fwd_addr_unknown_no_link_local_add;
        static const Enum::Value isis_intf_af_fwd_addr_unknown_af_not_up;
        static const Enum::Value isis_intf_af_fwd_addr_unknown_vrf_enabled;
        static const Enum::Value isis_intf_af_fwd_addr_unknown_internal_error;

};

class IsisSubAfIdEnum : public Enum
{
    public:
        static const Enum::Value unicast;
        static const Enum::Value multicast;

};

class IsisNsfFlavorEnum : public Enum
{
    public:
        static const Enum::Value isis_nsf_flav_or_none;
        static const Enum::Value isis_nsf_flav_or_cisco;
        static const Enum::Value isis_nsf_flav_or_ietf;
        static const Enum::Value isis_nsf_flav_or_nsr;

};

class SrmsMiAfEBEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};

class IsisIfDisabledReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_disabled_no_net_cfg;
        static const Enum::Value isis_intf_disabled_area_missing;
        static const Enum::Value isis_intf_disabled_no_area_running;
        static const Enum::Value isis_intf_disabled_no_topos_cfg;
        static const Enum::Value isis_intf_disabled_no_imd_conn;
        static const Enum::Value isis_intf_disabled_imd_reg_error;
        static const Enum::Value isis_intf_disabled_level_mismatch;
        static const Enum::Value isis_intf_disabled_base_caps_error;
        static const Enum::Value isis_intf_disabled_intf_doesnt_exist;
        static const Enum::Value isis_intf_disabled_intf_shutdown;
        static const Enum::Value isis_intf_disabled_internal_error;

};

class IsisShTeLinkEnum : public Enum
{
    public:
        static const Enum::Value isis_sh_te_link_p2p;
        static const Enum::Value isis_sh_te_link_broadcast;

};

class SrmsMiSrcEBEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value local;
        static const Enum::Value remote;

};

class IsisLspDbOpEnum : public Enum
{
    public:
        static const Enum::Value isis_lsp_db_clear;
        static const Enum::Value isis_lsp_db_insert_new_lsp;
        static const Enum::Value isis_lsp_db_replace_lsp_with_lsp;
        static const Enum::Value isis_lsp_db_purge_lsp;
        static const Enum::Value isis_lsp_db_delete_lsp;

};

class IsisIfAfPrefixUnknownReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_af_prefix_unknown_adv_suppressed;
        static const Enum::Value isis_intf_af_prefix_unknown_global_addr_reg_error;
        static const Enum::Value isis_intf_af_prefix_unknown_internal_error;

};

class IsisMetricStyleEnum : public Enum
{
    public:
        static const Enum::Value isis_metric_style_narrow;
        static const Enum::Value isis_metric_style_wide;
        static const Enum::Value isis_metric_style_transition;

};

class IsisIfAfProtoDownReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_af_proto_down_imd_conn_fail;
        static const Enum::Value isis_intf_af_proto_down_imd_node_doesnt_exist;
        static const Enum::Value isis_intf_af_proto_down_imd_exist_reg_error;
        static const Enum::Value isis_intf_af_proto_down_imd_state_reg_error;
        static const Enum::Value isis_intf_af_proto_down_af_not_up;
        static const Enum::Value isis_intf_af_proto_down_internal_error;

};

class IsisStartupStatusEnum : public Enum
{
    public:
        static const Enum::Value isis_startup_ssm_active;
        static const Enum::Value isis_startup_ssm_complete;
        static const Enum::Value isis_startup_ssm_aborted;
        static const Enum::Value isis_startup_ssm_not_run;

};

class IsisUpEnum : public Enum
{
    public:
        static const Enum::Value isis_down;
        static const Enum::Value isis_up;

};

class IsisMetricModeEnum : public Enum
{
    public:
        static const Enum::Value isis_metric_mode_fixed;
        static const Enum::Value isis_metric_mode_relative;
        static const Enum::Value isis_metric_mode_absolute;

};

class IsisMediaClassEnum : public Enum
{
    public:
        static const Enum::Value isis_media_class_lan;
        static const Enum::Value isis_media_class_p2p;
        static const Enum::Value isis_media_class_loop_back;

};

class IsisIfAfDisabledReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_af_disabled_no_topo_enabled;
        static const Enum::Value isis_intf_af_disabled_internal_error;

};

class IsisAdjTopoChangeEnum : public Enum
{
    public:
        static const Enum::Value isis_adj_topo_up_change;
        static const Enum::Value isis_adj_topo_next_hop_change;
        static const Enum::Value isis_adj_topo_down_change;

};

class IsisIfMcastInvalidReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_mcast_invalid_join_error;
        static const Enum::Value isis_intf_mcast_invalid_internal_error;
        static const Enum::Value isis_intf_mcast_invalid_not_yet_needed;

};

class IsisIfTopoAdvPrefixDisabledReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_topo_adv_prefix_disabled_intf_suppressed;
        static const Enum::Value isis_intf_topo_adv_prefix_disabled_af_not_up;
        static const Enum::Value isis_intf_topo_adv_prefix_disabled_af_prefixes_unknown;
        static const Enum::Value isis_intf_topo_adv_prefix_disabled_internal_error;

};

class IsisShTePceFloodingScopeEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value area;
        static const Enum::Value domain;

};

class IsisLspTriggerEnum : public Enum
{
    public:
        static const Enum::Value isis_lsp_trig_config;
        static const Enum::Value isis_lsp_trig_newadj;
        static const Enum::Value isis_lsp_trig_deladj;
        static const Enum::Value isis_lsp_trig_dr_change;
        static const Enum::Value isis_lsp_trig_area_set;
        static const Enum::Value isis_lsp_trig_attach;
        static const Enum::Value isis_lsp_trig_hippity;
        static const Enum::Value isis_lsp_trig_regen;
        static const Enum::Value isis_lsp_trig_ip_if_up;
        static const Enum::Value isis_lsp_trig_ip_if_down;
        static const Enum::Value isis_lsp_trig_ip_inter_area;
        static const Enum::Value isis_lsp_trig_ip_external;
        static const Enum::Value isis_lsp_trig_ip_external_full;
        static const Enum::Value isis_lsp_trig_ip_def_orig;
        static const Enum::Value isis_lsp_trig_ip_addr_chg;
        static const Enum::Value isis_lsp_trig_te_info;
        static const Enum::Value isis_lsp_trig_te_pce_info;
        static const Enum::Value isis_lsp_trig_te_fa_info;
        static const Enum::Value isis_lsp_trig_nsr_fo;
        static const Enum::Value isis_lsp_trig_pn_cancel;
        static const Enum::Value isis_lsp_trig_lkgp;
        static const Enum::Value isis_lsp_trig_pp;

};

class IsisEnabledEnum : public Enum
{
    public:
        static const Enum::Value isis_disabled;
        static const Enum::Value isis_enabled;

};

class IsisIfAdvPrefixDisabledReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_adv_prefix_disabled_if_cfg_suppressed;
        static const Enum::Value isis_intf_adv_prefix_disabled_no_topo_participate;
        static const Enum::Value isis_intf_adv_prefix_disabled_internal_error;

};

class IsisAdjStateEnum : public Enum
{
    public:
        static const Enum::Value isis_adj_up_state;
        static const Enum::Value isis_adj_init_state;
        static const Enum::Value isis_adj_failed_state;

};

class IsisErrLogLevelEnum : public Enum
{
    public:
        static const Enum::Value isis_err_log_level_info;
        static const Enum::Value isis_err_log_level_warn;
        static const Enum::Value isis_err_log_level_critical;

};

class IsisIfClnsProtoDownReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_clns_proto_down_add_to_intf_stack_fail;
        static const Enum::Value isis_intf_clns_proto_down_no_imd_conn;
        static const Enum::Value isis_intf_clns_proto_down_imd_node_doesnt_exist;
        static const Enum::Value isis_intf_clns_proto_down_imd_exist_reg_error;
        static const Enum::Value isis_intf_clns_proto_down_imd_state_reg_error;
        static const Enum::Value isis_intf_clns_proto_down_clns_not_up;

};

class IsisSpfTriggerEnum : public Enum
{
    public:
        static const Enum::Value isis_spf_trig_config;
        static const Enum::Value isis_spf_trig_nsr_fo;
        static const Enum::Value isis_spf_trig_periodic;
        static const Enum::Value isis_spf_trig_clear;
        static const Enum::Value isis_spf_trig_newadj;
        static const Enum::Value isis_spf_trig_deladj;
        static const Enum::Value isis_spf_trig_next_hop;
        static const Enum::Value isis_spf_trig_metric;
        static const Enum::Value isis_spf_trig_dis;
        static const Enum::Value isis_spf_trig_frr_per_link;
        static const Enum::Value isis_spf_trig_frr_per_prefix;
        static const Enum::Value isis_spf_trig_ucmp;
        static const Enum::Value isis_spf_trig_new_tunnel;
        static const Enum::Value isis_spf_trig_del_tunnel;
        static const Enum::Value isis_spf_trig_chg_tunnel;
        static const Enum::Value isis_spf_trig_new_node;
        static const Enum::Value isis_spf_trig_del_node;
        static const Enum::Value isis_spf_trig_newlsp;
        static const Enum::Value isis_spf_trig_lsp_expiry;
        static const Enum::Value isis_spf_trig_attach_set;
        static const Enum::Value isis_spf_trig_attach_clr;
        static const Enum::Value isis_spf_trig_overload_set;
        static const Enum::Value isis_spf_trig_overload_clr;
        static const Enum::Value isis_spf_trig_link_good;
        static const Enum::Value isis_spf_trig_link_bad;
        static const Enum::Value isis_spf_trig_prefix_good;
        static const Enum::Value isis_spf_trig_prefix_bad;
        static const Enum::Value isis_spf_trig_prefix;
        static const Enum::Value isis_spf_trig_area_addr;
        static const Enum::Value isis_spf_trig_ip_addr;
        static const Enum::Value isis_spf_trig_rtrid;
        static const Enum::Value isis_spf_trig_prefix_policy;

};

class SrmsMiFlagEBEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class IsisReachableEnum : public Enum
{
    public:
        static const Enum::Value isis_unreachable;
        static const Enum::Value isis_reachable;

};

class IsisPrefixPriorityEnum : public Enum
{
    public:
        static const Enum::Value isis_prefix_priority_critical;
        static const Enum::Value isis_prefix_priority_high;
        static const Enum::Value isis_prefix_priority_med;
        static const Enum::Value isis_prefix_priority_low;

};

class IsisAdjStateReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_adj_up_nsf_restart;
        static const Enum::Value isis_adj_up_new_adj;
        static const Enum::Value isis_adj_up_restarted;
        static const Enum::Value isis_adj_up_nsf_restored;
        static const Enum::Value isis_adj_up_chkpt_restored;
        static const Enum::Value isis_adj_init_reason;
        static const Enum::Value isis_adj_init_neighbor_forgot;
        static const Enum::Value isis_adj_down_hold_time;
        static const Enum::Value isis_adj_down_if_down;
        static const Enum::Value isis_adj_down_cfg_mismatch;
        static const Enum::Value isis_adj_down_circ_id;
        static const Enum::Value isis_adj_down_nsf_ack_fail;
        static const Enum::Value isis_adj_down_db_clear;
        static const Enum::Value isis_adj_down_no_common_topology;
        static const Enum::Value isis_adj_down_restart_tlv_missing;
        static const Enum::Value isis_adj_down_bfd_down;
        static const Enum::Value isis_adj_down_3way_down;

};

class IsisIfClnsSnpaUnknownReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_clns_snpa_unknown_access_error;
        static const Enum::Value isis_intf_clns_snpa_unknown_not_lan;
        static const Enum::Value isis_intf_clns_snpa_unknown_internal_error;

};

class IsisAdjTopoStatusEnum : public Enum
{
    public:
        static const Enum::Value isis_adj_topo_status_ok;
        static const Enum::Value isis_adj_topo_status_intf_not_configured;
        static const Enum::Value isis_adj_topo_status_intf_not_running;
        static const Enum::Value isis_adj_topo_status_init_state;
        static const Enum::Value isis_adj_topo_status_neighbor_doesnt_participate;
        static const Enum::Value isis_adj_topo_status_ipv4_address_tlv_missing;
        static const Enum::Value isis_adj_topo_status_ipv4_address_tlv_empty;
        static const Enum::Value isis_adj_topo_status_ipv6_address_tlv_missing;
        static const Enum::Value isis_adj_topo_status_ipv6_address_tlv_empty;
        static const Enum::Value isis_adj_topo_status_ipv4_address_matches_ours;
        static const Enum::Value isis_adj_topo_status_ipv6_address_matches_ours;
        static const Enum::Value isis_adj_topo_status_ipv4_address_subnet_mismatch;
        static const Enum::Value isis_adj_topo_status_ipv6_address_not_link_local;

};

class IsisIfTopoAdjFormDisabledReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_topo_adj_form_disabled_intf_passive;
        static const Enum::Value isis_intf_topo_adj_form_disabled_af_not_up;
        static const Enum::Value isis_intf_topo_adj_form_disabled_af_fwd_addr_unknown;
        static const Enum::Value isis_intf_topo_adj_form_disabled_topo_not_cfg;
        static const Enum::Value isis_intf_topo_adj_form_disabled_topo_can_not_participate;
        static const Enum::Value isis_intf_topo_adj_form_disabled_idle;
        static const Enum::Value isis_intf_topo_adj_form_disabled_internal_error;
        static const Enum::Value isis_intf_topo_adj_form_disabled_mtu;
        static const Enum::Value isis_intf_topo_adj_form_disabled_snpa;
        static const Enum::Value isis_intf_topo_adj_form_disabled_mcast;

};

class IsisAdjBfdStateEnum : public Enum
{
    public:
        static const Enum::Value isis_adj_bfd_no_state;
        static const Enum::Value isis_adj_bfd_down_state;
        static const Enum::Value isis_adj_bfd_init_state;
        static const Enum::Value isis_adj_bfd_up_state;

};

class IsisAfIdEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};

class IsisRedistProtoEnum : public Enum
{
    public:
        static const Enum::Value isis_redist_connected;
        static const Enum::Value isis_redist_static;
        static const Enum::Value isis_redist_ospf;
        static const Enum::Value isis_redist_bgp;
        static const Enum::Value isis_redist_isis;
        static const Enum::Value isis_redist_ospfv3;
        static const Enum::Value isis_redist_rip;
        static const Enum::Value isis_redist_eigrp;
        static const Enum::Value isis_redist_subscriber;
        static const Enum::Value isis_redist_application;
        static const Enum::Value isis_redist_mobile;

};

class IsisIfTopoDisabledReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_topo_disabled_not_cfg;
        static const Enum::Value isis_intf_topo_disabled_internal_error;

};

class IsisShRouteAdvOriginEnum : public Enum
{
    public:
        static const Enum::Value isis_sh_route_adv_origin_interface;
        static const Enum::Value isis_sh_route_adv_origin_redistributed;
        static const Enum::Value isis_sh_route_adv_origin_native;
        static const Enum::Value isis_sh_route_adv_origin_summary;
        static const Enum::Value isis_sh_route_adv_origin_default;

};

class IsisKnownEnum : public Enum
{
    public:
        static const Enum::Value isis_unknown;
        static const Enum::Value isis_known;

};

class IsisLevelEnum : public Enum
{
    public:
        static const Enum::Value isis_level0;
        static const Enum::Value isis_level1;
        static const Enum::Value isis_level2;

};

class IsisIfAdjFormDisabledReasonEnum : public Enum
{
    public:
        static const Enum::Value isis_intf_adj_form_disabled_cfg_passive;
        static const Enum::Value isis_intf_adj_form_disabled_no_topo_participate;
        static const Enum::Value isis_intf_adj_form_disabled_add_to_intf_stack_fail;
        static const Enum::Value isis_intf_adj_form_disabled_clns_io;
        static const Enum::Value isis_intf_adj_form_disabled_internal_error;

};

class IsisPrefixOriginEnum : public Enum
{
    public:
        static const Enum::Value isis_prefix_origin_l1_summary_null;
        static const Enum::Value isis_prefix_origin_l1;
        static const Enum::Value isis_prefix_origin_l2_summary_null;
        static const Enum::Value isis_prefix_origin_l2;
        static const Enum::Value isis_prefix_origin_inter_area_summary_null;
        static const Enum::Value isis_prefix_origin_inter_area;
        static const Enum::Value isis_prefix_origin_default_nearest_attached;

};

class IsisTilfaComputationEnum : public Enum
{
    public:
        static const Enum::Value isis_tilfa_comp_none;
        static const Enum::Value isis_tilfa_comp_link;
        static const Enum::Value isis_tilfa_comp_node;
        static const Enum::Value isis_tilfa_comp_srlg;
        static const Enum::Value isis_tilfa_comp_node_srlg;

};

class IsisSpfClassEnum : public Enum
{
    public:
        static const Enum::Value isis_spf_frr_per_link;
        static const Enum::Value isis_spf_partial;
        static const Enum::Value isis_spf_frr_per_prefix;
        static const Enum::Value isis_spf_ucmp_calc;
        static const Enum::Value isis_spf_next_hop;
        static const Enum::Value isis_spf_incremental;
        static const Enum::Value isis_spf_full;

};

class IsisValidEnum : public Enum
{
    public:
        static const Enum::Value isis_invalid;
        static const Enum::Value isis_valid;

};

class IsisLevelsEnum : public Enum
{
    public:
        static const Enum::Value isis_levels_none;
        static const Enum::Value isis_levels_1;
        static const Enum::Value isis_levels_2;
        static const Enum::Value isis_levels_12;
        static const Enum::Value isis_levels_total;

};


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_OPER_ */

