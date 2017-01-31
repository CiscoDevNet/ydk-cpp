#ifndef _CISCO_IOS_XR_ETHERNET_CFM_OPER_
#define _CISCO_IOS_XR_ETHERNET_CFM_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ethernet_cfm_oper {

class Cfm : public Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



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


                YLeaf node; //type: string

            class InterfaceAises : public Entity
            {
                public:
                    InterfaceAises();
                    ~InterfaceAises();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class InterfaceAis : public Entity
                {
                    public:
                        InterfaceAis();
                        ~InterfaceAis();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string
                        YLeaf direction; //type: CfmAisDirEnum
                        YLeaf interface; //type: string
                        YLeaf interface_state; //type: string
                        YLeaf interworking_state; //type: CfmBagIwStateEnum
                        YLeaf stp_state; //type: CfmBagStpStateEnum

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


                            YLeaf direction; //type: CfmBagDirectionEnum
                            YLeaf lowest_level; //type: CfmBagMdLevelEnum
                            YLeaf transmission_level; //type: CfmBagMdLevelEnum
                            YLeaf transmission_interval; //type: CfmBagAisIntervalEnum
                            YLeaf sent_packets; //type: uint32
                            YLeafList via_level; //type: list of  CfmBagMdLevelEnum

                        class Defects : public Entity
                        {
                            public:
                                Defects();
                                ~Defects();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ais_received; //type: boolean
                                YLeaf peer_meps_that_timed_out; //type: uint32
                                YLeaf missing; //type: uint32
                                YLeaf auto_missing; //type: uint32
                                YLeaf unexpected; //type: uint32
                                YLeaf local_port_status; //type: boolean
                                YLeaf peer_port_status; //type: boolean

                            class RemoteMepsDefects : public Entity
                            {
                                public:
                                    RemoteMepsDefects();
                                    ~RemoteMepsDefects();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf loss_threshold_exceeded; //type: boolean
                                    YLeaf invalid_level; //type: boolean
                                    YLeaf invalid_maid; //type: boolean
                                    YLeaf invalid_ccm_interval; //type: boolean
                                    YLeaf received_our_mac; //type: boolean
                                    YLeaf received_our_mep_id; //type: boolean
                                    YLeaf received_rdi; //type: boolean



                            }; // Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects> remote_meps_defects;


                        }; // Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects


                        class LastStarted : public Entity
                        {
                            public:
                                LastStarted();
                                ~LastStarted();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf seconds; //type: uint32
                                YLeaf nanoseconds; //type: uint32



                        }; // Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects> defects;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted> last_started;


                    }; // Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics> statistics;


                }; // Cfm::Nodes::Node::InterfaceAises::InterfaceAis


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises::InterfaceAis> > interface_ais;


            }; // Cfm::Nodes::Node::InterfaceAises


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


                        YLeaf interface; //type: string
                        YLeaf interface_xr; //type: string

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


                            YLeaf malformed_packets; //type: uint64
                            YLeaf dropped_packets; //type: uint64
                            YLeaf last_malformed_opcode; //type: CfmBagOpcodeEnum
                            YLeaf last_malformed_reason; //type: CfmPmPktActionEnum



                    }; // Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics> statistics;


                }; // Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic> > interface_statistic;


            }; // Cfm::Nodes::Node::InterfaceStatistics


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


                    YLeaf domains; //type: uint32
                    YLeaf services; //type: uint32
                    YLeaf ccm_rate; //type: uint32
                    YLeaf local_meps; //type: uint32
                    YLeaf operational_local_meps; //type: uint32
                    YLeaf down_meps; //type: uint32
                    YLeaf up_meps; //type: uint32
                    YLeaf offloaded; //type: uint32
                    YLeaf offloaded_at3_3ms; //type: uint32
                    YLeaf offloaded_at10ms; //type: uint32
                    YLeaf disabled_misconfigured; //type: uint32
                    YLeaf disabled_out_of_resources; //type: uint32
                    YLeaf disabled_operational_error; //type: uint32
                    YLeaf peer_meps; //type: uint32
                    YLeaf operational_peer_meps; //type: uint32
                    YLeaf peer_meps_with_defects; //type: uint32
                    YLeaf peer_meps_without_defects; //type: uint32
                    YLeaf peer_meps_timed_out; //type: uint32
                    YLeaf mips; //type: uint32
                    YLeaf interfaces; //type: uint32
                    YLeaf bridge_domains_and_xconnects; //type: uint32
                    YLeaf traceroute_cache_entries; //type: uint32
                    YLeaf traceroute_cache_replies; //type: uint32
                    YLeaf ccm_learning_db_entries; //type: uint32
                    YLeaf issu_role; //type: CfmBagIssuRoleEnum
                    YLeaf bnm_enabled_links; //type: uint32



            }; // Cfm::Nodes::Node::Summary


            class CcmLearningDatabases : public Entity
            {
                public:
                    CcmLearningDatabases();
                    ~CcmLearningDatabases();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class CcmLearningDatabase : public Entity
                {
                    public:
                        CcmLearningDatabase();
                        ~CcmLearningDatabase();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf domain; //type: string
                        YLeaf service; //type: string
                        YLeaf mac_address; //type: string
                        YLeaf domain_xr; //type: string
                        YLeaf level; //type: CfmBagMdLevelEnum
                        YLeaf service_xr; //type: string
                        YLeaf source_mac_address; //type: string
                        YLeaf ingress_interface; //type: uint32
                        YLeaf stale; //type: boolean
                        YLeaf ingress_interface_string; //type: string



                }; // Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase> > ccm_learning_database;


            }; // Cfm::Nodes::Node::CcmLearningDatabases


                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::CcmLearningDatabases> ccm_learning_databases;
                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises> interface_aises;
                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceStatistics> interface_statistics;
                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::Summary> summary;


        }; // Cfm::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node> > node;


    }; // Cfm::Nodes


    class Global : public Entity
    {
        public:
            Global();
            ~Global();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class IncompleteTraceroutes : public Entity
        {
            public:
                IncompleteTraceroutes();
                ~IncompleteTraceroutes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class IncompleteTraceroute : public Entity
            {
                public:
                    IncompleteTraceroute();
                    ~IncompleteTraceroute();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf domain; //type: string
                    YLeaf service; //type: string
                    YLeaf mep_id; //type: uint32
                    YLeaf interface; //type: string
                    YLeaf transaction_id; //type: int32
                    YLeaf time_left; //type: uint64

                class TracerouteInformation : public Entity
                {
                    public:
                        TracerouteInformation();
                        ~TracerouteInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf domain; //type: string
                        YLeaf service; //type: string
                        YLeaf level; //type: CfmBagMdLevelEnum
                        YLeaf source_mep_id; //type: uint16
                        YLeaf source_interface; //type: string
                        YLeaf source_mac_address; //type: string
                        YLeaf target_mac_address; //type: string
                        YLeaf directed_mac_address; //type: string
                        YLeaf target_mep_id; //type: uint16
                        YLeaf timestamp; //type: uint64
                        YLeaf ttl; //type: uint8
                        YLeaf transaction_id; //type: uint32

                    class Options : public Entity
                    {
                        public:
                            Options();
                            ~Options();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf mode; //type: CfmPmLtModeEnum

                        class BasicOptions : public Entity
                        {
                            public:
                                BasicOptions();
                                ~BasicOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf is_auto; //type: boolean
                                YLeaf fdb_only; //type: boolean



                        }; // Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions


                        class ExploratoryOptions : public Entity
                        {
                            public:
                                ExploratoryOptions();
                                ~ExploratoryOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf delay_model; //type: CfmPmEltDelayModelEnum
                                YLeaf delay_constant_factor; //type: uint32
                                YLeaf reply_filter; //type: CfmPmElmReplyFilterEnum



                        }; // Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions> basic_options;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions> exploratory_options;


                    }; // Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options> options;


                }; // Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation


                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation> traceroute_information;


            }; // Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute


                std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute> > incomplete_traceroute;


        }; // Cfm::Global::IncompleteTraceroutes


        class MaintenancePoints : public Entity
        {
            public:
                MaintenancePoints();
                ~MaintenancePoints();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class MaintenancePoint : public Entity
            {
                public:
                    MaintenancePoint();
                    ~MaintenancePoint();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf domain; //type: string
                    YLeaf service; //type: string
                    YLeaf interface; //type: string
                    YLeaf mep_has_error; //type: boolean
                    YLeaf mac_address; //type: string

                class MaintenancePoint_ : public Entity
                {
                    public:
                        MaintenancePoint_();
                        ~MaintenancePoint_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf domain_name; //type: string
                        YLeaf level; //type: CfmBagMdLevelEnum
                        YLeaf service_name; //type: string
                        YLeaf interface; //type: string
                        YLeaf maintenance_point_type; //type: CfmMaMpVarietyEnum
                        YLeaf mep_id; //type: uint16



                }; // Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_


                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_> maintenance_point;


            }; // Cfm::Global::MaintenancePoints::MaintenancePoint


                std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MaintenancePoints::MaintenancePoint> > maintenance_point;


        }; // Cfm::Global::MaintenancePoints


        class GlobalConfigurationErrors : public Entity
        {
            public:
                GlobalConfigurationErrors();
                ~GlobalConfigurationErrors();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class GlobalConfigurationError : public Entity
            {
                public:
                    GlobalConfigurationError();
                    ~GlobalConfigurationError();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf domain; //type: string
                    YLeaf service; //type: string
                    YLeaf domain_name; //type: string
                    YLeaf level; //type: CfmBagMdLevelEnum
                    YLeaf service_name; //type: string
                    YLeaf bridge_domain_is_configured; //type: boolean
                    YLeaf l2_fib_download_error; //type: boolean

                class BridgeDomainId : public Entity
                {
                    public:
                        BridgeDomainId();
                        ~BridgeDomainId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf bridge_domain_id_format; //type: CfmBagBdidFmtEnum
                        YLeaf group; //type: string
                        YLeaf name; //type: string
                        YLeaf ce_id; //type: uint16
                        YLeaf remote_ce_id; //type: uint16



                }; // Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId


                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId> bridge_domain_id;


            }; // Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError


                std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError> > global_configuration_error;


        }; // Cfm::Global::GlobalConfigurationErrors


        class MepConfigurationErrors : public Entity
        {
            public:
                MepConfigurationErrors();
                ~MepConfigurationErrors();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class MepConfigurationError : public Entity
            {
                public:
                    MepConfigurationError();
                    ~MepConfigurationError();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf domain; //type: string
                    YLeaf service; //type: string
                    YLeaf interface; //type: string
                    YLeaf ccm_interval; //type: CfmBagCcmIntervalEnum
                    YLeaf no_domain; //type: boolean
                    YLeaf no_service; //type: boolean
                    YLeaf bridge_domain_mismatch; //type: boolean
                    YLeaf level_conflict; //type: boolean
                    YLeaf ccm_interval_not_supported; //type: boolean
                    YLeaf offload_out_of_resources; //type: boolean
                    YLeaf offload_multiple_local_mep; //type: boolean
                    YLeaf offload_no_cross_check; //type: boolean
                    YLeaf offload_multiple_peer_meps; //type: boolean
                    YLeaf offload_mep_direction_not_supported; //type: boolean
                    YLeaf ais_configured; //type: boolean
                    YLeaf bundle_level0; //type: boolean
                    YLeaf bridge_domain_not_in_bd_infra; //type: boolean
                    YLeaf satellite_limitation; //type: boolean
                    YLeaf sla_loopback_operations_disabled; //type: boolean
                    YLeaf sla_synthetic_loss_operations_disabled; //type: boolean
                    YLeaf sla_delay_measurement_operations_disabled; //type: boolean
                    YLeaf no_valid_mac_address; //type: boolean
                    YLeaf no_interface_type; //type: boolean
                    YLeaf not_in_im; //type: boolean
                    YLeaf no_mlacp; //type: boolean
                    YLeaf satellite_error_string; //type: string
                    YLeaf satellite_id; //type: uint16

                class Mep : public Entity
                {
                    public:
                        Mep();
                        ~Mep();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf domain_name; //type: string
                        YLeaf level; //type: CfmBagMdLevelEnum
                        YLeaf service_name; //type: string
                        YLeaf interface; //type: string
                        YLeaf maintenance_point_type; //type: CfmMaMpVarietyEnum
                        YLeaf mep_id; //type: uint16



                }; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep


                class ServiceBridgeDomain : public Entity
                {
                    public:
                        ServiceBridgeDomain();
                        ~ServiceBridgeDomain();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf bridge_domain_id_format; //type: CfmBagBdidFmtEnum
                        YLeaf group; //type: string
                        YLeaf name; //type: string
                        YLeaf ce_id; //type: uint16
                        YLeaf remote_ce_id; //type: uint16



                }; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain


                class InterfaceBridgeDomain : public Entity
                {
                    public:
                        InterfaceBridgeDomain();
                        ~InterfaceBridgeDomain();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf bridge_domain_id_format; //type: CfmBagBdidFmtEnum
                        YLeaf group; //type: string
                        YLeaf name; //type: string
                        YLeaf ce_id; //type: uint16
                        YLeaf remote_ce_id; //type: uint16



                }; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain


                class SatelliteCapabilities : public Entity
                {
                    public:
                        SatelliteCapabilities();
                        ~SatelliteCapabilities();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Loopback : public Entity
                    {
                        public:
                            Loopback();
                            ~Loopback();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf responder; //type: boolean
                            YLeaf controller; //type: boolean



                    }; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback


                    class DelayMeasurement : public Entity
                    {
                        public:
                            DelayMeasurement();
                            ~DelayMeasurement();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf responder; //type: boolean
                            YLeaf controller; //type: boolean



                    }; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement


                    class SyntheticLossMeasurement : public Entity
                    {
                        public:
                            SyntheticLossMeasurement();
                            ~SyntheticLossMeasurement();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf responder; //type: boolean
                            YLeaf controller; //type: boolean



                    }; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement> delay_measurement;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback> loopback;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement> synthetic_loss_measurement;


                }; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities


                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain> interface_bridge_domain;
                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep> mep;
                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities> satellite_capabilities;
                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain> service_bridge_domain;


            }; // Cfm::Global::MepConfigurationErrors::MepConfigurationError


                std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError> > mep_configuration_error;


        }; // Cfm::Global::MepConfigurationErrors


        class TracerouteCaches : public Entity
        {
            public:
                TracerouteCaches();
                ~TracerouteCaches();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class TracerouteCache : public Entity
            {
                public:
                    TracerouteCache();
                    ~TracerouteCache();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf domain; //type: string
                    YLeaf service; //type: string
                    YLeaf mep_id; //type: uint32
                    YLeaf interface; //type: string
                    YLeaf transaction_id; //type: int32
                    YLeaf replies_dropped; //type: uint32

                class TracerouteInformation : public Entity
                {
                    public:
                        TracerouteInformation();
                        ~TracerouteInformation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf domain; //type: string
                        YLeaf service; //type: string
                        YLeaf level; //type: CfmBagMdLevelEnum
                        YLeaf source_mep_id; //type: uint16
                        YLeaf source_interface; //type: string
                        YLeaf source_mac_address; //type: string
                        YLeaf target_mac_address; //type: string
                        YLeaf directed_mac_address; //type: string
                        YLeaf target_mep_id; //type: uint16
                        YLeaf timestamp; //type: uint64
                        YLeaf ttl; //type: uint8
                        YLeaf transaction_id; //type: uint32

                    class Options : public Entity
                    {
                        public:
                            Options();
                            ~Options();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf mode; //type: CfmPmLtModeEnum

                        class BasicOptions : public Entity
                        {
                            public:
                                BasicOptions();
                                ~BasicOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf is_auto; //type: boolean
                                YLeaf fdb_only; //type: boolean



                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions


                        class ExploratoryOptions : public Entity
                        {
                            public:
                                ExploratoryOptions();
                                ~ExploratoryOptions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf delay_model; //type: CfmPmEltDelayModelEnum
                                YLeaf delay_constant_factor; //type: uint32
                                YLeaf reply_filter; //type: CfmPmElmReplyFilterEnum



                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions> basic_options;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions> exploratory_options;


                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options> options;


                }; // Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation


                class LinktraceReply : public Entity
                {
                    public:
                        LinktraceReply();
                        ~LinktraceReply();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf raw_data; //type: string

                    class Header : public Entity
                    {
                        public:
                            Header();
                            ~Header();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf level; //type: CfmBagMdLevelEnum
                            YLeaf version; //type: uint8
                            YLeaf use_fdb_only; //type: boolean
                            YLeaf forwarded; //type: boolean
                            YLeaf terminal_mep; //type: boolean
                            YLeaf transaction_id; //type: uint32
                            YLeaf ttl; //type: uint8
                            YLeaf relay_action; //type: CfmPmRelayActionEnum



                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header


                    class SenderId : public Entity
                    {
                        public:
                            SenderId();
                            ~SenderId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf management_address_domain; //type: string
                            YLeaf management_address; //type: string

                        class ChassisId : public Entity
                        {
                            public:
                                ChassisId();
                                ~ChassisId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf chassis_id_type; //type: CfmPmChassisIdFmtEnum
                                YLeaf chassis_id_type_value; //type: uint8
                                YLeaf chassis_id; //type: string

                            class ChassisIdValue : public Entity
                            {
                                public:
                                    ChassisIdValue();
                                    ~ChassisIdValue();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf chassis_id_format; //type: CfmPmIdFmtEnum
                                    YLeaf chassis_id_string; //type: string
                                    YLeaf chassis_id_mac; //type: string
                                    YLeaf chassis_id_raw; //type: string



                            }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue> chassis_id_value;


                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId> chassis_id;


                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId


                    class EgressId : public Entity
                    {
                        public:
                            EgressId();
                            ~EgressId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class LastEgressId : public Entity
                        {
                            public:
                                LastEgressId();
                                ~LastEgressId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf unique_id; //type: uint16
                                YLeaf mac_address; //type: string



                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId


                        class NextEgressId : public Entity
                        {
                            public:
                                NextEgressId();
                                ~NextEgressId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf unique_id; //type: uint16
                                YLeaf mac_address; //type: string



                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId> last_egress_id;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId> next_egress_id;


                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId


                    class ReplyIngress : public Entity
                    {
                        public:
                            ReplyIngress();
                            ~ReplyIngress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf action; //type: CfmPmIngressActionEnum
                            YLeaf mac_address; //type: string

                        class PortId : public Entity
                        {
                            public:
                                PortId();
                                ~PortId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf port_id_type; //type: CfmPmPortIdFmtEnum
                                YLeaf port_id_type_value; //type: uint8
                                YLeaf port_id; //type: string

                            class PortIdValue : public Entity
                            {
                                public:
                                    PortIdValue();
                                    ~PortIdValue();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf port_id_format; //type: CfmPmIdFmtEnum
                                    YLeaf port_id_string; //type: string
                                    YLeaf port_id_mac; //type: string
                                    YLeaf port_id_raw; //type: string



                            }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue> port_id_value;


                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId> port_id;


                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress


                    class ReplyEgress : public Entity
                    {
                        public:
                            ReplyEgress();
                            ~ReplyEgress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf action; //type: CfmPmEgressActionEnum
                            YLeaf mac_address; //type: string

                        class PortId : public Entity
                        {
                            public:
                                PortId();
                                ~PortId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf port_id_type; //type: CfmPmPortIdFmtEnum
                                YLeaf port_id_type_value; //type: uint8
                                YLeaf port_id; //type: string

                            class PortIdValue : public Entity
                            {
                                public:
                                    PortIdValue();
                                    ~PortIdValue();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf port_id_format; //type: CfmPmIdFmtEnum
                                    YLeaf port_id_string; //type: string
                                    YLeaf port_id_mac; //type: string
                                    YLeaf port_id_raw; //type: string



                            }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue> port_id_value;


                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId> port_id;


                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress


                    class LastHop : public Entity
                    {
                        public:
                            LastHop();
                            ~LastHop();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf last_hop_format; //type: CfmPmLastHopFmtEnum
                            YLeaf host_name; //type: string

                        class EgressId : public Entity
                        {
                            public:
                                EgressId();
                                ~EgressId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf unique_id; //type: uint16
                                YLeaf mac_address; //type: string



                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId> egress_id;


                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop


                    class OrganizationSpecificTlv : public Entity
                    {
                        public:
                            OrganizationSpecificTlv();
                            ~OrganizationSpecificTlv();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf oui; //type: string
                            YLeaf subtype; //type: uint8
                            YLeaf value_; //type: string



                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv


                    class UnknownTlv : public Entity
                    {
                        public:
                            UnknownTlv();
                            ~UnknownTlv();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf typecode; //type: uint8
                            YLeaf value_; //type: string



                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId> egress_id;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header> header;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop> last_hop;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv> > organization_specific_tlv;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress> reply_egress;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress> reply_ingress;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId> sender_id;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv> > unknown_tlv;


                }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply


                class ExploratoryLinktraceReply : public Entity
                {
                    public:
                        ExploratoryLinktraceReply();
                        ~ExploratoryLinktraceReply();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf raw_data; //type: string

                    class Header : public Entity
                    {
                        public:
                            Header();
                            ~Header();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf level; //type: CfmBagMdLevelEnum
                            YLeaf version; //type: uint8
                            YLeaf forwarded; //type: boolean
                            YLeaf terminal_mep; //type: boolean
                            YLeaf reply_filter_unknown; //type: boolean
                            YLeaf transaction_id; //type: uint32
                            YLeaf ttl; //type: uint8
                            YLeaf relay_action; //type: CfmPmElrRelayActionEnum
                            YLeaf next_hop_timeout; //type: uint32
                            YLeaf delay_model; //type: CfmPmEltDelayModelEnum



                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header


                    class SenderId : public Entity
                    {
                        public:
                            SenderId();
                            ~SenderId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf management_address_domain; //type: string
                            YLeaf management_address; //type: string

                        class ChassisId : public Entity
                        {
                            public:
                                ChassisId();
                                ~ChassisId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf chassis_id_type; //type: CfmPmChassisIdFmtEnum
                                YLeaf chassis_id_type_value; //type: uint8
                                YLeaf chassis_id; //type: string

                            class ChassisIdValue : public Entity
                            {
                                public:
                                    ChassisIdValue();
                                    ~ChassisIdValue();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf chassis_id_format; //type: CfmPmIdFmtEnum
                                    YLeaf chassis_id_string; //type: string
                                    YLeaf chassis_id_mac; //type: string
                                    YLeaf chassis_id_raw; //type: string



                            }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue> chassis_id_value;


                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId> chassis_id;


                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId


                    class ReplyIngress : public Entity
                    {
                        public:
                            ReplyIngress();
                            ~ReplyIngress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf action; //type: CfmPmElrIngressActionEnum
                            YLeaf mac_address; //type: string

                        class LastEgressId : public Entity
                        {
                            public:
                                LastEgressId();
                                ~LastEgressId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf unique_id; //type: uint16
                                YLeaf mac_address; //type: string



                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId


                        class NextEgressId : public Entity
                        {
                            public:
                                NextEgressId();
                                ~NextEgressId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf unique_id; //type: uint16
                                YLeaf mac_address; //type: string



                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId


                        class PortId : public Entity
                        {
                            public:
                                PortId();
                                ~PortId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf port_id_type; //type: CfmPmPortIdFmtEnum
                                YLeaf port_id_type_value; //type: uint8
                                YLeaf port_id; //type: string

                            class PortIdValue : public Entity
                            {
                                public:
                                    PortIdValue();
                                    ~PortIdValue();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf port_id_format; //type: CfmPmIdFmtEnum
                                    YLeaf port_id_string; //type: string
                                    YLeaf port_id_mac; //type: string
                                    YLeaf port_id_raw; //type: string



                            }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue> port_id_value;


                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId> last_egress_id;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId> next_egress_id;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId> port_id;


                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress


                    class ReplyEgress : public Entity
                    {
                        public:
                            ReplyEgress();
                            ~ReplyEgress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf action; //type: CfmPmElrEgressActionEnum
                            YLeaf mac_address; //type: string

                        class LastEgressId : public Entity
                        {
                            public:
                                LastEgressId();
                                ~LastEgressId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf unique_id; //type: uint16
                                YLeaf mac_address; //type: string



                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId


                        class NextEgressId : public Entity
                        {
                            public:
                                NextEgressId();
                                ~NextEgressId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf unique_id; //type: uint16
                                YLeaf mac_address; //type: string



                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId


                        class PortId : public Entity
                        {
                            public:
                                PortId();
                                ~PortId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf port_id_type; //type: CfmPmPortIdFmtEnum
                                YLeaf port_id_type_value; //type: uint8
                                YLeaf port_id; //type: string

                            class PortIdValue : public Entity
                            {
                                public:
                                    PortIdValue();
                                    ~PortIdValue();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf port_id_format; //type: CfmPmIdFmtEnum
                                    YLeaf port_id_string; //type: string
                                    YLeaf port_id_mac; //type: string
                                    YLeaf port_id_raw; //type: string



                            }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue> port_id_value;


                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId> last_egress_id;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId> next_egress_id;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId> port_id;


                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress


                    class LastHop : public Entity
                    {
                        public:
                            LastHop();
                            ~LastHop();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf last_hop_format; //type: CfmPmLastHopFmtEnum
                            YLeaf host_name; //type: string

                        class EgressId : public Entity
                        {
                            public:
                                EgressId();
                                ~EgressId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf unique_id; //type: uint16
                                YLeaf mac_address; //type: string



                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId> egress_id;


                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop


                    class OrganizationSpecificTlv : public Entity
                    {
                        public:
                            OrganizationSpecificTlv();
                            ~OrganizationSpecificTlv();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf oui; //type: string
                            YLeaf subtype; //type: uint8
                            YLeaf value_; //type: string



                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv


                    class UnknownTlv : public Entity
                    {
                        public:
                            UnknownTlv();
                            ~UnknownTlv();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf typecode; //type: uint8
                            YLeaf value_; //type: string



                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header> header;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop> last_hop;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv> > organization_specific_tlv;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress> reply_egress;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress> reply_ingress;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId> sender_id;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv> > unknown_tlv;


                }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply> > exploratory_linktrace_reply;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply> > linktrace_reply;
                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation> traceroute_information;


            }; // Cfm::Global::TracerouteCaches::TracerouteCache


                std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache> > traceroute_cache;


        }; // Cfm::Global::TracerouteCaches


        class LocalMeps : public Entity
        {
            public:
                LocalMeps();
                ~LocalMeps();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class LocalMep : public Entity
            {
                public:
                    LocalMep();
                    ~LocalMep();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf domain; //type: string
                    YLeaf service; //type: string
                    YLeaf mep_id; //type: uint32
                    YLeaf interface; //type: string
                    YLeaf domain_xr; //type: string
                    YLeaf service_xr; //type: string
                    YLeaf level; //type: CfmBagMdLevelEnum
                    YLeaf mep_id_xr; //type: uint16
                    YLeaf interface_xr; //type: string
                    YLeaf interface_state; //type: string
                    YLeaf interworking_state; //type: CfmBagIwStateEnum
                    YLeaf stp_state; //type: CfmBagStpStateEnum
                    YLeaf mep_direction; //type: CfmBagDirectionEnum
                    YLeaf mac_address; //type: string
                    YLeaf peer_meps_detected; //type: uint32
                    YLeaf peer_meps_with_errors_detected; //type: uint32
                    YLeaf remote_defect; //type: boolean
                    YLeaf fault_notification_state; //type: CfmPmMepFngStateEnum
                    YLeaf ccm_generation_enabled; //type: boolean
                    YLeaf ccm_interval; //type: CfmBagCcmIntervalEnum
                    YLeaf ccm_offload; //type: CfmBagCcmOffloadEnum
                    YLeaf highest_defect; //type: CfmPmMepDefectEnum
                    YLeaf rdi_defect; //type: boolean
                    YLeaf mac_status_defect; //type: boolean
                    YLeaf peer_mep_ccm_defect; //type: boolean
                    YLeaf error_ccm_defect; //type: boolean
                    YLeaf cross_connect_ccm_defect; //type: boolean
                    YLeaf next_lbm_id; //type: uint32
                    YLeaf next_ltm_id; //type: uint32
                    YLeaf cos; //type: uint8
                    YLeaf efd_triggered; //type: boolean
                    YLeaf standby; //type: boolean
                    YLeaf hairpin; //type: boolean
                    YLeaf defects_ignored; //type: boolean

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


                        YLeaf ccms_sent; //type: uint64
                        YLeaf ccms_received; //type: uint64
                        YLeaf ccms_out_of_sequence; //type: uint64
                        YLeaf ccms_discarded; //type: uint64
                        YLeaf lb_ms_sent; //type: uint64
                        YLeaf lb_rs_sent; //type: uint64
                        YLeaf lb_rs_received; //type: uint64
                        YLeaf lb_rs_out_of_sequence; //type: uint64
                        YLeaf lb_rs_bad_data; //type: uint64
                        YLeaf lb_ms_received; //type: uint64
                        YLeaf lt_rs_received_unexpected; //type: uint64
                        YLeaf ai_ss_sent; //type: uint64
                        YLeaf ai_ss_received; //type: uint64
                        YLeaf lc_ks_received; //type: uint64
                        YLeaf dm_ms_sent; //type: uint64
                        YLeaf dm_ms_received; //type: uint64
                        YLeaf dm_rs_sent; //type: uint64
                        YLeaf dm_rs_received; //type: uint64
                        YLeaf sl_ms_sent; //type: uint64
                        YLeaf sl_ms_received; //type: uint64
                        YLeaf sl_rs_sent; //type: uint64
                        YLeaf sl_rs_received; //type: uint64
                        YLeaf lm_ms_sent; //type: uint64
                        YLeaf lm_ms_received; //type: uint64
                        YLeaf lm_rs_sent; //type: uint64
                        YLeaf lm_rs_received; //type: uint64
                        YLeaf bn_ms_received; //type: uint64
                        YLeaf bn_ms_discarded; //type: uint64



                }; // Cfm::Global::LocalMeps::LocalMep::Statistics


                class AisStatistics : public Entity
                {
                    public:
                        AisStatistics();
                        ~AisStatistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf level; //type: CfmBagMdLevelEnum
                        YLeaf interval; //type: CfmBagAisIntervalEnum
                        YLeaf sending_ais; //type: CfmPmAisTransmitEnum
                        YLeaf receiving_ais; //type: CfmPmAisReceiveEnum
                        YLeaf last_interval; //type: CfmBagAisIntervalEnum
                        YLeaf last_mac_address; //type: string

                    class SendingStart : public Entity
                    {
                        public:
                            SendingStart();
                            ~SendingStart();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf seconds; //type: uint32
                            YLeaf nanoseconds; //type: uint32



                    }; // Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart


                    class ReceivingStart : public Entity
                    {
                        public:
                            ReceivingStart();
                            ~ReceivingStart();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf seconds; //type: uint32
                            YLeaf nanoseconds; //type: uint32



                    }; // Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart> receiving_start;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart> sending_start;


                }; // Cfm::Global::LocalMeps::LocalMep::AisStatistics


                class Defects : public Entity
                {
                    public:
                        Defects();
                        ~Defects();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf ais_received; //type: boolean
                        YLeaf peer_meps_that_timed_out; //type: uint32
                        YLeaf missing; //type: uint32
                        YLeaf auto_missing; //type: uint32
                        YLeaf unexpected; //type: uint32
                        YLeaf local_port_status; //type: boolean
                        YLeaf peer_port_status; //type: boolean

                    class RemoteMepsDefects : public Entity
                    {
                        public:
                            RemoteMepsDefects();
                            ~RemoteMepsDefects();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf loss_threshold_exceeded; //type: boolean
                            YLeaf invalid_level; //type: boolean
                            YLeaf invalid_maid; //type: boolean
                            YLeaf invalid_ccm_interval; //type: boolean
                            YLeaf received_our_mac; //type: boolean
                            YLeaf received_our_mep_id; //type: boolean
                            YLeaf received_rdi; //type: boolean



                    }; // Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects> remote_meps_defects;


                }; // Cfm::Global::LocalMeps::LocalMep::Defects


                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::AisStatistics> ais_statistics;
                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::Defects> defects;
                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::Statistics> statistics;


            }; // Cfm::Global::LocalMeps::LocalMep


                std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep> > local_mep;


        }; // Cfm::Global::LocalMeps


        class PeerMePv2S : public Entity
        {
            public:
                PeerMePv2S();
                ~PeerMePv2S();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class PeerMePv2 : public Entity
            {
                public:
                    PeerMePv2();
                    ~PeerMePv2();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf domain; //type: string
                    YLeaf service; //type: string
                    YLeaf local_mep_id; //type: uint32
                    YLeaf interface; //type: string
                    YLeaf peer_mep_id; //type: uint32
                    YLeaf peer_mac_address; //type: string
                    YLeaf domain_xr; //type: string
                    YLeaf service_xr; //type: string
                    YLeaf level; //type: CfmBagMdLevelEnum
                    YLeaf mep_id; //type: uint16
                    YLeaf interface_xr; //type: string
                    YLeaf mep_direction; //type: CfmBagDirectionEnum
                    YLeaf standby; //type: boolean

                class PeerMep : public Entity
                {
                    public:
                        PeerMep();
                        ~PeerMep();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf mep_id; //type: uint16
                        YLeaf mac_address; //type: string
                        YLeaf cross_check_state; //type: CfmPmRmepXcStateEnum
                        YLeaf peer_mep_state; //type: CfmPmRmepStateEnum
                        YLeaf ccm_offload; //type: CfmBagCcmOffloadEnum

                    class ErrorState : public Entity
                    {
                        public:
                            ErrorState();
                            ~ErrorState();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf loss_threshold_exceeded; //type: boolean
                            YLeaf invalid_level; //type: boolean
                            YLeaf invalid_maid; //type: boolean
                            YLeaf invalid_ccm_interval; //type: boolean
                            YLeaf received_our_mac; //type: boolean
                            YLeaf received_our_mep_id; //type: boolean
                            YLeaf received_rdi; //type: boolean



                    }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState


                    class LastUpDownTime : public Entity
                    {
                        public:
                            LastUpDownTime();
                            ~LastUpDownTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf seconds; //type: uint32
                            YLeaf nanoseconds; //type: uint32



                    }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime


                    class LastCcmReceived : public Entity
                    {
                        public:
                            LastCcmReceived();
                            ~LastCcmReceived();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf port_status; //type: CfmPmPortStatusEnum
                            YLeaf interface_status; //type: CfmPmIntfStatusEnum
                            YLeaf additional_interface_status; //type: CfmPmAddlIntfStatusEnum
                            YLeaf raw_data; //type: string

                        class Header : public Entity
                        {
                            public:
                                Header();
                                ~Header();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf level; //type: CfmBagMdLevelEnum
                                YLeaf version; //type: uint8
                                YLeaf interval; //type: CfmBagCcmIntervalEnum
                                YLeaf rdi; //type: boolean
                                YLeaf sequence_number; //type: uint32
                                YLeaf mep_id; //type: uint16
                                YLeaf mdid_format; //type: uint8
                                YLeaf short_ma_name_format; //type: uint8

                            class Mdid : public Entity
                            {
                                public:
                                    Mdid();
                                    ~Mdid();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf mdid_format_value; //type: CfmBagMdidFmtEnum
                                    YLeaf dns_like_name; //type: string
                                    YLeaf string_name; //type: string
                                    YLeaf mdid_data; //type: string

                                class MacName : public Entity
                                {
                                    public:
                                        MacName();
                                        ~MacName();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf mac_address; //type: string
                                        YLeaf integer; //type: uint16



                                }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName


                                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName> mac_name;


                            }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid


                            class ShortMaName : public Entity
                            {
                                public:
                                    ShortMaName();
                                    ~ShortMaName();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf short_ma_name_format_value; //type: CfmBagSmanFmtEnum
                                    YLeaf vlan_id_name; //type: uint16
                                    YLeaf string_name; //type: string
                                    YLeaf integer_name; //type: uint16
                                    YLeaf icc_based; //type: string
                                    YLeaf short_ma_name_data; //type: string

                                class VpnIdName : public Entity
                                {
                                    public:
                                        VpnIdName();
                                        ~VpnIdName();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf oui; //type: uint32
                                        YLeaf index_; //type: uint32



                                }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName


                                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName> vpn_id_name;


                            }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid> mdid;
                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName> short_ma_name;


                        }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header


                        class SenderId : public Entity
                        {
                            public:
                                SenderId();
                                ~SenderId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf management_address_domain; //type: string
                                YLeaf management_address; //type: string

                            class ChassisId : public Entity
                            {
                                public:
                                    ChassisId();
                                    ~ChassisId();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf chassis_id_type; //type: CfmPmChassisIdFmtEnum
                                    YLeaf chassis_id_type_value; //type: uint8
                                    YLeaf chassis_id; //type: string

                                class ChassisIdValue : public Entity
                                {
                                    public:
                                        ChassisIdValue();
                                        ~ChassisIdValue();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf chassis_id_format; //type: CfmPmIdFmtEnum
                                        YLeaf chassis_id_string; //type: string
                                        YLeaf chassis_id_mac; //type: string
                                        YLeaf chassis_id_raw; //type: string



                                }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue


                                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue> chassis_id_value;


                            }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId> chassis_id;


                        }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId


                        class MepName : public Entity
                        {
                            public:
                                MepName();
                                ~MepName();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf name; //type: string



                        }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName


                        class OrganizationSpecificTlv : public Entity
                        {
                            public:
                                OrganizationSpecificTlv();
                                ~OrganizationSpecificTlv();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf oui; //type: string
                                YLeaf subtype; //type: uint8
                                YLeaf value_; //type: string



                        }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv


                        class UnknownTlv : public Entity
                        {
                            public:
                                UnknownTlv();
                                ~UnknownTlv();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf typecode; //type: uint8
                                YLeaf value_; //type: string



                        }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header> header;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName> mep_name;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv> > organization_specific_tlv;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId> sender_id;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv> > unknown_tlv;


                    }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived


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


                            YLeaf ccms_received; //type: uint64
                            YLeaf ccms_wrong_level; //type: uint64
                            YLeaf ccms_invalid_maid; //type: uint64
                            YLeaf ccms_invalid_interval; //type: uint64
                            YLeaf ccms_invalid_source_mac_address; //type: uint64
                            YLeaf ccms_our_mep_id; //type: uint64
                            YLeaf ccms_rdi; //type: uint64
                            YLeaf ccms_out_of_sequence; //type: uint64
                            YLeaf last_ccm_sequence_number; //type: uint32

                        class LastCcmReceivedTime : public Entity
                        {
                            public:
                                LastCcmReceivedTime();
                                ~LastCcmReceivedTime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf seconds; //type: uint32
                                YLeaf nanoseconds; //type: uint32



                        }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime> last_ccm_received_time;


                    }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState> error_state;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived> last_ccm_received;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime> last_up_down_time;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics> statistics;


                }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep


                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep> peer_mep;


            }; // Cfm::Global::PeerMePv2S::PeerMePv2


                std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2> > peer_me_pv2;


        }; // Cfm::Global::PeerMePv2S


            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::GlobalConfigurationErrors> global_configuration_errors;
            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes> incomplete_traceroutes;
            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps> local_meps;
            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MaintenancePoints> maintenance_points;
            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors> mep_configuration_errors;
            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S> peer_me_pv2s;
            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches> traceroute_caches;


    }; // Cfm::Global


        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global> global;
        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes> nodes;


}; // Cfm


class CfmPmElrIngressActionEnum : public Enum
{
    public:
        static const Enum::YLeaf elr_ingress_ok;
        static const Enum::YLeaf elr_ingress_down;
        static const Enum::YLeaf elr_ingress_blocked;
        static const Enum::YLeaf elr_ingress_vid;

};

class CfmPmRelayActionEnum : public Enum
{
    public:
        static const Enum::YLeaf relay_hit;
        static const Enum::YLeaf relay_fdb;
        static const Enum::YLeaf relay_mpdb;

};

class CfmBagSmanFmtEnum : public Enum
{
    public:
        static const Enum::YLeaf sman_vlan_id;
        static const Enum::YLeaf sman_string;
        static const Enum::YLeaf sman_uint16;
        static const Enum::YLeaf sman_vpn_id;
        static const Enum::YLeaf sman_icc;
        static const Enum::YLeaf sman_unknown;

};

class CfmBagDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf direction_up;
        static const Enum::YLeaf direction_down;
        static const Enum::YLeaf direction_invalid;

};

class CfmPmIngressActionEnum : public Enum
{
    public:
        static const Enum::YLeaf ingress_ok;
        static const Enum::YLeaf ingress_down;
        static const Enum::YLeaf ingress_blocked;
        static const Enum::YLeaf ingress_vid;

};

class CfmBagCcmIntervalEnum : public Enum
{
    public:
        static const Enum::YLeaf interval_none;
        static const Enum::YLeaf interval3_3ms;
        static const Enum::YLeaf interval10ms;
        static const Enum::YLeaf interval100ms;
        static const Enum::YLeaf interval1s;
        static const Enum::YLeaf interval10s;
        static const Enum::YLeaf interval1m;
        static const Enum::YLeaf interval10m;

};

class CfmPmElrEgressActionEnum : public Enum
{
    public:
        static const Enum::YLeaf elr_egress_ok;
        static const Enum::YLeaf elr_egress_down;
        static const Enum::YLeaf elr_egress_blocked;
        static const Enum::YLeaf elr_egress_vid;
        static const Enum::YLeaf elr_egress_mac;

};

class CfmPmChassisIdFmtEnum : public Enum
{
    public:
        static const Enum::YLeaf chassis_id_chassis_component;
        static const Enum::YLeaf chassis_id_interface_alias;
        static const Enum::YLeaf chassis_id_port_component;
        static const Enum::YLeaf chassis_id_mac_address;
        static const Enum::YLeaf chassis_id_network_address;
        static const Enum::YLeaf chassis_id_interface_name;
        static const Enum::YLeaf chassis_id_local;
        static const Enum::YLeaf chassis_id_unknown_type;

};

class CfmPmMepFngStateEnum : public Enum
{
    public:
        static const Enum::YLeaf fng_reset;
        static const Enum::YLeaf fng_defect;
        static const Enum::YLeaf fng_report_defect;
        static const Enum::YLeaf fng_defect_reported;
        static const Enum::YLeaf fng_defect_clearing;

};

class CfmPmLastHopFmtEnum : public Enum
{
    public:
        static const Enum::YLeaf last_hop_none;
        static const Enum::YLeaf last_hop_host_name;
        static const Enum::YLeaf last_hop_egress_id;

};

class CfmPmIdFmtEnum : public Enum
{
    public:
        static const Enum::YLeaf id_format_is_string;
        static const Enum::YLeaf id_format_is_mac_address;
        static const Enum::YLeaf id_format_is_raw_hex;

};

class CfmPmRmepStateEnum : public Enum
{
    public:
        static const Enum::YLeaf peer_mep_idle;
        static const Enum::YLeaf peer_mep_start;
        static const Enum::YLeaf peer_mep_failed;
        static const Enum::YLeaf peer_mep_ok;

};

class CfmBagCcmOffloadEnum : public Enum
{
    public:
        static const Enum::YLeaf offload_none;
        static const Enum::YLeaf offload_software;
        static const Enum::YLeaf offload_hardware;

};

class CfmPmAisReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf receive_none;
        static const Enum::YLeaf receive_ais;
        static const Enum::YLeaf receive_lck;
        static const Enum::YLeaf receive_direct;

};

class CfmMaMpVarietyEnum : public Enum
{
    public:
        static const Enum::YLeaf mip;
        static const Enum::YLeaf up_mep;
        static const Enum::YLeaf downmep;
        static const Enum::YLeaf unknown_mep;

};

class CfmPmPktActionEnum : public Enum
{
    public:
        static const Enum::YLeaf packet_processed;
        static const Enum::YLeaf packet_forwarded;
        static const Enum::YLeaf unknown_opcode;
        static const Enum::YLeaf filter_level;
        static const Enum::YLeaf filter_blocked;
        static const Enum::YLeaf filter_local_mac;
        static const Enum::YLeaf malformed_ccm_size;
        static const Enum::YLeaf malformed_ccm_mep_id;
        static const Enum::YLeaf malformed_too_short;
        static const Enum::YLeaf malformed_destination_mac_unicast;
        static const Enum::YLeaf malformed_destination_mac_multicast;
        static const Enum::YLeaf malformed_tlv_offset;
        static const Enum::YLeaf malformed_lbm_source_mac;
        static const Enum::YLeaf malformed_ltr_relay_action;
        static const Enum::YLeaf malformed_ltr_reply_tlv;
        static const Enum::YLeaf malformed_lt_origin;
        static const Enum::YLeaf malformed_ltm_target;
        static const Enum::YLeaf malformed_source_mac;
        static const Enum::YLeaf malformed_header_too_short;
        static const Enum::YLeaf malformed_tlv_header_overrun;
        static const Enum::YLeaf malformed_tlv_overrun;
        static const Enum::YLeaf malformed_duplicate_sender_id;
        static const Enum::YLeaf malformed_duplicate_port_status;
        static const Enum::YLeaf malformed_duplicate_interface_status;
        static const Enum::YLeaf malformed_wrong_tlv;
        static const Enum::YLeaf malformed_duplicate_data;
        static const Enum::YLeaf malformed_duplicate_ltr_egress_id;
        static const Enum::YLeaf malformed_duplicate_reply_ingress;
        static const Enum::YLeaf malformed_duplicate_reply_egress;
        static const Enum::YLeaf malformed_duplicate_ltm_egress_id;
        static const Enum::YLeaf malformed_sender_id_size;
        static const Enum::YLeaf malformed_chassis_id_size;
        static const Enum::YLeaf malformed_mgmt_address_domain_size;
        static const Enum::YLeaf malformed_mgmt_address_size;
        static const Enum::YLeaf malformed_port_status_size;
        static const Enum::YLeaf malformed_port_status;
        static const Enum::YLeaf malformed_interface_status_size;
        static const Enum::YLeaf malformed_interface_status;
        static const Enum::YLeaf malformed_organization_specific_tlv_size;
        static const Enum::YLeaf malformed_duplicate_mep_name;
        static const Enum::YLeaf malformed_duplicate_additional_interface_status;
        static const Enum::YLeaf malformed_ltr_egress_id_size;
        static const Enum::YLeaf malformed_reply_ingress_size;
        static const Enum::YLeaf malformed_ingress_action;
        static const Enum::YLeaf malformed_reply_ingress_mac;
        static const Enum::YLeaf malformed_ingress_port_length_size;
        static const Enum::YLeaf malformed_ingress_port_id_length;
        static const Enum::YLeaf malformed_ingress_port_id_size;
        static const Enum::YLeaf malformed_reply_egress_size;
        static const Enum::YLeaf malformed_egress_action;
        static const Enum::YLeaf malformed_reply_egress_mac;
        static const Enum::YLeaf malformed_egress_port_length_size;
        static const Enum::YLeaf malformed_egress_port_id_length;
        static const Enum::YLeaf malformed_egress_port_id_size;
        static const Enum::YLeaf malformed_ltm_egress_id_size;
        static const Enum::YLeaf malformed_mep_name_size;
        static const Enum::YLeaf malformed_mep_name_name_length;
        static const Enum::YLeaf malformed_additional_interface_status_size;
        static const Enum::YLeaf malformed_additional_interface_status;
        static const Enum::YLeaf malformed_ccm_interval;
        static const Enum::YLeaf malformed_mdid_mac_address_length;
        static const Enum::YLeaf malformed_mdid_length;
        static const Enum::YLeaf malformed_sman_length;
        static const Enum::YLeaf malformed_sman2_byte_length;
        static const Enum::YLeaf malformed_sman_vpn_id_length;
        static const Enum::YLeaf malformed_elr_no_reply_tlv;
        static const Enum::YLeaf malformed_separate_elr_reply_egress;
        static const Enum::YLeaf malformed_dcm_destination_multicast;
        static const Enum::YLeaf malformed_dcm_embed_length;
        static const Enum::YLeaf malformed_dcm_embed_level;
        static const Enum::YLeaf malformed_dcm_embed_version;
        static const Enum::YLeaf malformed_elr_relay_action;
        static const Enum::YLeaf malformed_elr_tt_ls;
        static const Enum::YLeaf malformed_elr_ttl_ingress;
        static const Enum::YLeaf malformed_elr_ttl_egress;
        static const Enum::YLeaf malformed_elm_destination_unicast;
        static const Enum::YLeaf malformed_elm_egress_id;
        static const Enum::YLeaf malformed_dcm_embed_oui;
        static const Enum::YLeaf malformed_dcm_embed_opcode;
        static const Enum::YLeaf malformed_elm_constant_zero;
        static const Enum::YLeaf malformed_elr_timeout_zero;
        static const Enum::YLeaf malformed_duplicate_test;
        static const Enum::YLeaf malformed_dmm_source_mac;
        static const Enum::YLeaf malformed_test_size;
        static const Enum::YLeaf malformed_dmr_time_stamps;
        static const Enum::YLeaf malformed_dm_time_stamp_fmt;
        static const Enum::YLeaf malformed_ais_interval;
        static const Enum::YLeaf filter_interface_down;
        static const Enum::YLeaf filter_forward_standby;
        static const Enum::YLeaf malformed_sman_icc_based_length;
        static const Enum::YLeaf filter_foward_issu_secondary;
        static const Enum::YLeaf filter_response_standby;
        static const Enum::YLeaf filter_response_issu_secondary;

};

class CfmBagIssuRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf primary;
        static const Enum::YLeaf secondary;

};

class CfmPmEltDelayModelEnum : public Enum
{
    public:
        static const Enum::YLeaf delay_model_invalid;
        static const Enum::YLeaf delay_model_logarithmic;
        static const Enum::YLeaf delay_model_constant;

};

class CfmPmAisTransmitEnum : public Enum
{
    public:
        static const Enum::YLeaf transmit_none;
        static const Enum::YLeaf transmit_ais;
        static const Enum::YLeaf transmit_ais_direct;

};

class CfmPmElrRelayActionEnum : public Enum
{
    public:
        static const Enum::YLeaf elr_relay_hit;
        static const Enum::YLeaf elr_relay_fdb;
        static const Enum::YLeaf elr_relay_flood;
        static const Enum::YLeaf elr_relay_drop;

};

class CfmPmPortStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf port_status_blocked;
        static const Enum::YLeaf port_status_up;
        static const Enum::YLeaf port_status_unknown;

};

class CfmBagIwStateEnum : public Enum
{
    public:
        static const Enum::YLeaf interworking_up;
        static const Enum::YLeaf interworking_test;

};

class CfmBagMdidFmtEnum : public Enum
{
    public:
        static const Enum::YLeaf mdid_null;
        static const Enum::YLeaf mdid_dns_like;
        static const Enum::YLeaf mdid_mac_address;
        static const Enum::YLeaf mdid_string;
        static const Enum::YLeaf mdid_unknown;

};

class CfmBagBdidFmtEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf bd_id;
        static const Enum::YLeaf xc_p2p_id;
        static const Enum::YLeaf xc_mp2mp_id;
        static const Enum::YLeaf down_only;

};

class SlaBucketSizeEnum : public Enum
{
    public:
        static const Enum::YLeaf buckets_per_probe;
        static const Enum::YLeaf probes_per_bucket;

};

class CfmBagStpStateEnum : public Enum
{
    public:
        static const Enum::YLeaf stp_up;
        static const Enum::YLeaf stp_blocked;
        static const Enum::YLeaf stp_unknown;

};

class CfmBagMdLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level0;
        static const Enum::YLeaf level1;
        static const Enum::YLeaf level2;
        static const Enum::YLeaf level3;
        static const Enum::YLeaf level4;
        static const Enum::YLeaf level5;
        static const Enum::YLeaf level6;
        static const Enum::YLeaf level7;
        static const Enum::YLeaf level_invalid;

};

class SlaOperPacketPriorityEnum : public Enum
{
    public:
        static const Enum::YLeaf priority_none;
        static const Enum::YLeaf priority_cos;

};

class CfmBagAisIntervalEnum : public Enum
{
    public:
        static const Enum::YLeaf ais_interval_none;
        static const Enum::YLeaf ais_interval1s;
        static const Enum::YLeaf ais_interval1m;

};

class CfmPmRmepXcStateEnum : public Enum
{
    public:
        static const Enum::YLeaf cross_check_ok;
        static const Enum::YLeaf cross_check_missing;
        static const Enum::YLeaf cross_check_extra;

};

class CfmPmLtModeEnum : public Enum
{
    public:
        static const Enum::YLeaf cfm_pm_lt_mode_basic;
        static const Enum::YLeaf cfm_pm_lt_mode_exploratory;

};

class CfmPmIntfStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf interface_status_up;
        static const Enum::YLeaf interface_status_down;
        static const Enum::YLeaf interface_status_testing;
        static const Enum::YLeaf interface_status_unknown;
        static const Enum::YLeaf interface_status_dormant;
        static const Enum::YLeaf interface_status_not_present;
        static const Enum::YLeaf interface_status_lower_layer_down;

};

class CfmPmMepDefectEnum : public Enum
{
    public:
        static const Enum::YLeaf defect_none;
        static const Enum::YLeaf defect_rdi_ccm;
        static const Enum::YLeaf defect_ma_cstatus;
        static const Enum::YLeaf defect_remote_ccm;
        static const Enum::YLeaf defect_error_ccm;
        static const Enum::YLeaf defect_cross_connect_ccm;

};

class CfmPmEgressActionEnum : public Enum
{
    public:
        static const Enum::YLeaf egress_ok;
        static const Enum::YLeaf egress_down;
        static const Enum::YLeaf egress_blocked;
        static const Enum::YLeaf egress_vid;

};

class CfmPmElmReplyFilterEnum : public Enum
{
    public:
        static const Enum::YLeaf reply_filter_not_present;
        static const Enum::YLeaf reply_filter_default;
        static const Enum::YLeaf reply_filter_vlan_topology;
        static const Enum::YLeaf reply_filter_spanning_tree;
        static const Enum::YLeaf reply_filter_all_ports;

};

class CfmAisDirEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;

};

class CfmPmAddlIntfStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf administratively_down;
        static const Enum::YLeaf remote_excessive_errors;
        static const Enum::YLeaf local_excessive_errors;

};

class CfmBagOpcodeEnum : public Enum
{
    public:
        static const Enum::YLeaf reserved;
        static const Enum::YLeaf ccm;
        static const Enum::YLeaf lbr;
        static const Enum::YLeaf lbm;
        static const Enum::YLeaf ltr;
        static const Enum::YLeaf ltm;

};

class SlaOperTestPatternSchemeEnum : public Enum
{
    public:
        static const Enum::YLeaf hex;
        static const Enum::YLeaf pseudo_random;

};

class SlaOperOperationEnum : public Enum
{
    public:
        static const Enum::YLeaf operation_type_configured;
        static const Enum::YLeaf operation_type_ondemand;

};

class CfmPmPortIdFmtEnum : public Enum
{
    public:
        static const Enum::YLeaf port_id_interface_alias;
        static const Enum::YLeaf port_id_port_component;
        static const Enum::YLeaf port_id_mac_address;
        static const Enum::YLeaf port_id_network_address;
        static const Enum::YLeaf port_id_interface_name;
        static const Enum::YLeaf port_id_agent_circuit_id;
        static const Enum::YLeaf port_id_local;
        static const Enum::YLeaf port_id_unknown;

};

class SlaOperBucketEnum : public Enum
{
    public:
        static const Enum::YLeaf bucket_type_bins;
        static const Enum::YLeaf bucket_type_samples;

};

class SlaRecordableMetricEnum : public Enum
{
    public:
        static const Enum::YLeaf metric_invalid;
        static const Enum::YLeaf metric_round_trip_delay;
        static const Enum::YLeaf metric_one_way_delay_sd;
        static const Enum::YLeaf metric_one_way_delay_ds;
        static const Enum::YLeaf metric_round_trip_jitter;
        static const Enum::YLeaf metric_one_way_jitter_sd;
        static const Enum::YLeaf metric_one_way_jitter_ds;
        static const Enum::YLeaf metric_one_way_flr_sd;
        static const Enum::YLeaf metric_one_way_flr_ds;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_CFM_OPER_ */

