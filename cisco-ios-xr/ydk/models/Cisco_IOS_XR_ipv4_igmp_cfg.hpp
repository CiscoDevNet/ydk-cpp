#ifndef _CISCO_IOS_XR_IPV4_IGMP_CFG_
#define _CISCO_IOS_XR_IPV4_IGMP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_igmp_cfg {

class Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


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
                Value vrf_name; //type: string
                Value ssmdns_query_group; //type: empty
                Value robustness; //type: uint32


            class Traffic : public Entity
            {
                public:
                    Traffic();
                    ~Traffic();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value profile; //type: string




            }; // Igmp::Vrfs::Vrf::Traffic


            class InheritableDefaults : public Entity
            {
                public:
                    InheritableDefaults();
                    ~InheritableDefaults();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value query_timeout; //type: uint32
                    Value access_group; //type: string
                    Value query_max_response_time; //type: uint32
                    Value version; //type: uint32
                    Value router_enable; //type: boolean
                    Value query_interval; //type: uint32


                class MaximumGroupsPerInterfaceOor : public Entity
                {
                    public:
                        MaximumGroupsPerInterfaceOor();
                        ~MaximumGroupsPerInterfaceOor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_groups; //type: uint32
                        Value warning_threshold; //type: uint32
                        Value access_list_name; //type: string




                }; // Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor


                class ExplicitTracking : public Entity
                {
                    public:
                        ExplicitTracking();
                        ~ExplicitTracking();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enable; //type: boolean
                        Value access_list_name; //type: string




                }; // Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking


                    std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::InheritableDefaults::ExplicitTracking> explicit_tracking; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor;


            }; // Igmp::Vrfs::Vrf::InheritableDefaults


            class SsmAccessGroups : public Entity
            {
                public:
                    SsmAccessGroups();
                    ~SsmAccessGroups();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SsmAccessGroup : public Entity
                {
                    public:
                        SsmAccessGroup();
                        ~SsmAccessGroup();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value source_address; //type: string
                        Value access_list_name; //type: string




                }; // Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup> > ssm_access_group;


            }; // Igmp::Vrfs::Vrf::SsmAccessGroups


            class Maximum : public Entity
            {
                public:
                    Maximum();
                    ~Maximum();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value maximum_groups; //type: uint32




            }; // Igmp::Vrfs::Vrf::Maximum


            class UnicastQosAdjust : public Entity
            {
                public:
                    UnicastQosAdjust();
                    ~UnicastQosAdjust();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value download_interval; //type: uint32
                    Value adjustment_delay; //type: uint32
                    Value hold_off; //type: uint32




            }; // Igmp::Vrfs::Vrf::UnicastQosAdjust


            class Accounting : public Entity
            {
                public:
                    Accounting();
                    ~Accounting();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value max_history; //type: uint32




            }; // Igmp::Vrfs::Vrf::Accounting


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
                        Value query_timeout; //type: uint32
                        Value access_group; //type: string
                        Value query_max_response_time; //type: uint32
                        Value version; //type: uint32
                        Value router_enable; //type: boolean
                        Value query_interval; //type: uint32


                    class JoinGroups : public Entity
                    {
                        public:
                            JoinGroups();
                            ~JoinGroups();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class JoinGroup : public Entity
                        {
                            public:
                                JoinGroup();
                                ~JoinGroup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value mode; //type: IgmpFilterEnum


                                class IgmpFilterEnum;


                        }; // Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup


                        class JoinGroupSourceAddress : public Entity
                        {
                            public:
                                JoinGroupSourceAddress();
                                ~JoinGroupSourceAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value source_address; //type: string
                                Value group_address; //type: string
                                Value mode; //type: IgmpFilterEnum


                                class IgmpFilterEnum;


                        }; // Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup> > join_group;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress> > join_group_source_address;


                    }; // Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups


                    class StaticGroupGroupAddresses : public Entity
                    {
                        public:
                            StaticGroupGroupAddresses();
                            ~StaticGroupGroupAddresses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class StaticGroupGroupAddress : public Entity
                        {
                            public:
                                StaticGroupGroupAddress();
                                ~StaticGroupGroupAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value group_count; //type: uint32
                                Value source_count; //type: uint32
                                Value suppress_report; //type: boolean




                        }; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress


                        class StaticGroupGroupAddressSourceAddress : public Entity
                        {
                            public:
                                StaticGroupGroupAddressSourceAddress();
                                ~StaticGroupGroupAddressSourceAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value source_address; //type: string
                                Value group_count; //type: uint32
                                Value source_count; //type: uint32
                                Value suppress_report; //type: boolean




                        }; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress


                        class StaticGroupGroupAddressSourceAddressSourceAddressMask : public Entity
                        {
                            public:
                                StaticGroupGroupAddressSourceAddressSourceAddressMask();
                                ~StaticGroupGroupAddressSourceAddressSourceAddressMask();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value source_address; //type: string
                                Value source_address_mask; //type: string
                                Value group_count; //type: uint32
                                Value source_count; //type: uint32
                                Value suppress_report; //type: boolean




                        }; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask


                        class StaticGroupGroupAddressGroupAddressMask : public Entity
                        {
                            public:
                                StaticGroupGroupAddressGroupAddressMask();
                                ~StaticGroupGroupAddressGroupAddressMask();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value group_address_mask; //type: string
                                Value group_count; //type: uint32
                                Value source_count; //type: uint32
                                Value suppress_report; //type: boolean




                        }; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask


                        class StaticGroupGroupAddressGroupAddressMaskSourceAddress : public Entity
                        {
                            public:
                                StaticGroupGroupAddressGroupAddressMaskSourceAddress();
                                ~StaticGroupGroupAddressGroupAddressMaskSourceAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value group_address_mask; //type: string
                                Value source_address; //type: string
                                Value group_count; //type: uint32
                                Value source_count; //type: uint32
                                Value suppress_report; //type: boolean




                        }; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress


                        class StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask : public Entity
                        {
                            public:
                                StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();
                                ~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value group_address_mask; //type: string
                                Value source_address; //type: string
                                Value source_address_mask; //type: string
                                Value group_count; //type: uint32
                                Value source_count; //type: uint32
                                Value suppress_report; //type: boolean




                        }; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress> > static_group_group_address;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask> > static_group_group_address_group_address_mask;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress> > static_group_group_address_group_address_mask_source_address;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask> > static_group_group_address_group_address_mask_source_address_source_address_mask;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress> > static_group_group_address_source_address;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask> > static_group_group_address_source_address_source_address_mask;


                    }; // Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses


                    class MaximumGroupsPerInterfaceOor : public Entity
                    {
                        public:
                            MaximumGroupsPerInterfaceOor();
                            ~MaximumGroupsPerInterfaceOor();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_groups; //type: uint32
                            Value warning_threshold; //type: uint32
                            Value access_list_name; //type: string




                    }; // Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor


                    class ExplicitTracking : public Entity
                    {
                        public:
                            ExplicitTracking();
                            ~ExplicitTracking();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value enable; //type: boolean
                            Value access_list_name; //type: string




                    }; // Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking


                        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking> explicit_tracking; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::JoinGroups> join_groups; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses> static_group_group_addresses;


                }; // Igmp::Vrfs::Vrf::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces::Interface> > interface;


            }; // Igmp::Vrfs::Vrf::Interfaces


                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Accounting> accounting;
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::InheritableDefaults> inheritable_defaults;
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Maximum> maximum;
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::SsmAccessGroups> ssm_access_groups;
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::Traffic> traffic;
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf::UnicastQosAdjust> unicast_qos_adjust;


        }; // Igmp::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs::Vrf> > vrf;


    }; // Igmp::Vrfs


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
            Value ssmdns_query_group; //type: empty
            Value robustness; //type: uint32


        class Nsf : public Entity
        {
            public:
                Nsf();
                ~Nsf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value lifetime; //type: uint32




        }; // Igmp::DefaultContext::Nsf


        class Traffic : public Entity
        {
            public:
                Traffic();
                ~Traffic();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value profile; //type: string




        }; // Igmp::DefaultContext::Traffic


        class InheritableDefaults : public Entity
        {
            public:
                InheritableDefaults();
                ~InheritableDefaults();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value query_timeout; //type: uint32
                Value access_group; //type: string
                Value query_max_response_time; //type: uint32
                Value version; //type: uint32
                Value router_enable; //type: boolean
                Value query_interval; //type: uint32


            class MaximumGroupsPerInterfaceOor : public Entity
            {
                public:
                    MaximumGroupsPerInterfaceOor();
                    ~MaximumGroupsPerInterfaceOor();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value maximum_groups; //type: uint32
                    Value warning_threshold; //type: uint32
                    Value access_list_name; //type: string




            }; // Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor


            class ExplicitTracking : public Entity
            {
                public:
                    ExplicitTracking();
                    ~ExplicitTracking();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value enable; //type: boolean
                    Value access_list_name; //type: string




            }; // Igmp::DefaultContext::InheritableDefaults::ExplicitTracking


                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::InheritableDefaults::ExplicitTracking> explicit_tracking; // presence node
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor;


        }; // Igmp::DefaultContext::InheritableDefaults


        class SsmAccessGroups : public Entity
        {
            public:
                SsmAccessGroups();
                ~SsmAccessGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class SsmAccessGroup : public Entity
            {
                public:
                    SsmAccessGroup();
                    ~SsmAccessGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value source_address; //type: string
                    Value access_list_name; //type: string




            }; // Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::SsmAccessGroups::SsmAccessGroup> > ssm_access_group;


        }; // Igmp::DefaultContext::SsmAccessGroups


        class Maximum : public Entity
        {
            public:
                Maximum();
                ~Maximum();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value maximum_groups; //type: uint32




        }; // Igmp::DefaultContext::Maximum


        class UnicastQosAdjust : public Entity
        {
            public:
                UnicastQosAdjust();
                ~UnicastQosAdjust();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value download_interval; //type: uint32
                Value adjustment_delay; //type: uint32
                Value hold_off; //type: uint32




        }; // Igmp::DefaultContext::UnicastQosAdjust


        class Accounting : public Entity
        {
            public:
                Accounting();
                ~Accounting();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value max_history; //type: uint32




        }; // Igmp::DefaultContext::Accounting


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
                    Value query_timeout; //type: uint32
                    Value access_group; //type: string
                    Value query_max_response_time; //type: uint32
                    Value version; //type: uint32
                    Value router_enable; //type: boolean
                    Value query_interval; //type: uint32


                class JoinGroups : public Entity
                {
                    public:
                        JoinGroups();
                        ~JoinGroups();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class JoinGroup : public Entity
                    {
                        public:
                            JoinGroup();
                            ~JoinGroup();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value mode; //type: IgmpFilterEnum


                            class IgmpFilterEnum;


                    }; // Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup


                    class JoinGroupSourceAddress : public Entity
                    {
                        public:
                            JoinGroupSourceAddress();
                            ~JoinGroupSourceAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value group_address; //type: string
                            Value mode; //type: IgmpFilterEnum


                            class IgmpFilterEnum;


                    }; // Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup> > join_group;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress> > join_group_source_address;


                }; // Igmp::DefaultContext::Interfaces::Interface::JoinGroups


                class StaticGroupGroupAddresses : public Entity
                {
                    public:
                        StaticGroupGroupAddresses();
                        ~StaticGroupGroupAddresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class StaticGroupGroupAddress : public Entity
                    {
                        public:
                            StaticGroupGroupAddress();
                            ~StaticGroupGroupAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value group_count; //type: uint32
                            Value source_count; //type: uint32
                            Value suppress_report; //type: boolean




                    }; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress


                    class StaticGroupGroupAddressSourceAddress : public Entity
                    {
                        public:
                            StaticGroupGroupAddressSourceAddress();
                            ~StaticGroupGroupAddressSourceAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value source_address; //type: string
                            Value group_count; //type: uint32
                            Value source_count; //type: uint32
                            Value suppress_report; //type: boolean




                    }; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress


                    class StaticGroupGroupAddressSourceAddressSourceAddressMask : public Entity
                    {
                        public:
                            StaticGroupGroupAddressSourceAddressSourceAddressMask();
                            ~StaticGroupGroupAddressSourceAddressSourceAddressMask();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value source_address; //type: string
                            Value source_address_mask; //type: string
                            Value group_count; //type: uint32
                            Value source_count; //type: uint32
                            Value suppress_report; //type: boolean




                    }; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask


                    class StaticGroupGroupAddressGroupAddressMask : public Entity
                    {
                        public:
                            StaticGroupGroupAddressGroupAddressMask();
                            ~StaticGroupGroupAddressGroupAddressMask();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value group_address_mask; //type: string
                            Value group_count; //type: uint32
                            Value source_count; //type: uint32
                            Value suppress_report; //type: boolean




                    }; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask


                    class StaticGroupGroupAddressGroupAddressMaskSourceAddress : public Entity
                    {
                        public:
                            StaticGroupGroupAddressGroupAddressMaskSourceAddress();
                            ~StaticGroupGroupAddressGroupAddressMaskSourceAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value group_address_mask; //type: string
                            Value source_address; //type: string
                            Value group_count; //type: uint32
                            Value source_count; //type: uint32
                            Value suppress_report; //type: boolean




                    }; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress


                    class StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask : public Entity
                    {
                        public:
                            StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();
                            ~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value group_address_mask; //type: string
                            Value source_address; //type: string
                            Value source_address_mask; //type: string
                            Value group_count; //type: uint32
                            Value source_count; //type: uint32
                            Value suppress_report; //type: boolean




                    }; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress> > static_group_group_address;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask> > static_group_group_address_group_address_mask;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress> > static_group_group_address_group_address_mask_source_address;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask> > static_group_group_address_group_address_mask_source_address_source_address_mask;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress> > static_group_group_address_source_address;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask> > static_group_group_address_source_address_source_address_mask;


                }; // Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses


                class MaximumGroupsPerInterfaceOor : public Entity
                {
                    public:
                        MaximumGroupsPerInterfaceOor();
                        ~MaximumGroupsPerInterfaceOor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_groups; //type: uint32
                        Value warning_threshold; //type: uint32
                        Value access_list_name; //type: string




                }; // Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor


                class ExplicitTracking : public Entity
                {
                    public:
                        ExplicitTracking();
                        ~ExplicitTracking();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enable; //type: boolean
                        Value access_list_name; //type: string




                }; // Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking


                    std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::ExplicitTracking> explicit_tracking; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::JoinGroups> join_groups; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses> static_group_group_addresses;


            }; // Igmp::DefaultContext::Interfaces::Interface


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces::Interface> > interface;


        }; // Igmp::DefaultContext::Interfaces


            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Accounting> accounting;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::InheritableDefaults> inheritable_defaults;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Interfaces> interfaces;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Maximum> maximum;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Nsf> nsf;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::SsmAccessGroups> ssm_access_groups;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::Traffic> traffic;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext::UnicastQosAdjust> unicast_qos_adjust;


    }; // Igmp::DefaultContext


        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::DefaultContext> default_context; // presence node
        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp::Vrfs> vrfs;


}; // Igmp

