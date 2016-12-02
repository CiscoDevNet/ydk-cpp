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
                Value node; //type: string


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
                        Value interface_name; //type: string
                        Value direction; //type: CfmAisDirEnum
                        Value interface; //type: string
                        Value interface_state; //type: string
                        Value interworking_state; //type: CfmBagIwStateEnum
                        Value stp_state; //type: CfmBagStpStateEnum


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
                            Value direction; //type: CfmBagDirectionEnum
                            Value lowest_level; //type: CfmBagMdLevelEnum
                            Value transmission_level; //type: CfmBagMdLevelEnum
                            Value transmission_interval; //type: CfmBagAisIntervalEnum
                            Value sent_packets; //type: uint32
                            ValueList via_level; //type: list of  CfmBagMdLevelEnum


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
                                Value ais_received; //type: boolean
                                Value peer_meps_that_timed_out; //type: uint32
                                Value missing; //type: uint32
                                Value auto_missing; //type: uint32
                                Value unexpected; //type: uint32
                                Value local_port_status; //type: boolean
                                Value peer_port_status; //type: boolean


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
                                    Value loss_threshold_exceeded; //type: boolean
                                    Value invalid_level; //type: boolean
                                    Value invalid_maid; //type: boolean
                                    Value invalid_ccm_interval; //type: boolean
                                    Value received_our_mac; //type: boolean
                                    Value received_our_mep_id; //type: boolean
                                    Value received_rdi; //type: boolean




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
                                Value seconds; //type: uint32
                                Value nanoseconds; //type: uint32




                        }; // Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects> defects;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted> last_started;
                            class CfmBagDirectionEnum;
                            class CfmBagMdLevelEnum;
                            class CfmBagAisIntervalEnum;
                            class CfmBagMdLevelEnum;
                            class CfmBagMdLevelEnum;


                    }; // Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics> statistics;
                        class CfmAisDirEnum;
                        class CfmBagIwStateEnum;
                        class CfmBagStpStateEnum;


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
                        Value interface; //type: string
                        Value interface_xr; //type: string


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
                            Value malformed_packets; //type: uint64
                            Value dropped_packets; //type: uint64
                            Value last_malformed_opcode; //type: CfmBagOpcodeEnum
                            Value last_malformed_reason; //type: CfmPmPktActionEnum


                            class CfmBagOpcodeEnum;
                            class CfmPmPktActionEnum;


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
                    Value domains; //type: uint32
                    Value services; //type: uint32
                    Value ccm_rate; //type: uint32
                    Value local_meps; //type: uint32
                    Value operational_local_meps; //type: uint32
                    Value down_meps; //type: uint32
                    Value up_meps; //type: uint32
                    Value offloaded; //type: uint32
                    Value offloaded_at3_3ms; //type: uint32
                    Value offloaded_at10ms; //type: uint32
                    Value disabled_misconfigured; //type: uint32
                    Value disabled_out_of_resources; //type: uint32
                    Value disabled_operational_error; //type: uint32
                    Value peer_meps; //type: uint32
                    Value operational_peer_meps; //type: uint32
                    Value peer_meps_with_defects; //type: uint32
                    Value peer_meps_without_defects; //type: uint32
                    Value peer_meps_timed_out; //type: uint32
                    Value mips; //type: uint32
                    Value interfaces; //type: uint32
                    Value bridge_domains_and_xconnects; //type: uint32
                    Value traceroute_cache_entries; //type: uint32
                    Value traceroute_cache_replies; //type: uint32
                    Value ccm_learning_db_entries; //type: uint32
                    Value issu_role; //type: CfmBagIssuRoleEnum
                    Value bnm_enabled_links; //type: uint32


                    class CfmBagIssuRoleEnum;


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
                        Value domain; //type: string
                        Value service; //type: string
                        Value mac_address; //type: string
                        Value domain_xr; //type: string
                        Value level; //type: CfmBagMdLevelEnum
                        Value service_xr; //type: string
                        Value source_mac_address; //type: string
                        Value ingress_interface; //type: uint32
                        Value stale; //type: boolean
                        Value ingress_interface_string; //type: string


                        class CfmBagMdLevelEnum;


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
                    Value domain; //type: string
                    Value service; //type: string
                    Value mep_id; //type: uint32
                    Value interface; //type: string
                    Value transaction_id; //type: int32
                    Value time_left; //type: uint64


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
                        Value domain; //type: string
                        Value service; //type: string
                        Value level; //type: CfmBagMdLevelEnum
                        Value source_mep_id; //type: uint16
                        Value source_interface; //type: string
                        Value source_mac_address; //type: string
                        Value target_mac_address; //type: string
                        Value directed_mac_address; //type: string
                        Value target_mep_id; //type: uint16
                        Value timestamp; //type: uint64
                        Value ttl; //type: uint8
                        Value transaction_id; //type: uint32


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
                            Value mode; //type: CfmPmLtModeEnum


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
                                Value is_auto; //type: boolean
                                Value fdb_only; //type: boolean




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
                                Value delay_model; //type: CfmPmEltDelayModelEnum
                                Value delay_constant_factor; //type: uint32
                                Value reply_filter; //type: CfmPmElmReplyFilterEnum


                                class CfmPmEltDelayModelEnum;
                                class CfmPmElmReplyFilterEnum;


                        }; // Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions> basic_options;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions> exploratory_options;
                            class CfmPmLtModeEnum;


                    }; // Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options> options;
                        class CfmBagMdLevelEnum;


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
                    Value domain; //type: string
                    Value service; //type: string
                    Value interface; //type: string
                    Value mep_has_error; //type: boolean
                    Value mac_address; //type: string


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
                        Value domain_name; //type: string
                        Value level; //type: CfmBagMdLevelEnum
                        Value service_name; //type: string
                        Value interface; //type: string
                        Value maintenance_point_type; //type: CfmMaMpVarietyEnum
                        Value mep_id; //type: uint16


                        class CfmBagMdLevelEnum;
                        class CfmMaMpVarietyEnum;


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
                    Value domain; //type: string
                    Value service; //type: string
                    Value domain_name; //type: string
                    Value level; //type: CfmBagMdLevelEnum
                    Value service_name; //type: string
                    Value bridge_domain_is_configured; //type: boolean
                    Value l2_fib_download_error; //type: boolean


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
                        Value bridge_domain_id_format; //type: CfmBagBdidFmtEnum
                        Value group; //type: string
                        Value name; //type: string
                        Value ce_id; //type: uint16
                        Value remote_ce_id; //type: uint16


                        class CfmBagBdidFmtEnum;


                }; // Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId


                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId> bridge_domain_id;
                    class CfmBagMdLevelEnum;


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
                    Value domain; //type: string
                    Value service; //type: string
                    Value interface; //type: string
                    Value ccm_interval; //type: CfmBagCcmIntervalEnum
                    Value no_domain; //type: boolean
                    Value no_service; //type: boolean
                    Value bridge_domain_mismatch; //type: boolean
                    Value level_conflict; //type: boolean
                    Value ccm_interval_not_supported; //type: boolean
                    Value offload_out_of_resources; //type: boolean
                    Value offload_multiple_local_mep; //type: boolean
                    Value offload_no_cross_check; //type: boolean
                    Value offload_multiple_peer_meps; //type: boolean
                    Value offload_mep_direction_not_supported; //type: boolean
                    Value ais_configured; //type: boolean
                    Value bundle_level0; //type: boolean
                    Value bridge_domain_not_in_bd_infra; //type: boolean
                    Value satellite_limitation; //type: boolean
                    Value sla_loopback_operations_disabled; //type: boolean
                    Value sla_synthetic_loss_operations_disabled; //type: boolean
                    Value sla_delay_measurement_operations_disabled; //type: boolean
                    Value no_valid_mac_address; //type: boolean
                    Value no_interface_type; //type: boolean
                    Value not_in_im; //type: boolean
                    Value no_mlacp; //type: boolean
                    Value satellite_error_string; //type: string
                    Value satellite_id; //type: uint16


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
                        Value domain_name; //type: string
                        Value level; //type: CfmBagMdLevelEnum
                        Value service_name; //type: string
                        Value interface; //type: string
                        Value maintenance_point_type; //type: CfmMaMpVarietyEnum
                        Value mep_id; //type: uint16


                        class CfmBagMdLevelEnum;
                        class CfmMaMpVarietyEnum;


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
                        Value bridge_domain_id_format; //type: CfmBagBdidFmtEnum
                        Value group; //type: string
                        Value name; //type: string
                        Value ce_id; //type: uint16
                        Value remote_ce_id; //type: uint16


                        class CfmBagBdidFmtEnum;


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
                        Value bridge_domain_id_format; //type: CfmBagBdidFmtEnum
                        Value group; //type: string
                        Value name; //type: string
                        Value ce_id; //type: uint16
                        Value remote_ce_id; //type: uint16


                        class CfmBagBdidFmtEnum;


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
                            Value responder; //type: boolean
                            Value controller; //type: boolean




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
                            Value responder; //type: boolean
                            Value controller; //type: boolean




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
                            Value responder; //type: boolean
                            Value controller; //type: boolean




                    }; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement> delay_measurement;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback> loopback;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement> synthetic_loss_measurement;


                }; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities


                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain> interface_bridge_domain;
                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep> mep;
                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities> satellite_capabilities;
                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain> service_bridge_domain;
                    class CfmBagCcmIntervalEnum;


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
                    Value domain; //type: string
                    Value service; //type: string
                    Value mep_id; //type: uint32
                    Value interface; //type: string
                    Value transaction_id; //type: int32
                    Value replies_dropped; //type: uint32


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
                        Value domain; //type: string
                        Value service; //type: string
                        Value level; //type: CfmBagMdLevelEnum
                        Value source_mep_id; //type: uint16
                        Value source_interface; //type: string
                        Value source_mac_address; //type: string
                        Value target_mac_address; //type: string
                        Value directed_mac_address; //type: string
                        Value target_mep_id; //type: uint16
                        Value timestamp; //type: uint64
                        Value ttl; //type: uint8
                        Value transaction_id; //type: uint32


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
                            Value mode; //type: CfmPmLtModeEnum


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
                                Value is_auto; //type: boolean
                                Value fdb_only; //type: boolean




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
                                Value delay_model; //type: CfmPmEltDelayModelEnum
                                Value delay_constant_factor; //type: uint32
                                Value reply_filter; //type: CfmPmElmReplyFilterEnum


                                class CfmPmEltDelayModelEnum;
                                class CfmPmElmReplyFilterEnum;


                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions> basic_options;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions> exploratory_options;
                            class CfmPmLtModeEnum;


                    }; // Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options> options;
                        class CfmBagMdLevelEnum;


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
                        Value raw_data; //type: string


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
                            Value level; //type: CfmBagMdLevelEnum
                            Value version; //type: uint8
                            Value use_fdb_only; //type: boolean
                            Value forwarded; //type: boolean
                            Value terminal_mep; //type: boolean
                            Value transaction_id; //type: uint32
                            Value ttl; //type: uint8
                            Value relay_action; //type: CfmPmRelayActionEnum


                            class CfmBagMdLevelEnum;
                            class CfmPmRelayActionEnum;


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
                            Value management_address_domain; //type: string
                            Value management_address; //type: string


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
                                Value chassis_id_type; //type: CfmPmChassisIdFmtEnum
                                Value chassis_id_type_value; //type: uint8
                                Value chassis_id; //type: string


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
                                    Value chassis_id_format; //type: CfmPmIdFmtEnum
                                    Value chassis_id_string; //type: string
                                    Value chassis_id_mac; //type: string
                                    Value chassis_id_raw; //type: string


                                    class CfmPmIdFmtEnum;


                            }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue> chassis_id_value;
                                class CfmPmChassisIdFmtEnum;


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
                                Value unique_id; //type: uint16
                                Value mac_address; //type: string




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
                                Value unique_id; //type: uint16
                                Value mac_address; //type: string




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
                            Value action; //type: CfmPmIngressActionEnum
                            Value mac_address; //type: string


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
                                Value port_id_type; //type: CfmPmPortIdFmtEnum
                                Value port_id_type_value; //type: uint8
                                Value port_id; //type: string


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
                                    Value port_id_format; //type: CfmPmIdFmtEnum
                                    Value port_id_string; //type: string
                                    Value port_id_mac; //type: string
                                    Value port_id_raw; //type: string


                                    class CfmPmIdFmtEnum;


                            }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue> port_id_value;
                                class CfmPmPortIdFmtEnum;


                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId> port_id;
                            class CfmPmIngressActionEnum;


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
                            Value action; //type: CfmPmEgressActionEnum
                            Value mac_address; //type: string


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
                                Value port_id_type; //type: CfmPmPortIdFmtEnum
                                Value port_id_type_value; //type: uint8
                                Value port_id; //type: string


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
                                    Value port_id_format; //type: CfmPmIdFmtEnum
                                    Value port_id_string; //type: string
                                    Value port_id_mac; //type: string
                                    Value port_id_raw; //type: string


                                    class CfmPmIdFmtEnum;


                            }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue> port_id_value;
                                class CfmPmPortIdFmtEnum;


                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId> port_id;
                            class CfmPmEgressActionEnum;


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
                            Value last_hop_format; //type: CfmPmLastHopFmtEnum
                            Value host_name; //type: string


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
                                Value unique_id; //type: uint16
                                Value mac_address; //type: string




                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId> egress_id;
                            class CfmPmLastHopFmtEnum;


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
                            Value oui; //type: string
                            Value subtype; //type: uint8
                            Value value_; //type: string




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
                            Value typecode; //type: uint8
                            Value value_; //type: string




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
                        Value raw_data; //type: string


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
                            Value level; //type: CfmBagMdLevelEnum
                            Value version; //type: uint8
                            Value forwarded; //type: boolean
                            Value terminal_mep; //type: boolean
                            Value reply_filter_unknown; //type: boolean
                            Value transaction_id; //type: uint32
                            Value ttl; //type: uint8
                            Value relay_action; //type: CfmPmElrRelayActionEnum
                            Value next_hop_timeout; //type: uint32
                            Value delay_model; //type: CfmPmEltDelayModelEnum


                            class CfmPmEltDelayModelEnum;
                            class CfmBagMdLevelEnum;
                            class CfmPmElrRelayActionEnum;


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
                            Value management_address_domain; //type: string
                            Value management_address; //type: string


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
                                Value chassis_id_type; //type: CfmPmChassisIdFmtEnum
                                Value chassis_id_type_value; //type: uint8
                                Value chassis_id; //type: string


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
                                    Value chassis_id_format; //type: CfmPmIdFmtEnum
                                    Value chassis_id_string; //type: string
                                    Value chassis_id_mac; //type: string
                                    Value chassis_id_raw; //type: string


                                    class CfmPmIdFmtEnum;


                            }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue> chassis_id_value;
                                class CfmPmChassisIdFmtEnum;


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
                            Value action; //type: CfmPmElrIngressActionEnum
                            Value mac_address; //type: string


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
                                Value unique_id; //type: uint16
                                Value mac_address; //type: string




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
                                Value unique_id; //type: uint16
                                Value mac_address; //type: string




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
                                Value port_id_type; //type: CfmPmPortIdFmtEnum
                                Value port_id_type_value; //type: uint8
                                Value port_id; //type: string


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
                                    Value port_id_format; //type: CfmPmIdFmtEnum
                                    Value port_id_string; //type: string
                                    Value port_id_mac; //type: string
                                    Value port_id_raw; //type: string


                                    class CfmPmIdFmtEnum;


                            }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue> port_id_value;
                                class CfmPmPortIdFmtEnum;


                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId> last_egress_id;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId> next_egress_id;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId> port_id;
                            class CfmPmElrIngressActionEnum;


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
                            Value action; //type: CfmPmElrEgressActionEnum
                            Value mac_address; //type: string


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
                                Value unique_id; //type: uint16
                                Value mac_address; //type: string




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
                                Value unique_id; //type: uint16
                                Value mac_address; //type: string




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
                                Value port_id_type; //type: CfmPmPortIdFmtEnum
                                Value port_id_type_value; //type: uint8
                                Value port_id; //type: string


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
                                    Value port_id_format; //type: CfmPmIdFmtEnum
                                    Value port_id_string; //type: string
                                    Value port_id_mac; //type: string
                                    Value port_id_raw; //type: string


                                    class CfmPmIdFmtEnum;


                            }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue> port_id_value;
                                class CfmPmPortIdFmtEnum;


                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId> last_egress_id;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId> next_egress_id;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId> port_id;
                            class CfmPmElrEgressActionEnum;


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
                            Value last_hop_format; //type: CfmPmLastHopFmtEnum
                            Value host_name; //type: string


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
                                Value unique_id; //type: uint16
                                Value mac_address; //type: string




                        }; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId> egress_id;
                            class CfmPmLastHopFmtEnum;


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
                            Value oui; //type: string
                            Value subtype; //type: uint8
                            Value value_; //type: string




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
                            Value typecode; //type: uint8
                            Value value_; //type: string




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
                    Value domain; //type: string
                    Value service; //type: string
                    Value mep_id; //type: uint32
                    Value interface; //type: string
                    Value domain_xr; //type: string
                    Value service_xr; //type: string
                    Value level; //type: CfmBagMdLevelEnum
                    Value mep_id_xr; //type: uint16
                    Value interface_xr; //type: string
                    Value interface_state; //type: string
                    Value interworking_state; //type: CfmBagIwStateEnum
                    Value stp_state; //type: CfmBagStpStateEnum
                    Value mep_direction; //type: CfmBagDirectionEnum
                    Value mac_address; //type: string
                    Value peer_meps_detected; //type: uint32
                    Value peer_meps_with_errors_detected; //type: uint32
                    Value remote_defect; //type: boolean
                    Value fault_notification_state; //type: CfmPmMepFngStateEnum
                    Value ccm_generation_enabled; //type: boolean
                    Value ccm_interval; //type: CfmBagCcmIntervalEnum
                    Value ccm_offload; //type: CfmBagCcmOffloadEnum
                    Value highest_defect; //type: CfmPmMepDefectEnum
                    Value rdi_defect; //type: boolean
                    Value mac_status_defect; //type: boolean
                    Value peer_mep_ccm_defect; //type: boolean
                    Value error_ccm_defect; //type: boolean
                    Value cross_connect_ccm_defect; //type: boolean
                    Value next_lbm_id; //type: uint32
                    Value next_ltm_id; //type: uint32
                    Value cos; //type: uint8
                    Value efd_triggered; //type: boolean
                    Value standby; //type: boolean
                    Value hairpin; //type: boolean
                    Value defects_ignored; //type: boolean


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
                        Value ccms_sent; //type: uint64
                        Value ccms_received; //type: uint64
                        Value ccms_out_of_sequence; //type: uint64
                        Value ccms_discarded; //type: uint64
                        Value lb_ms_sent; //type: uint64
                        Value lb_rs_sent; //type: uint64
                        Value lb_rs_received; //type: uint64
                        Value lb_rs_out_of_sequence; //type: uint64
                        Value lb_rs_bad_data; //type: uint64
                        Value lb_ms_received; //type: uint64
                        Value lt_rs_received_unexpected; //type: uint64
                        Value ai_ss_sent; //type: uint64
                        Value ai_ss_received; //type: uint64
                        Value lc_ks_received; //type: uint64
                        Value dm_ms_sent; //type: uint64
                        Value dm_ms_received; //type: uint64
                        Value dm_rs_sent; //type: uint64
                        Value dm_rs_received; //type: uint64
                        Value sl_ms_sent; //type: uint64
                        Value sl_ms_received; //type: uint64
                        Value sl_rs_sent; //type: uint64
                        Value sl_rs_received; //type: uint64
                        Value lm_ms_sent; //type: uint64
                        Value lm_ms_received; //type: uint64
                        Value lm_rs_sent; //type: uint64
                        Value lm_rs_received; //type: uint64
                        Value bn_ms_received; //type: uint64
                        Value bn_ms_discarded; //type: uint64




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
                        Value level; //type: CfmBagMdLevelEnum
                        Value interval; //type: CfmBagAisIntervalEnum
                        Value sending_ais; //type: CfmPmAisTransmitEnum
                        Value receiving_ais; //type: CfmPmAisReceiveEnum
                        Value last_interval; //type: CfmBagAisIntervalEnum
                        Value last_mac_address; //type: string


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
                            Value seconds; //type: uint32
                            Value nanoseconds; //type: uint32




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
                            Value seconds; //type: uint32
                            Value nanoseconds; //type: uint32




                    }; // Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart> receiving_start;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart> sending_start;
                        class CfmBagAisIntervalEnum;
                        class CfmBagAisIntervalEnum;
                        class CfmBagMdLevelEnum;
                        class CfmPmAisReceiveEnum;
                        class CfmPmAisTransmitEnum;


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
                        Value ais_received; //type: boolean
                        Value peer_meps_that_timed_out; //type: uint32
                        Value missing; //type: uint32
                        Value auto_missing; //type: uint32
                        Value unexpected; //type: uint32
                        Value local_port_status; //type: boolean
                        Value peer_port_status; //type: boolean


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
                            Value loss_threshold_exceeded; //type: boolean
                            Value invalid_level; //type: boolean
                            Value invalid_maid; //type: boolean
                            Value invalid_ccm_interval; //type: boolean
                            Value received_our_mac; //type: boolean
                            Value received_our_mep_id; //type: boolean
                            Value received_rdi; //type: boolean




                    }; // Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects> remote_meps_defects;


                }; // Cfm::Global::LocalMeps::LocalMep::Defects


                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::AisStatistics> ais_statistics;
                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::Defects> defects;
                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::Statistics> statistics;
                    class CfmBagCcmIntervalEnum;
                    class CfmBagCcmOffloadEnum;
                    class CfmPmMepFngStateEnum;
                    class CfmPmMepDefectEnum;
                    class CfmBagIwStateEnum;
                    class CfmBagMdLevelEnum;
                    class CfmBagDirectionEnum;
                    class CfmBagStpStateEnum;


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
                    Value domain; //type: string
                    Value service; //type: string
                    Value local_mep_id; //type: uint32
                    Value interface; //type: string
                    Value peer_mep_id; //type: uint32
                    Value peer_mac_address; //type: string
                    Value domain_xr; //type: string
                    Value service_xr; //type: string
                    Value level; //type: CfmBagMdLevelEnum
                    Value mep_id; //type: uint16
                    Value interface_xr; //type: string
                    Value mep_direction; //type: CfmBagDirectionEnum
                    Value standby; //type: boolean


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
                        Value mep_id; //type: uint16
                        Value mac_address; //type: string
                        Value cross_check_state; //type: CfmPmRmepXcStateEnum
                        Value peer_mep_state; //type: CfmPmRmepStateEnum
                        Value ccm_offload; //type: CfmBagCcmOffloadEnum


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
                            Value loss_threshold_exceeded; //type: boolean
                            Value invalid_level; //type: boolean
                            Value invalid_maid; //type: boolean
                            Value invalid_ccm_interval; //type: boolean
                            Value received_our_mac; //type: boolean
                            Value received_our_mep_id; //type: boolean
                            Value received_rdi; //type: boolean




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
                            Value seconds; //type: uint32
                            Value nanoseconds; //type: uint32




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
                            Value port_status; //type: CfmPmPortStatusEnum
                            Value interface_status; //type: CfmPmIntfStatusEnum
                            Value additional_interface_status; //type: CfmPmAddlIntfStatusEnum
                            Value raw_data; //type: string


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
                                Value level; //type: CfmBagMdLevelEnum
                                Value version; //type: uint8
                                Value interval; //type: CfmBagCcmIntervalEnum
                                Value rdi; //type: boolean
                                Value sequence_number; //type: uint32
                                Value mep_id; //type: uint16
                                Value mdid_format; //type: uint8
                                Value short_ma_name_format; //type: uint8


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
                                    Value mdid_format_value; //type: CfmBagMdidFmtEnum
                                    Value dns_like_name; //type: string
                                    Value string_name; //type: string
                                    Value mdid_data; //type: string


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
                                        Value mac_address; //type: string
                                        Value integer; //type: uint16




                                }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName


                                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName> mac_name;
                                    class CfmBagMdidFmtEnum;


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
                                    Value short_ma_name_format_value; //type: CfmBagSmanFmtEnum
                                    Value vlan_id_name; //type: uint16
                                    Value string_name; //type: string
                                    Value integer_name; //type: uint16
                                    Value icc_based; //type: string
                                    Value short_ma_name_data; //type: string


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
                                        Value oui; //type: uint32
                                        Value index_; //type: uint32




                                }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName


                                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName> vpn_id_name;
                                    class CfmBagSmanFmtEnum;


                            }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName


                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid> mdid;
                                std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName> short_ma_name;
                                class CfmBagCcmIntervalEnum;
                                class CfmBagMdLevelEnum;


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
                                Value management_address_domain; //type: string
                                Value management_address; //type: string


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
                                    Value chassis_id_type; //type: CfmPmChassisIdFmtEnum
                                    Value chassis_id_type_value; //type: uint8
                                    Value chassis_id; //type: string


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
                                        Value chassis_id_format; //type: CfmPmIdFmtEnum
                                        Value chassis_id_string; //type: string
                                        Value chassis_id_mac; //type: string
                                        Value chassis_id_raw; //type: string


                                        class CfmPmIdFmtEnum;


                                }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue


                                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue> chassis_id_value;
                                    class CfmPmChassisIdFmtEnum;


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
                                Value name; //type: string




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
                                Value oui; //type: string
                                Value subtype; //type: uint8
                                Value value_; //type: string




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
                                Value typecode; //type: uint8
                                Value value_; //type: string




                        }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header> header;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName> mep_name;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv> > organization_specific_tlv;
                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId> sender_id;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv> > unknown_tlv;
                            class CfmPmAddlIntfStatusEnum;
                            class CfmPmIntfStatusEnum;
                            class CfmPmPortStatusEnum;


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
                            Value ccms_received; //type: uint64
                            Value ccms_wrong_level; //type: uint64
                            Value ccms_invalid_maid; //type: uint64
                            Value ccms_invalid_interval; //type: uint64
                            Value ccms_invalid_source_mac_address; //type: uint64
                            Value ccms_our_mep_id; //type: uint64
                            Value ccms_rdi; //type: uint64
                            Value ccms_out_of_sequence; //type: uint64
                            Value last_ccm_sequence_number; //type: uint32


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
                                Value seconds; //type: uint32
                                Value nanoseconds; //type: uint32




                        }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime


                            std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime> last_ccm_received_time;


                    }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics


                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState> error_state;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived> last_ccm_received;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime> last_up_down_time;
                        std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics> statistics;
                        class CfmBagCcmOffloadEnum;
                        class CfmPmRmepXcStateEnum;
                        class CfmPmRmepStateEnum;


                }; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep


                    std::unique_ptr<Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep> peer_mep;
                    class CfmBagMdLevelEnum;
                    class CfmBagDirectionEnum;


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
        static const Enum::Value elr_ingress_ok;
        static const Enum::Value elr_ingress_down;
        static const Enum::Value elr_ingress_blocked;
        static const Enum::Value elr_ingress_vid;

};

