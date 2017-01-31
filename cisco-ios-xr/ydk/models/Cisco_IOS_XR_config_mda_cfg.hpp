#ifndef _CISCO_IOS_XR_CONFIG_MDA_CFG_
#define _CISCO_IOS_XR_CONFIG_MDA_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


namespace ydk {
namespace Cisco_IOS_XR_config_mda_cfg {

class ActiveNodes : public Entity
{
    public:
        ActiveNodes();
        ~ActiveNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class ActiveNode : public Entity
    {
        public:
            ActiveNode();
            ~ActiveNode();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf node_name; //type: string

        class Ltrace : public Entity
        {
            public:
                Ltrace();
                ~Ltrace();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class AllocationParams : public Entity
            {
                public:
                    AllocationParams();
                    ~AllocationParams();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf mode; //type: InfraLtraceModeEnum
                    YLeaf scale_factor; //type: InfraLtraceScaleEnum



            }; // ActiveNodes::ActiveNode::Ltrace::AllocationParams


                std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::Ltrace::AllocationParams> allocation_params;


        }; // ActiveNodes::ActiveNode::Ltrace


        class LptsLocal : public Entity
        {
            public:
                LptsLocal();
                ~LptsLocal();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class IpolicerLocalTables : public Entity
            {
                public:
                    IpolicerLocalTables();
                    ~IpolicerLocalTables();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class IpolicerLocalTable : public Entity
                {
                    public:
                        IpolicerLocalTable();
                        ~IpolicerLocalTable();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf id1; //type: string

                    class Nps : public Entity
                    {
                        public:
                            Nps();
                            ~Nps();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Np : public Entity
                        {
                            public:
                                Np();
                                ~Np();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf id1; //type: int32
                                YLeaf rate; //type: int32



                        }; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np


                            std::vector<std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np> > np;


                    }; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps


                        std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps> nps;


                }; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable


                    std::vector<std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable> > ipolicer_local_table;


            }; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables


            class IpolicerLocal : public Entity
            {
                public:
                    IpolicerLocal();
                    ~IpolicerLocal();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enable; //type: empty

                class Flows : public Entity
                {
                    public:
                        Flows();
                        ~Flows();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Flow : public Entity
                    {
                        public:
                            Flow();
                            ~Flow();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf flow_type; //type: LptsFlowEnum
                            YLeaf rate; //type: int32

                        class Precedences : public Entity
                        {
                            public:
                                Precedences();
                                ~Precedences();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeafList precedence; //type: list of  one of uint32, enumeration



                        }; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences


                            std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences> precedences;


                    }; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow


                        std::vector<std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow> > flow;


                }; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows


                    std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows> flows;


            }; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal


                std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal> ipolicer_local; // presence node
                std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables> ipolicer_local_tables;


        }; // ActiveNodes::ActiveNode::LptsLocal


        class CiscoIosXrWatchdCfg_WatchdogNodeThreshold : public Entity
        {
            public:
                CiscoIosXrWatchdCfg_WatchdogNodeThreshold();
                ~CiscoIosXrWatchdCfg_WatchdogNodeThreshold();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class MemoryThreshold : public Entity
            {
                public:
                    MemoryThreshold();
                    ~MemoryThreshold();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf minor; //type: uint32
                    YLeaf severe; //type: uint32
                    YLeaf critical; //type: uint32



            }; // ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold


                std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold> memory_threshold;


        }; // ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold


        class CiscoIosXrWdCfg_WatchdogNodeThreshold : public Entity
        {
            public:
                CiscoIosXrWdCfg_WatchdogNodeThreshold();
                ~CiscoIosXrWdCfg_WatchdogNodeThreshold();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class MemoryThreshold : public Entity
            {
                public:
                    MemoryThreshold();
                    ~MemoryThreshold();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf minor; //type: uint32
                    YLeaf severe; //type: uint32
                    YLeaf critical; //type: uint32



            }; // ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold


                std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold> memory_threshold;


        }; // ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold


            std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold> cisco_ios_xr_watchd_cfg_watchdog_node_threshold;
            std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold> cisco_ios_xr_wd_cfg_watchdog_node_threshold;
            std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal> lpts_local;
            std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::Ltrace> ltrace;


    }; // ActiveNodes::ActiveNode