class Amt : public Entity
{
    public:
        Amt();
        ~Amt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value maximum_v4_route_gateway; //type: uint32
        Value gateway_filter; //type: string
        Value maximum_v4_routes; //type: uint32
        Value amttos; //type: uint32
        Value amtttl; //type: uint32
        Value maximum_v6_route_gateway; //type: uint32
        Value maximum_gateway; //type: uint32
        Value maximum_v6_routes; //type: uint32
        Value amtqqic; //type: uint32
        Value amtmtu; //type: uint32


    class RelayAdvAdd : public Entity
    {
        public:
            RelayAdvAdd();
            ~RelayAdvAdd();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value address; //type: string
            Value interface; //type: string




    }; // Amt::RelayAdvAdd


    class RelayAnycastPrefix : public Entity
    {
        public:
            RelayAnycastPrefix();
            ~RelayAnycastPrefix();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value address; //type: string
            Value prefix_length; //type: uint32




    }; // Amt::RelayAnycastPrefix


        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Amt::RelayAdvAdd> relay_adv_add; // presence node
        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Amt::RelayAnycastPrefix> relay_anycast_prefix; // presence node


}; // Amt

class Mld : public Entity
{
    public:
        Mld();
        ~Mld();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


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
                Value vrf_name; //type: string
                Value ssmdns_query_group; //type: empty
                Value robustness; //type: uint32