class CfmPmRelayActionEnum : public Enum
{
    public:
        static const Enum::Value relay_hit;
        static const Enum::Value relay_fdb;
        static const Enum::Value relay_mpdb;

};

class CfmBagSmanFmtEnum : public Enum
{
    public:
        static const Enum::Value sman_vlan_id;
        static const Enum::Value sman_string;
        static const Enum::Value sman_uint16;
        static const Enum::Value sman_vpn_id;
        static const Enum::Value sman_icc;
        static const Enum::Value sman_unknown;

};

class CfmBagDirectionEnum : public Enum
{
    public:
        static const Enum::Value direction_up;
        static const Enum::Value direction_down;
        static const Enum::Value direction_invalid;

};

class CfmPmIngressActionEnum : public Enum
{
    public:
        static const Enum::Value ingress_ok;
        static const Enum::Value ingress_down;
        static const Enum::Value ingress_blocked;
        static const Enum::Value ingress_vid;

};

class CfmBagCcmIntervalEnum : public Enum
{
    public:
        static const Enum::Value interval_none;
        static const Enum::Value interval3_3ms;
        static const Enum::Value interval10ms;
        static const Enum::Value interval100ms;
        static const Enum::Value interval1s;
        static const Enum::Value interval10s;
        static const Enum::Value interval1m;
        static const Enum::Value interval10m;

};

