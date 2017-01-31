#ifndef _CISCO_IOS_XR_IPV4_MFWD_CFG_
#define _CISCO_IOS_XR_IPV4_MFWD_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_mfwd_cfg {

class Mfwd : public Entity
{
    public:
        Mfwd();
        ~Mfwd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class DefaultContext : public Entity
    {
        public:
            DefaultContext();
            ~DefaultContext();

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


                YLeaf enable_on_all_interfaces; //type: empty
                YLeaf maximum_checking_disable; //type: empty
                YLeaf rate_per_route; //type: empty
                YLeaf interface_inheritance_disable; //type: empty
                YLeaf nsf; //type: empty
                YLeaf mofrr_lockout_timer_config; //type: uint32
                YLeaf forwarding_latency; //type: uint32
                YLeaf mofrr_loss_detection_timer_config; //type: uint32
                YLeaf multicast_forwarding; //type: empty
                YLeaf log_traps; //type: empty
                YLeaf accounting; //type: AccountingModeEnum

            class StaticRpfRules : public Entity
            {
                public:
                    StaticRpfRules();
                    ~StaticRpfRules();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class StaticRpfRule : public Entity
                {
                    public:
                        StaticRpfRule();
                        ~StaticRpfRule();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf address; //type: string
                        YLeaf prefix_mask; //type: uint32
                        YLeaf neighbor_address; //type: string
                        YLeaf interface_name; //type: string



                }; // Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule> > static_rpf_rule;


            }; // Mfwd::DefaultContext::Ipv6::StaticRpfRules


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
                        YLeaf ttl_threshold; //type: uint32
                        YLeaf enable_on_interface; //type: boolean
                        YLeaf boundary; //type: string



                }; // Mfwd::DefaultContext::Ipv6::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv6::Interfaces::Interface> > interface;


            }; // Mfwd::DefaultContext::Ipv6::Interfaces


                std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv6::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv6::StaticRpfRules> static_rpf_rules;


        }; // Mfwd::DefaultContext::Ipv6


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


                YLeaf out_of_memory_handling; //type: empty
                YLeaf enable_on_all_interfaces; //type: empty
                YLeaf maximum_checking_disable; //type: empty
                YLeaf rate_per_route; //type: empty
                YLeaf interface_inheritance_disable; //type: empty
                YLeaf nsf; //type: empty
                YLeaf mofrr_lockout_timer_config; //type: uint32
                YLeaf forwarding_latency; //type: uint32
                YLeaf mofrr_loss_detection_timer_config; //type: uint32
                YLeaf multicast_forwarding; //type: empty
                YLeaf log_traps; //type: empty
                YLeaf accounting; //type: AccountingModeEnum

            class StaticRpfRules : public Entity
            {
                public:
                    StaticRpfRules();
                    ~StaticRpfRules();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class StaticRpfRule : public Entity
                {
                    public:
                        StaticRpfRule();
                        ~StaticRpfRule();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf address; //type: string
                        YLeaf prefix_mask; //type: uint32
                        YLeaf neighbor_address; //type: string
                        YLeaf interface_name; //type: string



                }; // Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule> > static_rpf_rule;


            }; // Mfwd::DefaultContext::Ipv4::StaticRpfRules


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
                        YLeaf ttl_threshold; //type: uint32
                        YLeaf enable_on_interface; //type: boolean
                        YLeaf boundary; //type: string



                }; // Mfwd::DefaultContext::Ipv4::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv4::Interfaces::Interface> > interface;


            }; // Mfwd::DefaultContext::Ipv4::Interfaces


                std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv4::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv4::StaticRpfRules> static_rpf_rules;


        }; // Mfwd::DefaultContext::Ipv4


            std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv4> ipv4;
            std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext::Ipv6> ipv6;


    }; // Mfwd::DefaultContext


    class Vrfs : public Entity
    {
        public:
            Vrfs();
            ~Vrfs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Vrf : public Entity
        {
            public:
                Vrf();
                ~Vrf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf vrf_name; //type: string

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


                    YLeaf enable_on_all_interfaces; //type: empty
                    YLeaf maximum_checking_disable; //type: empty
                    YLeaf rate_per_route; //type: empty
                    YLeaf interface_inheritance_disable; //type: empty
                    YLeaf nsf; //type: empty
                    YLeaf mofrr_lockout_timer_config; //type: uint32
                    YLeaf forwarding_latency; //type: uint32
                    YLeaf mofrr_loss_detection_timer_config; //type: uint32
                    YLeaf multicast_forwarding; //type: empty
                    YLeaf log_traps; //type: empty
                    YLeaf accounting; //type: AccountingModeEnum

                class StaticRpfRules : public Entity
                {
                    public:
                        StaticRpfRules();
                        ~StaticRpfRules();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class StaticRpfRule : public Entity
                    {
                        public:
                            StaticRpfRule();
                            ~StaticRpfRule();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf address; //type: string
                            YLeaf prefix_mask; //type: uint32
                            YLeaf neighbor_address; //type: string
                            YLeaf interface_name; //type: string



                    }; // Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule> > static_rpf_rule;


                }; // Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules


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
                            YLeaf ttl_threshold; //type: uint32
                            YLeaf enable_on_interface; //type: boolean
                            YLeaf boundary; //type: string



                    }; // Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface> > interface;


                }; // Mfwd::Vrfs::Vrf::Ipv6::Interfaces


                    std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv6::Interfaces> interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules> static_rpf_rules;


            }; // Mfwd::Vrfs::Vrf::Ipv6


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


                    YLeaf out_of_memory_handling; //type: empty
                    YLeaf enable_on_all_interfaces; //type: empty
                    YLeaf maximum_checking_disable; //type: empty
                    YLeaf rate_per_route; //type: empty
                    YLeaf interface_inheritance_disable; //type: empty
                    YLeaf nsf; //type: empty
                    YLeaf mofrr_lockout_timer_config; //type: uint32
                    YLeaf forwarding_latency; //type: uint32
                    YLeaf mofrr_loss_detection_timer_config; //type: uint32
                    YLeaf multicast_forwarding; //type: empty
                    YLeaf log_traps; //type: empty
                    YLeaf accounting; //type: AccountingModeEnum

                class StaticRpfRules : public Entity
                {
                    public:
                        StaticRpfRules();
                        ~StaticRpfRules();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class StaticRpfRule : public Entity
                    {
                        public:
                            StaticRpfRule();
                            ~StaticRpfRule();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf address; //type: string
                            YLeaf prefix_mask; //type: uint32
                            YLeaf neighbor_address; //type: string
                            YLeaf interface_name; //type: string



                    }; // Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule> > static_rpf_rule;


                }; // Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules


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
                            YLeaf ttl_threshold; //type: uint32
                            YLeaf enable_on_interface; //type: boolean
                            YLeaf boundary; //type: string



                    }; // Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface> > interface;


                }; // Mfwd::Vrfs::Vrf::Ipv4::Interfaces


                    std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv4::Interfaces> interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules> static_rpf_rules;


            }; // Mfwd::Vrfs::Vrf::Ipv4


                std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv4> ipv4;
                std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf::Ipv6> ipv6;


        }; // Mfwd::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs::Vrf> > vrf;


    }; // Mfwd::Vrfs


        std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::DefaultContext> default_context; // presence node
        std::unique_ptr<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd::Vrfs> vrfs;


}; // Mfwd


class AccountingModeEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf forward_only_enable;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_MFWD_CFG_ */