            class Traffic : public Entity
            {
                public:
                    Traffic();
                    ~Traffic();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value profile; //type: string




            }; // Mld::Vrfs::Vrf::Traffic


            class InheritableDefaults : public Entity
            {
                public:
                    InheritableDefaults();
                    ~InheritableDefaults();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value query_timeout; //type: uint32
                    Value access_group; //type: string
                    Value query_max_response_time; //type: uint32
                    Value version; //type: uint32
                    Value router_enable; //type: boolean
                    Value query_interval; //type: uint32


                class MaximumGroupsPerInterfaceOor : public Entity
                {
                    public:
                        MaximumGroupsPerInterfaceOor();
                        ~MaximumGroupsPerInterfaceOor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_groups; //type: uint32
                        Value warning_threshold; //type: uint32
                        Value access_list_name; //type: string




                }; // Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor


                class ExplicitTracking : public Entity
                {
                    public:
                        ExplicitTracking();
                        ~ExplicitTracking();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enable; //type: boolean
                        Value access_list_name; //type: string




                }; // Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking


                    std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::InheritableDefaults::ExplicitTracking> explicit_tracking; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::InheritableDefaults::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor;


            }; // Mld::Vrfs::Vrf::InheritableDefaults


            class SsmAccessGroups : public Entity
            {
                public:
                    SsmAccessGroups();
                    ~SsmAccessGroups();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SsmAccessGroup : public Entity
                {
                    public:
                        SsmAccessGroup();
                        ~SsmAccessGroup();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value source_address; //type: string
                        Value access_list_name; //type: string




                }; // Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::SsmAccessGroups::SsmAccessGroup> > ssm_access_group;


            }; // Mld::Vrfs::Vrf::SsmAccessGroups