class CfmPmElrEgressActionEnum : public Enum
{
    public:
        static const Enum::Value elr_egress_ok;
        static const Enum::Value elr_egress_down;
        static const Enum::Value elr_egress_blocked;
        static const Enum::Value elr_egress_vid;
        static const Enum::Value elr_egress_mac;

};

class CfmPmChassisIdFmtEnum : public Enum
{
    public:
        static const Enum::Value chassis_id_chassis_component;
        static const Enum::Value chassis_id_interface_alias;
        static const Enum::Value chassis_id_port_component;
        static const Enum::Value chassis_id_mac_address;
        static const Enum::Value chassis_id_network_address;
        static const Enum::Value chassis_id_interface_name;
        static const Enum::Value chassis_id_local;
        static const Enum::Value chassis_id_unknown_type;

};

class CfmPmMepFngStateEnum : public Enum
{
    public:
        static const Enum::Value fng_reset;
        static const Enum::Value fng_defect;
        static const Enum::Value fng_report_defect;
        static const Enum::Value fng_defect_reported;
        static const Enum::Value fng_defect_clearing;

};

class CfmPmLastHopFmtEnum : public Enum
{
    public:
        static const Enum::Value last_hop_none;
        static const Enum::Value last_hop_host_name;
        static const Enum::Value last_hop_egress_id;

};

