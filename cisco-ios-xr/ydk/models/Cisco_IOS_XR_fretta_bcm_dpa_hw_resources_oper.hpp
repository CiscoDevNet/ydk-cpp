#ifndef _CISCO_IOS_XR_FRETTA_BCM_DPA_HW_RESOURCES_OPER_
#define _CISCO_IOS_XR_FRETTA_BCM_DPA_HW_RESOURCES_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper {

class Dpa : public Entity
{
    public:
        Dpa();
        ~Dpa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Stats : public Entity
    {
        public:
            Stats();
            ~Stats();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Nodes : public Entity
        {
            public:
                Nodes();
                ~Nodes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Node : public Entity
            {
                public:
                    Node();
                    ~Node();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf node_name; //type: string

                class VoqBaseNumberStatsClears : public Entity
                {
                    public:
                        VoqBaseNumberStatsClears();
                        ~VoqBaseNumberStatsClears();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class VoqBaseNumberStatsClear : public Entity
                    {
                        public:
                            VoqBaseNumberStatsClear();
                            ~VoqBaseNumberStatsClear();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf npu_number; //type: int32

                        class VoqBaseStatsClearData : public Entity
                        {
                            public:
                                VoqBaseStatsClearData();
                                ~VoqBaseStatsClearData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf base_number; //type: uint32
                                YLeaf clear_status; //type: uint8



                        }; // Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear::VoqBaseStatsClearData> > voq_base_stats_clear_data;


                    }; // Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears::VoqBaseNumberStatsClear> > voq_base_number_stats_clear;


                }; // Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears


                class NpuNumberForTrapDatas : public Entity
                {
                    public:
                        NpuNumberForTrapDatas();
                        ~NpuNumberForTrapDatas();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class NpuNumberForTrapData : public Entity
                    {
                        public:
                            NpuNumberForTrapData();
                            ~NpuNumberForTrapData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf npu_id; //type: int32

                        class TrapSpecificStatsData : public Entity
                        {
                            public:
                                TrapSpecificStatsData();
                                ~TrapSpecificStatsData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf trap_data; //type: uint32
                                YLeaf trap_strength; //type: uint32
                                YLeaf priority; //type: uint32
                                YLeaf trap_id; //type: uint32
                                YLeaf gport; //type: uint32
                                YLeaf fec_id; //type: uint32
                                YLeaf policer_id; //type: uint32
                                YLeaf stats_id; //type: uint32
                                YLeaf encap_id; //type: uint32
                                YLeaf mc_group; //type: uint32
                                YLeaf trap_string; //type: string
                                YLeaf id; //type: uint32
                                YLeaf offset; //type: uint64
                                YLeaf npu_id; //type: uint64
                                YLeaf packet_dropped; //type: uint64
                                YLeaf packet_accepted; //type: uint64



                        }; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData::TrapSpecificStatsData> > trap_specific_stats_data;


                    }; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas::NpuNumberForTrapData> > npu_number_for_trap_data;


                }; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas


                class HwResourcesDatas : public Entity
                {
                    public:
                        HwResourcesDatas();
                        ~HwResourcesDatas();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class HwResourcesData : public Entity
                    {
                        public:
                            HwResourcesData();
                            ~HwResourcesData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf resource; //type: ResourceEnum
                            YLeaf resource_id; //type: uint32
                            YLeaf name; //type: string
                            YLeaf num_npus; //type: uint32

                        class NpuHwr : public Entity
                        {
                            public:
                                NpuHwr();
                                ~NpuHwr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_allowed; //type: uint32
                                YLeaf npu_id; //type: uint32
                                YLeaf max_entries; //type: uint32
                                YLeaf red_oor_threshold; //type: uint32
                                YLeaf red_oor_threshold_percent; //type: uint32
                                YLeaf yellow_oor_threshold; //type: uint32
                                YLeaf yellow_oor_threshold_percent; //type: uint32
                                YLeaf inuse_objects; //type: uint32
                                YLeaf num_lt; //type: uint32
                                YLeaf oor_change_count; //type: uint32
                                YLeaf oor_state_change_time1; //type: string
                                YLeaf oor_state_change_time2; //type: string
                                YLeaf oor_state; //type: string

                            class LtHwr : public Entity
                            {
                                public:
                                    LtHwr();
                                    ~LtHwr();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf lt_id; //type: uint32
                                    YLeaf name; //type: string
                                    YLeaf hw_entries; //type: uint32
                                    YLeaf sw_entries; //type: uint32



                            }; // Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr::LtHwr> > lt_hwr;


                        }; // Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData::NpuHwr> > npu_hwr;


                    }; // Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::HwResourcesDatas::HwResourcesData> > hw_resources_data;


                }; // Dpa::Stats::Nodes::Node::HwResourcesDatas


                class VoqBaseNumbers : public Entity
                {
                    public:
                        VoqBaseNumbers();
                        ~VoqBaseNumbers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class VoqBaseNumber : public Entity
                    {
                        public:
                            VoqBaseNumber();
                            ~VoqBaseNumber();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf npu_number; //type: int32

                        class VoqBaseStatsData : public Entity
                        {
                            public:
                                VoqBaseStatsData();
                                ~VoqBaseStatsData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf base_number; //type: uint32
                                YLeaf is_inuse; //type: boolean
                                YLeaf rack_num; //type: uint8
                                YLeaf slot_num; //type: uint8
                                YLeaf npu_num; //type: uint8
                                YLeaf npu_core; //type: uint8
                                YLeaf port_num; //type: uint8
                                YLeaf ifhandle; //type: uint32
                                YLeaf sysport; //type: uint32
                                YLeaf pp_port; //type: uint32
                                YLeaf port_speed; //type: uint32
                                YLeaf voq_base; //type: uint32
                                YLeaf connector_id; //type: uint32
                                YLeaf is_local_port; //type: boolean

                            class VoqStat : public Entity
                            {
                                public:
                                    VoqStat();
                                    ~VoqStat();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf gport_received_bytes; //type: uint64
                                    YLeaf gport_received_pkts; //type: uint64
                                    YLeaf gport_dropped_bytes; //type: uint64
                                    YLeaf gport_dropped_pkts; //type: uint64



                            }; // Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData::VoqStat> > voq_stat;


                        }; // Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber::VoqBaseStatsData> > voq_base_stats_data;


                    }; // Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumbers::VoqBaseNumber> > voq_base_number;


                }; // Dpa::Stats::Nodes::Node::VoqBaseNumbers


                class NpuNumberForVoqDatas : public Entity
                {
                    public:
                        NpuNumberForVoqDatas();
                        ~NpuNumberForVoqDatas();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class NpuNumberForVoqData : public Entity
                    {
                        public:
                            NpuNumberForVoqData();
                            ~NpuNumberForVoqData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf npu_id; //type: int32

                        class VoqSpecificStatsData : public Entity
                        {
                            public:
                                VoqSpecificStatsData();
                                ~VoqSpecificStatsData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf voq_data; //type: int32
                                YLeaf is_inuse; //type: boolean
                                YLeaf rack_num; //type: uint8
                                YLeaf slot_num; //type: uint8
                                YLeaf npu_num; //type: uint8
                                YLeaf npu_core; //type: uint8
                                YLeaf port_num; //type: uint8
                                YLeaf ifhandle; //type: uint32
                                YLeaf sysport; //type: uint32
                                YLeaf pp_port; //type: uint32
                                YLeaf port_speed; //type: uint32
                                YLeaf voq_base; //type: uint32
                                YLeaf connector_id; //type: uint32
                                YLeaf is_local_port; //type: boolean

                            class VoqStat : public Entity
                            {
                                public:
                                    VoqStat();
                                    ~VoqStat();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf gport_received_bytes; //type: uint64
                                    YLeaf gport_received_pkts; //type: uint64
                                    YLeaf gport_dropped_bytes; //type: uint64
                                    YLeaf gport_dropped_pkts; //type: uint64



                            }; // Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData::VoqStat> > voq_stat;


                        }; // Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData::VoqSpecificStatsData> > voq_specific_stats_data;


                    }; // Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas::NpuNumberForVoqData> > npu_number_for_voq_data;


                }; // Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas


                class ClearVoqDataForNpuNumbers : public Entity
                {
                    public:
                        ClearVoqDataForNpuNumbers();
                        ~ClearVoqDataForNpuNumbers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class ClearVoqDataForNpuNumber : public Entity
                    {
                        public:
                            ClearVoqDataForNpuNumber();
                            ~ClearVoqDataForNpuNumber();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf npu_id; //type: int32

                        class VoqSpecificStatsDataClear : public Entity
                        {
                            public:
                                VoqSpecificStatsDataClear();
                                ~VoqSpecificStatsDataClear();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf voq_data; //type: int32
                                YLeaf clear_status; //type: uint8



                        }; // Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber::VoqSpecificStatsDataClear> > voq_specific_stats_data_clear;


                    }; // Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers::ClearVoqDataForNpuNumber> > clear_voq_data_for_npu_number;


                }; // Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers


                class NpuNumberForTrapDataClears : public Entity
                {
                    public:
                        NpuNumberForTrapDataClears();
                        ~NpuNumberForTrapDataClears();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class NpuNumberForTrapDataClear : public Entity
                    {
                        public:
                            NpuNumberForTrapDataClear();
                            ~NpuNumberForTrapDataClear();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf npu_id; //type: int32

                        class TrapSpecificStatsData : public Entity
                        {
                            public:
                                TrapSpecificStatsData();
                                ~TrapSpecificStatsData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf trap_data; //type: uint32
                                YLeaf clear_status; //type: uint8



                        }; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear::TrapSpecificStatsData> > trap_specific_stats_data;


                    }; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears::NpuNumberForTrapDataClear> > npu_number_for_trap_data_clear;


                }; // Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears


                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::ClearVoqDataForNpuNumbers> clear_voq_data_for_npu_numbers;
                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::HwResourcesDatas> hw_resources_datas;
                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDataClears> npu_number_for_trap_data_clears;
                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForTrapDatas> npu_number_for_trap_datas;
                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::NpuNumberForVoqDatas> npu_number_for_voq_datas;
                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumberStatsClears> voq_base_number_stats_clears;
                    std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node::VoqBaseNumbers> voq_base_numbers;


            }; // Dpa::Stats::Nodes::Node


                std::vector<std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes::Node> > node;


        }; // Dpa::Stats::Nodes


            std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats::Nodes> nodes;


    }; // Dpa::Stats


        std::unique_ptr<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa::Stats> stats;


}; // Dpa


class ResourceEnum : public Enum
{
    public:
        static const Enum::YLeaf lem;
        static const Enum::YLeaf lpm;
        static const Enum::YLeaf encap;
        static const Enum::YLeaf ext_tcam;
        static const Enum::YLeaf all;

};


}
}

#endif /* _CISCO_IOS_XR_FRETTA_BCM_DPA_HW_RESOURCES_OPER_ */