            class Maximum : public Entity
            {
                public:
                    Maximum();
                    ~Maximum();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value maximum_groups; //type: uint32




            }; // Mld::Vrfs::Vrf::Maximum


            class UnicastQosAdjust : public Entity
            {
                public:
                    UnicastQosAdjust();
                    ~UnicastQosAdjust();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value download_interval; //type: uint32
                    Value adjustment_delay; //type: uint32
                    Value hold_off; //type: uint32




            }; // Mld::Vrfs::Vrf::UnicastQosAdjust


            class Accounting : public Entity
            {
                public:
                    Accounting();
                    ~Accounting();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value max_history; //type: uint32




            }; // Mld::Vrfs::Vrf::Accounting


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
                        Value query_timeout; //type: uint32
                        Value access_group; //type: string
                        Value query_max_response_time; //type: uint32
                        Value version; //type: uint32
                        Value router_enable; //type: boolean
                        Value query_interval; //type: uint32


                    class JoinGroups : public Entity
                    {
                        public:
                            JoinGroups();
                            ~JoinGroups();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class JoinGroup : public Entity
                        {
                            public:
                                JoinGroup();
                                ~JoinGroup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value mode; //type: IgmpFilterEnum


                                class IgmpFilterEnum;


                        }; // Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup


                        class JoinGroupSourceAddress : public Entity
                        {
                            public:
                                JoinGroupSourceAddress();
                                ~JoinGroupSourceAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value source_address; //type: string
                                Value group_address; //type: string
                                Value mode; //type: IgmpFilterEnum