class CfmPmIdFmtEnum : public Enum
{
    public:
        static const Enum::Value id_format_is_string;
        static const Enum::Value id_format_is_mac_address;
        static const Enum::Value id_format_is_raw_hex;

};

class CfmPmRmepStateEnum : public Enum
{
    public:
        static const Enum::Value peer_mep_idle;
        static const Enum::Value peer_mep_start;
        static const Enum::Value peer_mep_failed;
        static const Enum::Value peer_mep_ok;

};

class CfmBagCcmOffloadEnum : public Enum
{
    public:
        static const Enum::Value offload_none;
        static const Enum::Value offload_software;
        static const Enum::Value offload_hardware;

};

class CfmPmAisReceiveEnum : public Enum
{
    public:
        static const Enum::Value receive_none;
        static const Enum::Value receive_ais;
        static const Enum::Value receive_lck;
        static const Enum::Value receive_direct;

};

class CfmMaMpVarietyEnum : public Enum
{
    public:
        static const Enum::Value mip;
        static const Enum::Value up_mep;
        static const Enum::Value downmep;
        static const Enum::Value unknown_mep;

};

class CfmPmPktActionEnum : public Enum
{
    public:
        static const Enum::Value packet_processed;
        static const Enum::Value packet_forwarded;
        static const Enum::Value unknown_opcode;
        static const Enum::Value filter_level;
        static const Enum::Value filter_blocked;
        static const Enum::Value filter_local_mac;
        static const Enum::Value malformed_ccm_size;
        static const Enum::Value malformed_ccm_mep_id;
        static const Enum::Value malformed_too_short;
        static const Enum::Value malformed_destination_mac_unicast;
        static const Enum::Value malformed_destination_mac_multicast;
        static const Enum::Value malformed_tlv_offset;
        static const Enum::Value malformed_lbm_source_mac;
        static const Enum::Value malformed_ltr_relay_action;
        static const Enum::Value malformed_ltr_reply_tlv;
        static const Enum::Value malformed_lt_origin;
        static const Enum::Value malformed_ltm_target;
        static const Enum::Value malformed_source_mac;
        static const Enum::Value malformed_header_too_short;
        static const Enum::Value malformed_tlv_header_overrun;
        static const Enum::Value malformed_tlv_overrun;
        static const Enum::Value malformed_duplicate_sender_id;
        static const Enum::Value malformed_duplicate_port_status;
        static const Enum::Value malformed_duplicate_interface_status;
        static const Enum::Value malformed_wrong_tlv;
        static const Enum::Value malformed_duplicate_data;
        static const Enum::Value malformed_duplicate_ltr_egress_id;
        static const Enum::Value malformed_duplicate_reply_ingress;
        static const Enum::Value malformed_duplicate_reply_egress;
        static const Enum::Value malformed_duplicate_ltm_egress_id;
        static const Enum::Value malformed_sender_id_size;
        static const Enum::Value malformed_chassis_id_size;
        static const Enum::Value malformed_mgmt_address_domain_size;
        static const Enum::Value malformed_mgmt_address_size;
        static const Enum::Value malformed_port_status_size;
        static const Enum::Value malformed_port_status;
        static const Enum::Value malformed_interface_status_size;
        static const Enum::Value malformed_interface_status;
        static const Enum::Value malformed_organization_specific_tlv_size;
        static const Enum::Value malformed_duplicate_mep_name;
        static const Enum::Value malformed_duplicate_additional_interface_status;
        static const Enum::Value malformed_ltr_egress_id_size;
        static const Enum::Value malformed_reply_ingress_size;
        static const Enum::Value malformed_ingress_action;
        static const Enum::Value malformed_reply_ingress_mac;
        static const Enum::Value malformed_ingress_port_length_size;
        static const Enum::Value malformed_ingress_port_id_length;
        static const Enum::Value malformed_ingress_port_id_size;
        static const Enum::Value malformed_reply_egress_size;
        static const Enum::Value malformed_egress_action;
        static const Enum::Value malformed_reply_egress_mac;
        static const Enum::Value malformed_egress_port_length_size;
        static const Enum::Value malformed_egress_port_id_length;
        static const Enum::Value malformed_egress_port_id_size;
        static const Enum::Value malformed_ltm_egress_id_size;
        static const Enum::Value malformed_mep_name_size;
        static const Enum::Value malformed_mep_name_name_length;
        static const Enum::Value malformed_additional_interface_status_size;
        static const Enum::Value malformed_additional_interface_status;
        static const Enum::Value malformed_ccm_interval;
        static const Enum::Value malformed_mdid_mac_address_length;
        static const Enum::Value malformed_mdid_length;
        static const Enum::Value malformed_sman_length;
        static const Enum::Value malformed_sman2_byte_length;
        static const Enum::Value malformed_sman_vpn_id_length;
        static const Enum::Value malformed_elr_no_reply_tlv;
        static const Enum::Value malformed_separate_elr_reply_egress;
        static const Enum::Value malformed_dcm_destination_multicast;
        static const Enum::Value malformed_dcm_embed_length;
        static const Enum::Value malformed_dcm_embed_level;
        static const Enum::Value malformed_dcm_embed_version;
        static const Enum::Value malformed_elr_relay_action;
        static const Enum::Value malformed_elr_tt_ls;
        static const Enum::Value malformed_elr_ttl_ingress;
        static const Enum::Value malformed_elr_ttl_egress;
        static const Enum::Value malformed_elm_destination_unicast;
        static const Enum::Value malformed_elm_egress_id;
        static const Enum::Value malformed_dcm_embed_oui;
        static const Enum::Value malformed_dcm_embed_opcode;
        static const Enum::Value malformed_elm_constant_zero;
        static const Enum::Value malformed_elr_timeout_zero;
        static const Enum::Value malformed_duplicate_test;
        static const Enum::Value malformed_dmm_source_mac;
        static const Enum::Value malformed_test_size;
        static const Enum::Value malformed_dmr_time_stamps;
        static const Enum::Value malformed_dm_time_stamp_fmt;
        static const Enum::Value malformed_ais_interval;
        static const Enum::Value filter_interface_down;
        static const Enum::Value filter_forward_standby;
        static const Enum::Value malformed_sman_icc_based_length;
        static const Enum::Value filter_foward_issu_secondary;
        static const Enum::Value filter_response_standby;
        static const Enum::Value filter_response_issu_secondary;

};

class CfmBagIssuRoleEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value primary;
        static const Enum::Value secondary;

};

class CfmPmEltDelayModelEnum : public Enum
{
    public:
        static const Enum::Value delay_model_invalid;
        static const Enum::Value delay_model_logarithmic;
        static const Enum::Value delay_model_constant;

};

class CfmPmAisTransmitEnum : public Enum
{
    public:
        static const Enum::Value transmit_none;
        static const Enum::Value transmit_ais;
        static const Enum::Value transmit_ais_direct;

};

class CfmPmElrRelayActionEnum : public Enum
{
    public:
        static const Enum::Value elr_relay_hit;
        static const Enum::Value elr_relay_fdb;
        static const Enum::Value elr_relay_flood;
        static const Enum::Value elr_relay_drop;

};

class CfmPmPortStatusEnum : public Enum
{
    public:
        static const Enum::Value port_status_blocked;
        static const Enum::Value port_status_up;
        static const Enum::Value port_status_unknown;

};

class CfmBagIwStateEnum : public Enum
{
    public:
        static const Enum::Value interworking_up;
        static const Enum::Value interworking_test;

};

class CfmBagMdidFmtEnum : public Enum
{
    public:
        static const Enum::Value mdid_null;
        static const Enum::Value mdid_dns_like;
        static const Enum::Value mdid_mac_address;
        static const Enum::Value mdid_string;
        static const Enum::Value mdid_unknown;

};

