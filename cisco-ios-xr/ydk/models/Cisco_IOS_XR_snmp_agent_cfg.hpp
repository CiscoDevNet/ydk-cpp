#ifndef _CISCO_IOS_XR_SNMP_AGENT_CFG_
#define _CISCO_IOS_XR_SNMP_AGENT_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_clns_isis_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_snmp_agent_cfg {

class Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value inform_retries; //type: uint32
        Value trap_port; //type: uint32
        Value oid_poll_stats; //type: empty
        Value trap_source; //type: string
        Value vrf_authentication_trap_disable; //type: empty
        Value inform_timeout; //type: uint32
        Value trap_source_ipv6; //type: string
        Value packet_size; //type: uint32
        Value throttle_time; //type: uint32
        Value trap_source_ipv4; //type: string
        Value inform_pending; //type: uint32


    class EncryptedCommunityMaps : public Entity
    {
        public:
            EncryptedCommunityMaps();
            ~EncryptedCommunityMaps();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class EncryptedCommunityMap : public Entity
        {
            public:
                EncryptedCommunityMap();
                ~EncryptedCommunityMap();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value community_name; //type: string
                Value context; //type: string
                Value security; //type: string
                Value target_list; //type: string




        }; // Snmp::EncryptedCommunityMaps::EncryptedCommunityMap


            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::EncryptedCommunityMaps::EncryptedCommunityMap> > encrypted_community_map;


    }; // Snmp::EncryptedCommunityMaps


    class Views : public Entity
    {
        public:
            Views();
            ~Views();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class View : public Entity
        {
            public:
                View();
                ~View();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value view_name; //type: string
                Value family; //type: string
                Value view_inclusion; //type: SnmpMibViewInclusionEnum


                class SnmpMibViewInclusionEnum;


        }; // Snmp::Views::View


            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Views::View> > view;


    }; // Snmp::Views


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
                Value oid_processing; //type: uint32
                Value pdu_processing; //type: uint32




        }; // Snmp::Logging::Threshold


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Logging::Threshold> threshold;


    }; // Snmp::Logging


    class Administration : public Entity
    {
        public:
            Administration();
            ~Administration();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class DefaultCommunities : public Entity
        {
            public:
                DefaultCommunities();
                ~DefaultCommunities();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class DefaultCommunity : public Entity
            {
                public:
                    DefaultCommunity();
                    ~DefaultCommunity();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value community_name; //type: string
                    Value priviledge; //type: SnmpAccessLevelEnum
                    Value view_name; //type: string
                    Value v4acl_type; //type: SnmpaclEnum
                    Value v4_access_list; //type: string
                    Value v6acl_type; //type: SnmpaclEnum
                    Value v6_access_list; //type: string
                    Value owner; //type: SnmpOwnerAccessEnum


                    class SnmpOwnerAccessEnum;
                    class SnmpAccessLevelEnum;
                    class SnmpaclEnum;
                    class SnmpaclEnum;


            }; // Snmp::Administration::DefaultCommunities::DefaultCommunity


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration::DefaultCommunities::DefaultCommunity> > default_community;


        }; // Snmp::Administration::DefaultCommunities


        class EncryptedCommunities : public Entity
        {
            public:
                EncryptedCommunities();
                ~EncryptedCommunities();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EncryptedCommunity : public Entity
            {
                public:
                    EncryptedCommunity();
                    ~EncryptedCommunity();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value community_name; //type: string
                    Value priviledge; //type: SnmpAccessLevelEnum
                    Value view_name; //type: string
                    Value v4acl_type; //type: SnmpaclEnum
                    Value v4_access_list; //type: string
                    Value v6acl_type; //type: SnmpaclEnum
                    Value v6_access_list; //type: string
                    Value owner; //type: SnmpOwnerAccessEnum


                    class SnmpOwnerAccessEnum;
                    class SnmpAccessLevelEnum;
                    class SnmpaclEnum;
                    class SnmpaclEnum;


            }; // Snmp::Administration::EncryptedCommunities::EncryptedCommunity


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration::EncryptedCommunities::EncryptedCommunity> > encrypted_community;


        }; // Snmp::Administration::EncryptedCommunities


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration::DefaultCommunities> default_communities;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration::EncryptedCommunities> encrypted_communities;


    }; // Snmp::Administration


    class Agent : public Entity
    {
        public:
            Agent();
            ~Agent();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class EngineId : public Entity
        {
            public:
                EngineId();
                ~EngineId();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value local; //type: string


            class Remotes : public Entity
            {
                public:
                    Remotes();
                    ~Remotes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Remote : public Entity
                {
                    public:
                        Remote();
                        ~Remote();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value remote_address; //type: string
                        Value remote_engine_id; //type: string
                        Value port; //type: uint16




                }; // Snmp::Agent::EngineId::Remotes::Remote


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Agent::EngineId::Remotes::Remote> > remote;


            }; // Snmp::Agent::EngineId::Remotes


                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Agent::EngineId::Remotes> remotes;


        }; // Snmp::Agent::EngineId


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Agent::EngineId> engine_id;


    }; // Snmp::Agent


    class Trap : public Entity
    {
        public:
            Trap();
            ~Trap();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value timeout; //type: uint32
            Value throttle_time; //type: uint32
            Value queue_length; //type: uint32




    }; // Snmp::Trap


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


        class Tos : public Entity
        {
            public:
                Tos();
                ~Tos();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: SnmpTosEnum
                Value precedence; //type: one of uint32, enumeration
                Value dscp; //type: one of uint32, enumeration


                class SnmpDscpValueEnum;
                class SnmpPrecedenceValue1Enum;
                class SnmpTosEnum;


        }; // Snmp::Ipv6::Tos


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Ipv6::Tos> tos;


    }; // Snmp::Ipv6


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


        class Tos : public Entity
        {
            public:
                Tos();
                ~Tos();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: SnmpTosEnum
                Value precedence; //type: one of uint32, enumeration
                Value dscp; //type: one of uint32, enumeration


                class SnmpDscpValueEnum;
                class SnmpPrecedenceValue1Enum;
                class SnmpTosEnum;


        }; // Snmp::Ipv4::Tos


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Ipv4::Tos> tos;


    }; // Snmp::Ipv4


    class System : public Entity
    {
        public:
            System();
            ~System();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value chassis_id; //type: string
            Value location; //type: string
            Value contact; //type: string




    }; // Snmp::System


    class Target : public Entity
    {
        public:
            Target();
            ~Target();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Targets : public Entity
        {
            public:
                Targets();
                ~Targets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Target_ : public Entity
            {
                public:
                    Target_();
                    ~Target_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value target_list_name; //type: string


                class VrfNames : public Entity
                {
                    public:
                        VrfNames();
                        ~VrfNames();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class VrfName : public Entity
                    {
                        public:
                            VrfName();
                            ~VrfName();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value name; //type: string




                    }; // Snmp::Target::Targets::Target_::VrfNames::VrfName


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_::VrfNames::VrfName> > vrf_name;


                }; // Snmp::Target::Targets::Target_::VrfNames


                class TargetAddresses : public Entity
                {
                    public:
                        TargetAddresses();
                        ~TargetAddresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class TargetAddress : public Entity
                    {
                        public:
                            TargetAddress();
                            ~TargetAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip_address; //type: string




                    }; // Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress> > target_address;


                }; // Snmp::Target::Targets::Target_::TargetAddresses


                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_::TargetAddresses> target_addresses;
                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_::VrfNames> vrf_names;


            }; // Snmp::Target::Targets::Target_


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_> > target;


        }; // Snmp::Target::Targets


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets> targets;


    }; // Snmp::Target


    class Notification : public Entity
    {
        public:
            Notification();
            ~Notification();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Snmp_ : public Entity
        {
            public:
                Snmp_();
                ~Snmp_();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value authentication; //type: empty
                Value cold_start; //type: empty
                Value warm_start; //type: empty
                Value enable; //type: empty
                Value link_down; //type: empty
                Value link_up; //type: empty




        }; // Snmp::Notification::Snmp_


        class Vpls : public Entity
        {
            public:
                Vpls();
                ~Vpls();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value full_clear; //type: empty
                Value status; //type: empty
                Value enable; //type: empty
                Value full_raise; //type: empty




        }; // Snmp::Notification::Vpls


        class L2Vpn : public Entity
        {
            public:
                L2Vpn();
                ~L2Vpn();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value cisco; //type: empty
                Value enable; //type: empty
                Value vc_down; //type: empty
                Value vc_up; //type: empty




        }; // Snmp::Notification::L2Vpn


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
                Value database_overflow; //type: IsisMibDatabaseOverFlowBooleanEnum
                Value manual_address_drops; //type: IsisMibManualAddressDropsBooleanEnum
                Value corrupted_lsp_detected; //type: IsisMibCorruptedLspDetectedBooleanEnum
                Value attempt_to_exceed_max_sequence; //type: IsisMibAttemptToExceedMaxSequenceBooleanEnum
                Value id_length_mismatch; //type: IsisMibIdLengthMismatchBooleanEnum
                Value max_area_address_mismatch; //type: IsisMibMaxAreaAddressMismatchBooleanEnum
                Value own_lsp_purge; //type: IsisMibOwnLspPurgeBooleanEnum
                Value sequence_number_skip; //type: IsisMibSequenceNumberSkipBooleanEnum
                Value authentication_type_failure; //type: IsisMibAuthenticationTypeFailureBooleanEnum
                Value authentication_failure; //type: IsisMibAuthenticationFailureBooleanEnum
                Value version_skew; //type: IsisMibVersionSkewBooleanEnum
                Value area_mismatch; //type: IsisMibAreaMismatchBooleanEnum
                Value rejected_adjacency; //type: IsisMibRejectedAdjacencyBooleanEnum
                Value lsp_too_large_to_propagate; //type: IsisMibLspTooLargeToPropagateBooleanEnum
                Value originated_lsp_buffer_size_mismatch; //type: IsisMibOriginatedLspBufferSizeMismatchBooleanEnum
                Value protocols_supported_mismatch; //type: IsisMibProtocolsSupportedMismatchBooleanEnum
                Value adjacency_change; //type: IsisMibAdjacencyChangeBooleanEnum
                Value lsp_error_detected; //type: IsisMibLspErrorDetectedBooleanEnum
                Value all; //type: IsisMibAllBooleanEnum


                class IsisMibAdjacencyChangeBooleanEnum;
                class IsisMibAllBooleanEnum;
                class IsisMibAreaMismatchBooleanEnum;
                class IsisMibAttemptToExceedMaxSequenceBooleanEnum;
                class IsisMibAuthenticationFailureBooleanEnum;
                class IsisMibAuthenticationTypeFailureBooleanEnum;
                class IsisMibCorruptedLspDetectedBooleanEnum;
                class IsisMibDatabaseOverFlowBooleanEnum;
                class IsisMibIdLengthMismatchBooleanEnum;
                class IsisMibLspErrorDetectedBooleanEnum;
                class IsisMibLspTooLargeToPropagateBooleanEnum;
                class IsisMibManualAddressDropsBooleanEnum;
                class IsisMibMaxAreaAddressMismatchBooleanEnum;
                class IsisMibOriginatedLspBufferSizeMismatchBooleanEnum;
                class IsisMibOwnLspPurgeBooleanEnum;
                class IsisMibProtocolsSupportedMismatchBooleanEnum;
                class IsisMibRejectedAdjacencyBooleanEnum;
                class IsisMibSequenceNumberSkipBooleanEnum;
                class IsisMibVersionSkewBooleanEnum;


        }; // Snmp::Notification::Isis


        class ConfigMan : public Entity
        {
            public:
                ConfigMan();
                ~ConfigMan();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // Snmp::Notification::ConfigMan


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
                Value enable; //type: empty




        }; // Snmp::Notification::Cfm


        class Oam : public Entity
        {
            public:
                Oam();
                ~Oam();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // Snmp::Notification::Oam


        class Flash : public Entity
        {
            public:
                Flash();
                ~Flash();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value insertion; //type: empty
                Value removal; //type: empty




        }; // Snmp::Notification::Flash


        class EntityRedundancy : public Entity
        {
            public:
                EntityRedundancy();
                ~EntityRedundancy();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value switchover; //type: empty
                Value enable; //type: empty
                Value status; //type: empty




        }; // Snmp::Notification::EntityRedundancy


        class ConfigCopy : public Entity
        {
            public:
                ConfigCopy();
                ~ConfigCopy();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value completion; //type: empty




        }; // Snmp::Notification::ConfigCopy


        class SelectiveVrfDownload : public Entity
        {
            public:
                SelectiveVrfDownload();
                ~SelectiveVrfDownload();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value role_change; //type: empty




        }; // Snmp::Notification::SelectiveVrfDownload


        class System : public Entity
        {
            public:
                System();
                ~System();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // Snmp::Notification::System


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
                Value enable; //type: empty




        }; // Snmp::Notification::Bfd


        class Ntp : public Entity
        {
            public:
                Ntp();
                ~Ntp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // Snmp::Notification::Ntp


        class Rsvp : public Entity
        {
            public:
                Rsvp();
                ~Rsvp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value lost_flow; //type: empty
                Value new_flow; //type: empty
                Value enable; //type: empty




        }; // Snmp::Notification::Rsvp


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


            class Bgp4Mib : public Entity
            {
                public:
                    Bgp4Mib();
                    ~Bgp4Mib();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value enable; //type: empty
                    Value up_down; //type: empty




            }; // Snmp::Notification::Bgp::Bgp4Mib


            class CiscoBgp4Mib : public Entity
            {
                public:
                    CiscoBgp4Mib();
                    ~CiscoBgp4Mib();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value enable; //type: empty
                    Value up_down; //type: empty




            }; // Snmp::Notification::Bgp::CiscoBgp4Mib


                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Bgp::Bgp4Mib> bgp4mib;
                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Bgp::CiscoBgp4Mib> cisco_bgp4mib;


        }; // Snmp::Notification::Bgp


        class Hsrp : public Entity
        {
            public:
                Hsrp();
                ~Hsrp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // Snmp::Notification::Hsrp


        class Ospf : public Entity
        {
            public:
                Ospf();
                ~Ospf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Lsa : public Entity
            {
                public:
                    Lsa();
                    ~Lsa();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value max_age_lsa; //type: empty
                    Value originate_lsa; //type: empty




            }; // Snmp::Notification::Ospf::Lsa


            class StateChange : public Entity
            {
                public:
                    StateChange();
                    ~StateChange();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface; //type: empty
                    Value virtual_interface; //type: empty
                    Value virtual_neighbor; //type: empty
                    Value neighbor; //type: empty




            }; // Snmp::Notification::Ospf::StateChange


            class Retransmit : public Entity
            {
                public:
                    Retransmit();
                    ~Retransmit();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value virtual_packet; //type: empty
                    Value packet; //type: empty




            }; // Snmp::Notification::Ospf::Retransmit


            class Error : public Entity
            {
                public:
                    Error();
                    ~Error();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value config_error; //type: empty
                    Value authentication_failure; //type: empty
                    Value virtual_config_error; //type: empty
                    Value virtual_authentication_failure; //type: empty
                    Value bad_packet; //type: empty
                    Value virtual_bad_packet; //type: empty




            }; // Snmp::Notification::Ospf::Error


                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf::Error> error;
                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf::Lsa> lsa;
                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf::Retransmit> retransmit;
                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf::StateChange> state_change;


        }; // Snmp::Notification::Ospf


        class Vrrp : public Entity
        {
            public:
                Vrrp();
                ~Vrrp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // Snmp::Notification::Vrrp


        class Ospfv3 : public Entity
        {
            public:
                Ospfv3();
                ~Ospfv3();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Error : public Entity
            {
                public:
                    Error();
                    ~Error();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value config_error; //type: empty
                    Value bad_packet; //type: empty
                    Value virtual_bad_packet; //type: empty
                    Value virtual_config_error; //type: empty




            }; // Snmp::Notification::Ospfv3::Error


            class StateChange : public Entity
            {
                public:
                    StateChange();
                    ~StateChange();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value restart_virtual_helper; //type: empty
                    Value nssa_translator; //type: empty
                    Value interface; //type: empty
                    Value restart; //type: empty
                    Value neighbor; //type: empty
                    Value virtual_interface; //type: empty
                    Value restart_helper; //type: empty
                    Value virtual_neighbor; //type: empty




            }; // Snmp::Notification::Ospfv3::StateChange


                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospfv3::Error> error;
                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospfv3::StateChange> state_change;


        }; // Snmp::Notification::Ospfv3


        class MplsLdp : public Entity
        {
            public:
                MplsLdp();
                ~MplsLdp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value session_up; //type: empty
                Value init_session_threshold_exceeded; //type: empty
                Value session_down; //type: empty




        }; // Snmp::Notification::MplsLdp


        class MplsTeP2Mp : public Entity
        {
            public:
                MplsTeP2Mp();
                ~MplsTeP2Mp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value up; //type: empty
                Value down; //type: empty




        }; // Snmp::Notification::MplsTeP2Mp


        class MplsTe : public Entity
        {
            public:
                MplsTe();
                ~MplsTe();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value cisco; //type: empty
                Value up; //type: empty
                Value reoptimize; //type: empty
                Value reroute; //type: empty
                Value down; //type: empty


            class CiscoExtension : public Entity
            {
                public:
                    CiscoExtension();
                    ~CiscoExtension();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value preempt; //type: empty
                    Value insufficient_bandwidth; //type: empty
                    Value re_route_pending_clear; //type: empty
                    Value bringup_fail; //type: empty
                    Value re_route_pending; //type: empty




            }; // Snmp::Notification::MplsTe::CiscoExtension


                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsTe::CiscoExtension> cisco_extension;


        }; // Snmp::Notification::MplsTe


        class MplsFrr : public Entity
        {
            public:
                MplsFrr();
                ~MplsFrr();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value unprotected; //type: empty
                Value enable; //type: empty
                Value protected_; //type: empty




        }; // Snmp::Notification::MplsFrr


        class Otn : public Entity
        {
            public:
                Otn();
                ~Otn();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // Snmp::Notification::Otn


        class Sensor : public Entity
        {
            public:
                Sensor();
                ~Sensor();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // Snmp::Notification::Sensor


        class Entity_ : public Entity
        {
            public:
                Entity_();
                ~Entity_();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // Snmp::Notification::Entity_


        class EntityState : public Entity
        {
            public:
                EntityState();
                ~EntityState();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value switchover; //type: empty
                Value oper_status; //type: empty




        }; // Snmp::Notification::EntityState


        class FruControl : public Entity
        {
            public:
                FruControl();
                ~FruControl();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // Snmp::Notification::FruControl


        class Rf : public Entity
        {
            public:
                Rf();
                ~Rf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // Snmp::Notification::Rf


        class Syslog : public Entity
        {
            public:
                Syslog();
                ~Syslog();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value enable; //type: empty




        }; // Snmp::Notification::Syslog


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Bfd> bfd;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Bgp> bgp;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Cfm> cfm;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::ConfigCopy> config_copy;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::ConfigMan> config_man;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Entity_> entity_;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::EntityRedundancy> entity_redundancy;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::EntityState> entity_state;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Flash> flash;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::FruControl> fru_control;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Hsrp> hsrp;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Isis> isis;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::L2Vpn> l2vpn;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsFrr> mpls_frr;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsLdp> mpls_ldp;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsTe> mpls_te;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsTeP2Mp> mpls_te_p2mp;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ntp> ntp;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Oam> oam;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf> ospf;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospfv3> ospfv3;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Otn> otn;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Rf> rf;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Rsvp> rsvp;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::SelectiveVrfDownload> selective_vrf_download;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Sensor> sensor;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Snmp_> snmp;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Syslog> syslog;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::System> system;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Vpls> vpls;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Vrrp> vrrp;


    }; // Snmp::Notification


    class Correlator : public Entity
    {
        public:
            Correlator();
            ~Correlator();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value buffer_size; //type: uint32


        class Rules : public Entity
        {
            public:
                Rules();
                ~Rules();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Rule : public Entity
            {
                public:
                    Rule();
                    ~Rule();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string


                class NonStateful : public Entity
                {
                    public:
                        NonStateful();
                        ~NonStateful();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value timeout; //type: uint32


                    class RootCauses : public Entity
                    {
                        public:
                            RootCauses();
                            ~RootCauses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class RootCause : public Entity
                        {
                            public:
                                RootCause();
                                ~RootCause();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value oid; //type: string
                                Value created; //type: empty


                            class VarBinds : public Entity
                            {
                                public:
                                    VarBinds();
                                    ~VarBinds();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class VarBind : public Entity
                                {
                                    public:
                                        VarBind();
                                        ~VarBind();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value oid; //type: string


                                    class Match : public Entity
                                    {
                                        public:
                                            Match();
                                            ~Match();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value value_; //type: string
                                            Value index_; //type: string




                                    }; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match


                                        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match> match;


                                }; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind> > var_bind;


                            }; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds


                                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds> var_binds;


                        }; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause


                            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause> > root_cause;


                    }; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses


                    class NonRootCauses : public Entity
                    {
                        public:
                            NonRootCauses();
                            ~NonRootCauses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class NonRootCause : public Entity
                        {
                            public:
                                NonRootCause();
                                ~NonRootCause();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value oid; //type: string
                                Value created; //type: empty


                            class VarBinds : public Entity
                            {
                                public:
                                    VarBinds();
                                    ~VarBinds();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class VarBind : public Entity
                                {
                                    public:
                                        VarBind();
                                        ~VarBind();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value oid; //type: string


                                    class Match : public Entity
                                    {
                                        public:
                                            Match();
                                            ~Match();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value value_; //type: string
                                            Value index_; //type: string




                                    }; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match


                                        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match> match;


                                }; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind> > var_bind;


                            }; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds


                                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds> var_binds;


                        }; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause


                            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause> > non_root_cause;


                    }; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses


                        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses> non_root_causes;
                        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses> root_causes;


                }; // Snmp::Correlator::Rules::Rule::NonStateful


                class AppliedTo : public Entity
                {
                    public:
                        AppliedTo();
                        ~AppliedTo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value all; //type: empty


                    class Hosts : public Entity
                    {
                        public:
                            Hosts();
                            ~Hosts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Host : public Entity
                        {
                            public:
                                Host();
                                ~Host();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ip_address; //type: string
                                Value port; //type: uint16




                        }; // Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host


                            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host> > host;


                    }; // Snmp::Correlator::Rules::Rule::AppliedTo::Hosts


                        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::AppliedTo::Hosts> hosts;


                }; // Snmp::Correlator::Rules::Rule::AppliedTo


                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::AppliedTo> applied_to;
                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful> non_stateful; // presence node


            }; // Snmp::Correlator::Rules::Rule


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule> > rule;


        }; // Snmp::Correlator::Rules


        class RuleSets : public Entity
        {
            public:
                RuleSets();
                ~RuleSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class RuleSet : public Entity
            {
                public:
                    RuleSet();
                    ~RuleSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string


                class Rulenames : public Entity
                {
                    public:
                        Rulenames();
                        ~Rulenames();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Rulename : public Entity
                    {
                        public:
                            Rulename();
                            ~Rulename();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rulename; //type: string




                    }; // Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename> > rulename;


                }; // Snmp::Correlator::RuleSets::RuleSet::Rulenames


                class AppliedTo : public Entity
                {
                    public:
                        AppliedTo();
                        ~AppliedTo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value all; //type: empty


                    class Hosts : public Entity
                    {
                        public:
                            Hosts();
                            ~Hosts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Host : public Entity
                        {
                            public:
                                Host();
                                ~Host();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ip_address; //type: string
                                Value port; //type: uint16




                        }; // Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host


                            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host> > host;


                    }; // Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts


                        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts> hosts;


                }; // Snmp::Correlator::RuleSets::RuleSet::AppliedTo


                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::AppliedTo> applied_to;
                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::Rulenames> rulenames;


            }; // Snmp::Correlator::RuleSets::RuleSet


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet> > rule_set;


        }; // Snmp::Correlator::RuleSets


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets> rule_sets;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules> rules;


    }; // Snmp::Correlator


    class BulkStats : public Entity
    {
        public:
            BulkStats();
            ~BulkStats();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value memory; //type: uint32


        class Schemas : public Entity
        {
            public:
                Schemas();
                ~Schemas();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Schema : public Entity
            {
                public:
                    Schema();
                    ~Schema();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value schema_name; //type: string
                    Value type; //type: empty
                    Value schema_object_list; //type: string
                    Value poll_interval; //type: uint32


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
                        Value type; //type: SnmpBulkstatSchemaEnum
                        Value instance; //type: string
                        Value start; //type: string
                        Value end; //type: string
                        Value max; //type: int32
                        Value sub_interface; //type: boolean


                        class SnmpBulkstatSchemaEnum;


                }; // Snmp::BulkStats::Schemas::Schema::Instance


                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Schemas::Schema::Instance> instance; // presence node


            }; // Snmp::BulkStats::Schemas::Schema


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Schemas::Schema> > schema;


        }; // Snmp::BulkStats::Schemas


        class Objects : public Entity
        {
            public:
                Objects();
                ~Objects();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Object : public Entity
            {
                public:
                    Object();
                    ~Object();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value object_list_name; //type: string
                    Value type; //type: empty


                class Objects_ : public Entity
                {
                    public:
                        Objects_();
                        ~Objects_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Object_ : public Entity
                    {
                        public:
                            Object_();
                            ~Object_();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value oid; //type: string




                    }; // Snmp::BulkStats::Objects::Object::Objects_::Object_


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Objects::Object::Objects_::Object_> > object;


                }; // Snmp::BulkStats::Objects::Object::Objects_


                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Objects::Object::Objects_> objects;


            }; // Snmp::BulkStats::Objects::Object


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Objects::Object> > object;


        }; // Snmp::BulkStats::Objects


        class Transfers : public Entity
        {
            public:
                Transfers();
                ~Transfers();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Transfer : public Entity
            {
                public:
                    Transfer();
                    ~Transfer();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value transfer_name; //type: string
                    Value secondary; //type: string
                    Value type; //type: empty
                    Value buffer_size; //type: uint32
                    Value retain; //type: uint32
                    Value format; //type: SnmpBulkstatFileFormatEnum
                    Value retry; //type: uint32
                    Value enable; //type: empty
                    Value primary; //type: string
                    Value interval; //type: int32


                class TransferSchemas : public Entity
                {
                    public:
                        TransferSchemas();
                        ~TransferSchemas();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class TransferSchema : public Entity
                    {
                        public:
                            TransferSchema();
                            ~TransferSchema();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value schema_name; //type: string




                    }; // Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema> > transfer_schema;


                }; // Snmp::BulkStats::Transfers::Transfer::TransferSchemas


                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers::Transfer::TransferSchemas> transfer_schemas;
                    class SnmpBulkstatFileFormatEnum;


            }; // Snmp::BulkStats::Transfers::Transfer


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers::Transfer> > transfer;


        }; // Snmp::BulkStats::Transfers


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Objects> objects;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Schemas> schemas;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers> transfers;


    }; // Snmp::BulkStats


    class DefaultCommunityMaps : public Entity
    {
        public:
            DefaultCommunityMaps();
            ~DefaultCommunityMaps();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class DefaultCommunityMap : public Entity
        {
            public:
                DefaultCommunityMap();
                ~DefaultCommunityMap();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value community_name; //type: string
                Value context; //type: string
                Value security; //type: string
                Value target_list; //type: string




        }; // Snmp::DefaultCommunityMaps::DefaultCommunityMap


            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::DefaultCommunityMaps::DefaultCommunityMap> > default_community_map;


    }; // Snmp::DefaultCommunityMaps


    class OverloadControl : public Entity
    {
        public:
            OverloadControl();
            ~OverloadControl();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value drop_time; //type: uint32
            Value throttle_rate; //type: uint32




    }; // Snmp::OverloadControl


    class Timeouts : public Entity
    {
        public:
            Timeouts();
            ~Timeouts();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value duplicates; //type: uint32
            Value in_qdrop; //type: uint32
            Value subagent; //type: uint32
            Value pdu_stats; //type: uint32




    }; // Snmp::Timeouts


    class Users : public Entity
    {
        public:
            Users();
            ~Users();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class User : public Entity
        {
            public:
                User();
                ~User();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value user_name; //type: string
                Value group_name; //type: string
                Value version; //type: UserSnmpVersionEnum
                Value authentication_password_configured; //type: empty
                Value algorithm; //type: SnmpHashAlgorithmEnum
                Value authentication_password; //type: string
                Value privacy_password_configured; //type: empty
                Value priv_algorithm; //type: SnmpPrivAlgorithmEnum
                Value privacy_password; //type: string
                Value v4acl_type; //type: SnmpaclEnum
                Value v4_access_list; //type: string
                Value v6acl_type; //type: SnmpaclEnum
                Value v6_access_list; //type: string
                Value owner; //type: SnmpOwnerAccessEnum
                Value remote_address; //type: string
                Value port; //type: uint16


                class SnmpHashAlgorithmEnum;
                class SnmpOwnerAccessEnum;
                class SnmpPrivAlgorithmEnum;
                class SnmpaclEnum;
                class SnmpaclEnum;
                class UserSnmpVersionEnum;


        }; // Snmp::Users::User


            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Users::User> > user;


    }; // Snmp::Users


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
                Value name; //type: string


            class TrapHosts : public Entity
            {
                public:
                    TrapHosts();
                    ~TrapHosts();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class TrapHost : public Entity
                {
                    public:
                        TrapHost();
                        ~TrapHost();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value ip_address; //type: string


                    class EncryptedUserCommunities : public Entity
                    {
                        public:
                            EncryptedUserCommunities();
                            ~EncryptedUserCommunities();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class EncryptedUserCommunity : public Entity
                        {
                            public:
                                EncryptedUserCommunity();
                                ~EncryptedUserCommunity();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value community_name; //type: string
                                Value port; //type: uint16
                                Value version; //type: string
                                Value security_level; //type: SnmpSecurityModelEnum
                                Value basic_trap_types; //type: int32
                                Value advanced_trap_types1; //type: int32
                                Value advanced_trap_types2; //type: int32


                                class SnmpSecurityModelEnum;


                        }; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity


                            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity> > encrypted_user_community;


                    }; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities


                    class InformHost : public Entity
                    {
                        public:
                            InformHost();
                            ~InformHost();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class InformUserCommunities : public Entity
                        {
                            public:
                                InformUserCommunities();
                                ~InformUserCommunities();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class InformUserCommunity : public Entity
                            {
                                public:
                                    InformUserCommunity();
                                    ~InformUserCommunity();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value community_name; //type: string
                                    Value port; //type: uint16
                                    Value version; //type: string
                                    Value security_level; //type: SnmpSecurityModelEnum
                                    Value basic_trap_types; //type: int32
                                    Value advanced_trap_types1; //type: int32
                                    Value advanced_trap_types2; //type: int32


                                    class SnmpSecurityModelEnum;


                            }; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity


                                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity> > inform_user_community;


                        }; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities


                        class InformEncryptedUserCommunities : public Entity
                        {
                            public:
                                InformEncryptedUserCommunities();
                                ~InformEncryptedUserCommunities();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class InformEncryptedUserCommunity : public Entity
                            {
                                public:
                                    InformEncryptedUserCommunity();
                                    ~InformEncryptedUserCommunity();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value community_name; //type: string
                                    Value port; //type: uint16
                                    Value version; //type: string
                                    Value security_level; //type: SnmpSecurityModelEnum
                                    Value basic_trap_types; //type: int32
                                    Value advanced_trap_types1; //type: int32
                                    Value advanced_trap_types2; //type: int32


                                    class SnmpSecurityModelEnum;


                            }; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity


                                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity> > inform_encrypted_user_community;


                        }; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities


                            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities> inform_encrypted_user_communities;
                            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities> inform_user_communities;


                    }; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost


                    class DefaultUserCommunities : public Entity
                    {
                        public:
                            DefaultUserCommunities();
                            ~DefaultUserCommunities();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class DefaultUserCommunity : public Entity
                        {
                            public:
                                DefaultUserCommunity();
                                ~DefaultUserCommunity();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value community_name; //type: string
                                Value port; //type: uint16
                                Value version; //type: string
                                Value security_level; //type: SnmpSecurityModelEnum
                                Value basic_trap_types; //type: int32
                                Value advanced_trap_types1; //type: int32
                                Value advanced_trap_types2; //type: int32


                                class SnmpSecurityModelEnum;


                        }; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity


                            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity> > default_user_community;


                    }; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities


                        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities> default_user_communities;
                        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities> encrypted_user_communities;
                        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost> inform_host;


                }; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost> > trap_host;


            }; // Snmp::Vrfs::Vrf::TrapHosts


            class Contexts : public Entity
            {
                public:
                    Contexts();
                    ~Contexts();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Context : public Entity
                {
                    public:
                        Context();
                        ~Context();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value context_name; //type: string




                }; // Snmp::Vrfs::Vrf::Contexts::Context


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::Contexts::Context> > context;


            }; // Snmp::Vrfs::Vrf::Contexts


            class ContextMappings : public Entity
            {
                public:
                    ContextMappings();
                    ~ContextMappings();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ContextMapping : public Entity
                {
                    public:
                        ContextMapping();
                        ~ContextMapping();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value context_mapping_name; //type: string
                        Value context; //type: SnmpContextEnum
                        Value instance_name; //type: string
                        Value vrf_name; //type: string
                        Value topology_name; //type: string


                        class SnmpContextEnum;


                }; // Snmp::Vrfs::Vrf::ContextMappings::ContextMapping


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::ContextMappings::ContextMapping> > context_mapping;


            }; // Snmp::Vrfs::Vrf::ContextMappings


                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::ContextMappings> context_mappings;
                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::Contexts> contexts;
                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts> trap_hosts;


        }; // Snmp::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf> > vrf;


    }; // Snmp::Vrfs


    class Groups : public Entity
    {
        public:
            Groups();
            ~Groups();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Group : public Entity
        {
            public:
                Group();
                ~Group();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                Value snmp_version; //type: GroupSnmpVersionEnum
                Value security_model; //type: SnmpSecurityModelEnum
                Value notify_view; //type: string
                Value read_view; //type: string
                Value write_view; //type: string
                Value v4acl_type; //type: SnmpaclEnum
                Value v4_access_list; //type: string
                Value v6acl_type; //type: SnmpaclEnum
                Value v6_access_list; //type: string
                Value context_name; //type: string


                class SnmpSecurityModelEnum;
                class GroupSnmpVersionEnum;
                class SnmpaclEnum;
                class SnmpaclEnum;


        }; // Snmp::Groups::Group


            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Groups::Group> > group;


    }; // Snmp::Groups


    class TrapHosts : public Entity
    {
        public:
            TrapHosts();
            ~TrapHosts();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class TrapHost : public Entity
        {
            public:
                TrapHost();
                ~TrapHost();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value ip_address; //type: string


            class EncryptedUserCommunities : public Entity
            {
                public:
                    EncryptedUserCommunities();
                    ~EncryptedUserCommunities();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class EncryptedUserCommunity : public Entity
                {
                    public:
                        EncryptedUserCommunity();
                        ~EncryptedUserCommunity();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value community_name; //type: string
                        Value port; //type: uint16
                        Value version; //type: string
                        Value security_level; //type: SnmpSecurityModelEnum
                        Value basic_trap_types; //type: int32
                        Value advanced_trap_types1; //type: int32
                        Value advanced_trap_types2; //type: int32


                        class SnmpSecurityModelEnum;


                }; // Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity> > encrypted_user_community;


            }; // Snmp::TrapHosts::TrapHost::EncryptedUserCommunities


            class InformHost : public Entity
            {
                public:
                    InformHost();
                    ~InformHost();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class InformUserCommunities : public Entity
                {
                    public:
                        InformUserCommunities();
                        ~InformUserCommunities();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class InformUserCommunity : public Entity
                    {
                        public:
                            InformUserCommunity();
                            ~InformUserCommunity();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value community_name; //type: string
                            Value port; //type: uint16
                            Value version; //type: string
                            Value security_level; //type: SnmpSecurityModelEnum
                            Value basic_trap_types; //type: int32
                            Value advanced_trap_types1; //type: int32
                            Value advanced_trap_types2; //type: int32


                            class SnmpSecurityModelEnum;


                    }; // Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity> > inform_user_community;


                }; // Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities


                class InformEncryptedUserCommunities : public Entity
                {
                    public:
                        InformEncryptedUserCommunities();
                        ~InformEncryptedUserCommunities();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class InformEncryptedUserCommunity : public Entity
                    {
                        public:
                            InformEncryptedUserCommunity();
                            ~InformEncryptedUserCommunity();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value community_name; //type: string
                            Value port; //type: uint16
                            Value version; //type: string
                            Value security_level; //type: SnmpSecurityModelEnum
                            Value basic_trap_types; //type: int32
                            Value advanced_trap_types1; //type: int32
                            Value advanced_trap_types2; //type: int32


                            class SnmpSecurityModelEnum;


                    }; // Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity> > inform_encrypted_user_community;


                }; // Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities


                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities> inform_encrypted_user_communities;
                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities> inform_user_communities;


            }; // Snmp::TrapHosts::TrapHost::InformHost


            class DefaultUserCommunities : public Entity
            {
                public:
                    DefaultUserCommunities();
                    ~DefaultUserCommunities();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class DefaultUserCommunity : public Entity
                {
                    public:
                        DefaultUserCommunity();
                        ~DefaultUserCommunity();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value community_name; //type: string
                        Value port; //type: uint16
                        Value version; //type: string
                        Value security_level; //type: SnmpSecurityModelEnum
                        Value basic_trap_types; //type: int32
                        Value advanced_trap_types1; //type: int32
                        Value advanced_trap_types2; //type: int32


                        class SnmpSecurityModelEnum;


                }; // Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity


                    std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity> > default_user_community;


            }; // Snmp::TrapHosts::TrapHost::DefaultUserCommunities


                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::DefaultUserCommunities> default_user_communities;
                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::EncryptedUserCommunities> encrypted_user_communities;
                std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost> inform_host;


        }; // Snmp::TrapHosts::TrapHost


            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost> > trap_host;


    }; // Snmp::TrapHosts


    class Contexts : public Entity
    {
        public:
            Contexts();
            ~Contexts();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Context : public Entity
        {
            public:
                Context();
                ~Context();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value context_name; //type: string




        }; // Snmp::Contexts::Context


            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Contexts::Context> > context;


    }; // Snmp::Contexts


    class ContextMappings : public Entity
    {
        public:
            ContextMappings();
            ~ContextMappings();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class ContextMapping : public Entity
        {
            public:
                ContextMapping();
                ~ContextMapping();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value context_mapping_name; //type: string
                Value context; //type: SnmpContextEnum
                Value instance_name; //type: string
                Value vrf_name; //type: string
                Value topology_name; //type: string


                class SnmpContextEnum;


        }; // Snmp::ContextMappings::ContextMapping


            std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::ContextMappings::ContextMapping> > context_mapping;


    }; // Snmp::ContextMappings


        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration> administration;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Agent> agent;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats> bulk_stats;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::ContextMappings> context_mappings;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Contexts> contexts;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator> correlator;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::DefaultCommunityMaps> default_community_maps;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::EncryptedCommunityMaps> encrypted_community_maps;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Groups> groups;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Ipv4> ipv4;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Ipv6> ipv6;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Logging> logging;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification> notification;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::OverloadControl> overload_control; // presence node
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::System> system;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target> target;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Timeouts> timeouts;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Trap> trap;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts> trap_hosts;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Users> users;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Views> views;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs> vrfs;


}; // Snmp

class Mib : public Entity
{
    public:
        Mib();
        ~Mib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value sensor_mib_cache; //type: empty


    class MplsTeMib : public Entity
    {
        public:
            MplsTeMib();
            ~MplsTeMib();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value cache_garbage_collect_timer; //type: uint32
            Value cache_timer; //type: uint32




    }; // Mib::MplsTeMib


    class MplsP2MpMib : public Entity
    {
        public:
            MplsP2MpMib();
            ~MplsP2MpMib();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value cache_timer; //type: uint32




    }; // Mib::MplsP2MpMib


    class MplsTeExtStdMib : public Entity
    {
        public:
            MplsTeExtStdMib();
            ~MplsTeExtStdMib();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value cache_timer; //type: uint32




    }; // Mib::MplsTeExtStdMib


    class MplsTeExtMib : public Entity
    {
        public:
            MplsTeExtMib();
            ~MplsTeExtMib();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value cache_timer; //type: uint32




    }; // Mib::MplsTeExtMib


    class MplsFrrMib : public Entity
    {
        public:
            MplsFrrMib();
            ~MplsFrrMib();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value cache_timer; //type: uint32




    }; // Mib::MplsFrrMib


    class CbQosmib : public Entity
    {
        public:
            CbQosmib();
            ~CbQosmib();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value member_interface_stats; //type: empty
            Value persist; //type: empty


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
                Value enable; //type: empty
                Value refresh_time; //type: uint32
                Value service_policy_count; //type: uint32




        }; // Mib::CbQosmib::Cache


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::CbQosmib::Cache> cache;


    }; // Mib::CbQosmib


    class EntityMib : public Entity
    {
        public:
            EntityMib();
            ~EntityMib();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value entity_index_persistence; //type: empty




    }; // Mib::EntityMib


    class InterfaceMib : public Entity
    {
        public:
            InterfaceMib();
            ~InterfaceMib();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value internal_cache; //type: uint32
            Value interface_alias_long; //type: empty
            Value ip_subscriber; //type: empty
            Value interface_index_persistence; //type: empty
            Value statistics_cache; //type: empty


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
                    Value link_up_down; //type: boolean
                    Value index_persistence; //type: boolean




            }; // Mib::InterfaceMib::Interfaces::Interface


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Interfaces::Interface> > interface;


        }; // Mib::InterfaceMib::Interfaces


        class Notification : public Entity
        {
            public:
                Notification();
                ~Notification();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value link_ietf; //type: empty




        }; // Mib::InterfaceMib::Notification


        class Subsets : public Entity
        {
            public:
                Subsets();
                ~Subsets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Subset : public Entity
            {
                public:
                    Subset();
                    ~Subset();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value subset_id; //type: uint32


                class LinkUpDown : public Entity
                {
                    public:
                        LinkUpDown();
                        ~LinkUpDown();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enable; //type: boolean
                        Value regular_expression; //type: string




                }; // Mib::InterfaceMib::Subsets::Subset::LinkUpDown


                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Subsets::Subset::LinkUpDown> link_up_down;


            }; // Mib::InterfaceMib::Subsets::Subset


                std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Subsets::Subset> > subset;


        }; // Mib::InterfaceMib::Subsets


            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Interfaces> interfaces;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Notification> notification;
            std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Subsets> subsets;


    }; // Mib::InterfaceMib


        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::CbQosmib> cb_qosmib;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::EntityMib> entity_mib;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib> interface_mib;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsFrrMib> mpls_frr_mib;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsP2MpMib> mpls_p2mp_mib;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsTeExtMib> mpls_te_ext_mib;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsTeExtStdMib> mpls_te_ext_std_mib;
        std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsTeMib> mpls_te_mib;


}; // Mib


class SnmpHashAlgorithmEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value md5;
        static const Enum::Value sha;

};

class SnmpAccessLevelEnum : public Enum
{
    public:
        static const Enum::Value read_only;
        static const Enum::Value read_write;

};

class SnmpBulkstatSchemaEnum : public Enum
{
    public:
        static const Enum::Value exact_interface;
        static const Enum::Value exact_oid;
        static const Enum::Value wild_interface;
        static const Enum::Value wild_oid;
        static const Enum::Value range_oid;
        static const Enum::Value repeat_oid;

};

class GroupSnmpVersionEnum : public Enum
{
    public:
        static const Enum::Value v1;
        static const Enum::Value v2c;
        static const Enum::Value v3;

};

class SnmpOwnerAccessEnum : public Enum
{
    public:
        static const Enum::Value sdr_owner;
        static const Enum::Value system_owner;

};

class SnmpBulkstatFileFormatEnum : public Enum
{
    public:
        static const Enum::Value schema_ascii;
        static const Enum::Value bulk_ascii;
        static const Enum::Value bulk_binary;

};

class SnmpSecurityModelEnum : public Enum
{
    public:
        static const Enum::Value no_authentication;
        static const Enum::Value authentication;
        static const Enum::Value privacy;

};

class SnmpTosEnum : public Enum
{
    public:
        static const Enum::Value precedence;
        static const Enum::Value dscp;

};

class SnmpaclEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};

class SnmpDscpValueEnum : public Enum
{
    public:
        static const Enum::Value default_;
        static const Enum::Value af11;
        static const Enum::Value af12;
        static const Enum::Value af13;
        static const Enum::Value af21;
        static const Enum::Value af22;
        static const Enum::Value af23;
        static const Enum::Value af31;
        static const Enum::Value af32;
        static const Enum::Value af33;
        static const Enum::Value af41;
        static const Enum::Value af42;
        static const Enum::Value af43;
        static const Enum::Value ef;
        static const Enum::Value cs1;
        static const Enum::Value cs2;
        static const Enum::Value cs3;
        static const Enum::Value cs4;
        static const Enum::Value cs5;
        static const Enum::Value cs6;
        static const Enum::Value cs7;

};

class UserSnmpVersionEnum : public Enum
{
    public:
        static const Enum::Value v1;
        static const Enum::Value v2c;
        static const Enum::Value v3;

};

class SnmpPrecedenceValue1Enum : public Enum
{
    public:
        static const Enum::Value routine;
        static const Enum::Value priority;
        static const Enum::Value immediate;
        static const Enum::Value flash;
        static const Enum::Value flash_override;
        static const Enum::Value critical;
        static const Enum::Value internet;
        static const Enum::Value network;

};

class SnmpPrivAlgorithmEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value des;
        static const Enum::Value Y_3des;
        static const Enum::Value aes128;
        static const Enum::Value aes192;
        static const Enum::Value aes256;

};

class SnmpMibViewInclusionEnum : public Enum
{
    public:
        static const Enum::Value included;
        static const Enum::Value excluded;

};

class SnmpContextEnum : public Enum
{
    public:
        static const Enum::Value vrf;
        static const Enum::Value bridge;
        static const Enum::Value ospf;
        static const Enum::Value ospfv3;

};


}
}

#endif /* _CISCO_IOS_XR_SNMP_AGENT_CFG_ */