        std::vector<std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode> > active_node;


}; // ActiveNodes

class PreconfiguredNodes : public Entity
{
    public:
        PreconfiguredNodes();
        ~PreconfiguredNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class PreconfiguredNode : public Entity
    {
        public:
            PreconfiguredNode();
            ~PreconfiguredNode();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf node_name; //type: string

        class Ltrace : public Entity
        {
            public:
                Ltrace();
                ~Ltrace();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class AllocationParams : public Entity
            {
                public:
                    AllocationParams();
                    ~AllocationParams();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf mode; //type: InfraLtraceModeEnum
                    YLeaf scale_factor; //type: InfraLtraceScaleEnum



            }; // PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams


                std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams> allocation_params;


        }; // PreconfiguredNodes::PreconfiguredNode::Ltrace


        class LptsLocal : public Entity
        {
            public:
                LptsLocal();
                ~LptsLocal();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class IpolicerLocalTables : public Entity
            {
                public:
                    IpolicerLocalTables();
                    ~IpolicerLocalTables();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class IpolicerLocalTable : public Entity
                {
                    public:
                        IpolicerLocalTable();
                        ~IpolicerLocalTable();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf id1; //type: string

                    class Nps : public Entity
                    {
                        public:
                            Nps();
                            ~Nps();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Np : public Entity
                        {
                            public:
                                Np();
                                ~Np();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf id1; //type: int32
                                YLeaf rate; //type: int32



                        }; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np


                            std::vector<std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np> > np;


                    }; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps


                        std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps> nps;


                }; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable


                    std::vector<std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable> > ipolicer_local_table;


            }; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables


            class IpolicerLocal : public Entity
            {
                public:
                    IpolicerLocal();
                    ~IpolicerLocal();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enable; //type: empty

                class Flows : public Entity
                {
                    public:
                        Flows();
                        ~Flows();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Flow : public Entity
                    {
                        public:
                            Flow();
                            ~Flow();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf flow_type; //type: LptsFlowEnum
                            YLeaf rate; //type: int32

                        class Precedences : public Entity
                        {
                            public:
                                Precedences();
                                ~Precedences();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeafList precedence; //type: list of  one of uint32, enumeration



                        }; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences


                            std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences> precedences;


                    }; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow


                        std::vector<std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow> > flow;


                }; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows


                    std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows> flows;


            }; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal


                std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal> ipolicer_local; // presence node
                std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables> ipolicer_local_tables;


        }; // PreconfiguredNodes::PreconfiguredNode::LptsLocal


        class CiscoIosXrWatchdCfg_WatchdogNodeThreshold : public Entity
        {
            public:
                CiscoIosXrWatchdCfg_WatchdogNodeThreshold();
                ~CiscoIosXrWatchdCfg_WatchdogNodeThreshold();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class MemoryThreshold : public Entity
            {
                public:
                    MemoryThreshold();
                    ~MemoryThreshold();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf minor; //type: uint32
                    YLeaf severe; //type: uint32
                    YLeaf critical; //type: uint32



            }; // PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold


                std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold> memory_threshold;


        }; // PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold


        class CiscoIosXrWdCfg_WatchdogNodeThreshold : public Entity
        {
            public:
                CiscoIosXrWdCfg_WatchdogNodeThreshold();
                ~CiscoIosXrWdCfg_WatchdogNodeThreshold();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class MemoryThreshold : public Entity
            {
                public:
                    MemoryThreshold();
                    ~MemoryThreshold();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf minor; //type: uint32
                    YLeaf severe; //type: uint32
                    YLeaf critical; //type: uint32



            }; // PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold


                std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold> memory_threshold;


        }; // PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold


            std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold> cisco_ios_xr_watchd_cfg_watchdog_node_threshold;
            std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold> cisco_ios_xr_wd_cfg_watchdog_node_threshold;
            std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal> lpts_local;
            std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::Ltrace> ltrace;


    }; // PreconfiguredNodes::PreconfiguredNode


        std::vector<std::unique_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode> > preconfigured_node;


}; // PreconfiguredNodes



}
}

#endif /* _CISCO_IOS_XR_CONFIG_MDA_CFG_ */