class CfmBagBdidFmtEnum : public Enum
{
    public:
        static const Enum::Value invalid;
        static const Enum::Value bd_id;
        static const Enum::Value xc_p2p_id;
        static const Enum::Value xc_mp2mp_id;
        static const Enum::Value down_only;

};

class SlaBucketSizeEnum : public Enum
{
    public:
        static const Enum::Value buckets_per_probe;
        static const Enum::Value probes_per_bucket;

};

class CfmBagStpStateEnum : public Enum
{
    public:
        static const Enum::Value stp_up;
        static const Enum::Value stp_blocked;
        static const Enum::Value stp_unknown;

};

class CfmBagMdLevelEnum : public Enum
{
    public:
        static const Enum::Value level0;
        static const Enum::Value level1;
        static const Enum::Value level2;
        static const Enum::Value level3;
        static const Enum::Value level4;
        static const Enum::Value level5;
        static const Enum::Value level6;
        static const Enum::Value level7;
        static const Enum::Value level_invalid;

};

class SlaOperPacketPriorityEnum : public Enum
{
    public:
        static const Enum::Value priority_none;
        static const Enum::Value priority_cos;

};

class CfmBagAisIntervalEnum : public Enum
{
    public:
        static const Enum::Value ais_interval_none;
        static const Enum::Value ais_interval1s;
        static const Enum::Value ais_interval1m;

};