                                class IgmpFilterEnum;


                        }; // Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroup> > join_group;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress> > join_group_source_address;


                    }; // Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups


                    class StaticGroupGroupAddresses : public Entity
                    {
                        public:
                            StaticGroupGroupAddresses();
                            ~StaticGroupGroupAddresses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class StaticGroupGroupAddress : public Entity
                        {
                            public:
                                StaticGroupGroupAddress();
                                ~StaticGroupGroupAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value group_count; //type: uint32
                                Value source_count; //type: uint32
                                Value suppress_report; //type: boolean




                        }; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress


                        class StaticGroupGroupAddressSourceAddress : public Entity
                        {
                            public:
                                StaticGroupGroupAddressSourceAddress();
                                ~StaticGroupGroupAddressSourceAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value source_address; //type: string
                                Value group_count; //type: uint32
                                Value source_count; //type: uint32
                                Value suppress_report; //type: boolean




                        }; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress


                        class StaticGroupGroupAddressSourceAddressSourceAddressMask : public Entity
                        {
                            public:
                                StaticGroupGroupAddressSourceAddressSourceAddressMask();
                                ~StaticGroupGroupAddressSourceAddressSourceAddressMask();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value source_address; //type: string
                                Value source_address_mask; //type: string
                                Value group_count; //type: uint32
                                Value source_count; //type: uint32
                                Value suppress_report; //type: boolean




                        }; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask


                        class StaticGroupGroupAddressGroupAddressMask : public Entity
                        {
                            public:
                                StaticGroupGroupAddressGroupAddressMask();
                                ~StaticGroupGroupAddressGroupAddressMask();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value group_address_mask; //type: string
                                Value group_count; //type: uint32
                                Value source_count; //type: uint32
                                Value suppress_report; //type: boolean




                        }; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask


                        class StaticGroupGroupAddressGroupAddressMaskSourceAddress : public Entity
                        {
                            public:
                                StaticGroupGroupAddressGroupAddressMaskSourceAddress();
                                ~StaticGroupGroupAddressGroupAddressMaskSourceAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value group_address_mask; //type: string
                                Value source_address; //type: string
                                Value group_count; //type: uint32
                                Value source_count; //type: uint32
                                Value suppress_report; //type: boolean




                        }; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress


                        class StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask : public Entity
                        {
                            public:
                                StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();
                                ~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value group_address; //type: string
                                Value group_address_mask; //type: string
                                Value source_address; //type: string
                                Value source_address_mask; //type: string
                                Value group_count; //type: uint32
                                Value source_count; //type: uint32
                                Value suppress_report; //type: boolean




                        }; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress> > static_group_group_address;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask> > static_group_group_address_group_address_mask;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress> > static_group_group_address_group_address_mask_source_address;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask> > static_group_group_address_group_address_mask_source_address_source_address_mask;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress> > static_group_group_address_source_address;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask> > static_group_group_address_source_address_source_address_mask;


                    }; // Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses


                    class MaximumGroupsPerInterfaceOor : public Entity
                    {
                        public:
                            MaximumGroupsPerInterfaceOor();
                            ~MaximumGroupsPerInterfaceOor();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_groups; //type: uint32
                            Value warning_threshold; //type: uint32
                            Value access_list_name; //type: string




                    }; // Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor


                    class ExplicitTracking : public Entity
                    {
                        public:
                            ExplicitTracking();
                            ~ExplicitTracking();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value enable; //type: boolean
                            Value access_list_name; //type: string




                    }; // Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking


                        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::ExplicitTracking> explicit_tracking; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::JoinGroups> join_groups; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface::StaticGroupGroupAddresses> static_group_group_addresses;


                }; // Mld::Vrfs::Vrf::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces::Interface> > interface;


            }; // Mld::Vrfs::Vrf::Interfaces


                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Accounting> accounting;
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::InheritableDefaults> inheritable_defaults;
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Maximum> maximum;
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::SsmAccessGroups> ssm_access_groups;
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::Traffic> traffic;
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf::UnicastQosAdjust> unicast_qos_adjust;


        }; // Mld::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs::Vrf> > vrf;


    }; // Mld::Vrfs


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
            Value ssmdns_query_group; //type: empty
            Value robustness; //type: uint32


        class Nsf : public Entity
        {
            public:
                Nsf();
                ~Nsf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value lifetime; //type: uint32




        }; // Mld::DefaultContext::Nsf


        class Traffic : public Entity
        {
            public:
                Traffic();
                ~Traffic();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value profile; //type: string




        }; // Mld::DefaultContext::Traffic


        class InheritableDefaults : public Entity
        {
            public:
                InheritableDefaults();
                ~InheritableDefaults();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value query_timeout; //type: uint32
                Value access_group; //type: string
                Value query_max_response_time; //type: uint32
                Value version; //type: uint32
                Value router_enable; //type: boolean
                Value query_interval; //type: uint32


            class MaximumGroupsPerInterfaceOor : public Entity
            {
                public:
                    MaximumGroupsPerInterfaceOor();
                    ~MaximumGroupsPerInterfaceOor();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value maximum_groups; //type: uint32
                    Value warning_threshold; //type: uint32
                    Value access_list_name; //type: string




            }; // Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor


            class ExplicitTracking : public Entity
            {
                public:
                    ExplicitTracking();
                    ~ExplicitTracking();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value enable; //type: boolean
                    Value access_list_name; //type: string




            }; // Mld::DefaultContext::InheritableDefaults::ExplicitTracking


                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::InheritableDefaults::ExplicitTracking> explicit_tracking; // presence node
                std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::InheritableDefaults::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor;


        }; // Mld::DefaultContext::InheritableDefaults


        class SsmAccessGroups : public Entity
        {
            public:
                SsmAccessGroups();
                ~SsmAccessGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class SsmAccessGroup : public Entity
            {
                public:
                    SsmAccessGroup();
                    ~SsmAccessGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value source_address; //type: string
                    Value access_list_name; //type: string




            }; // Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::SsmAccessGroups::SsmAccessGroup> > ssm_access_group;


        }; // Mld::DefaultContext::SsmAccessGroups


        class Maximum : public Entity
        {
            public:
                Maximum();
                ~Maximum();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value maximum_groups; //type: uint32




        }; // Mld::DefaultContext::Maximum


        class UnicastQosAdjust : public Entity
        {
            public:
                UnicastQosAdjust();
                ~UnicastQosAdjust();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value download_interval; //type: uint32
                Value adjustment_delay; //type: uint32
                Value hold_off; //type: uint32




        }; // Mld::DefaultContext::UnicastQosAdjust


        class Accounting : public Entity
        {
            public:
                Accounting();
                ~Accounting();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value max_history; //type: uint32




        }; // Mld::DefaultContext::Accounting


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
                    Value query_timeout; //type: uint32
                    Value access_group; //type: string
                    Value query_max_response_time; //type: uint32
                    Value version; //type: uint32
                    Value router_enable; //type: boolean
                    Value query_interval; //type: uint32


                class JoinGroups : public Entity
                {
                    public:
                        JoinGroups();
                        ~JoinGroups();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class JoinGroup : public Entity
                    {
                        public:
                            JoinGroup();
                            ~JoinGroup();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value mode; //type: IgmpFilterEnum


                            class IgmpFilterEnum;


                    }; // Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup


                    class JoinGroupSourceAddress : public Entity
                    {
                        public:
                            JoinGroupSourceAddress();
                            ~JoinGroupSourceAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value group_address; //type: string
                            Value mode; //type: IgmpFilterEnum


                            class IgmpFilterEnum;


                    }; // Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroup> > join_group;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::JoinGroups::JoinGroupSourceAddress> > join_group_source_address;


                }; // Mld::DefaultContext::Interfaces::Interface::JoinGroups


                class StaticGroupGroupAddresses : public Entity
                {
                    public:
                        StaticGroupGroupAddresses();
                        ~StaticGroupGroupAddresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class StaticGroupGroupAddress : public Entity
                    {
                        public:
                            StaticGroupGroupAddress();
                            ~StaticGroupGroupAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value group_count; //type: uint32
                            Value source_count; //type: uint32
                            Value suppress_report; //type: boolean




                    }; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress


                    class StaticGroupGroupAddressSourceAddress : public Entity
                    {
                        public:
                            StaticGroupGroupAddressSourceAddress();
                            ~StaticGroupGroupAddressSourceAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value source_address; //type: string
                            Value group_count; //type: uint32
                            Value source_count; //type: uint32
                            Value suppress_report; //type: boolean




                    }; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress


                    class StaticGroupGroupAddressSourceAddressSourceAddressMask : public Entity
                    {
                        public:
                            StaticGroupGroupAddressSourceAddressSourceAddressMask();
                            ~StaticGroupGroupAddressSourceAddressSourceAddressMask();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value source_address; //type: string
                            Value source_address_mask; //type: string
                            Value group_count; //type: uint32
                            Value source_count; //type: uint32
                            Value suppress_report; //type: boolean




                    }; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask


                    class StaticGroupGroupAddressGroupAddressMask : public Entity
                    {
                        public:
                            StaticGroupGroupAddressGroupAddressMask();
                            ~StaticGroupGroupAddressGroupAddressMask();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value group_address_mask; //type: string
                            Value group_count; //type: uint32
                            Value source_count; //type: uint32
                            Value suppress_report; //type: boolean




                    }; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask


                    class StaticGroupGroupAddressGroupAddressMaskSourceAddress : public Entity
                    {
                        public:
                            StaticGroupGroupAddressGroupAddressMaskSourceAddress();
                            ~StaticGroupGroupAddressGroupAddressMaskSourceAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value group_address_mask; //type: string
                            Value source_address; //type: string
                            Value group_count; //type: uint32
                            Value source_count; //type: uint32
                            Value suppress_report; //type: boolean




                    }; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress


                    class StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask : public Entity
                    {
                        public:
                            StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();
                            ~StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value group_address; //type: string
                            Value group_address_mask; //type: string
                            Value source_address; //type: string
                            Value source_address_mask; //type: string
                            Value group_count; //type: uint32
                            Value source_count; //type: uint32
                            Value suppress_report; //type: boolean




                    }; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddress> > static_group_group_address;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMask> > static_group_group_address_group_address_mask;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddress> > static_group_group_address_group_address_mask_source_address;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressGroupAddressMaskSourceAddressSourceAddressMask> > static_group_group_address_group_address_mask_source_address_source_address_mask;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddress> > static_group_group_address_source_address;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses::StaticGroupGroupAddressSourceAddressSourceAddressMask> > static_group_group_address_source_address_source_address_mask;


                }; // Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses


                class MaximumGroupsPerInterfaceOor : public Entity
                {
                    public:
                        MaximumGroupsPerInterfaceOor();
                        ~MaximumGroupsPerInterfaceOor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_groups; //type: uint32
                        Value warning_threshold; //type: uint32
                        Value access_list_name; //type: string




                }; // Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor


                class ExplicitTracking : public Entity
                {
                    public:
                        ExplicitTracking();
                        ~ExplicitTracking();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enable; //type: boolean
                        Value access_list_name; //type: string




                }; // Mld::DefaultContext::Interfaces::Interface::ExplicitTracking


                    std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::ExplicitTracking> explicit_tracking; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::JoinGroups> join_groups; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::MaximumGroupsPerInterfaceOor> maximum_groups_per_interface_oor;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface::StaticGroupGroupAddresses> static_group_group_addresses;


            }; // Mld::DefaultContext::Interfaces::Interface


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces::Interface> > interface;


        }; // Mld::DefaultContext::Interfaces


            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Accounting> accounting;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::InheritableDefaults> inheritable_defaults;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Interfaces> interfaces;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Maximum> maximum;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Nsf> nsf;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::SsmAccessGroups> ssm_access_groups;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::Traffic> traffic;
            std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext::UnicastQosAdjust> unicast_qos_adjust;


    }; // Mld::DefaultContext


        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::DefaultContext> default_context; // presence node
        std::unique_ptr<Cisco_IOS_XR_ipv4_igmp_cfg::Mld::Vrfs> vrfs;


}; // Mld


class IgmpFilterEnum : public Enum
{
    public:
        static const Enum::Value include;
        static const Enum::Value exclude;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_IGMP_CFG_ */

