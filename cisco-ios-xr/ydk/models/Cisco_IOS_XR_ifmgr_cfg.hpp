#ifndef _CISCO_IOS_XR_IFMGR_CFG_
#define _CISCO_IOS_XR_IFMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


namespace ydk {
namespace Cisco_IOS_XR_ifmgr_cfg {

class GlobalInterfaceConfiguration : public Entity
{
    public:
        GlobalInterfaceConfiguration();
        ~GlobalInterfaceConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf link_status; //type: LinkStatusEnumEnum



}; // GlobalInterfaceConfiguration

class InterfaceConfigurations : public Entity
{
    public:
        InterfaceConfigurations();
        ~InterfaceConfigurations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class InterfaceConfiguration : public Entity
    {
        public:
            InterfaceConfiguration();
            ~InterfaceConfiguration();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf active; //type: string
            YLeaf interface_name; //type: string
            YLeaf shutdown; //type: empty
            YLeaf interface_virtual; //type: empty
            YLeaf secondary_admin_state; //type: SecondaryAdminStateEnumEnum
            YLeaf interface_mode_non_physical; //type: InterfaceModeEnumEnum
            YLeaf bandwidth; //type: uint32
            YLeaf link_status; //type: empty
            YLeaf description; //type: string
            YLeaf maintenance_embargo; //type: boolean
            YLeaf vrf; //type: string
            YLeaf track_name; //type: string
            YLeaf mac_addr; //type: string

        class Dampening : public Entity
        {
            public:
                Dampening();
                ~Dampening();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf args; //type: ArgsEnum
                YLeaf half_life; //type: uint32
                YLeaf reuse_threshold; //type: uint32
                YLeaf suppress_threshold; //type: uint32
                YLeaf suppress_time; //type: uint32
                YLeaf restart_penalty; //type: uint32

                class ArgsEnum;


        }; // InterfaceConfigurations::InterfaceConfiguration::Dampening


        class Mtus : public Entity
        {
            public:
                Mtus();
                ~Mtus();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Mtu : public Entity
            {
                public:
                    Mtu();
                    ~Mtu();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf owner; //type: string
                    YLeaf mtu; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu


                std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu> > mtu;


        }; // InterfaceConfigurations::InterfaceConfiguration::Mtus


        class Encapsulation : public Entity
        {
            public:
                Encapsulation();
                ~Encapsulation();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf encapsulation; //type: string
                YLeaf capsulation_options; //type: int32



        }; // InterfaceConfigurations::InterfaceConfiguration::Encapsulation


        class PseudowireEther : public Entity
        {
            public:
                PseudowireEther();
                ~PseudowireEther();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf generic_interface_list; //type: string
                YLeaf l2_overhead; //type: uint32



        }; // InterfaceConfigurations::InterfaceConfiguration::PseudowireEther


        class PseudowireIw : public Entity
        {
            public:
                PseudowireIw();
                ~PseudowireIw();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf l2_overhead; //type: uint32
                YLeaf generic_interface_list; //type: string



        }; // InterfaceConfigurations::InterfaceConfiguration::PseudowireIw


        class L2Transport : public Entity
        {
            public:
                L2Transport();
                ~L2Transport();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf enabled; //type: empty
                YLeaf propagate_remote_status; //type: empty

            class AtmPortModeParameters : public Entity
            {
                public:
                    AtmPortModeParameters();
                    ~AtmPortModeParameters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class CellPacking : public Entity
                {
                    public:
                        CellPacking();
                        ~CellPacking();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf maximum_cells_packed; //type: uint32
                        YLeaf cell_packing_timer_id; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking> cell_packing; // presence node


            }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters


            class L2Protocols : public Entity
            {
                public:
                    L2Protocols();
                    ~L2Protocols();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class L2Protocol : public Entity
                {
                    public:
                        L2Protocol();
                        ~L2Protocol();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf l2_protocol_name; //type: L2ProtocolNameEnum
                        YLeaf mode; //type: L2ProtocolModeEnum
                        YLeaf mpls_exp_bits_value; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol> > l2_protocol;


            }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols


            class L2EthernetFeatures : public Entity
            {
                public:
                    L2EthernetFeatures();
                    ~L2EthernetFeatures();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf egress_filtering; //type: EgressFilteringEnum
                    YLeaf source_bypass_egress_filtering; //type: empty



            }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures


            class SpanMonitorSessions : public Entity
            {
                public:
                    SpanMonitorSessions();
                    ~SpanMonitorSessions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class SpanMonitorSession : public Entity
                {
                    public:
                        SpanMonitorSession();
                        ~SpanMonitorSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf session_class; //type: SpanSessionClassEnum
                        YLeaf mirror_first; //type: uint32
                        YLeaf mirror_interval; //type: SpanMirrorIntervalEnum
                        YLeaf acl; //type: empty

                    class Attachment : public Entity
                    {
                        public:
                            Attachment();
                            ~Attachment();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf session_name; //type: string
                            YLeaf direction; //type: SpanTrafficDirectionEnum
                            YLeaf port_level_enable; //type: empty



                    }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node


                }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession> > span_monitor_session;


            }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions


            class Pac : public Entity
            {
                public:
                    Pac();
                    ~Pac();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Qos : public Entity
                {
                    public:
                        Qos();
                        ~Qos();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Output : public Entity
                    {
                        public:
                            Output();
                            ~Output();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class ServicePolicy : public Entity
                        {
                            public:
                                ServicePolicy();
                                ~ServicePolicy();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf service_policy_name; //type: string
                                YLeaf account_type; //type: QosPolicyAccountEnum
                                YLeaf l1_user_defined; //type: int32
                                YLeaf spi_name; //type: string
                                YLeaf subscriber_parent_policy; //type: boolean
                                YLeaf resource_id; //type: uint32
                                YLeaf service_fragment_parent_policy; //type: boolean



                        }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy> > service_policy;


                    }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output


                    class Input : public Entity
                    {
                        public:
                            Input();
                            ~Input();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class ServicePolicy : public Entity
                        {
                            public:
                                ServicePolicy();
                                ~ServicePolicy();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf service_policy_name; //type: string
                                YLeaf account_type; //type: QosPolicyAccountEnum
                                YLeaf l1_user_defined; //type: int32
                                YLeaf spi_name; //type: string
                                YLeaf subscriber_parent_policy; //type: boolean
                                YLeaf resource_id; //type: uint32
                                YLeaf service_fragment_parent_policy; //type: boolean



                        }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy> > service_policy;


                    }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input> input;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output> output;


                }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos> qos;


            }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac


            class Cac : public Entity
            {
                public:
                    Cac();
                    ~Cac();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Qos : public Entity
                {
                    public:
                        Qos();
                        ~Qos();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Output : public Entity
                    {
                        public:
                            Output();
                            ~Output();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class ServicePolicy : public Entity
                        {
                            public:
                                ServicePolicy();
                                ~ServicePolicy();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf service_policy_name; //type: string
                                YLeaf account_type; //type: QosPolicyAccountEnum
                                YLeaf l1_user_defined; //type: int32
                                YLeaf spi_name; //type: string
                                YLeaf subscriber_parent_policy; //type: boolean
                                YLeaf resource_id; //type: uint32
                                YLeaf service_fragment_parent_policy; //type: boolean



                        }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy> > service_policy;


                    }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output


                    class Input : public Entity
                    {
                        public:
                            Input();
                            ~Input();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class ServicePolicy : public Entity
                        {
                            public:
                                ServicePolicy();
                                ~ServicePolicy();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf service_policy_name; //type: string
                                YLeaf account_type; //type: QosPolicyAccountEnum
                                YLeaf l1_user_defined; //type: int32
                                YLeaf spi_name; //type: string
                                YLeaf subscriber_parent_policy; //type: boolean
                                YLeaf resource_id; //type: uint32
                                YLeaf service_fragment_parent_policy; //type: boolean



                        }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy> > service_policy;


                    }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input> input;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output> output;


                }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos> qos;


            }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters> atm_port_mode_parameters;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac> cac;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures> l2_ethernet_features;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols> l2_protocols;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac> pac;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions> span_monitor_sessions;


        }; // InterfaceConfigurations::InterfaceConfiguration::L2Transport


        class Atm : public Entity
        {
            public:
                Atm();
                ~Atm();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf max_vpi_bits; //type: AtmVpiBitsModeEnum
                YLeaf vc_class; //type: string

            class Pvps : public Entity
            {
                public:
                    Pvps();
                    ~Pvps();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Pvp : public Entity
                {
                    public:
                        Pvp();
                        ~Pvp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf vpi; //type: uint32
                        YLeaf enable; //type: empty
                        YLeaf test_mode; //type: AtmPvpTestModeEnum
                        YLeaf oam_segment_endpoint; //type: empty

                    class Shape : public Entity
                    {
                        public:
                            Shape();
                            ~Shape();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf type; //type: AtmPvcShapingEnum
                            YLeaf peak_cell_rate; //type: uint32
                            YLeaf sustained_cell_rate; //type: uint32
                            YLeaf burst_size; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape


                    class CellPacking : public Entity
                    {
                        public:
                            CellPacking();
                            ~CellPacking();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf maximum_cells_packed; //type: uint32
                            YLeaf cell_packing_timer_id; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking> cell_packing; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape> shape;


                }; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp> > pvp;


            }; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps


            class Pvcs : public Entity
            {
                public:
                    Pvcs();
                    ~Pvcs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Pvc : public Entity
                {
                    public:
                        Pvc();
                        ~Pvc();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf vpi; //type: uint32
                        YLeaf vci; //type: uint32
                        YLeaf pv_ctype; //type: AtmPvcDataEnum
                        YLeaf vc_class; //type: string
                        YLeaf encapsulation; //type: AtmPvcEncapsulationEnum
                        YLeaf enable; //type: empty
                        YLeaf test_mode; //type: AtmPvcTestModeEnum
                        YLeaf oam_segment_endpoint; //type: empty

                    class Shape : public Entity
                    {
                        public:
                            Shape();
                            ~Shape();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf type; //type: AtmPvcShapingEnum
                            YLeaf peak_cell_rate; //type: uint32
                            YLeaf sustained_cell_rate; //type: uint32
                            YLeaf burst_size; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape


                    class OamEmulation : public Entity
                    {
                        public:
                            OamEmulation();
                            ~OamEmulation();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: empty
                            YLeaf ais_transmit_rate; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation


                    class CellPacking : public Entity
                    {
                        public:
                            CellPacking();
                            ~CellPacking();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf maximum_cells_packed; //type: uint32
                            YLeaf cell_packing_timer_id; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking> cell_packing; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation> oam_emulation;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape> shape;


                }; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc> > pvc;


            }; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs


            class MaximumCellPackingTimers : public Entity
            {
                public:
                    MaximumCellPackingTimers();
                    ~MaximumCellPackingTimers();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf cell_packing_timer1; //type: uint32
                    YLeaf cell_packing_timer2; //type: uint32
                    YLeaf cell_packing_timer3; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers


            class VpTunnels : public Entity
            {
                public:
                    VpTunnels();
                    ~VpTunnels();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class VpTunnel : public Entity
                {
                    public:
                        VpTunnel();
                        ~VpTunnel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf vpi; //type: uint32
                        YLeaf enable_hierarchical_shaping; //type: empty
                        YLeaf enable; //type: empty
                        YLeaf disable_f4oam; //type: empty

                    class Shape : public Entity
                    {
                        public:
                            Shape();
                            ~Shape();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf type; //type: AtmVpShapingEnum
                            YLeaf peak_cell_rate; //type: uint32
                            YLeaf sustained_cell_rate; //type: uint32
                            YLeaf burst_size; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape> shape;


                }; // InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel> > vp_tunnel;


            }; // InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers> maximum_cell_packing_timers; // presence node
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs> pvcs;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps> pvps;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels> vp_tunnels;


        }; // InterfaceConfigurations::InterfaceConfiguration::Atm


        class Bfd : public Entity
        {
            public:
                Bfd();
                ~Bfd();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf mode; //type: BfdModeEnum

            class AddressFamily : public Entity
            {
                public:
                    AddressFamily();
                    ~AddressFamily();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



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


                        YLeaf ipv6_destination_address; //type: string
                        YLeaf ipv6_detection_multiplier; //type: uint32
                        YLeaf ipv6_fast_detect; //type: empty
                        YLeaf ipv6_interval; //type: uint32

                    class Ipv6Timers : public Entity
                    {
                        public:
                            Ipv6Timers();
                            ~Ipv6Timers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf ipv6_nbor_unconfig_timer; //type: uint32
                            YLeaf ipv6_start_timer; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers> ipv6_timers;


                }; // InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6


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


                        YLeaf interval; //type: uint32
                        YLeaf detection_multiplier; //type: uint32
                        YLeaf destination_address; //type: string
                        YLeaf fast_detect; //type: empty

                    class Echo : public Entity
                    {
                        public:
                            Echo();
                            ~Echo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf min_interval; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo


                    class Timers : public Entity
                    {
                        public:
                            Timers();
                            ~Timers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf nbor_unconfig_timer; //type: uint32
                            YLeaf start_timer; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo> echo;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers> timers;


                }; // InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4> ipv4;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6> ipv6;


            }; // InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily> address_family;


        }; // InterfaceConfigurations::InterfaceConfiguration::Bfd


        class Bundle : public Entity
        {
            public:
                Bundle();
                ~Bundle();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf lacp_delay; //type: uint32
                YLeaf shutdown; //type: empty
                YLeaf wait_while; //type: uint32

            class BundleLoadBalancing : public Entity
            {
                public:
                    BundleLoadBalancing();
                    ~BundleLoadBalancing();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf localize_links; //type: uint32

                class HashFunction : public Entity
                {
                    public:
                        HashFunction();
                        ~HashFunction();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf hash_type; //type: BundleLoadBalanceEnum
                        YLeaf hash_value; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction> hash_function; // presence node


            }; // InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing


            class MinimumActive : public Entity
            {
                public:
                    MinimumActive();
                    ~MinimumActive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf links; //type: uint32
                    YLeaf bandwidth; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive


            class MaximumActive : public Entity
            {
                public:
                    MaximumActive();
                    ~MaximumActive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Links : public Entity
                {
                    public:
                        Links();
                        ~Links();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf links; //type: uint32
                        YLeaf max_active_links_mode; //type: BundleMaximumActiveLinksModeEnum



                }; // InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links> links; // presence node


            }; // InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing> bundle_load_balancing;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive> maximum_active;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive> minimum_active;


        }; // InterfaceConfigurations::InterfaceConfiguration::Bundle


        class Lacp : public Entity
        {
            public:
                Lacp();
                ~Lacp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf system_priority; //type: uint32
                YLeaf period; //type: one of uint32, enumeration
                YLeaf collector_max_delay; //type: uint32
                YLeaf lacp_nonrevertive; //type: empty
                YLeaf mode; //type: BundleModeEnum
                YLeaf fast_switchover; //type: empty
                YLeaf suppress_flaps; //type: uint32
                YLeaf system_mac; //type: string
                YLeaf period_short; //type: one of uint32, enumeration
                YLeaf churn_logging; //type: ChurnLoggingEnum

            class CiscoExtensions : public Entity
            {
                public:
                    CiscoExtensions();
                    ~CiscoExtensions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf cisco_ext; //type: empty
                    YLeaf cisco_ext_type; //type: BundleCiscoExtTypesEnum



            }; // InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions


            class Timeout : public Entity
            {
                public:
                    Timeout();
                    ~Timeout();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf rx_default; //type: uint32
                    YLeaf actor_churn; //type: uint32
                    YLeaf partner_churn; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions> cisco_extensions; // presence node
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout> timeout;


        }; // InterfaceConfigurations::InterfaceConfiguration::Lacp


        class BundleMember : public Entity
        {
            public:
                BundleMember();
                ~BundleMember();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf port_priority; //type: uint16

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


                    YLeaf bundle_id; //type: uint32
                    YLeaf port_activity; //type: BundlePortActivityEnum



            }; // InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id> id;


        }; // InterfaceConfigurations::InterfaceConfiguration::BundleMember


        class Mlacp : public Entity
        {
            public:
                Mlacp();
                ~Mlacp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf port_priority; //type: uint16
                YLeaf recovery_delay; //type: uint32
                YLeaf switchover_type; //type: MlacpSwitchoverEnum
                YLeaf iccp_group; //type: uint32

            class Maximize : public Entity
            {
                public:
                    Maximize();
                    ~Maximize();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf maximize_by; //type: MlacpMaximizeParameterEnum
                    YLeaf link_threshold; //type: uint32
                    YLeaf bandwidth_threshold; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize> maximize; // presence node


        }; // InterfaceConfigurations::InterfaceConfiguration::Mlacp


        class Cdp : public Entity
        {
            public:
                Cdp();
                ~Cdp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf enable; //type: empty



        }; // InterfaceConfigurations::InterfaceConfiguration::Cdp


        class Optics : public Entity
        {
            public:
                Optics();
                ~Optics();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf optics_transmit_power; //type: int32
                YLeaf optics_loopback; //type: OpticsLoopbackEnum
                YLeaf optics_fec; //type: OpticsFecEnum
                YLeaf optics_dgd_high_threshold; //type: int32
                YLeaf optics_cd_min; //type: int32
                YLeaf optics_transmit_shutdown; //type: boolean
                YLeaf optics_description; //type: string
                YLeaf optics_performance_monitoring; //type: boolean
                YLeaf optics_cd_max; //type: int32
                YLeaf optics_lbc_high_threshold; //type: int32
                YLeaf optics_cd_high_threshold; //type: int32
                YLeaf optics_osnr_low_threshold; //type: int32
                YLeaf optics_cd_low_threshold; //type: int32
                YLeaf breakout; //type: string

            class RxThresholds : public Entity
            {
                public:
                    RxThresholds();
                    ~RxThresholds();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class RxThreshold : public Entity
                {
                    public:
                        RxThreshold();
                        ~RxThreshold();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf rx_threshold_type; //type: ThresholdEnum
                        YLeaf rx_threshold; //type: int32



                }; // InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold> > rx_threshold;


            }; // InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds


            class OpticsNetworkSrlgs : public Entity
            {
                public:
                    OpticsNetworkSrlgs();
                    ~OpticsNetworkSrlgs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class OpticsNetworkSrlg : public Entity
                {
                    public:
                        OpticsNetworkSrlg();
                        ~OpticsNetworkSrlg();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_id; //type: uint32
                        YLeaf srlg1; //type: uint32
                        YLeaf srlg2; //type: uint32
                        YLeaf srlg3; //type: uint32
                        YLeaf srlg4; //type: uint32
                        YLeaf srlg5; //type: uint32
                        YLeaf srlg6; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg> > optics_network_srlg;


            }; // InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs


            class OpticsDwdmCarrier : public Entity
            {
                public:
                    OpticsDwdmCarrier();
                    ~OpticsDwdmCarrier();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf grid_type; //type: OpticsDwdmCarrierGridEnum
                    YLeaf param_type; //type: OpticsDwdmCarrierParamEnum
                    YLeaf param_value; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier


            class TxThresholds : public Entity
            {
                public:
                    TxThresholds();
                    ~TxThresholds();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class TxThreshold : public Entity
                {
                    public:
                        TxThreshold();
                        ~TxThreshold();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf tx_threshold_type; //type: ThresholdEnum
                        YLeaf tx_threshold; //type: int32



                }; // InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold> > tx_threshold;


            }; // InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier> optics_dwdm_carrier; // presence node
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs> optics_network_srlgs;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds> rx_thresholds;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds> tx_thresholds;


        }; // InterfaceConfigurations::InterfaceConfiguration::Optics


        class Otu : public Entity
        {
            public:
                Otu();
                ~Otu();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf gcc; //type: empty
                YLeaf sf; //type: uint32
                YLeaf secondary_admin_state; //type: OtnSecAdminStateEnum
                YLeaf sd; //type: uint32
                YLeaf performance_monitoring; //type: OtnPerMonEnum
                YLeaf loopback; //type: OtnLoopbackEnum
                YLeaf fec; //type: OtuForwardErrorCorrectionEnum

            class OtnSendTtitcmos : public Entity
            {
                public:
                    OtnSendTtitcmos();
                    ~OtnSendTtitcmos();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf string_type; //type: OtnSendTtiTypeOsEnum
                    YLeaf osascii_string; //type: string
                    YLeaf oshex_string; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos


            class OtnSendTtitcmdapi : public Entity
            {
                public:
                    OtnSendTtitcmdapi();
                    ~OtnSendTtitcmdapi();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf string_type; //type: OtnSendTtiTypeDapiEnum
                    YLeaf dapi_ascii_string; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi


            class OtnExpectedTtisapi : public Entity
            {
                public:
                    OtnExpectedTtisapi();
                    ~OtnExpectedTtisapi();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf string_type; //type: OtnExpTtiTypeSapiEnum
                    YLeaf sapi_ascii_string; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi


            class ProactiveProtection : public Entity
            {
                public:
                    ProactiveProtection();
                    ~ProactiveProtection();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf status; //type: empty

                class TriggerThreshold : public Entity
                {
                    public:
                        TriggerThreshold();
                        ~TriggerThreshold();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf coefficient; //type: uint32
                        YLeaf power; //type: uint32
                        YLeaf enable; //type: empty



                }; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold


                class RevertWindow : public Entity
                {
                    public:
                        RevertWindow();
                        ~RevertWindow();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf value_; //type: uint32
                        YLeaf enable; //type: empty



                }; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow


                class TriggerWindow : public Entity
                {
                    public:
                        TriggerWindow();
                        ~TriggerWindow();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf value_; //type: uint32
                        YLeaf enable; //type: empty



                }; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow


                class RevertThreshold : public Entity
                {
                    public:
                        RevertThreshold();
                        ~RevertThreshold();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf coefficient; //type: uint32
                        YLeaf power; //type: uint32
                        YLeaf enable; //type: empty



                }; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold> revert_threshold;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow> revert_window;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold> trigger_threshold;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow> trigger_window;


            }; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection


            class NetworkSrlgs : public Entity
            {
                public:
                    NetworkSrlgs();
                    ~NetworkSrlgs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class NetworkSrlg : public Entity
                {
                    public:
                        NetworkSrlg();
                        ~NetworkSrlg();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_id; //type: uint32
                        YLeaf srlg1; //type: uint32
                        YLeaf srlg2; //type: uint32
                        YLeaf srlg3; //type: uint32
                        YLeaf srlg4; //type: uint32
                        YLeaf srlg5; //type: uint32
                        YLeaf srlg6; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg> > network_srlg;


            }; // InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs


            class OtnSendTti : public Entity
            {
                public:
                    OtnSendTti();
                    ~OtnSendTti();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf string_type; //type: OtnSendTtiTypeFullEnum
                    YLeaf full_ascii_string; //type: string
                    YLeaf hex_string; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti


            class OtnExpectedTtitcmdapi : public Entity
            {
                public:
                    OtnExpectedTtitcmdapi();
                    ~OtnExpectedTtitcmdapi();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf string_type; //type: OtnExpTtiTypeDapiEnum
                    YLeaf dapi_ascii_string; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi


            class OtnSendTtisapi : public Entity
            {
                public:
                    OtnSendTtisapi();
                    ~OtnSendTtisapi();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf string_type; //type: OtnSendTtiTypeSapiEnum
                    YLeaf sapi_ascii_string; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi


            class OtnExpectedTtitcmos : public Entity
            {
                public:
                    OtnExpectedTtitcmos();
                    ~OtnExpectedTtitcmos();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf string_type; //type: OtnExpTtiTypeOsEnum
                    YLeaf osascii_string; //type: string
                    YLeaf oshex_string; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos


            class OtnExpectedTti : public Entity
            {
                public:
                    OtnExpectedTti();
                    ~OtnExpectedTti();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf string_type; //type: OtnExpTtiTypeFullEnum
                    YLeaf full_ascii_string; //type: string
                    YLeaf hex_string; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs> network_srlgs;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti> otn_expected_tti;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi> otn_expected_ttisapi;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi> otn_expected_ttitcmdapi;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos> otn_expected_ttitcmos;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti> otn_send_tti;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi> otn_send_ttisapi;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi> otn_send_ttitcmdapi;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos> otn_send_ttitcmos;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection> proactive_protection;


        }; // InterfaceConfigurations::InterfaceConfiguration::Otu


        class Macsec : public Entity
        {
            public:
                Macsec();
                ~Macsec();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class PskKeyChain : public Entity
            {
                public:
                    PskKeyChain();
                    ~PskKeyChain();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf key_chain_name; //type: string
                    YLeaf policy_name; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain> psk_key_chain; // presence node


        }; // InterfaceConfigurations::InterfaceConfiguration::Macsec


        class Ethernet : public Entity
        {
            public:
                Ethernet();
                ~Ethernet();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf duplex; //type: EthernetDuplexEnum
                YLeaf auto_negotiation; //type: EthernetAutoNegotiationEnum
                YLeaf flow_control; //type: EthernetFlowCtrlEnum
                YLeaf forward_error_correction; //type: EthernetFecEnum
                YLeaf priority_flow_control; //type: EthernetPfcEnum
                YLeaf loopback; //type: EthernetLoopbackEnum
                YLeaf speed; //type: EthernetSpeedEnum
                YLeaf inter_packet_gap; //type: EthernetIpgEnum

            class SignalFailBitErrorRate : public Entity
            {
                public:
                    SignalFailBitErrorRate();
                    ~SignalFailBitErrorRate();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf signal_remote_fault; //type: empty
                    YLeaf signal_fail_threshold; //type: uint32
                    YLeaf signal_fail_report_disable; //type: empty



            }; // InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate


            class SignalDegradeBitErrorRate : public Entity
            {
                public:
                    SignalDegradeBitErrorRate();
                    ~SignalDegradeBitErrorRate();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf signal_degrade_threshold; //type: uint32
                    YLeaf signal_degrade_report; //type: empty



            }; // InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate


            class CarrierDelay : public Entity
            {
                public:
                    CarrierDelay();
                    ~CarrierDelay();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf carrier_delay_up; //type: uint32
                    YLeaf carrier_delay_down; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ethernet::CarrierDelay> carrier_delay;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalDegradeBitErrorRate> signal_degrade_bit_error_rate;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ethernet::SignalFailBitErrorRate> signal_fail_bit_error_rate;


        }; // InterfaceConfigurations::InterfaceConfiguration::Ethernet


        class Dwdm : public Entity
        {
            public:
                Dwdm();
                ~Dwdm();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf enable_vtxp; //type: boolean
                YLeaf network_port_id; //type: string
                YLeaf transport_admin_state; //type: DwdmAdminStateEnum
                YLeaf laser; //type: empty
                YLeaf transmit_power; //type: int32
                YLeaf rx_threshold; //type: int32
                YLeaf network_connection_id; //type: string
                YLeaf loopback; //type: DwdmLoopbackEnum

            class NetworkSrlgs : public Entity
            {
                public:
                    NetworkSrlgs();
                    ~NetworkSrlgs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class NetworkSrlg : public Entity
                {
                    public:
                        NetworkSrlg();
                        ~NetworkSrlg();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_id; //type: uint32
                        YLeaf srlg1; //type: uint32
                        YLeaf srlg2; //type: uint32
                        YLeaf srlg3; //type: uint32
                        YLeaf srlg4; //type: uint32
                        YLeaf srlg5; //type: uint32
                        YLeaf srlg6; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg> > network_srlg;


            }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs


            class G709 : public Entity
            {
                public:
                    G709();
                    ~G709();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf proactive; //type: ProactiveEnum
                    YLeaf bdi_to_gais; //type: empty
                    YLeaf tim_to_gais; //type: empty
                    YLeaf proactive_logging_file; //type: string
                    YLeaf tti_processing; //type: empty
                    YLeaf enable; //type: boolean
                    YLeaf framing; //type: FramingEnum

                class Odu : public Entity
                {
                    public:
                        Odu();
                        ~Odu();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class OduReports : public Entity
                    {
                        public:
                            OduReports();
                            ~OduReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class OduReport : public Entity
                        {
                            public:
                                OduReport();
                                ~OduReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf alarm; //type: OduAlarmEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport> > odu_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports


                    class OduThresholds : public Entity
                    {
                        public:
                            OduThresholds();
                            ~OduThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class OduThreshold : public Entity
                        {
                            public:
                                OduThreshold();
                                ~OduThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf threshold; //type: OduThresholdEnum
                                YLeaf threshold_value; //type: uint32



                        }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold> > odu_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds


                    class OduExpectedTti : public Entity
                    {
                        public:
                            OduExpectedTti();
                            ~OduExpectedTti();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf string_type; //type: ExpectedTtiEnum
                            YLeaf ascii_string; //type: string
                            YLeaf hex_string; //type: string



                    }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti


                    class OduTxTti : public Entity
                    {
                        public:
                            OduTxTti();
                            ~OduTxTti();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf string_type; //type: TxTtiEnum
                            YLeaf ascii_string; //type: string
                            YLeaf hex_string; //type: string



                    }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti> odu_expected_tti;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports> odu_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds> odu_thresholds;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti> odu_tx_tti;


                }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu


                class Otu : public Entity
                {
                    public:
                        Otu();
                        ~Otu();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class OtuExpectedTti : public Entity
                    {
                        public:
                            OtuExpectedTti();
                            ~OtuExpectedTti();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf string_type; //type: ExpectedTtiEnum
                            YLeaf ascii_string; //type: string
                            YLeaf hex_string; //type: string



                    }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti


                    class OtuThresholds : public Entity
                    {
                        public:
                            OtuThresholds();
                            ~OtuThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class OtuThreshold : public Entity
                        {
                            public:
                                OtuThreshold();
                                ~OtuThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf threshold; //type: OtuThresholdEnum
                                YLeaf threshold_value; //type: uint32



                        }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold> > otu_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds


                    class Frr : public Entity
                    {
                        public:
                            Frr();
                            ~Frr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class TriggerWindow : public Entity
                        {
                            public:
                                TriggerWindow();
                                ~TriggerWindow();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf window; //type: uint32
                                YLeaf dummy; //type: uint32



                        }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow


                        class RevertThreshold : public Entity
                        {
                            public:
                                RevertThreshold();
                                ~RevertThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ber_base; //type: uint32
                                YLeaf ber_power; //type: uint32



                        }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold


                        class TriggerThreshold : public Entity
                        {
                            public:
                                TriggerThreshold();
                                ~TriggerThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ber_base; //type: uint32
                                YLeaf ber_power; //type: uint32



                        }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold


                        class RevertWindow : public Entity
                        {
                            public:
                                RevertWindow();
                                ~RevertWindow();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf window; //type: uint32
                                YLeaf dummy; //type: uint32



                        }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow


                            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold> revert_threshold; // presence node
                            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow> revert_window; // presence node
                            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold> trigger_threshold; // presence node
                            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow> trigger_window; // presence node


                    }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr


                    class OtuReports : public Entity
                    {
                        public:
                            OtuReports();
                            ~OtuReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class OtuReport : public Entity
                        {
                            public:
                                OtuReport();
                                ~OtuReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf alarm; //type: OtuAlarmEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport> > otu_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports


                    class OtuTxTti : public Entity
                    {
                        public:
                            OtuTxTti();
                            ~OtuTxTti();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf string_type; //type: TxTtiEnum
                            YLeaf ascii_string; //type: string
                            YLeaf hex_string; //type: string



                    }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr> frr;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti> otu_expected_tti;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports> otu_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds> otu_thresholds;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti> otu_tx_tti;


                }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu


                class Prbs : public Entity
                {
                    public:
                        Prbs();
                        ~Prbs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prbs_mode; //type: PrbsModeEnum
                        YLeaf prbs_pattern; //type: PrbsPatternEnum



                }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs


                class Fec : public Entity
                {
                    public:
                        Fec();
                        ~Fec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf fec_mode; //type: FecEnum
                        YLeaf efec_mode; //type: EfecEnum



                }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec> fec; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu> odu;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu> otu;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs> prbs; // presence node


            }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709


            class Wavelength : public Entity
            {
                public:
                    Wavelength();
                    ~Wavelength();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf wave_channel; //type: uint32
                    YLeaf wave_channel_number; //type: WaveChannelNumEnum
                    YLeaf prog_frequency; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709> g709;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs> network_srlgs;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength> wavelength; // presence node


        }; // InterfaceConfigurations::InterfaceConfiguration::Dwdm


        class VlanSubConfiguration : public Entity
        {
            public:
                VlanSubConfiguration();
                ~VlanSubConfiguration();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class VlanIdentifier : public Entity
            {
                public:
                    VlanIdentifier();
                    ~VlanIdentifier();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf vlan_type; //type: VlanEnum
                    YLeaf first_tag; //type: uint32
                    YLeaf second_tag; //type: one of uint32, enumeration



            }; // InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier> vlan_identifier; // presence node


        }; // InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration


        class EthernetService : public Entity
        {
            public:
                EthernetService();
                ~EthernetService();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class LocalTrafficDefaultEncapsulation : public Entity
            {
                public:
                    LocalTrafficDefaultEncapsulation();
                    ~LocalTrafficDefaultEncapsulation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf outer_tag_type; //type: VlanEnum
                    YLeaf outer_vlan_id; //type: uint32
                    YLeaf inner_vlan_id; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation


            class Encapsulation : public Entity
            {
                public:
                    Encapsulation();
                    ~Encapsulation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf outer_tag_type; //type: MatchEnum
                    YLeaf outer_range1_low; //type: one of uint32, enumeration
                    YLeaf outer_range1_high; //type: one of uint32, enumeration
                    YLeaf inner_tag_type; //type: MatchEnum
                    YLeaf inner_range1_low; //type: one of uint32, enumeration
                    YLeaf inner_range1_high; //type: uint32
                    YLeaf additional_range1_low; //type: one of uint32, enumeration
                    YLeaf additional_range1_high; //type: uint32
                    YLeaf additional_range2_low; //type: one of uint32, enumeration
                    YLeaf additional_range2_high; //type: uint32
                    YLeaf additional_range3_low; //type: one of uint32, enumeration
                    YLeaf additional_range3_high; //type: uint32
                    YLeaf additional_range4_low; //type: one of uint32, enumeration
                    YLeaf additional_range4_high; //type: uint32
                    YLeaf additional_range5_low; //type: one of uint32, enumeration
                    YLeaf additional_range5_high; //type: uint32
                    YLeaf additional_range6_low; //type: one of uint32, enumeration
                    YLeaf additional_range6_high; //type: uint32
                    YLeaf additional_range7_low; //type: one of uint32, enumeration
                    YLeaf additional_range7_high; //type: uint32
                    YLeaf additional_range8_low; //type: one of uint32, enumeration
                    YLeaf additional_range8_high; //type: uint32
                    YLeaf outer_class_of_service; //type: uint32
                    YLeaf inner_class_of_service; //type: uint32
                    YLeaf payload_ethertype_match; //type: EthertypeMatchEnum
                    YLeaf ingress_source_mac; //type: string
                    YLeaf ingress_destination_mac; //type: string
                    YLeaf exact; //type: empty



            }; // InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation


            class Rewrite : public Entity
            {
                public:
                    Rewrite();
                    ~Rewrite();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf rewrite_type; //type: RewriteEnum
                    YLeaf outer_tag_type; //type: MatchEnum
                    YLeaf outer_tag_value; //type: uint32
                    YLeaf inner_tag_type; //type: MatchEnum
                    YLeaf inner_tag_value; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation> encapsulation; // presence node
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation> local_traffic_default_encapsulation; // presence node
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite> rewrite; // presence node


        }; // InterfaceConfigurations::InterfaceConfiguration::EthernetService


        class EthernetBng : public Entity
        {
            public:
                EthernetBng();
                ~EthernetBng();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class AmbiguousEncapsulation : public Entity
            {
                public:
                    AmbiguousEncapsulation();
                    ~AmbiguousEncapsulation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf outer_tag_type; //type: MatchEnum
                    YLeaf outer_range1_low; //type: one of uint32, enumeration
                    YLeaf outer_range1_high; //type: one of uint32, enumeration
                    YLeaf inner_tag_type; //type: MatchEnum
                    YLeaf inner_range1_low; //type: one of uint32, enumeration
                    YLeaf inner_range1_high; //type: uint32
                    YLeaf additional_range1_low; //type: one of uint32, enumeration
                    YLeaf additional_range1_high; //type: uint32
                    YLeaf additional_range2_low; //type: one of uint32, enumeration
                    YLeaf additional_range2_high; //type: uint32
                    YLeaf additional_range3_low; //type: one of uint32, enumeration
                    YLeaf additional_range3_high; //type: uint32
                    YLeaf additional_range4_low; //type: one of uint32, enumeration
                    YLeaf additional_range4_high; //type: uint32
                    YLeaf additional_range5_low; //type: one of uint32, enumeration
                    YLeaf additional_range5_high; //type: uint32
                    YLeaf additional_range6_low; //type: one of uint32, enumeration
                    YLeaf additional_range6_high; //type: uint32
                    YLeaf additional_range7_low; //type: one of uint32, enumeration
                    YLeaf additional_range7_high; //type: uint32
                    YLeaf additional_range8_low; //type: one of uint32, enumeration
                    YLeaf additional_range8_high; //type: uint32
                    YLeaf outer_class_of_service; //type: uint32
                    YLeaf inner_class_of_service; //type: uint32
                    YLeaf payload_ethertype_match; //type: EthertypeMatchEnum
                    YLeaf ingress_source_mac; //type: string
                    YLeaf ingress_destination_mac; //type: string
                    YLeaf exact; //type: empty



            }; // InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation> ambiguous_encapsulation; // presence node


        }; // InterfaceConfigurations::InterfaceConfiguration::EthernetBng


        class MacAccounting : public Entity
        {
            public:
                MacAccounting();
                ~MacAccounting();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf ingress; //type: empty
                YLeaf egress; //type: empty



        }; // InterfaceConfigurations::InterfaceConfiguration::MacAccounting


        class EthernetFeatures : public Entity
        {
            public:
                EthernetFeatures();
                ~EthernetFeatures();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf filtering; //type: FilteringEnum
                YLeaf ether_link_oam_enable; //type: empty

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



                class Domains : public Entity
                {
                    public:
                        Domains();
                        ~Domains();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Domain : public Entity
                    {
                        public:
                            Domain();
                            ~Domain();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf domain; //type: string

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


                                YLeaf cos; //type: uint32

                            class SlaProfileTargetMepIds : public Entity
                            {
                                public:
                                    SlaProfileTargetMepIds();
                                    ~SlaProfileTargetMepIds();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class SlaProfileTargetMepId : public Entity
                                {
                                    public:
                                        SlaProfileTargetMepId();
                                        ~SlaProfileTargetMepId();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf profile; //type: string
                                        YLeaf target_mep_id; //type: uint32



                                }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId


                                class SlaProfileTargetMacAddress : public Entity
                                {
                                    public:
                                        SlaProfileTargetMacAddress();
                                        ~SlaProfileTargetMacAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf profile; //type: string
                                        YLeaf target_mac_address; //type: string



                                }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress> > sla_profile_target_mac_address;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId> > sla_profile_target_mep_id;


                            }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds


                            class MepProperties : public Entity
                            {
                                public:
                                    MepProperties();
                                    ~MepProperties();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf service; //type: string
                                    YLeaf mep_id; //type: uint32



                            }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties


                            class LossMeasurementCounters : public Entity
                            {
                                public:
                                    LossMeasurementCounters();
                                    ~LossMeasurementCounters();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf cfg_type; //type: CfmLmCountersCfgEnum
                                    YLeaf cos0; //type: uint32
                                    YLeaf cos1; //type: uint32
                                    YLeaf cos2; //type: uint32
                                    YLeaf cos3; //type: uint32
                                    YLeaf cos4; //type: uint32
                                    YLeaf cos5; //type: uint32
                                    YLeaf cos6; //type: uint32
                                    YLeaf cos7; //type: uint32



                            }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters


                                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters> loss_measurement_counters; // presence node
                                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties> mep_properties; // presence node
                                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds> sla_profile_target_mep_ids;


                        }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep


                            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep> mep;


                    }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain> > domain;


                }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains


                class AisUp : public Entity
                {
                    public:
                        AisUp();
                        ~AisUp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Transmission : public Entity
                    {
                        public:
                            Transmission();
                            ~Transmission();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf ais_interval; //type: CfmAisIntervalEnum
                            YLeaf cos; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission> transmission; // presence node


                }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp> ais_up;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains> domains;


            }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm


            class EtherLinkOam : public Entity
            {
                public:
                    EtherLinkOam();
                    ~EtherLinkOam();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf timeout; //type: uint32
                    YLeaf mode; //type: EtherLinkOamInterfaceModeEnumEnum
                    YLeaf mib_retrieval; //type: boolean
                    YLeaf profile_name; //type: string
                    YLeaf remote_loopback; //type: boolean
                    YLeaf hello_interval; //type: EtherLinkOamInterfaceHelloIntervalEnumEnum
                    YLeaf udlf; //type: boolean

                class LinkMonitor : public Entity
                {
                    public:
                        LinkMonitor();
                        ~LinkMonitor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf monitoring; //type: boolean

                    class FramePeriod : public Entity
                    {
                        public:
                            FramePeriod();
                            ~FramePeriod();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf window; //type: uint32

                        class Threshold : public Entity
                        {
                            public:
                                Threshold();
                                ~Threshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf threshold_low; //type: uint32
                                YLeaf threshold_high; //type: uint32



                        }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::FramePeriod::Threshold


                            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::FramePeriod::Threshold> threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::FramePeriod


                    class SymbolPeriod : public Entity
                    {
                        public:
                            SymbolPeriod();
                            ~SymbolPeriod();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf window; //type: uint32

                        class Threshold : public Entity
                        {
                            public:
                                Threshold();
                                ~Threshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf threshold_low; //type: uint32
                                YLeaf threshold_high; //type: uint32



                        }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::SymbolPeriod::Threshold


                            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::SymbolPeriod::Threshold> threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::SymbolPeriod


                    class Frame : public Entity
                    {
                        public:
                            Frame();
                            ~Frame();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf window; //type: uint32

                        class Threshold : public Entity
                        {
                            public:
                                Threshold();
                                ~Threshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf threshold_low; //type: uint32
                                YLeaf threshold_high; //type: uint32



                        }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::Frame::Threshold


                            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::Frame::Threshold> threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::Frame


                    class FrameSeconds : public Entity
                    {
                        public:
                            FrameSeconds();
                            ~FrameSeconds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf window; //type: uint32

                        class Threshold : public Entity
                        {
                            public:
                                Threshold();
                                ~Threshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf threshold_low; //type: uint32
                                YLeaf threshold_high; //type: uint32



                        }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::FrameSeconds::Threshold


                            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::FrameSeconds::Threshold> threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::FrameSeconds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::Frame> frame;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::FramePeriod> frame_period;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::FrameSeconds> frame_seconds;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor::SymbolPeriod> symbol_period;


                }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor


                class Action : public Entity
                {
                    public:
                        Action();
                        ~Action();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf dying_gasp; //type: EtherLinkOamEventActionEnumEnum
                        YLeaf link_fault; //type: EtherLinkOamEventActionEnumEfdEnum
                        YLeaf capabilities_conflict; //type: EtherLinkOamEventActionEnumEfdEnum
                        YLeaf session_up; //type: EtherLinkOamEventActionPrimEnumEnum
                        YLeaf critical_event; //type: EtherLinkOamEventActionEnumEnum
                        YLeaf remote_loopback; //type: EtherLinkOamEventActionPrimEnumEnum
                        YLeaf wiring_conflict; //type: EtherLinkOamEventActionEnumEfdEnum
                        YLeaf high_threshold; //type: EtherLinkOamEventActionEnumEnum
                        YLeaf discovery_timeout; //type: EtherLinkOamEventActionEnumEfdEnum
                        YLeaf session_down; //type: EtherLinkOamEventActionEnumEfdEnum



                }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action


                class RequireRemote : public Entity
                {
                    public:
                        RequireRemote();
                        ~RequireRemote();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf mode; //type: EtherLinkOamInterfaceRequireModeEnumEnum
                        YLeaf mib_retrieval; //type: boolean
                        YLeaf remote_loopback; //type: boolean
                        YLeaf link_monitoring; //type: boolean



                }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action> action;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitor> link_monitor;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote> require_remote;


            }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm> cfm;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam> ether_link_oam;


        }; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures


        class CarrierDelay : public Entity
        {
            public:
                CarrierDelay();
                ~CarrierDelay();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf carrier_delay_up; //type: uint32
                YLeaf carrier_delay_down; //type: uint32



        }; // InterfaceConfigurations::InterfaceConfiguration::CarrierDelay


        class VlanTrunkConfiguration : public Entity
        {
            public:
                VlanTrunkConfiguration();
                ~VlanTrunkConfiguration();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf tunneling_ethertype; //type: TunnelingEthertypeEnum

            class NativeVlanIdentifier : public Entity
            {
                public:
                    NativeVlanIdentifier();
                    ~NativeVlanIdentifier();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf vlan_type; //type: VlanEnum
                    YLeaf vlan_identifier; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier> native_vlan_identifier; // presence node
                class TunnelingEthertypeEnum;


        }; // InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration


        class NvSatelliteAccess : public Entity
        {
            public:
                NvSatelliteAccess();
                ~NvSatelliteAccess();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;





        }; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess


        class NvSatelliteFabricLink : public Entity
        {
            public:
                NvSatelliteFabricLink();
                ~NvSatelliteFabricLink();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf satellite; //type: uint32

            class Redundancy : public Entity
            {
                public:
                    Redundancy();
                    ~Redundancy();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf iccp_group; //type: uint32
                    YLeaf minimum_preferred_links; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy


            class RemotePorts : public Entity
            {
                public:
                    RemotePorts();
                    ~RemotePorts();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class RemotePort : public Entity
                {
                    public:
                        RemotePort();
                        ~RemotePort();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf port_type; //type: string
                        YLeaf slot; //type: uint32
                        YLeaf sub_slot; //type: uint32
                        YLeaf port_range; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort> > remote_port;


            }; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts


            class EthernetFeatures : public Entity
            {
                public:
                    EthernetFeatures();
                    ~EthernetFeatures();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



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


                        YLeaf continuity_check_interval; //type: CfmCcmIntervalEnum
                        YLeaf level; //type: uint32
                        YLeaf enable; //type: empty



                }; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm> cfm;


            }; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures> ethernet_features;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy> redundancy;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts> remote_ports;


        }; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink


        class NvSatelliteFabricNetwork : public Entity
        {
            public:
                NvSatelliteFabricNetwork();
                ~NvSatelliteFabricNetwork();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf enable; //type: empty

            class Satellites : public Entity
            {
                public:
                    Satellites();
                    ~Satellites();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Satellite : public Entity
                {
                    public:
                        Satellite();
                        ~Satellite();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf satellite_id; //type: uint32
                        YLeaf enable; //type: empty

                    class RemotePorts : public Entity
                    {
                        public:
                            RemotePorts();
                            ~RemotePorts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class RemotePort : public Entity
                        {
                            public:
                                RemotePort();
                                ~RemotePort();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf port_type; //type: string
                                YLeaf slot; //type: uint32
                                YLeaf sub_slot; //type: uint32
                                YLeaf port_range; //type: string



                        }; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort> > remote_port;


                    }; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts> remote_ports;


                }; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite> > satellite;


            }; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites


            class Redundancy : public Entity
            {
                public:
                    Redundancy();
                    ~Redundancy();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf iccp_group; //type: uint32
                    YLeaf minimum_preferred_links; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy> redundancy;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites> satellites;


        }; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork


        class Lldp : public Entity
        {
            public:
                Lldp();
                ~Lldp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf lldp_intf_enter; //type: boolean

            class Transmit : public Entity
            {
                public:
                    Transmit();
                    ~Transmit();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf disable; //type: boolean



            }; // InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit


            class Receive : public Entity
            {
                public:
                    Receive();
                    ~Receive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf disable; //type: boolean



            }; // InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive> receive;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit> transmit;


        }; // InterfaceConfigurations::InterfaceConfiguration::Lldp


        class SpanMonitorSessions : public Entity
        {
            public:
                SpanMonitorSessions();
                ~SpanMonitorSessions();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class SpanMonitorSession : public Entity
            {
                public:
                    SpanMonitorSession();
                    ~SpanMonitorSession();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf session_class; //type: SpanSessionClassEnum
                    YLeaf mirror_first; //type: uint32
                    YLeaf mirror_interval; //type: SpanMirrorIntervalEnum
                    YLeaf acl; //type: empty

                class Attachment : public Entity
                {
                    public:
                        Attachment();
                        ~Attachment();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf session_name; //type: string
                        YLeaf direction; //type: SpanTrafficDirectionEnum
                        YLeaf port_level_enable; //type: empty



                }; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node


            }; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession


                std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession> > span_monitor_session;


        }; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions


        class ServicePolicies : public Entity
        {
            public:
                ServicePolicies();
                ~ServicePolicies();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class ServicePolicy : public Entity
            {
                public:
                    ServicePolicy();
                    ~ServicePolicy();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf service_policy_name; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy


                std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy> > service_policy;


        }; // InterfaceConfigurations::InterfaceConfiguration::ServicePolicies


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


                    YLeaf af_name; //type: VrfAddressFamilyEnum
                    YLeaf saf_name; //type: VrfSubAddressFamilyEnum



            }; // InterfaceConfigurations::InterfaceConfiguration::Afs::Af


            class AfTopologyName : public Entity
            {
                public:
                    AfTopologyName();
                    ~AfTopologyName();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf topology_name; //type: string
                    YLeaf af_name; //type: VrfAddressFamilyEnum
                    YLeaf saf_name; //type: VrfSubAddressFamilyEnum



            }; // InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName


                std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Afs::Af> > af;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName> > af_topology_name;


        }; // InterfaceConfigurations::InterfaceConfiguration::Afs


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


                YLeaf load_interval; //type: uint32



        }; // InterfaceConfigurations::InterfaceConfiguration::Statistics


        class Ipv6PacketFilter : public Entity
        {
            public:
                Ipv6PacketFilter();
                ~Ipv6PacketFilter();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Inbound : public Entity
            {
                public:
                    Inbound();
                    ~Inbound();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf common_acl_name; //type: string
                    YLeaf name; //type: string
                    YLeaf interface_statistics; //type: empty
                    YLeaf compression_level; //type: uint32
                    YLeafList acl_name_array; //type: list of  string
                    YLeafList is_common_array; //type: list of  boolean



            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound


            class Outbound : public Entity
            {
                public:
                    Outbound();
                    ~Outbound();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf do_not_use; //type: string
                    YLeaf name; //type: string
                    YLeaf interface_statistics; //type: empty
                    YLeaf compression_level; //type: uint32
                    YLeafList acl_name_array; //type: list of  string
                    YLeafList is_common_array; //type: list of  boolean



            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound> inbound;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound> outbound;


        }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter


        class EsPacketFilter : public Entity
        {
            public:
                EsPacketFilter();
                ~EsPacketFilter();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf outbound; //type: string
                YLeaf inbound; //type: string



        }; // InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter


        class Ipv4PacketFilter : public Entity
        {
            public:
                Ipv4PacketFilter();
                ~Ipv4PacketFilter();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Outbound : public Entity
            {
                public:
                    Outbound();
                    ~Outbound();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf do_not_use; //type: string
                    YLeaf name; //type: string
                    YLeaf hardware_count; //type: empty
                    YLeaf interface_statistics; //type: empty
                    YLeaf compression_level; //type: uint32
                    YLeafList acl_name_array; //type: list of  string
                    YLeafList is_common_array; //type: list of  boolean



            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound


            class Inbound : public Entity
            {
                public:
                    Inbound();
                    ~Inbound();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf common_acl_name; //type: string
                    YLeaf name; //type: string
                    YLeaf hardware_count; //type: empty
                    YLeaf interface_statistics; //type: empty
                    YLeaf compression_level; //type: uint32
                    YLeafList acl_name_array; //type: list of  string
                    YLeafList is_common_array; //type: list of  boolean



            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound> inbound;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound> outbound;


        }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter


        class Dagrs : public Entity
        {
            public:
                Dagrs();
                ~Dagrs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Dagr : public Entity
            {
                public:
                    Dagr();
                    ~Dagr();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf ip_addr; //type: string
                    YLeaf enter; //type: empty

                class Sub : public Entity
                {
                    public:
                        Sub();
                        ~Sub();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf priority_timeout; //type: uint32

                    class Metric : public Entity
                    {
                        public:
                            Metric();
                            ~Metric();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf metric_norm; //type: uint32
                            YLeaf metric_prio; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric


                    class Timers : public Entity
                    {
                        public:
                            Timers();
                            ~Timers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf query_time; //type: uint32
                            YLeaf sby_time; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers


                    class Distance : public Entity
                    {
                        public:
                            Distance();
                            ~Distance();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf dist_norm; //type: uint32
                            YLeaf dist_prio; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance> distance;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric> metric;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers> timers;


                }; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub> sub;


            }; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr


                std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr> > dagr;


        }; // InterfaceConfigurations::InterfaceConfiguration::Dagrs


        class Ipv4Arp : public Entity
        {
            public:
                Ipv4Arp();
                ~Ipv4Arp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf learning_local; //type: empty
                YLeaf gratuitous_ignore; //type: empty
                YLeaf proxy_arp; //type: empty
                YLeaf purge_delay; //type: uint32
                YLeaf learning_disable; //type: empty
                YLeaf local_proxy_arp; //type: empty
                YLeaf timeout; //type: uint32



        }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp


        class Ipv4Network : public Entity
        {
            public:
                Ipv4Network();
                ~Ipv4Network();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf icmp_mask_reply; //type: empty
                YLeaf tcp_mss_adjust_enable; //type: empty
                YLeaf ttl_propagate_disable; //type: empty
                YLeaf point_to_point; //type: empty
                YLeaf mtu; //type: uint32

            class BgpPa : public Entity
            {
                public:
                    BgpPa();
                    ~BgpPa();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Input : public Entity
                {
                    public:
                        Input();
                        ~Input();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf source_accounting; //type: boolean
                        YLeaf destination_accounting; //type: boolean



                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input


                class Output : public Entity
                {
                    public:
                        Output();
                        ~Output();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf source_accounting; //type: boolean
                        YLeaf destination_accounting; //type: boolean



                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input> input;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output> output;


            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa


            class Verify : public Entity
            {
                public:
                    Verify();
                    ~Verify();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf reachable; //type: Ipv4ReachableEnum
                    YLeaf self_ping; //type: Ipv4SelfPingEnum
                    YLeaf default_ping; //type: Ipv4DefaultPingEnum



            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify


            class Bgp : public Entity
            {
                public:
                    Bgp();
                    ~Bgp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Qppb : public Entity
                {
                    public:
                        Qppb();
                        ~Qppb();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Input : public Entity
                    {
                        public:
                            Input();
                            ~Input();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf source; //type: Ipv4InterfaceQppbEnum
                            YLeaf destination; //type: Ipv4InterfaceQppbEnum



                    }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input> input;


                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb


                class FlowTag : public Entity
                {
                    public:
                        FlowTag();
                        ~FlowTag();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class FlowTagInput : public Entity
                    {
                        public:
                            FlowTagInput();
                            ~FlowTagInput();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf source; //type: boolean
                            YLeaf destination; //type: boolean



                    }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput> flow_tag_input;


                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag> flow_tag;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb> qppb;


            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp


            class Addresses : public Entity
            {
                public:
                    Addresses();
                    ~Addresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf unnumbered; //type: string
                    YLeaf dhcp; //type: empty

                class Secondaries : public Entity
                {
                    public:
                        Secondaries();
                        ~Secondaries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Secondary : public Entity
                    {
                        public:
                            Secondary();
                            ~Secondary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf address; //type: string
                            YLeaf netmask; //type: string
                            YLeaf route_tag; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary> > secondary;


                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries


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


                        YLeaf address; //type: string
                        YLeaf netmask; //type: string
                        YLeaf route_tag; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary> primary; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries> secondaries;


            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses


            class HelperAddresses : public Entity
            {
                public:
                    HelperAddresses();
                    ~HelperAddresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class HelperAddress : public Entity
                {
                    public:
                        HelperAddress();
                        ~HelperAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf address; //type: string
                        YLeaf vrf_name; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress> > helper_address;


            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses> addresses;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp> bgp;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa> bgp_pa;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses> helper_addresses;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify> verify;


        }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network


        class Ipv4NetworkForwarding : public Entity
        {
            public:
                Ipv4NetworkForwarding();
                ~Ipv4NetworkForwarding();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf directed_broadcast; //type: empty
                YLeaf unreachables; //type: empty
                YLeaf redirects; //type: empty



        }; // InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding


        class Ipv6Network : public Entity
        {
            public:
                Ipv6Network();
                ~Ipv6Network();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf mtu; //type: uint32
                YLeaf unnumbered; //type: string
                YLeaf ttl_propagate_disable; //type: empty
                YLeaf tcp_mss_adjust_enable; //type: empty
                YLeaf unreachables; //type: empty

            class BgpQosPolicyPropagation : public Entity
            {
                public:
                    BgpQosPolicyPropagation();
                    ~BgpQosPolicyPropagation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf source; //type: Ipv6QppbEnum
                    YLeaf destination; //type: Ipv6QppbEnum



            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation


            class BgpPolicyAccountings : public Entity
            {
                public:
                    BgpPolicyAccountings();
                    ~BgpPolicyAccountings();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class BgpPolicyAccounting : public Entity
                {
                    public:
                        BgpPolicyAccounting();
                        ~BgpPolicyAccounting();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf direction; //type: string
                        YLeaf destination_accounting; //type: boolean
                        YLeaf source_accounting; //type: boolean



                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting> > bgp_policy_accounting;


            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings


            class MacAddressFilters : public Entity
            {
                public:
                    MacAddressFilters();
                    ~MacAddressFilters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class MacAddressFilter : public Entity
                {
                    public:
                        MacAddressFilter();
                        ~MacAddressFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf multicast_address; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter> > mac_address_filter;


            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters


            class Verify : public Entity
            {
                public:
                    Verify();
                    ~Verify();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf reachable; //type: Ipv6ReachableEnum
                    YLeaf self_ping; //type: Ipv6SelfPingEnum
                    YLeaf default_ping; //type: Ipv6DefaultPingEnum



            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify


            class Addresses : public Entity
            {
                public:
                    Addresses();
                    ~Addresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class LinkLocalAddress : public Entity
                {
                    public:
                        LinkLocalAddress();
                        ~LinkLocalAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf address; //type: string
                        YLeaf zone; //type: string
                        YLeaf route_tag; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress


                class Eui64Addresses : public Entity
                {
                    public:
                        Eui64Addresses();
                        ~Eui64Addresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Eui64Address : public Entity
                    {
                        public:
                            Eui64Address();
                            ~Eui64Address();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf address; //type: string
                            YLeaf prefix_length; //type: uint32
                            YLeaf zone; //type: string
                            YLeaf route_tag; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address> > eui64_address;


                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses


                class RegularAddresses : public Entity
                {
                    public:
                        RegularAddresses();
                        ~RegularAddresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class RegularAddress : public Entity
                    {
                        public:
                            RegularAddress();
                            ~RegularAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf address; //type: string
                            YLeaf prefix_length; //type: uint32
                            YLeaf zone; //type: string
                            YLeaf route_tag; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress> > regular_address;


                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses


                class AutoConfiguration : public Entity
                {
                    public:
                        AutoConfiguration();
                        ~AutoConfiguration();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enable; //type: empty



                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration> auto_configuration;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses> eui64_addresses;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress> link_local_address; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses> regular_addresses;


            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses


            class BgpFlowTagPolicyTable : public Entity
            {
                public:
                    BgpFlowTagPolicyTable();
                    ~BgpFlowTagPolicyTable();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class BgpFlowTagPolicy : public Entity
                {
                    public:
                        BgpFlowTagPolicy();
                        ~BgpFlowTagPolicy();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf source; //type: boolean
                        YLeaf destination; //type: boolean



                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy> bgp_flow_tag_policy;


            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses> addresses;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable> bgp_flow_tag_policy_table;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings> bgp_policy_accountings;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation> bgp_qos_policy_propagation; // presence node
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters> mac_address_filters;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify> verify; // presence node


        }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network


        class Ipv6Neighbor : public Entity
        {
            public:
                Ipv6Neighbor();
                ~Ipv6Neighbor();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf reachable_time; //type: uint32
                YLeaf ra_unspecify_hoplimit; //type: empty
                YLeaf dad_attempts; //type: uint32
                YLeaf srp_multicast_encapsulation; //type: Ipv6SrpEncapsulationEnum
                YLeaf ns_interval; //type: uint32
                YLeaf cache_limit; //type: uint32
                YLeaf redirect; //type: empty
                YLeaf srp_unicast_encapsulation; //type: Ipv6SrpEncapsulationEnum
                YLeaf ramtu_suppress; //type: empty
                YLeaf managed_config; //type: empty
                YLeaf ra_lifetime; //type: uint32
                YLeaf other_config; //type: empty
                YLeaf ra_suppress; //type: empty
                YLeaf router_preference; //type: Ipv6NdRouterPrefEnum

            class RaspecificRouteS : public Entity
            {
                public:
                    RaspecificRouteS();
                    ~RaspecificRouteS();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class RaspecificRoute : public Entity
                {
                    public:
                        RaspecificRoute();
                        ~RaspecificRoute();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf specific_route; //type: string
                        YLeaf prefix_length; //type: uint8
                        YLeaf lifetime; //type: uint32
                        YLeaf preference; //type: Ipv6NdRouterPrefEnum



                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute> > raspecific_route;


            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS


            class RadnsSearches : public Entity
            {
                public:
                    RadnsSearches();
                    ~RadnsSearches();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class RadnsSearch : public Entity
                {
                    public:
                        RadnsSearch();
                        ~RadnsSearch();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf dns_search_list; //type: string
                        YLeaf lifetime; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch> > radns_search;


            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches


            class RadnsServers : public Entity
            {
                public:
                    RadnsServers();
                    ~RadnsServers();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class RadnsServer : public Entity
                {
                    public:
                        RadnsServer();
                        ~RadnsServer();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf dns_server; //type: string
                        YLeaf lifetime; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer> > radns_server;


            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers


            class RaInterval : public Entity
            {
                public:
                    RaInterval();
                    ~RaInterval();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf maximum; //type: uint32
                    YLeaf minimum; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval


            class Ipv6Prefixes : public Entity
            {
                public:
                    Ipv6Prefixes();
                    ~Ipv6Prefixes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Ipv6Prefix : public Entity
                {
                    public:
                        Ipv6Prefix();
                        ~Ipv6Prefix();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prefix; //type: string
                        YLeaf prefix_zone; //type: string
                        YLeaf prefix_length; //type: uint8
                        YLeaf valid_lifetime; //type: uint32
                        YLeaf preferred_lifetime; //type: uint32
                        YLeaf off_link; //type: boolean
                        YLeaf no_auto_config; //type: boolean
                        YLeaf no_advertize; //type: boolean
                        YLeaf expiry_month; //type: Ipv6NdMonthEnum
                        YLeaf expiry_date; //type: uint32
                        YLeaf expiry_year; //type: uint32
                        YLeaf expiry_hour; //type: uint32
                        YLeaf expiry_minute; //type: uint32
                        YLeaf pref_expiry_month; //type: Ipv6NdMonthEnum
                        YLeaf pref_expiry_date; //type: uint32
                        YLeaf pref_expiry_year; //type: uint32
                        YLeaf pref_expiry_hour; //type: uint32
                        YLeaf pref_expiry_minute; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix> > ipv6_prefix;


            }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes> ipv6_prefixes;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval> ra_interval; // presence node
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches> radns_searches;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers> radns_servers;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS> raspecific_route_s;


        }; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor


        class TunnelTeAttributes : public Entity
        {
            public:
                TunnelTeAttributes();
                ~TunnelTeAttributes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf path_protection; //type: empty
                YLeaf forward_class; //type: uint32
                YLeaf destination; //type: string
                YLeaf record_route; //type: empty
                YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
                YLeaf soft_preemption; //type: empty
                YLeaf load_share; //type: uint32
                YLeaf signalled_name; //type: string

            class BackupBandwidth : public Entity
            {
                public:
                    BackupBandwidth();
                    ~BackupBandwidth();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
                    YLeaf pool_type; //type: MplsTeBackupBandwidthPoolEnum
                    YLeaf class_type; //type: MplsTeBackupBandwidthClassEnum
                    YLeaf limit_type; //type: MplsTeBandwidthLimitEnum
                    YLeaf backup_bandwidth; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth


            class BfdOverLsp : public Entity
            {
                public:
                    BfdOverLsp();
                    ~BfdOverLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf dampening_initial_wait; //type: uint32
                    YLeaf fast_detect; //type: MplsTebfdSessionEnum
                    YLeaf enable; //type: empty
                    YLeaf multiplier; //type: uint32
                    YLeaf bringup_timeout; //type: uint32
                    YLeaf periodic_ping_disable; //type: empty
                    YLeaf dampening_secondary_wait; //type: uint32
                    YLeaf periodic_ping_interval; //type: uint32
                    YLeaf dampening_maximum_wait; //type: uint32
                    YLeaf minimum_interval; //type: uint32
                    YLeaf encap_mode; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp


            class BindingSegmentIdMpls : public Entity
            {
                public:
                    BindingSegmentIdMpls();
                    ~BindingSegmentIdMpls();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf segment_id_type; //type: BindingSegmentIdEnum
                    YLeaf label_value; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls


            class ForwardingAdjacency : public Entity
            {
                public:
                    ForwardingAdjacency();
                    ~ForwardingAdjacency();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enable; //type: empty
                    YLeaf include_ipv6; //type: empty
                    YLeaf hold_time; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency


            class PathOptionProtects : public Entity
            {
                public:
                    PathOptionProtects();
                    ~PathOptionProtects();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class PathOptionProtect : public Entity
                {
                    public:
                        PathOptionProtect();
                        ~PathOptionProtect();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf protection; //type: MplsTePathOptionProtectionEnum

                    class PathOptions : public Entity
                    {
                        public:
                            PathOptions();
                            ~PathOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PathOption : public Entity
                        {
                            public:
                                PathOption();
                                ~PathOption();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf preference_level; //type: uint32
                                YLeaf path_type; //type: MplsTePathOptionEnum
                                YLeaf path_id; //type: uint32
                                YLeaf path_name; //type: string
                                YLeaf path_property; //type: int32
                                YLeaf interface; //type: string
                                YLeaf output_label; //type: int32
                                YLeaf destination; //type: string
                                YLeaf lockdown; //type: MplsTePathOptionPropertyEnum
                                YLeaf verbatim; //type: MplsTePathOptionPropertyEnum
                                YLeaf pce; //type: MplsTePathOptionPropertyEnum
                                YLeaf pce_address; //type: string
                                YLeaf igp_type; //type: MplsTeIgpProtocolEnum
                                YLeaf igp_instance; //type: string
                                YLeaf igp_area; //type: int32
                                YLeaf igp_area_ip_address_id; //type: string
                                YLeaf path_option_attribute_set_name; //type: string
                                YLeaf protected_by_preference_level; //type: uint32
                                YLeaf segment_routing; //type: MplsTePathOptionPropertyEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption> > path_option;


                    }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions> path_options;


                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect> > path_option_protect;


            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects


            class Bidirectional : public Entity
            {
                public:
                    Bidirectional();
                    ~Bidirectional();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enabled; //type: empty

                class AssociationCoroutedType : public Entity
                {
                    public:
                        AssociationCoroutedType();
                        ~AssociationCoroutedType();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf wrap_protection_enable; //type: empty
                        YLeaf enable; //type: empty

                    class FaultOam : public Entity
                    {
                        public:
                            FaultOam();
                            ~FaultOam();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: empty



                    }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam> fault_oam;


                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType


                class AssociationParameters : public Entity
                {
                    public:
                        AssociationParameters();
                        ~AssociationParameters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf association_id; //type: uint32
                        YLeaf association_source_address; //type: string
                        YLeaf association_is_global_id_configured; //type: boolean
                        YLeaf association_global_id; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType> association_corouted_type;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters> association_parameters; // presence node


            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional


            class AdminMode : public Entity
            {
                public:
                    AdminMode();
                    ~AdminMode();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf deactivate_tunnel; //type: empty



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode


            class Switching : public Entity
            {
                public:
                    Switching();
                    ~Switching();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Transit : public Entity
                {
                    public:
                        Transit();
                        ~Transit();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf capability; //type: MplsTeSwitchingCapEnum
                        YLeaf encoding; //type: MplsTeSwitchingEncodeEnum



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit


                class Endpoint : public Entity
                {
                    public:
                        Endpoint();
                        ~Endpoint();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf capability; //type: MplsTeSwitchingCapEnum
                        YLeaf encoding; //type: MplsTeSwitchingEncodeEnum



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint> endpoint; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit> transit; // presence node


            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching


            class Pce : public Entity
            {
                public:
                    Pce();
                    ~Pce();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enable; //type: empty
                    YLeaf delegation; //type: empty



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce


            class TunnelPathSelection : public Entity
            {
                public:
                    TunnelPathSelection();
                    ~TunnelPathSelection();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf tiebreaker; //type: MplsTePathSelectionTiebreakerEnum
                    YLeaf path_selection_hop_limit; //type: uint32
                    YLeaf path_selection_cost_limit; //type: uint32

                class Invalidation : public Entity
                {
                    public:
                        Invalidation();
                        ~Invalidation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf path_invalidation_timeout; //type: uint32
                        YLeaf path_invalidation_action; //type: PathInvalidationActionEnum



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation> invalidation; // presence node


            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection


            class AutoBandwidth : public Entity
            {
                public:
                    AutoBandwidth();
                    ~AutoBandwidth();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf underflow_enable; //type: boolean
                    YLeaf enabled; //type: boolean
                    YLeaf application_frequency; //type: uint32
                    YLeaf overflow_enable; //type: boolean
                    YLeaf collection_only; //type: empty

                class Underflow : public Entity
                {
                    public:
                        Underflow();
                        ~Underflow();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf underflow_threshold_percent; //type: uint32
                        YLeaf underflow_threshold_value; //type: uint32
                        YLeaf underflow_threshold_limit; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow


                class Overflow : public Entity
                {
                    public:
                        Overflow();
                        ~Overflow();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf overflow_threshold_percent; //type: uint32
                        YLeaf overflow_threshold_value; //type: uint32
                        YLeaf overflow_threshold_limit; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow


                class BandwidthLimits : public Entity
                {
                    public:
                        BandwidthLimits();
                        ~BandwidthLimits();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf bandwidth_min_limit; //type: uint32
                        YLeaf bandwidth_max_limit; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits


                class AdjustmentThreshold : public Entity
                {
                    public:
                        AdjustmentThreshold();
                        ~AdjustmentThreshold();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf adjustment_threshold_percent; //type: uint32
                        YLeaf adjustment_threshold_value; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold> adjustment_threshold; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits> bandwidth_limits; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow> overflow; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow> underflow; // presence node


            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth


            class Priority : public Entity
            {
                public:
                    Priority();
                    ~Priority();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf setup_priority; //type: uint32
                    YLeaf hold_priority; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority


            class AffinityMask : public Entity
            {
                public:
                    AffinityMask();
                    ~AffinityMask();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf affinity; //type: string
                    YLeaf mask; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask


            class Logging : public Entity
            {
                public:
                    Logging();
                    ~Logging();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf lsp_switch_over_change_message; //type: empty
                    YLeaf all; //type: empty
                    YLeaf record_route_messsage; //type: empty
                    YLeaf bfd_state_message; //type: empty
                    YLeaf bandwidth_change_message; //type: empty
                    YLeaf reoptimize_attempts_message; //type: empty
                    YLeaf reroute_messsage; //type: empty
                    YLeaf state_message; //type: empty
                    YLeaf insufficient_bw_message; //type: empty
                    YLeaf reoptimized_message; //type: empty
                    YLeaf pcalc_failure_message; //type: empty



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging


            class Bandwidth : public Entity
            {
                public:
                    Bandwidth();
                    ~Bandwidth();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
                    YLeaf class_or_pool_type; //type: uint32
                    YLeaf bandwidth; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth


            class Autoroute : public Entity
            {
                public:
                    Autoroute();
                    ~Autoroute();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf destination; //type: empty

                class Metric : public Entity
                {
                    public:
                        Metric();
                        ~Metric();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf metric_type; //type: MplsTeAutorouteMetricEnum
                        YLeaf absolute_metric; //type: uint32
                        YLeaf relative_metric; //type: int32
                        YLeaf constant_metric; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric


                class AutorouteAnnounce : public Entity
                {
                    public:
                        AutorouteAnnounce();
                        ~AutorouteAnnounce();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enable; //type: empty
                        YLeaf include_ipv6; //type: empty

                    class Metric : public Entity
                    {
                        public:
                            Metric();
                            ~Metric();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf metric_type; //type: MplsTeAutorouteMetricEnum
                            YLeaf absolute_metric; //type: uint32
                            YLeaf relative_metric; //type: int32
                            YLeaf constant_metric; //type: uint32



                    }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric> metric;


                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce


                class DestinationXr : public Entity
                {
                    public:
                        DestinationXr();
                        ~DestinationXr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Destination : public Entity
                    {
                        public:
                            Destination();
                            ~Destination();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf destination_address; //type: string



                    }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr::Destination> > destination;


                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce> autoroute_announce;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::DestinationXr> destination_xr;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Metric> metric;


            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute


            class PolicyClasses : public Entity
            {
                public:
                    PolicyClasses();
                    ~PolicyClasses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList policy_class; //type: list of  uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses


            class NewStyleAffinityAffinityTypes : public Entity
            {
                public:
                    NewStyleAffinityAffinityTypes();
                    ~NewStyleAffinityAffinityTypes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class NewStyleAffinityAffinityType : public Entity
                {
                    public:
                        NewStyleAffinityAffinityType();
                        ~NewStyleAffinityAffinityType();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


                class NewStyleAffinityAffinityTypeAffinity1 : public Entity
                {
                    public:
                        NewStyleAffinityAffinityTypeAffinity1();
                        ~NewStyleAffinityAffinityTypeAffinity1();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                        YLeaf affinity1; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


                class NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
                {
                    public:
                        NewStyleAffinityAffinityTypeAffinity1Affinity2();
                        ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                        YLeaf affinity1; //type: string
                        YLeaf affinity2; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


                class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
                {
                    public:
                        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
                        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                        YLeaf affinity1; //type: string
                        YLeaf affinity2; //type: string
                        YLeaf affinity3; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


                class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
                {
                    public:
                        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
                        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                        YLeaf affinity1; //type: string
                        YLeaf affinity2; //type: string
                        YLeaf affinity3; //type: string
                        YLeaf affinity4; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


                class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
                {
                    public:
                        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
                        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                        YLeaf affinity1; //type: string
                        YLeaf affinity2; //type: string
                        YLeaf affinity3; //type: string
                        YLeaf affinity4; //type: string
                        YLeaf affinity5; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


                class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
                {
                    public:
                        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
                        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                        YLeaf affinity1; //type: string
                        YLeaf affinity2; //type: string
                        YLeaf affinity3; //type: string
                        YLeaf affinity4; //type: string
                        YLeaf affinity5; //type: string
                        YLeaf affinity6; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


                class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
                {
                    public:
                        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
                        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                        YLeaf affinity1; //type: string
                        YLeaf affinity2; //type: string
                        YLeaf affinity3; //type: string
                        YLeaf affinity4; //type: string
                        YLeaf affinity5; //type: string
                        YLeaf affinity6; //type: string
                        YLeaf affinity7; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


                class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
                {
                    public:
                        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
                        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                        YLeaf affinity1; //type: string
                        YLeaf affinity2; //type: string
                        YLeaf affinity3; //type: string
                        YLeaf affinity4; //type: string
                        YLeaf affinity5; //type: string
                        YLeaf affinity6; //type: string
                        YLeaf affinity7; //type: string
                        YLeaf affinity8; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


                class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
                {
                    public:
                        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
                        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                        YLeaf affinity1; //type: string
                        YLeaf affinity2; //type: string
                        YLeaf affinity3; //type: string
                        YLeaf affinity4; //type: string
                        YLeaf affinity5; //type: string
                        YLeaf affinity6; //type: string
                        YLeaf affinity7; //type: string
                        YLeaf affinity8; //type: string
                        YLeaf affinity9; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


                class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
                {
                    public:
                        NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
                        ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                        YLeaf affinity1; //type: string
                        YLeaf affinity2; //type: string
                        YLeaf affinity3; //type: string
                        YLeaf affinity4; //type: string
                        YLeaf affinity5; //type: string
                        YLeaf affinity6; //type: string
                        YLeaf affinity7; //type: string
                        YLeaf affinity8; //type: string
                        YLeaf affinity9; //type: string
                        YLeaf affinity10; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes


            class FastReroute : public Entity
            {
                public:
                    FastReroute();
                    ~FastReroute();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf bandwidth_protection; //type: uint32
                    YLeaf node_protection; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode> admin_mode;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask> affinity_mask; // presence node
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth> auto_bandwidth;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute> autoroute;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth> backup_bandwidth;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth> bandwidth; // presence node
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp> bfd_over_lsp;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional> bidirectional;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls> binding_segment_id_mpls;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute> fast_reroute; // presence node
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency> forwarding_adjacency;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging> logging;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects> path_option_protects;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce> pce;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses> policy_classes;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority> priority; // presence node
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching> switching;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection> tunnel_path_selection;


        }; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes


        class TransportProfileTunnel : public Entity
        {
            public:
                TransportProfileTunnel();
                ~TransportProfileTunnel();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf source; //type: string

            class Bfd : public Entity
            {
                public:
                    Bfd();
                    ~Bfd();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf detection_multiplier; //type: uint32
                    YLeaf enable; //type: empty
                    YLeaf multiplier_standby; //type: uint32

                class MinInterval : public Entity
                {
                    public:
                        MinInterval();
                        ~MinInterval();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interval_ms; //type: uint32
                        YLeaf interval_us; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval


                class MinIntervalStandby : public Entity
                {
                    public:
                        MinIntervalStandby();
                        ~MinIntervalStandby();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interval_standby_ms; //type: uint32
                        YLeaf interval_standby_us; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval> min_interval;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby> min_interval_standby;


            }; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd


            class WorkingLsp : public Entity
            {
                public:
                    WorkingLsp();
                    ~WorkingLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf in_label; //type: uint32
                    YLeaf lockout; //type: empty
                    YLeaf lsp_id; //type: uint32

                class OutLabel : public Entity
                {
                    public:
                        OutLabel();
                        ~OutLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf label; //type: uint32
                        YLeaf link; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel> out_label; // presence node


            }; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp


            class Destination : public Entity
            {
                public:
                    Destination();
                    ~Destination();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf node_id; //type: string
                    YLeaf global_id; //type: uint32
                    YLeaf tunnel_id; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination


            class Fault : public Entity
            {
                public:
                    Fault();
                    ~Fault();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enable; //type: empty

                class ProtectionTrigger : public Entity
                {
                    public:
                        ProtectionTrigger();
                        ~ProtectionTrigger();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf ldi; //type: boolean
                        YLeaf ais; //type: boolean
                        YLeaf lkr; //type: boolean



                }; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger> protection_trigger;


            }; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault


            class ProtectLsp : public Entity
            {
                public:
                    ProtectLsp();
                    ~ProtectLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf in_label; //type: uint32
                    YLeaf lockout; //type: empty
                    YLeaf lsp_id; //type: uint32

                class OutLabel : public Entity
                {
                    public:
                        OutLabel();
                        ~OutLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf label; //type: uint32
                        YLeaf link; //type: uint32



                }; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel> out_label; // presence node


            }; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd> bfd;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination> destination;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault> fault;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp> protect_lsp;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp> working_lsp;


        }; // InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel


        class MteTunnelAttributes : public Entity
        {
            public:
                MteTunnelAttributes();
                ~MteTunnelAttributes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf record_route; //type: empty
                YLeaf signalled_name; //type: string
                YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
                YLeaf signalled_payload; //type: string
                YLeaf fast_reroute; //type: empty
                YLeaf impose_explicit_null; //type: empty

            class DestinationLeafs : public Entity
            {
                public:
                    DestinationLeafs();
                    ~DestinationLeafs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class DestinationLeaf : public Entity
                {
                    public:
                        DestinationLeaf();
                        ~DestinationLeaf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf address; //type: string
                        YLeaf destination_disable; //type: empty
                        YLeaf destination; //type: empty

                    class S2LLogging : public Entity
                    {
                        public:
                            S2LLogging();
                            ~S2LLogging();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf s2l_reroute_messsage; //type: empty
                            YLeaf s2l_insufficient_bw_messsage; //type: empty
                            YLeaf s2l_pcalc_failure_message; //type: empty
                            YLeaf s2l_state_message; //type: empty



                    }; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging


                    class PathOptions : public Entity
                    {
                        public:
                            PathOptions();
                            ~PathOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PathOption : public Entity
                        {
                            public:
                                PathOption();
                                ~PathOption();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf preference_level; //type: uint32
                                YLeaf path_type; //type: MplsTePathOptionEnum
                                YLeaf path_id; //type: uint32
                                YLeaf path_name; //type: string
                                YLeaf lockdown; //type: MplsTePathOptionPropertyEnum
                                YLeaf verbatim; //type: MplsTePathOptionPropertyEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption> > path_option;


                    }; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions> path_options;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging> s2l_logging;


                }; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf> > destination_leaf;


            }; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs


            class Priority : public Entity
            {
                public:
                    Priority();
                    ~Priority();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf setup_priority; //type: uint32
                    YLeaf hold_priority; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority


            class NewStyleAffinities : public Entity
            {
                public:
                    NewStyleAffinities();
                    ~NewStyleAffinities();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class NewStyleAffinity : public Entity
                {
                    public:
                        NewStyleAffinity();
                        ~NewStyleAffinity();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                        YLeaf affinity1; //type: string
                        YLeaf affinity2; //type: string
                        YLeaf affinity3; //type: string
                        YLeaf affinity4; //type: string
                        YLeaf affinity5; //type: string
                        YLeaf affinity6; //type: string
                        YLeaf affinity7; //type: string
                        YLeaf affinity8; //type: string
                        YLeaf affinity9; //type: string
                        YLeaf affinity10; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity> > new_style_affinity;


            }; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities


            class Bandwidth : public Entity
            {
                public:
                    Bandwidth();
                    ~Bandwidth();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
                    YLeaf class_or_pool_type; //type: uint32
                    YLeaf bandwidth; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth


            class AffinityMask : public Entity
            {
                public:
                    AffinityMask();
                    ~AffinityMask();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf affinity; //type: string
                    YLeaf mask; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask


            class Logging : public Entity
            {
                public:
                    Logging();
                    ~Logging();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf insufficient_bw_message; //type: empty
                    YLeaf reoptimized_message; //type: empty
                    YLeaf bandwidth_change_message; //type: empty
                    YLeaf all; //type: empty
                    YLeaf pcalc_failure_message; //type: empty
                    YLeaf state_message; //type: empty
                    YLeaf reoptimize_attempts_message; //type: empty
                    YLeaf sub_lsp_state_message; //type: empty
                    YLeaf reroute_messsage; //type: empty



            }; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask> affinity_mask;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth> bandwidth;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs> destination_leafs;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging> logging;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities> new_style_affinities;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority> priority;


        }; // InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes


        class ClientPort : public Entity
        {
            public:
                ClientPort();
                ~ClientPort();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class LogicalChannelAssignments : public Entity
            {
                public:
                    LogicalChannelAssignments();
                    ~LogicalChannelAssignments();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class LogicalChannelAssignment : public Entity
                {
                    public:
                        LogicalChannelAssignment();
                        ~LogicalChannelAssignment();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf assignment_index; //type: int32
                        YLeaf allocation; //type: int32
                        YLeaf logical_channel_id; //type: int32
                        YLeaf description; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments::LogicalChannelAssignment> > logical_channel_assignment;


            }; // InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments


            class Channels : public Entity
            {
                public:
                    Channels();
                    ~Channels();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Channel : public Entity
                {
                    public:
                        Channel();
                        ~Channel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf index_; //type: int32
                        YLeaf channel_description; //type: string



                }; // InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels::Channel> > channel;


            }; // InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort::Channels> channels;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort::LogicalChannelAssignments> logical_channel_assignments;


        }; // InterfaceConfigurations::InterfaceConfiguration::ClientPort


        class Pbr : public Entity
        {
            public:
                Pbr();
                ~Pbr();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf service_policy_in; //type: string

            class ServicePolicy : public Entity
            {
                public:
                    ServicePolicy();
                    ~ServicePolicy();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf input; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy> service_policy;


        }; // InterfaceConfigurations::InterfaceConfiguration::Pbr


        class PerformanceManagement : public Entity
        {
            public:
                PerformanceManagement();
                ~PerformanceManagement();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class StmHour24 : public Entity
            {
                public:
                    StmHour24();
                    ~StmHour24();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class StmHour24Stm : public Entity
                {
                    public:
                        StmHour24Stm();
                        ~StmHour24Stm();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class StmHour24StmReports : public Entity
                    {
                        public:
                            StmHour24StmReports();
                            ~StmHour24StmReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class StmHour24StmReport : public Entity
                        {
                            public:
                                StmHour24StmReport();
                                ~StmHour24StmReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf stm_report; //type: StmReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport> > stm_hour24_stm_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports


                    class StmHour24StmThresholds : public Entity
                    {
                        public:
                            StmHour24StmThresholds();
                            ~StmHour24StmThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class StmHour24StmThreshold : public Entity
                        {
                            public:
                                StmHour24StmThreshold();
                                ~StmHour24StmThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf stm_threshold; //type: StmThresholdEnum
                                YLeaf stm_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold> > stm_hour24_stm_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports> stm_hour24_stm_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds> stm_hour24_stm_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm> stm_hour24_stm;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24


            class Minute15Gfp : public Entity
            {
                public:
                    Minute15Gfp();
                    ~Minute15Gfp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Minute15Gfp_ : public Entity
                {
                    public:
                        Minute15Gfp_();
                        ~Minute15Gfp_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Minute15GfpReports : public Entity
                    {
                        public:
                            Minute15GfpReports();
                            ~Minute15GfpReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Minute15GfpReport : public Entity
                        {
                            public:
                                Minute15GfpReport();
                                ~Minute15GfpReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf gfp_report; //type: GfpReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport> > minute15_gfp_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports


                    class Minute15GfpThresholds : public Entity
                    {
                        public:
                            Minute15GfpThresholds();
                            ~Minute15GfpThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Minute15GfpThreshold : public Entity
                        {
                            public:
                                Minute15GfpThreshold();
                                ~Minute15GfpThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf gfp_threshold; //type: GfpThresholdEnum
                                YLeaf gfp_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold> > minute15_gfp_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports> minute15_gfp_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds> minute15_gfp_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_> minute15_gfp;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp


            class SonetMinute15 : public Entity
            {
                public:
                    SonetMinute15();
                    ~SonetMinute15();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class SonetMinute15Path : public Entity
                {
                    public:
                        SonetMinute15Path();
                        ~SonetMinute15Path();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class SonetMinute15PathReports : public Entity
                    {
                        public:
                            SonetMinute15PathReports();
                            ~SonetMinute15PathReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SonetMinute15PathReport : public Entity
                        {
                            public:
                                SonetMinute15PathReport();
                                ~SonetMinute15PathReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf path_report; //type: PathReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport> > sonet_minute15_path_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports


                    class SonetMinute15PathThresholds : public Entity
                    {
                        public:
                            SonetMinute15PathThresholds();
                            ~SonetMinute15PathThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SonetMinute15PathThreshold : public Entity
                        {
                            public:
                                SonetMinute15PathThreshold();
                                ~SonetMinute15PathThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf path_threshold; //type: PathThresholdEnum
                                YLeaf path_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold> > sonet_minute15_path_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports> sonet_minute15_path_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds> sonet_minute15_path_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path


                class SonetMinute15Ocn : public Entity
                {
                    public:
                        SonetMinute15Ocn();
                        ~SonetMinute15Ocn();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class SonetMinute15OcnReports : public Entity
                    {
                        public:
                            SonetMinute15OcnReports();
                            ~SonetMinute15OcnReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SonetMinute15OcnReport : public Entity
                        {
                            public:
                                SonetMinute15OcnReport();
                                ~SonetMinute15OcnReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ocn_report; //type: OcnReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport> > sonet_minute15_ocn_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports


                    class SonetMinute15OcnThresholds : public Entity
                    {
                        public:
                            SonetMinute15OcnThresholds();
                            ~SonetMinute15OcnThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SonetMinute15OcnThreshold : public Entity
                        {
                            public:
                                SonetMinute15OcnThreshold();
                                ~SonetMinute15OcnThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ocn_threshold; //type: OcnThresholdEnum
                                YLeaf ocn_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold> > sonet_minute15_ocn_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports> sonet_minute15_ocn_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds> sonet_minute15_ocn_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn> sonet_minute15_ocn;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path> sonet_minute15_path;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15


            class Hour24Gfp : public Entity
            {
                public:
                    Hour24Gfp();
                    ~Hour24Gfp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Hour24Gfp_ : public Entity
                {
                    public:
                        Hour24Gfp_();
                        ~Hour24Gfp_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Hour24GfpReports : public Entity
                    {
                        public:
                            Hour24GfpReports();
                            ~Hour24GfpReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24GfpReport : public Entity
                        {
                            public:
                                Hour24GfpReport();
                                ~Hour24GfpReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf gfp_report; //type: GfpReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport> > hour24_gfp_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports


                    class Hour24GfpThresholds : public Entity
                    {
                        public:
                            Hour24GfpThresholds();
                            ~Hour24GfpThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24GfpThreshold : public Entity
                        {
                            public:
                                Hour24GfpThreshold();
                                ~Hour24GfpThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf gfp_threshold; //type: GfpThresholdEnum
                                YLeaf gfp_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold> > hour24_gfp_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports> hour24_gfp_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds> hour24_gfp_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_> hour24_gfp;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp


            class EthernetHour24 : public Entity
            {
                public:
                    EthernetHour24();
                    ~EthernetHour24();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Hour24Ether : public Entity
                {
                    public:
                        Hour24Ether();
                        ~Hour24Ether();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Hour24EtherThresholds : public Entity
                    {
                        public:
                            Hour24EtherThresholds();
                            ~Hour24EtherThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24EtherThreshold : public Entity
                        {
                            public:
                                Hour24EtherThreshold();
                                ~Hour24EtherThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ether_threshold; //type: EtherThresholdEnum
                                YLeaf ether_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold> > hour24_ether_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds


                    class Hour24EtherReports : public Entity
                    {
                        public:
                            Hour24EtherReports();
                            ~Hour24EtherReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24EtherReport : public Entity
                        {
                            public:
                                Hour24EtherReport();
                                ~Hour24EtherReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ether_report; //type: EtherReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport> > hour24_ether_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports> hour24_ether_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds> hour24_ether_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether> hour24_ether;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24


            class Minute15OtnTcms : public Entity
            {
                public:
                    Minute15OtnTcms();
                    ~Minute15OtnTcms();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Minute15OtnTcm : public Entity
                {
                    public:
                        Minute15OtnTcm();
                        ~Minute15OtnTcm();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf tcm_number; //type: int32

                    class Min15OtnTcmThreshes : public Entity
                    {
                        public:
                            Min15OtnTcmThreshes();
                            ~Min15OtnTcmThreshes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Min15OtnTcmThresh : public Entity
                        {
                            public:
                                Min15OtnTcmThresh();
                                ~Min15OtnTcmThresh();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_threshold; //type: OtnTcmThresholdEnum
                                YLeaf otn_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh> > min15_otn_tcm_thresh;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes


                    class Minute15OtnTcmReports : public Entity
                    {
                        public:
                            Minute15OtnTcmReports();
                            ~Minute15OtnTcmReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Minute15OtnTcmReport : public Entity
                        {
                            public:
                                Minute15OtnTcmReport();
                                ~Minute15OtnTcmReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_report; //type: OtnTcmReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport> > minute15otn_tcm_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes> min15_otn_tcm_threshes;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports> minute15otn_tcm_reports;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm> > minute15otn_tcm;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms


            class OcHour24 : public Entity
            {
                public:
                    OcHour24();
                    ~OcHour24();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class OcHour24Ocn : public Entity
                {
                    public:
                        OcHour24Ocn();
                        ~OcHour24Ocn();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class OcHour24OcnReports : public Entity
                    {
                        public:
                            OcHour24OcnReports();
                            ~OcHour24OcnReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class OcHour24OcnReport : public Entity
                        {
                            public:
                                OcHour24OcnReport();
                                ~OcHour24OcnReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ocn_report; //type: OcnReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport> > oc_hour24_ocn_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports


                    class OcHour24OcnThresholds : public Entity
                    {
                        public:
                            OcHour24OcnThresholds();
                            ~OcHour24OcnThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class OcHour24OcnThreshold : public Entity
                        {
                            public:
                                OcHour24OcnThreshold();
                                ~OcHour24OcnThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ocn_threshold; //type: OcnThresholdEnum
                                YLeaf ocn_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold> > oc_hour24_ocn_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports> oc_hour24_ocn_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds> oc_hour24_ocn_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn> oc_hour24_ocn;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24


            class EthernetMinute15 : public Entity
            {
                public:
                    EthernetMinute15();
                    ~EthernetMinute15();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Minute15Ether : public Entity
                {
                    public:
                        Minute15Ether();
                        ~Minute15Ether();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Minute15EtherThresholds : public Entity
                    {
                        public:
                            Minute15EtherThresholds();
                            ~Minute15EtherThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Minute15EtherThreshold : public Entity
                        {
                            public:
                                Minute15EtherThreshold();
                                ~Minute15EtherThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ether_threshold; //type: EtherThresholdEnum
                                YLeaf ether_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold> > minute15_ether_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds


                    class Minute15EtherReports : public Entity
                    {
                        public:
                            Minute15EtherReports();
                            ~Minute15EtherReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Minute15EtherReport : public Entity
                        {
                            public:
                                Minute15EtherReport();
                                ~Minute15EtherReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ether_report; //type: EtherReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport> > minute15_ether_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports> minute15_ether_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds> minute15_ether_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether> minute15_ether;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15


            class HoVcHour24 : public Entity
            {
                public:
                    HoVcHour24();
                    ~HoVcHour24();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class HoVcHour24HoVc : public Entity
                {
                    public:
                        HoVcHour24HoVc();
                        ~HoVcHour24HoVc();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class HoVcHour24HoVcReports : public Entity
                    {
                        public:
                            HoVcHour24HoVcReports();
                            ~HoVcHour24HoVcReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class HoVcHour24HoVcReport : public Entity
                        {
                            public:
                                HoVcHour24HoVcReport();
                                ~HoVcHour24HoVcReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ho_vc_report; //type: HoVcReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport> > ho_vc_hour24ho_vc_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports


                    class HoVcHour24HoVcThresholds : public Entity
                    {
                        public:
                            HoVcHour24HoVcThresholds();
                            ~HoVcHour24HoVcThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class HoVcHour24HoVcThreshold : public Entity
                        {
                            public:
                                HoVcHour24HoVcThreshold();
                                ~HoVcHour24HoVcThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ho_vc_threshold; //type: HoVcThresholdEnum
                                YLeaf ho_vc_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold> > ho_vc_hour24ho_vc_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports> ho_vc_hour24ho_vc_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds> ho_vc_hour24ho_vc_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc> ho_vc_hour24ho_vc;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24


            class Second30 : public Entity
            {
                public:
                    Second30();
                    ~Second30();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Second30Fec : public Entity
                {
                    public:
                        Second30Fec();
                        ~Second30Fec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Second30FecThresholds : public Entity
                    {
                        public:
                            Second30FecThresholds();
                            ~Second30FecThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Second30FecThreshold : public Entity
                        {
                            public:
                                Second30FecThreshold();
                                ~Second30FecThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf fec_threshold; //type: FecThresholdEnum
                                YLeaf fec_threshold_value; //type: string



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold> > second30fec_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds


                    class Second30FecReports : public Entity
                    {
                        public:
                            Second30FecReports();
                            ~Second30FecReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Second30FecReport : public Entity
                        {
                            public:
                                Second30FecReport();
                                ~Second30FecReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf fec_report; //type: FecReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport> > second30fec_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports> second30fec_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds> second30fec_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec


                class Second30Optics : public Entity
                {
                    public:
                        Second30Optics();
                        ~Second30Optics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Second30OpticsReports : public Entity
                    {
                        public:
                            Second30OpticsReports();
                            ~Second30OpticsReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Second30OpticsReport : public Entity
                        {
                            public:
                                Second30OpticsReport();
                                ~Second30OpticsReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf optics_report; //type: OpticsReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport> > second30_optics_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports


                    class Second30OpticsThresholds : public Entity
                    {
                        public:
                            Second30OpticsThresholds();
                            ~Second30OpticsThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Second30OpticsThreshold : public Entity
                        {
                            public:
                                Second30OpticsThreshold();
                                ~Second30OpticsThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf optics_threshold; //type: OpticsThresholdEnum
                                YLeaf optics_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold> > second30_optics_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports> second30_optics_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds> second30_optics_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics


                class Second30Otn : public Entity
                {
                    public:
                        Second30Otn();
                        ~Second30Otn();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Second30OtnThreshes : public Entity
                    {
                        public:
                            Second30OtnThreshes();
                            ~Second30OtnThreshes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Second30OtnThresh : public Entity
                        {
                            public:
                                Second30OtnThresh();
                                ~Second30OtnThresh();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_threshold; //type: OtnThresholdEnum
                                YLeaf otn_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh> > second30_otn_thresh;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes


                    class Second30OtnReports : public Entity
                    {
                        public:
                            Second30OtnReports();
                            ~Second30OtnReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Second30OtnReport : public Entity
                        {
                            public:
                                Second30OtnReport();
                                ~Second30OtnReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_report; //type: OtnReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport> > second30otn_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes> second30_otn_threshes;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports> second30otn_reports;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics> second30_optics;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec> second30fec;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn> second30otn;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30


            class Hour24OtnTcms : public Entity
            {
                public:
                    Hour24OtnTcms();
                    ~Hour24OtnTcms();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Hour24OtnTcm : public Entity
                {
                    public:
                        Hour24OtnTcm();
                        ~Hour24OtnTcm();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf tcm_number; //type: int32

                    class Hour24OtnTcmThresholds : public Entity
                    {
                        public:
                            Hour24OtnTcmThresholds();
                            ~Hour24OtnTcmThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24OtnTcmThreshold : public Entity
                        {
                            public:
                                Hour24OtnTcmThreshold();
                                ~Hour24OtnTcmThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_threshold; //type: OtnTcmThresholdEnum
                                YLeaf otn_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold> > hour24otn_tcm_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds


                    class Hour24OtnTcmReports : public Entity
                    {
                        public:
                            Hour24OtnTcmReports();
                            ~Hour24OtnTcmReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24OtnTcmReport : public Entity
                        {
                            public:
                                Hour24OtnTcmReport();
                                ~Hour24OtnTcmReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_report; //type: OtnTcmReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport> > hour24otn_tcm_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports> hour24otn_tcm_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds> hour24otn_tcm_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm> > hour24otn_tcm;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms


            class StsMinute15 : public Entity
            {
                public:
                    StsMinute15();
                    ~StsMinute15();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class StsMinute15Path : public Entity
                {
                    public:
                        StsMinute15Path();
                        ~StsMinute15Path();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class StsMinute15PathReports : public Entity
                    {
                        public:
                            StsMinute15PathReports();
                            ~StsMinute15PathReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class StsMinute15PathReport : public Entity
                        {
                            public:
                                StsMinute15PathReport();
                                ~StsMinute15PathReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf path_report; //type: StsReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport> > sts_minute15_path_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports


                    class StsMinute15PathThresholds : public Entity
                    {
                        public:
                            StsMinute15PathThresholds();
                            ~StsMinute15PathThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class StsMinute15PathThreshold : public Entity
                        {
                            public:
                                StsMinute15PathThreshold();
                                ~StsMinute15PathThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf path_threshold; //type: StsThresholdEnum
                                YLeaf path_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold> > sts_minute15_path_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports> sts_minute15_path_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds> sts_minute15_path_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path> sts_minute15_path;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15


            class Hour24 : public Entity
            {
                public:
                    Hour24();
                    ~Hour24();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Hour24Otn : public Entity
                {
                    public:
                        Hour24Otn();
                        ~Hour24Otn();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Hour24OtnThresholds : public Entity
                    {
                        public:
                            Hour24OtnThresholds();
                            ~Hour24OtnThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24OtnThreshold : public Entity
                        {
                            public:
                                Hour24OtnThreshold();
                                ~Hour24OtnThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_threshold; //type: OtnThresholdEnum
                                YLeaf otn_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold> > hour24otn_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds


                    class Hour24OtnReports : public Entity
                    {
                        public:
                            Hour24OtnReports();
                            ~Hour24OtnReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24OtnReport : public Entity
                        {
                            public:
                                Hour24OtnReport();
                                ~Hour24OtnReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_report; //type: OtnReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport> > hour24otn_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports> hour24otn_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds> hour24otn_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn


                class Hour24Optics : public Entity
                {
                    public:
                        Hour24Optics();
                        ~Hour24Optics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Hour24OpticsThresholds : public Entity
                    {
                        public:
                            Hour24OpticsThresholds();
                            ~Hour24OpticsThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24OpticsThreshold : public Entity
                        {
                            public:
                                Hour24OpticsThreshold();
                                ~Hour24OpticsThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf optics_threshold; //type: OpticsThresholdEnum
                                YLeaf optics_threshold_value; //type: int32
                                YLeaf dbm; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold> > hour24_optics_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds


                    class Hour24OpticsReports : public Entity
                    {
                        public:
                            Hour24OpticsReports();
                            ~Hour24OpticsReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24OpticsReport : public Entity
                        {
                            public:
                                Hour24OpticsReport();
                                ~Hour24OpticsReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf optics_report; //type: OpticsReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport> > hour24_optics_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports> hour24_optics_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds> hour24_optics_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics


                class Hour24Fec : public Entity
                {
                    public:
                        Hour24Fec();
                        ~Hour24Fec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Hour24FecThresholds : public Entity
                    {
                        public:
                            Hour24FecThresholds();
                            ~Hour24FecThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24FecThreshold : public Entity
                        {
                            public:
                                Hour24FecThreshold();
                                ~Hour24FecThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf fec_threshold; //type: FecThresholdEnum
                                YLeaf fec_threshold_value; //type: string



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold> > hour24fec_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds


                    class Hour24FecReports : public Entity
                    {
                        public:
                            Hour24FecReports();
                            ~Hour24FecReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24FecReport : public Entity
                        {
                            public:
                                Hour24FecReport();
                                ~Hour24FecReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf fec_report; //type: FecReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport> > hour24fec_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports> hour24fec_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds> hour24fec_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics> hour24_optics;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec> hour24fec;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn> hour24otn;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24


            class HoVcMinute15 : public Entity
            {
                public:
                    HoVcMinute15();
                    ~HoVcMinute15();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class HoVcMinute15HoVc : public Entity
                {
                    public:
                        HoVcMinute15HoVc();
                        ~HoVcMinute15HoVc();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class HoVcMinute15HoVcReports : public Entity
                    {
                        public:
                            HoVcMinute15HoVcReports();
                            ~HoVcMinute15HoVcReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class HoVcMinute15HoVcReport : public Entity
                        {
                            public:
                                HoVcMinute15HoVcReport();
                                ~HoVcMinute15HoVcReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ho_vc_report; //type: HoVcReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport> > ho_vc_minute15ho_vc_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports


                    class HoVcMinute15HoVcThresholds : public Entity
                    {
                        public:
                            HoVcMinute15HoVcThresholds();
                            ~HoVcMinute15HoVcThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class HoVcMinute15HoVcThreshold : public Entity
                        {
                            public:
                                HoVcMinute15HoVcThreshold();
                                ~HoVcMinute15HoVcThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ho_vc_threshold; //type: HoVcThresholdEnum
                                YLeaf ho_vc_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold> > ho_vc_minute15ho_vc_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports> ho_vc_minute15ho_vc_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds> ho_vc_minute15ho_vc_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc> ho_vc_minute15ho_vc;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15


            class StsHour24 : public Entity
            {
                public:
                    StsHour24();
                    ~StsHour24();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class StsHour24Path : public Entity
                {
                    public:
                        StsHour24Path();
                        ~StsHour24Path();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class StsHour24PathThresholds : public Entity
                    {
                        public:
                            StsHour24PathThresholds();
                            ~StsHour24PathThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class StsHour24PathThreshold : public Entity
                        {
                            public:
                                StsHour24PathThreshold();
                                ~StsHour24PathThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf path_threshold; //type: StsThresholdEnum
                                YLeaf path_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold> > sts_hour24_path_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds


                    class StsHour24PathReports : public Entity
                    {
                        public:
                            StsHour24PathReports();
                            ~StsHour24PathReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class StsHour24PathReport : public Entity
                        {
                            public:
                                StsHour24PathReport();
                                ~StsHour24PathReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf path_report; //type: StsReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport> > sts_hour24_path_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports> sts_hour24_path_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds> sts_hour24_path_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path> sts_hour24_path;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24


            class StmMinute15 : public Entity
            {
                public:
                    StmMinute15();
                    ~StmMinute15();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class StmMinute15Stm : public Entity
                {
                    public:
                        StmMinute15Stm();
                        ~StmMinute15Stm();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class StmMinute15StmReports : public Entity
                    {
                        public:
                            StmMinute15StmReports();
                            ~StmMinute15StmReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class StmMinute15StmReport : public Entity
                        {
                            public:
                                StmMinute15StmReport();
                                ~StmMinute15StmReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf stm_report; //type: StmReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport> > stm_minute15_stm_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports


                    class StmMinute15StmThresholds : public Entity
                    {
                        public:
                            StmMinute15StmThresholds();
                            ~StmMinute15StmThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class StmMinute15StmThreshold : public Entity
                        {
                            public:
                                StmMinute15StmThreshold();
                                ~StmMinute15StmThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf stm_threshold; //type: StmThresholdEnum
                                YLeaf stm_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold> > stm_minute15_stm_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports> stm_minute15_stm_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds> stm_minute15_stm_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm> stm_minute15_stm;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15


            class SonetHour24 : public Entity
            {
                public:
                    SonetHour24();
                    ~SonetHour24();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class SonetHour24Path : public Entity
                {
                    public:
                        SonetHour24Path();
                        ~SonetHour24Path();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class SonetHour24PathThresholds : public Entity
                    {
                        public:
                            SonetHour24PathThresholds();
                            ~SonetHour24PathThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SonetHour24PathThreshold : public Entity
                        {
                            public:
                                SonetHour24PathThreshold();
                                ~SonetHour24PathThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf path_threshold; //type: PathThresholdEnum
                                YLeaf path_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold> > sonet_hour24_path_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds


                    class SonetHour24PathReports : public Entity
                    {
                        public:
                            SonetHour24PathReports();
                            ~SonetHour24PathReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SonetHour24PathReport : public Entity
                        {
                            public:
                                SonetHour24PathReport();
                                ~SonetHour24PathReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf path_report; //type: PathReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport> > sonet_hour24_path_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports> sonet_hour24_path_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds> sonet_hour24_path_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path


                class SonetHour24Ocn : public Entity
                {
                    public:
                        SonetHour24Ocn();
                        ~SonetHour24Ocn();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class SonetHour24OcnThresholds : public Entity
                    {
                        public:
                            SonetHour24OcnThresholds();
                            ~SonetHour24OcnThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SonetHour24OcnThreshold : public Entity
                        {
                            public:
                                SonetHour24OcnThreshold();
                                ~SonetHour24OcnThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ocn_threshold; //type: OcnThresholdEnum
                                YLeaf ocn_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold> > sonet_hour24_ocn_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds


                    class SonetHour24OcnReports : public Entity
                    {
                        public:
                            SonetHour24OcnReports();
                            ~SonetHour24OcnReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SonetHour24OcnReport : public Entity
                        {
                            public:
                                SonetHour24OcnReport();
                                ~SonetHour24OcnReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ocn_report; //type: OcnReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport> > sonet_hour24_ocn_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports> sonet_hour24_ocn_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds> sonet_hour24_ocn_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn> sonet_hour24_ocn;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path> sonet_hour24_path;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24


            class Minute15Path : public Entity
            {
                public:
                    Minute15Path();
                    ~Minute15Path();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Minute15OtnPath : public Entity
                {
                    public:
                        Minute15OtnPath();
                        ~Minute15OtnPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Minute15OtnPathReports : public Entity
                    {
                        public:
                            Minute15OtnPathReports();
                            ~Minute15OtnPathReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Minute15OtnPathReport : public Entity
                        {
                            public:
                                Minute15OtnPathReport();
                                ~Minute15OtnPathReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_report; //type: OtnReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport> > minute15otn_path_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports


                    class Min15OtnPathThreshes : public Entity
                    {
                        public:
                            Min15OtnPathThreshes();
                            ~Min15OtnPathThreshes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Min15OtnPathThresh : public Entity
                        {
                            public:
                                Min15OtnPathThresh();
                                ~Min15OtnPathThresh();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_threshold; //type: OtnThresholdEnum
                                YLeaf otn_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh> > min15_otn_path_thresh;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes> min15_otn_path_threshes;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports> minute15otn_path_reports;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath> minute15otn_path;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path


            class OcMinute15 : public Entity
            {
                public:
                    OcMinute15();
                    ~OcMinute15();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class OcMinute15Ocn : public Entity
                {
                    public:
                        OcMinute15Ocn();
                        ~OcMinute15Ocn();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class OcMinute15OcnReports : public Entity
                    {
                        public:
                            OcMinute15OcnReports();
                            ~OcMinute15OcnReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class OcMinute15OcnReport : public Entity
                        {
                            public:
                                OcMinute15OcnReport();
                                ~OcMinute15OcnReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ocn_report; //type: OcnReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport> > oc_minute15_ocn_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports


                    class OcMinute15OcnThresholds : public Entity
                    {
                        public:
                            OcMinute15OcnThresholds();
                            ~OcMinute15OcnThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class OcMinute15OcnThreshold : public Entity
                        {
                            public:
                                OcMinute15OcnThreshold();
                                ~OcMinute15OcnThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ocn_threshold; //type: OcnThresholdEnum
                                YLeaf ocn_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold> > oc_minute15_ocn_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports> oc_minute15_ocn_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds> oc_minute15_ocn_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn> oc_minute15_ocn;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15


            class EthernetSecond30 : public Entity
            {
                public:
                    EthernetSecond30();
                    ~EthernetSecond30();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Second30Ether : public Entity
                {
                    public:
                        Second30Ether();
                        ~Second30Ether();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Second30EtherThresholds : public Entity
                    {
                        public:
                            Second30EtherThresholds();
                            ~Second30EtherThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Second30EtherThreshold : public Entity
                        {
                            public:
                                Second30EtherThreshold();
                                ~Second30EtherThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ether_threshold; //type: EtherThresholdEnum
                                YLeaf ether_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold> > second30_ether_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds


                    class Second30EtherReports : public Entity
                    {
                        public:
                            Second30EtherReports();
                            ~Second30EtherReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Second30EtherReport : public Entity
                        {
                            public:
                                Second30EtherReport();
                                ~Second30EtherReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf ether_report; //type: EtherReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport> > second30_ether_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports> second30_ether_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds> second30_ether_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether> second30_ether;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30


            class Hour24Path : public Entity
            {
                public:
                    Hour24Path();
                    ~Hour24Path();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Hour24OtnPath : public Entity
                {
                    public:
                        Hour24OtnPath();
                        ~Hour24OtnPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Hour24OtnPathReports : public Entity
                    {
                        public:
                            Hour24OtnPathReports();
                            ~Hour24OtnPathReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24OtnPathReport : public Entity
                        {
                            public:
                                Hour24OtnPathReport();
                                ~Hour24OtnPathReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_report; //type: OtnReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport> > hour24otn_path_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports


                    class Hour24OtnPathThresholds : public Entity
                    {
                        public:
                            Hour24OtnPathThresholds();
                            ~Hour24OtnPathThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Hour24OtnPathThreshold : public Entity
                        {
                            public:
                                Hour24OtnPathThreshold();
                                ~Hour24OtnPathThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_threshold; //type: OtnThresholdEnum
                                YLeaf otn_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold> > hour24otn_path_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports> hour24otn_path_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds> hour24otn_path_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath> hour24otn_path;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path


            class Minute15 : public Entity
            {
                public:
                    Minute15();
                    ~Minute15();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Minute15Optics : public Entity
                {
                    public:
                        Minute15Optics();
                        ~Minute15Optics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Minute15OpticsThresholds : public Entity
                    {
                        public:
                            Minute15OpticsThresholds();
                            ~Minute15OpticsThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Minute15OpticsThreshold : public Entity
                        {
                            public:
                                Minute15OpticsThreshold();
                                ~Minute15OpticsThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf optics_threshold; //type: OpticsThresholdEnum
                                YLeaf optics_threshold_value; //type: int32
                                YLeaf dbm; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold> > minute15_optics_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds


                    class Minute15OpticsReports : public Entity
                    {
                        public:
                            Minute15OpticsReports();
                            ~Minute15OpticsReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Minute15OpticsReport : public Entity
                        {
                            public:
                                Minute15OpticsReport();
                                ~Minute15OpticsReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf optics_report; //type: OpticsReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport> > minute15_optics_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports> minute15_optics_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds> minute15_optics_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics


                class Minute15Fec : public Entity
                {
                    public:
                        Minute15Fec();
                        ~Minute15Fec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Minute15FecThresholds : public Entity
                    {
                        public:
                            Minute15FecThresholds();
                            ~Minute15FecThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Minute15FecThreshold : public Entity
                        {
                            public:
                                Minute15FecThreshold();
                                ~Minute15FecThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf fec_threshold; //type: FecThresholdEnum
                                YLeaf fec_threshold_value; //type: string



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold> > minute15fec_threshold;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds


                    class Minute15FecReports : public Entity
                    {
                        public:
                            Minute15FecReports();
                            ~Minute15FecReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Minute15FecReport : public Entity
                        {
                            public:
                                Minute15FecReport();
                                ~Minute15FecReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf fec_report; //type: FecReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport> > minute15fec_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports> minute15fec_reports;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds> minute15fec_thresholds;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec


                class Minute15Otn : public Entity
                {
                    public:
                        Minute15Otn();
                        ~Minute15Otn();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Min15OtnThreshes : public Entity
                    {
                        public:
                            Min15OtnThreshes();
                            ~Min15OtnThreshes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Min15OtnThresh : public Entity
                        {
                            public:
                                Min15OtnThresh();
                                ~Min15OtnThresh();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_threshold; //type: OtnThresholdEnum
                                YLeaf otn_threshold_value; //type: int32



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh> > min15_otn_thresh;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes


                    class Minute15OtnReports : public Entity
                    {
                        public:
                            Minute15OtnReports();
                            ~Minute15OtnReports();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Minute15OtnReport : public Entity
                        {
                            public:
                                Minute15OtnReport();
                                ~Minute15OtnReport();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf otn_report; //type: OtnReportEnum
                                YLeaf enable; //type: ReportEnum



                        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport> > minute15otn_report;


                    }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes> min15_otn_threshes;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports> minute15otn_reports;


                }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics> minute15_optics;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec> minute15fec;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn> minute15otn;


            }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24> ethernet_hour24;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15> ethernet_minute15;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30> ethernet_second30;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24> ho_vc_hour24;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15> ho_vc_minute15;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24> hour24;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp> hour24_gfp;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path> hour24_path;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms> hour24otn_tcms;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15> minute15;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp> minute15_gfp;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path> minute15_path;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms> minute15otn_tcms;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24> oc_hour24;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15> oc_minute15;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30> second30;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24> sonet_hour24;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15> sonet_minute15;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24> stm_hour24;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15> stm_minute15;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24> sts_hour24;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15> sts_minute15;


        }; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement


        class Qos : public Entity
        {
            public:
                Qos();
                ~Qos();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Output : public Entity
            {
                public:
                    Output();
                    ~Output();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class ServicePolicy : public Entity
                {
                    public:
                        ServicePolicy();
                        ~ServicePolicy();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf service_policy_name; //type: string
                        YLeaf account_type; //type: QosPolicyAccountEnum
                        YLeaf l1_user_defined; //type: int32
                        YLeaf spi_name; //type: string
                        YLeaf subscriber_parent_policy; //type: boolean
                        YLeaf resource_id; //type: uint32
                        YLeaf service_fragment_parent_policy; //type: boolean



                }; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy> > service_policy;


            }; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output


            class Input : public Entity
            {
                public:
                    Input();
                    ~Input();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class ServicePolicy : public Entity
                {
                    public:
                        ServicePolicy();
                        ~ServicePolicy();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf service_policy_name; //type: string
                        YLeaf account_type; //type: QosPolicyAccountEnum
                        YLeaf l1_user_defined; //type: int32
                        YLeaf spi_name; //type: string
                        YLeaf subscriber_parent_policy; //type: boolean
                        YLeaf resource_id; //type: uint32
                        YLeaf service_fragment_parent_policy; //type: boolean



                }; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy> > service_policy;


            }; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input> input;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output> output;


        }; // InterfaceConfigurations::InterfaceConfiguration::Qos


        class NetFlow : public Entity
        {
            public:
                NetFlow();
                ~NetFlow();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Mpls : public Entity
            {
                public:
                    Mpls();
                    ~Mpls();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class FlowMonitorMap : public Entity
                {
                    public:
                        FlowMonitorMap();
                        ~FlowMonitorMap();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Ingress : public Entity
                    {
                        public:
                            Ingress();
                            ~Ingress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class FlowMonitorName : public Entity
                        {
                            public:
                                FlowMonitorName();
                                ~FlowMonitorName();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf monitor_map_name; //type: string
                                YLeaf sampler_map_name; //type: string



                        }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName> > flow_monitor_name;


                    }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress


                    class Egress : public Entity
                    {
                        public:
                            Egress();
                            ~Egress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class FlowMonitorName : public Entity
                        {
                            public:
                                FlowMonitorName();
                                ~FlowMonitorName();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf monitor_map_name; //type: string
                                YLeaf sampler_map_name; //type: string



                        }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName> > flow_monitor_name;


                    }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress> egress;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress> ingress;


                }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap> flow_monitor_map;


            }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls


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



                class FlowMonitorMap : public Entity
                {
                    public:
                        FlowMonitorMap();
                        ~FlowMonitorMap();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Ingress : public Entity
                    {
                        public:
                            Ingress();
                            ~Ingress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class FlowMonitorName : public Entity
                        {
                            public:
                                FlowMonitorName();
                                ~FlowMonitorName();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf monitor_map_name; //type: string
                                YLeaf sampler_map_name; //type: string



                        }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName> > flow_monitor_name;


                    }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress


                    class Egress : public Entity
                    {
                        public:
                            Egress();
                            ~Egress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class FlowMonitorName : public Entity
                        {
                            public:
                                FlowMonitorName();
                                ~FlowMonitorName();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf monitor_map_name; //type: string
                                YLeaf sampler_map_name; //type: string



                        }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName> > flow_monitor_name;


                    }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress> egress;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress> ingress;


                }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap> flow_monitor_map;


            }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6


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



                class FlowMonitorMap : public Entity
                {
                    public:
                        FlowMonitorMap();
                        ~FlowMonitorMap();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Ingress : public Entity
                    {
                        public:
                            Ingress();
                            ~Ingress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class FlowMonitorName : public Entity
                        {
                            public:
                                FlowMonitorName();
                                ~FlowMonitorName();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf monitor_map_name; //type: string
                                YLeaf sampler_map_name; //type: string



                        }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName> > flow_monitor_name;


                    }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress


                    class Egress : public Entity
                    {
                        public:
                            Egress();
                            ~Egress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class FlowMonitorName : public Entity
                        {
                            public:
                                FlowMonitorName();
                                ~FlowMonitorName();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf monitor_map_name; //type: string
                                YLeaf sampler_map_name; //type: string



                        }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName> > flow_monitor_name;


                    }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress> egress;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress> ingress;


                }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap> flow_monitor_map;


            }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4> ipv4;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6> ipv6;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls> mpls;


        }; // InterfaceConfigurations::InterfaceConfiguration::NetFlow


        class TunnelIp : public Entity
        {
            public:
                TunnelIp();
                ~TunnelIp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf allow_key; //type: empty
                YLeaf ttl; //type: uint32
                YLeaf tunnel_vrf; //type: string
                YLeaf tos; //type: uint32
                YLeaf disable; //type: int32

            class Mode : public Entity
            {
                public:
                    Mode();
                    ~Mode();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf value_; //type: int32
                    YLeaf decap; //type: empty



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode


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


                    YLeaf type; //type: int32
                    YLeaf address; //type: string
                    YLeaf interface_name; //type: string
                    YLeaf ipv6_address; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source


            class Key : public Entity
            {
                public:
                    Key();
                    ~Key();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf entropy; //type: empty
                    YLeaf value_; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key


            class Keepalive : public Entity
            {
                public:
                    Keepalive();
                    ~Keepalive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf keep_alive_period; //type: uint32
                    YLeaf keep_alive_retries; //type: uint32



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive


            class Destination : public Entity
            {
                public:
                    Destination();
                    ~Destination();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf type; //type: int32
                    YLeaf address; //type: string
                    YLeaf ipv6_address; //type: string
                    YLeaf address_mask; //type: string
                    YLeaf prefix_list_name; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination> destination;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive> keepalive;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key> key;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode> mode;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source> source;


        }; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp


        class Nve : public Entity
        {
            public:
                Nve();
                ~Nve();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf vx_lan_udp_port; //type: VxlanUdpPortEnumEnum
                YLeaf overlay_encapsulation; //type: OverlayEncapEnumEnum
                YLeaf source_interface; //type: string

            class Anycast : public Entity
            {
                public:
                    Anycast();
                    ~Anycast();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf source_interface; //type: string
                    YLeaf sync_group; //type: string



            }; // InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast


            class Redundancy : public Entity
            {
                public:
                    Redundancy();
                    ~Redundancy();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enable; //type: empty

                class BackboneVxLan : public Entity
                {
                    public:
                        BackboneVxLan();
                        ~BackboneVxLan();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enable; //type: empty
                        YLeaf backbone_vx_laniccp; //type: int32



                }; // InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan


                class BackboneMpls : public Entity
                {
                    public:
                        BackboneMpls();
                        ~BackboneMpls();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf backbone_mplsiccp; //type: int32
                        YLeaf enable; //type: empty



                }; // InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneMpls> backbone_mpls;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy::BackboneVxLan> backbone_vx_lan;


            }; // InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy


            class MemberVnis : public Entity
            {
                public:
                    MemberVnis();
                    ~MemberVnis();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class MemberVni : public Entity
                {
                    public:
                        MemberVni();
                        ~MemberVni();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf vni_start; //type: uint32
                        YLeaf vni_end; //type: uint32
                        YLeaf host_reachability; //type: HostReachProtocolEnum
                        YLeaf vrf; //type: string
                        YLeaf enable; //type: empty

                    class Multicast : public Entity
                    {
                        public:
                            Multicast();
                            ~Multicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf multicast_group_min; //type: string
                            YLeaf multicast_group_max; //type: string



                    }; // InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni::Multicast> multicast; // presence node


                }; // InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis::MemberVni> > member_vni;


            }; // InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis


                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::Anycast> anycast;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::MemberVnis> member_vnis;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve::Redundancy> redundancy;


        }; // InterfaceConfigurations::InterfaceConfiguration::Nve


        class Wanphy : public Entity
        {
            public:
                Wanphy();
                ~Wanphy();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf report_path_rdi; //type: empty
                YLeaf report_los; //type: empty
                YLeaf report_path_lcd; //type: empty
                YLeaf report_path_fe_plm; //type: empty
                YLeaf lan_mode; //type: WanphyLanModeEnum
                YLeaf report_path_plm; //type: empty
                YLeaf report_path_fe_ais; //type: empty
                YLeaf report_path_ais; //type: empty
                YLeaf report_line_ais; //type: empty
                YLeaf report_lof; //type: empty
                YLeaf report_lop; //type: empty
                YLeaf report_rdi; //type: empty
                YLeaf report_sd_ber; //type: empty
                YLeaf threshold_sd_ber; //type: uint32
                YLeaf report_sf_ber; //type: empty
                YLeaf threshold_sf_ber; //type: uint32
                YLeaf wan_mode; //type: WanphyWanModeEnum



        }; // InterfaceConfigurations::InterfaceConfiguration::Wanphy


            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Afs> afs;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm> atm;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bfd> bfd;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Bundle> bundle;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::BundleMember> bundle_member;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CarrierDelay> carrier_delay;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Cdp> cdp;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ClientPort> client_port;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs> dagrs;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dampening> dampening;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm> dwdm;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Encapsulation> encapsulation;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter> es_packet_filter;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ethernet> ethernet;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetBng> ethernet_bng;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures> ethernet_features;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetService> ethernet_service;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network> ipv4_network;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding> ipv4_network_forwarding;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter> ipv4_packet_filter;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp> ipv4arp;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor> ipv6_neighbor;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network> ipv6_network;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter> ipv6_packet_filter;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::L2Transport> l2_transport;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lacp> lacp;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lldp> lldp; // presence node
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MacAccounting> mac_accounting;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Macsec> macsec;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Mlacp> mlacp;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes> mte_tunnel_attributes;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Mtus> mtus;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NetFlow> net_flow;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess> nv_satellite_access;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink> nv_satellite_fabric_link;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork> nv_satellite_fabric_network;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Nve> nve;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics> optics;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu> otu;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Pbr> pbr;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement> performance_management;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PseudowireEther> pseudowire_ether;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PseudowireIw> pseudowire_iw;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos> qos;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ServicePolicies> service_policies;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions> span_monitor_sessions;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Statistics> statistics;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel> transport_profile_tunnel;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp> tunnel_ip;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes> tunnel_te_attributes;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration> vlan_sub_configuration;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration> vlan_trunk_configuration;
            std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Wanphy> wanphy;


    }; // InterfaceConfigurations::InterfaceConfiguration


        std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration> > interface_configuration;


}; // InterfaceConfigurations


class InterfaceModeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf point_to_point;
        static const Enum::YLeaf multipoint;
        static const Enum::YLeaf l2_transport;

};

class SecondaryAdminStateEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf maintenance;

};

class LinkStatusEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf disable;
        static const Enum::YLeaf software_interfaces;

};

class InterfaceConfigurations::InterfaceConfiguration::Dampening::ArgsEnum : public Enum
{
    public:
        static const Enum::YLeaf default_values;
        static const Enum::YLeaf specify_half_life;
        static const Enum::YLeaf specify_all;
        static const Enum::YLeaf specify_rp;

};

class InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0x9100;
        static const Enum::YLeaf Y_0x9200;

};


}
}

#endif /* _CISCO_IOS_XR_IFMGR_CFG_ */

