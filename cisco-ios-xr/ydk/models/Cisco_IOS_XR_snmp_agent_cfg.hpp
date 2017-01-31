#ifndef _CISCO_IOS_XR_SNMP_AGENT_CFG_
#define _CISCO_IOS_XR_SNMP_AGENT_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


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


        YLeaf inform_retries; //type: uint32
        YLeaf trap_port; //type: uint32
        YLeaf oid_poll_stats; //type: empty
        YLeaf trap_source; //type: string
        YLeaf vrf_authentication_trap_disable; //type: empty
        YLeaf inform_timeout; //type: uint32
        YLeaf trap_source_ipv6; //type: string
        YLeaf packet_size; //type: uint32
        YLeaf throttle_time; //type: uint32
        YLeaf trap_source_ipv4; //type: string
        YLeaf inform_pending; //type: uint32

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


                YLeaf community_name; //type: string
                YLeaf context; //type: string
                YLeaf security; //type: string
                YLeaf target_list; //type: string



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


                YLeaf view_name; //type: string
                YLeaf family; //type: string
                YLeaf view_inclusion; //type: SnmpMibViewInclusionEnum



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


                YLeaf oid_processing; //type: uint32
                YLeaf pdu_processing; //type: uint32



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


                    YLeaf community_name; //type: string
                    YLeaf priviledge; //type: SnmpAccessLevelEnum
                    YLeaf view_name; //type: string
                    YLeaf v4acl_type; //type: SnmpaclEnum
                    YLeaf v4_access_list; //type: string
                    YLeaf v6acl_type; //type: SnmpaclEnum
                    YLeaf v6_access_list; //type: string
                    YLeaf owner; //type: SnmpOwnerAccessEnum



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


                    YLeaf community_name; //type: string
                    YLeaf priviledge; //type: SnmpAccessLevelEnum
                    YLeaf view_name; //type: string
                    YLeaf v4acl_type; //type: SnmpaclEnum
                    YLeaf v4_access_list; //type: string
                    YLeaf v6acl_type; //type: SnmpaclEnum
                    YLeaf v6_access_list; //type: string
                    YLeaf owner; //type: SnmpOwnerAccessEnum



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


                YLeaf local; //type: string

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


                        YLeaf remote_address; //type: string
                        YLeaf remote_engine_id; //type: string
                        YLeaf port; //type: uint16



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


            YLeaf timeout; //type: uint32
            YLeaf throttle_time; //type: uint32
            YLeaf queue_length; //type: uint32



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


                YLeaf type; //type: SnmpTosEnum
                YLeaf precedence; //type: one of uint32, enumeration
                YLeaf dscp; //type: one of uint32, enumeration



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


                YLeaf type; //type: SnmpTosEnum
                YLeaf precedence; //type: one of uint32, enumeration
                YLeaf dscp; //type: one of uint32, enumeration



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


            YLeaf chassis_id; //type: string
            YLeaf location; //type: string
            YLeaf contact; //type: string



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


                    YLeaf target_list_name; //type: string

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


                            YLeaf name; //type: string



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


                            YLeaf ip_address; //type: string



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


                YLeaf authentication; //type: empty
                YLeaf cold_start; //type: empty
                YLeaf warm_start; //type: empty
                YLeaf enable; //type: empty
                YLeaf link_down; //type: empty
                YLeaf link_up; //type: empty



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


                YLeaf full_clear; //type: empty
                YLeaf status; //type: empty
                YLeaf enable; //type: empty
                YLeaf full_raise; //type: empty



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


                YLeaf cisco; //type: empty
                YLeaf enable; //type: empty
                YLeaf vc_down; //type: empty
                YLeaf vc_up; //type: empty



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


                YLeaf database_overflow; //type: IsisMibDatabaseOverFlowBooleanEnum
                YLeaf manual_address_drops; //type: IsisMibManualAddressDropsBooleanEnum
                YLeaf corrupted_lsp_detected; //type: IsisMibCorruptedLspDetectedBooleanEnum
                YLeaf attempt_to_exceed_max_sequence; //type: IsisMibAttemptToExceedMaxSequenceBooleanEnum
                YLeaf id_length_mismatch; //type: IsisMibIdLengthMismatchBooleanEnum
                YLeaf max_area_address_mismatch; //type: IsisMibMaxAreaAddressMismatchBooleanEnum
                YLeaf own_lsp_purge; //type: IsisMibOwnLspPurgeBooleanEnum
                YLeaf sequence_number_skip; //type: IsisMibSequenceNumberSkipBooleanEnum
                YLeaf authentication_type_failure; //type: IsisMibAuthenticationTypeFailureBooleanEnum
                YLeaf authentication_failure; //type: IsisMibAuthenticationFailureBooleanEnum
                YLeaf version_skew; //type: IsisMibVersionSkewBooleanEnum
                YLeaf area_mismatch; //type: IsisMibAreaMismatchBooleanEnum
                YLeaf rejected_adjacency; //type: IsisMibRejectedAdjacencyBooleanEnum
                YLeaf lsp_too_large_to_propagate; //type: IsisMibLspTooLargeToPropagateBooleanEnum
                YLeaf originated_lsp_buffer_size_mismatch; //type: IsisMibOriginatedLspBufferSizeMismatchBooleanEnum
                YLeaf protocols_supported_mismatch; //type: IsisMibProtocolsSupportedMismatchBooleanEnum
                YLeaf adjacency_change; //type: IsisMibAdjacencyChangeBooleanEnum
                YLeaf lsp_error_detected; //type: IsisMibLspErrorDetectedBooleanEnum
                YLeaf all; //type: IsisMibAllBooleanEnum



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


                YLeaf enable; //type: empty



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


                YLeaf enable; //type: empty



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


                YLeaf enable; //type: empty



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


                YLeaf insertion; //type: empty
                YLeaf removal; //type: empty



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


                YLeaf switchover; //type: empty
                YLeaf enable; //type: empty
                YLeaf status; //type: empty



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


                YLeaf completion; //type: empty



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


                YLeaf role_change; //type: empty



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


                YLeaf enable; //type: empty



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


                YLeaf enable; //type: empty



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


                YLeaf enable; //type: empty



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


                YLeaf lost_flow; //type: empty
                YLeaf new_flow; //type: empty
                YLeaf enable; //type: empty



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


                    YLeaf enable; //type: empty
                    YLeaf up_down; //type: empty



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


                    YLeaf enable; //type: empty
                    YLeaf up_down; //type: empty



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


                YLeaf enable; //type: empty



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


                    YLeaf max_age_lsa; //type: empty
                    YLeaf originate_lsa; //type: empty



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


                    YLeaf interface; //type: empty
                    YLeaf virtual_interface; //type: empty
                    YLeaf virtual_neighbor; //type: empty
                    YLeaf neighbor; //type: empty



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


                    YLeaf virtual_packet; //type: empty
                    YLeaf packet; //type: empty



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


                    YLeaf config_error; //type: empty
                    YLeaf authentication_failure; //type: empty
                    YLeaf virtual_config_error; //type: empty
                    YLeaf virtual_authentication_failure; //type: empty
                    YLeaf bad_packet; //type: empty
                    YLeaf virtual_bad_packet; //type: empty



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


                YLeaf enable; //type: empty



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


                    YLeaf config_error; //type: empty
                    YLeaf bad_packet; //type: empty
                    YLeaf virtual_bad_packet; //type: empty
                    YLeaf virtual_config_error; //type: empty



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


                    YLeaf restart_virtual_helper; //type: empty
                    YLeaf nssa_translator; //type: empty
                    YLeaf interface; //type: empty
                    YLeaf restart; //type: empty
                    YLeaf neighbor; //type: empty
                    YLeaf virtual_interface; //type: empty
                    YLeaf restart_helper; //type: empty
                    YLeaf virtual_neighbor; //type: empty



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


                YLeaf session_up; //type: empty
                YLeaf init_session_threshold_exceeded; //type: empty
                YLeaf session_down; //type: empty



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


                YLeaf up; //type: empty
                YLeaf down; //type: empty



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


                YLeaf cisco; //type: empty
                YLeaf up; //type: empty
                YLeaf reoptimize; //type: empty
                YLeaf reroute; //type: empty
                YLeaf down; //type: empty

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


                    YLeaf preempt; //type: empty
                    YLeaf insufficient_bandwidth; //type: empty
                    YLeaf re_route_pending_clear; //type: empty
                    YLeaf bringup_fail; //type: empty
                    YLeaf re_route_pending; //type: empty



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


                YLeaf unprotected; //type: empty
                YLeaf enable; //type: empty
                YLeaf protected_; //type: empty



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


                YLeaf enable; //type: empty



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


                YLeaf enable; //type: empty



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


                YLeaf enable; //type: empty



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


                YLeaf switchover; //type: empty
                YLeaf oper_status; //type: empty



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


                YLeaf enable; //type: empty



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


                YLeaf enable; //type: empty



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


                YLeaf enable; //type: empty



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


            YLeaf buffer_size; //type: uint32

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


                    YLeaf name; //type: string

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


                        YLeaf timeout; //type: uint32

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


                                YLeaf oid; //type: string
                                YLeaf created; //type: empty

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


                                        YLeaf oid; //type: string

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


                                            YLeaf value_; //type: string
                                            YLeaf index_; //type: string



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


                                YLeaf oid; //type: string
                                YLeaf created; //type: empty

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


                                        YLeaf oid; //type: string

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


                                            YLeaf value_; //type: string
                                            YLeaf index_; //type: string



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


                        YLeaf all; //type: empty

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


                                YLeaf ip_address; //type: string
                                YLeaf port; //type: uint16



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


                    YLeaf name; //type: string

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


                            YLeaf rulename; //type: string



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


                        YLeaf all; //type: empty

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


                                YLeaf ip_address; //type: string
                                YLeaf port; //type: uint16



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


            YLeaf memory; //type: uint32

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


                    YLeaf schema_name; //type: string
                    YLeaf type; //type: empty
                    YLeaf schema_object_list; //type: string
                    YLeaf poll_interval; //type: uint32

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


                        YLeaf type; //type: SnmpBulkstatSchemaEnum
                        YLeaf instance; //type: string
                        YLeaf start; //type: string
                        YLeaf end; //type: string
                        YLeaf max; //type: int32
                        YLeaf sub_interface; //type: boolean



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


                    YLeaf object_list_name; //type: string
                    YLeaf type; //type: empty

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


                            YLeaf oid; //type: string



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


                    YLeaf transfer_name; //type: string
                    YLeaf secondary; //type: string
                    YLeaf type; //type: empty
                    YLeaf buffer_size; //type: uint32
                    YLeaf retain; //type: uint32
                    YLeaf format; //type: SnmpBulkstatFileFormatEnum
                    YLeaf retry; //type: uint32
                    YLeaf enable; //type: empty
                    YLeaf primary; //type: string
                    YLeaf interval; //type: int32

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


                            YLeaf schema_name; //type: string



                    }; // Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema


                        std::vector<std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema> > transfer_schema;


                }; // Snmp::BulkStats::Transfers::Transfer::TransferSchemas


                    std::unique_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers::Transfer::TransferSchemas> transfer_schemas;


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


                YLeaf community_name; //type: string
                YLeaf context; //type: string
                YLeaf security; //type: string
                YLeaf target_list; //type: string



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


            YLeaf drop_time; //type: uint32
            YLeaf throttle_rate; //type: uint32



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


            YLeaf duplicates; //type: uint32
            YLeaf in_qdrop; //type: uint32
            YLeaf subagent; //type: uint32
            YLeaf pdu_stats; //type: uint32



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


                YLeaf user_name; //type: string
                YLeaf group_name; //type: string
                YLeaf version; //type: UserSnmpVersionEnum
                YLeaf authentication_password_configured; //type: empty
                YLeaf algorithm; //type: SnmpHashAlgorithmEnum
                YLeaf authentication_password; //type: string
                YLeaf privacy_password_configured; //type: empty
                YLeaf priv_algorithm; //type: SnmpPrivAlgorithmEnum
                YLeaf privacy_password; //type: string
                YLeaf v4acl_type; //type: SnmpaclEnum
                YLeaf v4_access_list; //type: string
                YLeaf v6acl_type; //type: SnmpaclEnum
                YLeaf v6_access_list; //type: string
                YLeaf owner; //type: SnmpOwnerAccessEnum
                YLeaf remote_address; //type: string
                YLeaf port; //type: uint16



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


                YLeaf name; //type: string

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


                        YLeaf ip_address; //type: string

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


                                YLeaf community_name; //type: string
                                YLeaf port; //type: uint16
                                YLeaf version; //type: string
                                YLeaf security_level; //type: SnmpSecurityModelEnum
                                YLeaf basic_trap_types; //type: int32
                                YLeaf advanced_trap_types1; //type: int32
                                YLeaf advanced_trap_types2; //type: int32



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


                                    YLeaf community_name; //type: string
                                    YLeaf port; //type: uint16
                                    YLeaf version; //type: string
                                    YLeaf security_level; //type: SnmpSecurityModelEnum
                                    YLeaf basic_trap_types; //type: int32
                                    YLeaf advanced_trap_types1; //type: int32
                                    YLeaf advanced_trap_types2; //type: int32



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


                                    YLeaf community_name; //type: string
                                    YLeaf port; //type: uint16
                                    YLeaf version; //type: string
                                    YLeaf security_level; //type: SnmpSecurityModelEnum
                                    YLeaf basic_trap_types; //type: int32
                                    YLeaf advanced_trap_types1; //type: int32
                                    YLeaf advanced_trap_types2; //type: int32



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


                                YLeaf community_name; //type: string
                                YLeaf port; //type: uint16
                                YLeaf version; //type: string
                                YLeaf security_level; //type: SnmpSecurityModelEnum
                                YLeaf basic_trap_types; //type: int32
                                YLeaf advanced_trap_types1; //type: int32
                                YLeaf advanced_trap_types2; //type: int32



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


                        YLeaf context_name; //type: string



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


                        YLeaf context_mapping_name; //type: string
                        YLeaf context; //type: SnmpContextEnum
                        YLeaf instance_name; //type: string
                        YLeaf vrf_name; //type: string
                        YLeaf topology_name; //type: string



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


                YLeaf name; //type: string
                YLeaf snmp_version; //type: GroupSnmpVersionEnum
                YLeaf security_model; //type: SnmpSecurityModelEnum
                YLeaf notify_view; //type: string
                YLeaf read_view; //type: string
                YLeaf write_view; //type: string
                YLeaf v4acl_type; //type: SnmpaclEnum
                YLeaf v4_access_list; //type: string
                YLeaf v6acl_type; //type: SnmpaclEnum
                YLeaf v6_access_list; //type: string
                YLeaf context_name; //type: string



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


                YLeaf ip_address; //type: string

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


                        YLeaf community_name; //type: string
                        YLeaf port; //type: uint16
                        YLeaf version; //type: string
                        YLeaf security_level; //type: SnmpSecurityModelEnum
                        YLeaf basic_trap_types; //type: int32
                        YLeaf advanced_trap_types1; //type: int32
                        YLeaf advanced_trap_types2; //type: int32



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


                            YLeaf community_name; //type: string
                            YLeaf port; //type: uint16
                            YLeaf version; //type: string
                            YLeaf security_level; //type: SnmpSecurityModelEnum
                            YLeaf basic_trap_types; //type: int32
                            YLeaf advanced_trap_types1; //type: int32
                            YLeaf advanced_trap_types2; //type: int32



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


                            YLeaf community_name; //type: string
                            YLeaf port; //type: uint16
                            YLeaf version; //type: string
                            YLeaf security_level; //type: SnmpSecurityModelEnum
                            YLeaf basic_trap_types; //type: int32
                            YLeaf advanced_trap_types1; //type: int32
                            YLeaf advanced_trap_types2; //type: int32



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


                        YLeaf community_name; //type: string
                        YLeaf port; //type: uint16
                        YLeaf version; //type: string
                        YLeaf security_level; //type: SnmpSecurityModelEnum
                        YLeaf basic_trap_types; //type: int32
                        YLeaf advanced_trap_types1; //type: int32
                        YLeaf advanced_trap_types2; //type: int32



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


                YLeaf context_name; //type: string



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


                YLeaf context_mapping_name; //type: string
                YLeaf context; //type: SnmpContextEnum
                YLeaf instance_name; //type: string
                YLeaf vrf_name; //type: string
                YLeaf topology_name; //type: string



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


        YLeaf sensor_mib_cache; //type: empty

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


            YLeaf cache_garbage_collect_timer; //type: uint32
            YLeaf cache_timer; //type: uint32



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


            YLeaf cache_timer; //type: uint32



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


            YLeaf cache_timer; //type: uint32



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


            YLeaf cache_timer; //type: uint32



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


            YLeaf cache_timer; //type: uint32



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


            YLeaf member_interface_stats; //type: empty
            YLeaf persist; //type: empty

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


                YLeaf enable; //type: empty
                YLeaf refresh_time; //type: uint32
                YLeaf service_policy_count; //type: uint32



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


            YLeaf entity_index_persistence; //type: empty



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


            YLeaf internal_cache; //type: uint32
            YLeaf interface_alias_long; //type: empty
            YLeaf ip_subscriber; //type: empty
            YLeaf interface_index_persistence; //type: empty
            YLeaf statistics_cache; //type: empty

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
                    YLeaf link_up_down; //type: boolean
                    YLeaf index_persistence; //type: boolean



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


                YLeaf link_ietf; //type: empty



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


                    YLeaf subset_id; //type: uint32

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


                        YLeaf enable; //type: boolean
                        YLeaf regular_expression; //type: string



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
        static const Enum::YLeaf none;
        static const Enum::YLeaf md5;
        static const Enum::YLeaf sha;

};

class SnmpAccessLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf read_only;
        static const Enum::YLeaf read_write;

};

class SnmpBulkstatSchemaEnum : public Enum
{
    public:
        static const Enum::YLeaf exact_interface;
        static const Enum::YLeaf exact_oid;
        static const Enum::YLeaf wild_interface;
        static const Enum::YLeaf wild_oid;
        static const Enum::YLeaf range_oid;
        static const Enum::YLeaf repeat_oid;

};

class GroupSnmpVersionEnum : public Enum
{
    public:
        static const Enum::YLeaf v1;
        static const Enum::YLeaf v2c;
        static const Enum::YLeaf v3;

};

class SnmpOwnerAccessEnum : public Enum
{
    public:
        static const Enum::YLeaf sdr_owner;
        static const Enum::YLeaf system_owner;

};

class SnmpBulkstatFileFormatEnum : public Enum
{
    public:
        static const Enum::YLeaf schema_ascii;
        static const Enum::YLeaf bulk_ascii;
        static const Enum::YLeaf bulk_binary;

};

class SnmpSecurityModelEnum : public Enum
{
    public:
        static const Enum::YLeaf no_authentication;
        static const Enum::YLeaf authentication;
        static const Enum::YLeaf privacy;

};

class SnmpTosEnum : public Enum
{
    public:
        static const Enum::YLeaf precedence;
        static const Enum::YLeaf dscp;

};

class SnmpaclEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class SnmpDscpValueEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf af11;
        static const Enum::YLeaf af12;
        static const Enum::YLeaf af13;
        static const Enum::YLeaf af21;
        static const Enum::YLeaf af22;
        static const Enum::YLeaf af23;
        static const Enum::YLeaf af31;
        static const Enum::YLeaf af32;
        static const Enum::YLeaf af33;
        static const Enum::YLeaf af41;
        static const Enum::YLeaf af42;
        static const Enum::YLeaf af43;
        static const Enum::YLeaf ef;
        static const Enum::YLeaf cs1;
        static const Enum::YLeaf cs2;
        static const Enum::YLeaf cs3;
        static const Enum::YLeaf cs4;
        static const Enum::YLeaf cs5;
        static const Enum::YLeaf cs6;
        static const Enum::YLeaf cs7;

};

class UserSnmpVersionEnum : public Enum
{
    public:
        static const Enum::YLeaf v1;
        static const Enum::YLeaf v2c;
        static const Enum::YLeaf v3;

};

class SnmpPrecedenceValue1Enum : public Enum
{
    public:
        static const Enum::YLeaf routine;
        static const Enum::YLeaf priority;
        static const Enum::YLeaf immediate;
        static const Enum::YLeaf flash;
        static const Enum::YLeaf flash_override;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf internet;
        static const Enum::YLeaf network;

};

class SnmpPrivAlgorithmEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf des;
        static const Enum::YLeaf Y_3des;
        static const Enum::YLeaf aes128;
        static const Enum::YLeaf aes192;
        static const Enum::YLeaf aes256;

};

class SnmpMibViewInclusionEnum : public Enum
{
    public:
        static const Enum::YLeaf included;
        static const Enum::YLeaf excluded;

};

class SnmpContextEnum : public Enum
{
    public:
        static const Enum::YLeaf vrf;
        static const Enum::YLeaf bridge;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf ospfv3;

};


}
}

#endif /* _CISCO_IOS_XR_SNMP_AGENT_CFG_ */