class CfmPmRmepXcStateEnum : public Enum
{
    public:
        static const Enum::Value cross_check_ok;
        static const Enum::Value cross_check_missing;
        static const Enum::Value cross_check_extra;

};

class CfmPmLtModeEnum : public Enum
{
    public:
        static const Enum::Value cfm_pm_lt_mode_basic;
        static const Enum::Value cfm_pm_lt_mode_exploratory;

};

class CfmPmIntfStatusEnum : public Enum
{
    public:
        static const Enum::Value interface_status_up;
        static const Enum::Value interface_status_down;
        static const Enum::Value interface_status_testing;
        static const Enum::Value interface_status_unknown;
        static const Enum::Value interface_status_dormant;
        static const Enum::Value interface_status_not_present;
        static const Enum::Value interface_status_lower_layer_down;

};

class CfmPmMepDefectEnum : public Enum
{
    public:
        static const Enum::Value defect_none;
        static const Enum::Value defect_rdi_ccm;
        static const Enum::Value defect_ma_cstatus;
        static const Enum::Value defect_remote_ccm;
        static const Enum::Value defect_error_ccm;
        static const Enum::Value defect_cross_connect_ccm;

};

class CfmPmEgressActionEnum : public Enum
{
    public:
        static const Enum::Value egress_ok;
        static const Enum::Value egress_down;
        static const Enum::Value egress_blocked;
        static const Enum::Value egress_vid;

};

class CfmPmElmReplyFilterEnum : public Enum
{
    public:
        static const Enum::Value reply_filter_not_present;
        static const Enum::Value reply_filter_default;
        static const Enum::Value reply_filter_vlan_topology;
        static const Enum::Value reply_filter_spanning_tree;
        static const Enum::Value reply_filter_all_ports;

};

class CfmAisDirEnum : public Enum
{
    public:
        static const Enum::Value up;
        static const Enum::Value down;

};

class CfmPmAddlIntfStatusEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value administratively_down;
        static const Enum::Value remote_excessive_errors;
        static const Enum::Value local_excessive_errors;

};

class CfmBagOpcodeEnum : public Enum
{
    public:
        static const Enum::Value reserved;
        static const Enum::Value ccm;
        static const Enum::Value lbr;
        static const Enum::Value lbm;
        static const Enum::Value ltr;
        static const Enum::Value ltm;

};

class SlaOperTestPatternSchemeEnum : public Enum
{
    public:
        static const Enum::Value hex;
        static const Enum::Value pseudo_random;

};

class SlaOperOperationEnum : public Enum
{
    public:
        static const Enum::Value operation_type_configured;
        static const Enum::Value operation_type_ondemand;

};

class CfmPmPortIdFmtEnum : public Enum
{
    public:
        static const Enum::Value port_id_interface_alias;
        static const Enum::Value port_id_port_component;
        static const Enum::Value port_id_mac_address;
        static const Enum::Value port_id_network_address;
        static const Enum::Value port_id_interface_name;
        static const Enum::Value port_id_agent_circuit_id;
        static const Enum::Value port_id_local;
        static const Enum::Value port_id_unknown;

};

class SlaOperBucketEnum : public Enum
{
    public:
        static const Enum::Value bucket_type_bins;
        static const Enum::Value bucket_type_samples;

};

class SlaRecordableMetricEnum : public Enum
{
    public:
        static const Enum::Value metric_invalid;
        static const Enum::Value metric_round_trip_delay;
        static const Enum::Value metric_one_way_delay_sd;
        static const Enum::Value metric_one_way_delay_ds;
        static const Enum::Value metric_round_trip_jitter;
        static const Enum::Value metric_one_way_jitter_sd;
        static const Enum::Value metric_one_way_jitter_ds;
        static const Enum::Value metric_one_way_flr_sd;
        static const Enum::Value metric_one_way_flr_ds;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_CFM_OPER_ */

